#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <mach/mach.h>
#import <mach-o/dyld.h>
#import <mach/mach_traps.h>

// Global variables
bool LockStatus = false;
bool SpeedPlayer = false;

// ASLR yoxlaması
bool hasASLR() {
    const struct mach_header *mach = _dyld_get_image_header(0);
    return (mach->flags & MH_PIE) ? TRUE : FALSE;
}

long long get_slide() {
    return _dyld_get_image_vmaddr_slide(0);
}

long long calculateAddress(long long offset) {
    if (hasASLR()) {
        return (get_slide() + offset);
    }
    return offset;
}

bool getType(unsigned int data) {
    int a = data & 0xffff8000;
    int b = a + 0x00008000;
    int c = b & 0xffff7fff;
    return c;
}

bool vm_writeData(long long offset, unsigned int data) {
    kern_return_t err;
    mach_port_t port = mach_task_self();
    long long address = calculateAddress(offset);

    err = vm_protect(port, (vm_address_t)address, sizeof(data), NO, VM_PROT_READ | VM_PROT_WRITE | VM_PROT_COPY);
    if (err != KERN_SUCCESS) return FALSE;

    if (getType(data)) {
        data = CFSwapInt32(data);
        err = vm_write(port, (vm_address_t)address, (vm_offset_t)&data, sizeof(data));
    } else {
        data = (unsigned short)data;
        data = CFSwapInt16(data);
        err = vm_write(port, (vm_address_t)address, (vm_offset_t)&data, sizeof(data));
    }
    
    if (err != KERN_SUCCESS) return FALSE;
    
    err = vm_protect(port, (vm_address_t)address, sizeof(data), NO, VM_PROT_READ | VM_PROT_EXECUTE);
    return TRUE;
}

void setLockStatus(bool state) {
    LockStatus = state;
    if (LockStatus) {
        vm_writeData(0x102CA170C, 0x1F2003D5);
        NSLog(@"[M7MD] LockStatus enabled");
    }
}

void setSpeedPlayer(bool state) {
    SpeedPlayer = state;
    if (SpeedPlayer) {
        vm_writeData(0x102C10D84, 0x0810281E);
        NSLog(@"[M7MD] SpeedPlayer enabled");
    }
}

// UI Hook və ya Controller əlavəsi
%ctor {
    NSLog(@"[M7MD] Tweak.mm loaded successfully!");
}
