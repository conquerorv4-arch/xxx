#import "OverlayView.h"
#import "../Image/font.h"
#import "../Image/Icon.h"
#import "../Image/Iconcpp.h"
#import <objc/runtime.h>

// UNRIVALED menyusunun basliq fayli
#include "../generated/generated_ui.hpp"

@implementation OverlayView
- (instancetype)initWithFrame:(CGRect)frame :(ModuleControl*)control :(mi*)menu {
    self.moduleControl = control;    
    self.mi = menu;

    if (self = [super initWithFrame:frame]) {
        self.backgroundColor = [UIColor clearColor];
        self.preferredFramesPerSecond = 120;

        self.device = MTLCreateSystemDefaultDevice();
        if (!self.device) {
            return NULL;
        }
        self.delegate = self;
        
        self.commandQueue = [self.device newCommandQueue];
        self.loader = [[MTKTextureLoader alloc] initWithDevice: self.device];

        IMGUI_CHECKVERSION();
        ImGui::CreateContext();
        ImGuiIO& io = ImGui::GetIO(); (void)io;
        
        io.DisplaySize.x =  self.frame.size.width * UIScreen.mainScreen.nativeScale;
        io.DisplaySize.y =  self.frame.size.height * UIScreen.mainScreen.nativeScale;
        
        ImGui::StyleColorsDark(); 

        // Setup Renderer backend
        ImGui_ImplMetal_Init(self.device);
        
        // UNRIVALED sistemini basladiriq
        ksd::Initialize(2.0f); // 2.0f = DPI scale
        lazyui::app.device = self.device;
        lazyui::app.device_context = self.commandQueue;
        lazyui::app.swap_chain = self;

        [self.mi setOverlayView:self];
    }
    return self;
}

+ (void)load
{
dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(3* NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
    //这里是弹窗
   });
}

- (bool)ishowM{
    return self.moduleControl->menuStatus;
}

- (void)drawInMTKView:(MTKView *)view {
    
        view.sampleCount = 4;
        view.clearColor = MTLClearColorMake(0.0f, 0.0f, 0.0f, 0.0f);
        struct timespec current_timespec;
        static double g_Time = 0.0;
        clock_gettime(CLOCK_MONOTONIC, &current_timespec);
        double current_time = (double)(current_timespec.tv_sec) + (current_timespec.tv_nsec / 1000000000.0);
        ImGui::GetIO().DeltaTime = g_Time > 0.0 ? (float)(current_time - g_Time) : (float)(1.0f / 120.0f);
        g_Time = current_time;

    id<MTLCommandBuffer> commandBuffer = [self.commandQueue commandBuffer];
    
    MTLRenderPassDescriptor *renderPassDescriptor = view.currentRenderPassDescriptor;
    if (renderPassDescriptor != nil) {
        ImGui_ImplMetal_NewFrame(renderPassDescriptor);
        ImGui::NewFrame();
        
        if(self.moduleControl->menuStatus){
            // UNRIVALED menyusunu cagiririq
            figma_generated::render();
        }
   
        
        ImGui::Render();
        ImDrawData *drawData = ImGui::GetDrawData();
        id <MTLRenderCommandEncoder> renderEncoder = [commandBuffer renderCommandEncoderWithDescriptor:renderPassDescriptor];
        [renderEncoder pushDebugGroup:@"SwiftGUI"];
        ImGui_ImplMetal_RenderDrawData(drawData, commandBuffer, renderEncoder);
        
        [renderEncoder popDebugGroup];
        [renderEncoder endEncoding];
        [commandBuffer presentDrawable:view.currentDrawable];
    }
    [commandBuffer commit];
}

-(void)mtkView:(MTKView*)view drawableSizeWillChange:(CGSize)size {
}

- (UIView *)hitTest:(CGPoint)point withEvent:(UIEvent *)event {
    UIView *hitView = [super hitTest:point withEvent:event];
    
    if (hitView == self && !self.moduleControl->menuStatus) {
        return nil; 
    }
    return hitView;
}

-(void)updateIOWithTouchEvent:(UIEvent *)event {
UITouch *anyTouch = event.allTouches.anyObject;
CGPoint touchLocation = [anyTouch locationInView:self];
ImGuiIO &io = ImGui::GetIO();
io.AddMousePosEvent(touchLocation.x * UIScreen.mainScreen.nativeScale, touchLocation.y * UIScreen.mainScreen.nativeScale);

BOOL hasActiveTouch = NO;
for (UITouch *touch in event.allTouches) {
if (touch.phase != UITouchPhaseEnded && touch.phase != UITouchPhaseCancelled) {
hasActiveTouch = YES;
break;
}
}
io.AddMouseButtonEvent(0, hasActiveTouch);
}

-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
[self updateIOWithTouchEvent:event];
}

-(void)touchesMoved:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
[self updateIOWithTouchEvent:event];
}

-(void)touchesCancelled:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
[self updateIOWithTouchEvent:event];
}

-(void)touchesEnded:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
[self updateIOWithTouchEvent:event];
}

@end
