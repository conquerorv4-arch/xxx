#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:34:51 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CommonUIWidget.CommonInputBox
// 0x0000 (0x02C8 - 0x02C8)
class UCommonInputBox : public ULuaUserWidget
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CommonUIWidget.CommonInputBox");
		return pStaticClass;
	}

};


// Class CommonUIWidget.CommonPopupBox
// 0x0000 (0x02C8 - 0x02C8)
class UCommonPopupBox : public ULuaUserWidget
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CommonUIWidget.CommonPopupBox");
		return pStaticClass;
	}

};


// Class CommonUIWidget.CommonSearchBox
// 0x0000 (0x02C8 - 0x02C8)
class UCommonSearchBox : public ULuaUserWidget
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CommonUIWidget.CommonSearchBox");
		return pStaticClass;
	}

};


}

