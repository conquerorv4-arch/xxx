#pragma once

// WE SUPPORT FUN  (4.6.0) SDKGen by @O_N_E_B_I_E_C_E | @onebiecerr 
// Send Message Me For SDKGen Tool  
// Generate on Tue Sep  8 20:34:51 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum EZUMG.EEzItemState
enum class EEzItemState : uint8_t
{
	EEzItemState__Normal           = 0,
	EEzItemState__Selected         = 1,
	EEzItemState__Disabled         = 2,
	EEzItemState__EEzItemState_MAX = 3
};


// Enum EZUMG.ESectorSizeRule
enum class ESectorSizeRule : uint8_t
{
	ESectorSizeRule__Fixed         = 0,
	ESectorSizeRule__Fill          = 1,
	ESectorSizeRule__ESectorSizeRule_MAX = 2
};


// Enum EZUMG.ERadialArrangement
enum class ERadialArrangement : uint8_t
{
	ERadialArrangement__Default    = 0,
	ERadialArrangement__AlignFirst = 1,
	ERadialArrangement__AlignCenter = 2,
	ERadialArrangement__ERadialArrangement_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EZUMG.EnhancedButtonConfig
// 0x0010
struct FEnhancedButtonConfig
{
	float                                              TapThreshold;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LongPressThreshold;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DragThreshold;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwipeMinDistance;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EZUMG.InputActionEvent
// 0x0018
struct FInputActionEvent
{
	int                                                PointerIndex;                                             // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HeldDuration;                                             // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Position;                                                 // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   Delta;                                                    // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

}

