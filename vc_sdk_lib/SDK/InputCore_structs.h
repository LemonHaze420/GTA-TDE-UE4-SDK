#pragma once

// Name: ViceCity, Version: 1.0.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum InputCore.ETouchType
enum class InputCore_ETouchType : uint8_t
{
	ETouchType__Began              = 0,
	ETouchType__Moved              = 1,
	ETouchType__Stationary         = 2,
	ETouchType__ForceChanged       = 3,
	ETouchType__FirstMove          = 4,
	ETouchType__Ended              = 5,
	ETouchType__NumTypes           = 6,
	ETouchType__ETouchType_MAX     = 7,

};

// Enum InputCore.EConsoleForGamepadLabels
enum class InputCore_EConsoleForGamepadLabels : uint8_t
{
	EConsoleForGamepadLabels__None = 0,
	EConsoleForGamepadLabels__XBoxOne = 1,
	EConsoleForGamepadLabels__PS4  = 2,
	EConsoleForGamepadLabels__EConsoleForGamepadLabels_MAX = 3,

};

// Enum InputCore.ETouchIndex
enum class InputCore_ETouchIndex : uint8_t
{
	ETouchIndex__Touch1            = 0,
	ETouchIndex__Touch2            = 1,
	ETouchIndex__Touch3            = 2,
	ETouchIndex__Touch4            = 3,
	ETouchIndex__Touch5            = 4,
	ETouchIndex__Touch6            = 5,
	ETouchIndex__Touch7            = 6,
	ETouchIndex__Touch8            = 7,
	ETouchIndex__Touch9            = 8,
	ETouchIndex__Touch10           = 9,
	ETouchIndex__CursorPointerIndex = 10,
	ETouchIndex__MAX_TOUCHES       = 11,
	ETouchIndex__ETouchIndex_MAX   = 12,

};

// Enum InputCore.EControllerHand
enum class InputCore_EControllerHand : uint8_t
{
	EControllerHand__Left          = 0,
	EControllerHand__Right         = 1,
	EControllerHand__AnyHand       = 2,
	EControllerHand__Pad           = 3,
	EControllerHand__ExternalCamera = 4,
	EControllerHand__Gun           = 5,
	EControllerHand__Special       = 6,
	EControllerHand__Special01     = 7,
	EControllerHand__Special02     = 8,
	EControllerHand__Special03     = 9,
	EControllerHand__Special04     = 10,
	EControllerHand__Special05     = 11,
	EControllerHand__Special06     = 12,
	EControllerHand__Special07     = 13,
	EControllerHand__Special08     = 14,
	EControllerHand__Special09     = 15,
	EControllerHand__Special10     = 16,
	EControllerHand__ControllerHand_Count = 17,
	EControllerHand__EControllerHand_MAX = 18,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct InputCore.Key
// 0x0018
struct FKey
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EJN9[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
