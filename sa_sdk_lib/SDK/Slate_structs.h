#pragma once

// Name: SanAndreas, Version: 1.0.0


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

// Enum Slate.EVirtualKeyboardDismissAction
enum class Slate_EVirtualKeyboardDismissAction : uint8_t
{
	EVirtualKeyboardDismissAction__TextChangeOnDismiss = 0,
	EVirtualKeyboardDismissAction__TextCommitOnAccept = 1,
	EVirtualKeyboardDismissAction__TextCommitOnDismiss = 2,
	EVirtualKeyboardDismissAction__EVirtualKeyboardDismissAction_MAX = 3,

};

// Enum Slate.EVirtualKeyboardTrigger
enum class Slate_EVirtualKeyboardTrigger : uint8_t
{
	EVirtualKeyboardTrigger__OnFocusByPointer = 0,
	EVirtualKeyboardTrigger__OnAllFocusEvents = 1,
	EVirtualKeyboardTrigger__EVirtualKeyboardTrigger_MAX = 2,

};

// Enum Slate.ETableViewMode
enum class Slate_ETableViewMode : uint8_t
{
	ETableViewMode__List           = 0,
	ETableViewMode__Tile           = 1,
	ETableViewMode__Tree           = 2,
	ETableViewMode__ETableViewMode_MAX = 3,

};

// Enum Slate.ESelectionMode
enum class Slate_ESelectionMode : uint8_t
{
	ESelectionMode__None           = 0,
	ESelectionMode__Single         = 1,
	ESelectionMode__SingleToggle   = 2,
	ESelectionMode__Multi          = 3,
	ESelectionMode__ESelectionMode_MAX = 4,

};

// Enum Slate.EMultiBlockType
enum class Slate_EMultiBlockType : uint8_t
{
	EMultiBlockType__None          = 0,
	EMultiBlockType__ButtonRow     = 1,
	EMultiBlockType__EditableText  = 2,
	EMultiBlockType__Heading       = 3,
	EMultiBlockType__MenuEntry     = 4,
	EMultiBlockType__Separator     = 5,
	EMultiBlockType__ToolBarButton = 6,
	EMultiBlockType__ToolBarComboButton = 7,
	EMultiBlockType__Widget        = 8,
	EMultiBlockType__EMultiBlockType_MAX = 9,

};

// Enum Slate.EMultiBoxType
enum class Slate_EMultiBoxType : uint8_t
{
	EMultiBoxType__MenuBar         = 0,
	EMultiBoxType__ToolBar         = 1,
	EMultiBoxType__VerticalToolBar = 2,
	EMultiBoxType__UniformToolBar  = 3,
	EMultiBoxType__Menu            = 4,
	EMultiBoxType__ButtonRow       = 5,
	EMultiBoxType__EMultiBoxType_MAX = 6,

};

// Enum Slate.EProgressBarFillType
enum class Slate_EProgressBarFillType : uint8_t
{
	EProgressBarFillType__LeftToRight = 0,
	EProgressBarFillType__RightToLeft = 1,
	EProgressBarFillType__FillFromCenter = 2,
	EProgressBarFillType__TopToBottom = 3,
	EProgressBarFillType__BottomToTop = 4,
	EProgressBarFillType__EProgressBarFillType_MAX = 5,

};

// Enum Slate.EStretch
enum class Slate_EStretch : uint8_t
{
	EStretch__None                 = 0,
	EStretch__Fill                 = 1,
	EStretch__ScaleToFit           = 2,
	EStretch__ScaleToFitX          = 3,
	EStretch__ScaleToFitY          = 4,
	EStretch__ScaleToFill          = 5,
	EStretch__ScaleBySafeZone      = 6,
	EStretch__UserSpecified        = 7,
	EStretch__EStretch_MAX         = 8,

};

// Enum Slate.EStretchDirection
enum class Slate_EStretchDirection : uint8_t
{
	EStretchDirection__Both        = 0,
	EStretchDirection__DownOnly    = 1,
	EStretchDirection__UpOnly      = 2,
	EStretchDirection__EStretchDirection_MAX = 3,

};

// Enum Slate.EScrollWhenFocusChanges
enum class Slate_EScrollWhenFocusChanges : uint8_t
{
	EScrollWhenFocusChanges__NoScroll = 0,
	EScrollWhenFocusChanges__InstantScroll = 1,
	EScrollWhenFocusChanges__AnimatedScroll = 2,
	EScrollWhenFocusChanges__EScrollWhenFocusChanges_MAX = 3,

};

// Enum Slate.EDescendantScrollDestination
enum class Slate_EDescendantScrollDestination : uint8_t
{
	EDescendantScrollDestination__IntoView = 0,
	EDescendantScrollDestination__TopOrLeft = 1,
	EDescendantScrollDestination__Center = 2,
	EDescendantScrollDestination__EDescendantScrollDestination_MAX = 3,

};

// Enum Slate.EListItemAlignment
enum class Slate_EListItemAlignment : uint8_t
{
	EListItemAlignment__EvenlyDistributed = 0,
	EListItemAlignment__EvenlySize = 1,
	EListItemAlignment__EvenlyWide = 2,
	EListItemAlignment__LeftAligned = 3,
	EListItemAlignment__RightAligned = 4,
	EListItemAlignment__CenterAligned = 5,
	EListItemAlignment__Fill       = 6,
	EListItemAlignment__EListItemAlignment_MAX = 7,

};

// Enum Slate.ETextFlowDirection
enum class Slate_ETextFlowDirection : uint8_t
{
	ETextFlowDirection__Auto       = 0,
	ETextFlowDirection__LeftToRight = 1,
	ETextFlowDirection__RightToLeft = 2,
	ETextFlowDirection__ETextFlowDirection_MAX = 3,

};

// Enum Slate.ETextWrappingPolicy
enum class Slate_ETextWrappingPolicy : uint8_t
{
	ETextWrappingPolicy__DefaultWrapping = 0,
	ETextWrappingPolicy__AllowPerCharacterWrapping = 1,
	ETextWrappingPolicy__ETextWrappingPolicy_MAX = 2,

};

// Enum Slate.ETextTransformPolicy
enum class Slate_ETextTransformPolicy : uint8_t
{
	ETextTransformPolicy__None     = 0,
	ETextTransformPolicy__ToLower  = 1,
	ETextTransformPolicy__ToUpper  = 2,
	ETextTransformPolicy__ETextTransformPolicy_MAX = 3,

};

// Enum Slate.ETextJustify
enum class Slate_ETextJustify : uint8_t
{
	ETextJustify__Left             = 0,
	ETextJustify__Center           = 1,
	ETextJustify__Right            = 2,
	ETextJustify__ETextJustify_MAX = 3,

};

// Enum Slate.ECustomizedToolMenuVisibility
enum class Slate_ECustomizedToolMenuVisibility : uint8_t
{
	ECustomizedToolMenuVisibility__None = 0,
	ECustomizedToolMenuVisibility__Visible = 1,
	ECustomizedToolMenuVisibility__Hidden = 2,
	ECustomizedToolMenuVisibility__ECustomizedToolMenuVisibility_MAX = 3,

};

// Enum Slate.EMultipleKeyBindingIndex
enum class Slate_EMultipleKeyBindingIndex : uint8_t
{
	EMultipleKeyBindingIndex__Primary = 0,
	EMultipleKeyBindingIndex__Secondary = 1,
	EMultipleKeyBindingIndex__NumChords = 2,
	EMultipleKeyBindingIndex__EMultipleKeyBindingIndex_MAX = 3,

};

// Enum Slate.EUserInterfaceActionType
enum class Slate_EUserInterfaceActionType : uint8_t
{
	EUserInterfaceActionType__None = 0,
	EUserInterfaceActionType__Button = 1,
	EUserInterfaceActionType__ToggleButton = 2,
	EUserInterfaceActionType__RadioButton = 3,
	EUserInterfaceActionType__Check = 4,
	EUserInterfaceActionType__CollapsedButton = 5,
	EUserInterfaceActionType__EUserInterfaceActionType_MAX = 6,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Slate.VirtualKeyboardOptions
// 0x0001
struct FVirtualKeyboardOptions
{
	bool                                               bEnableAutocorrect;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Slate.InputChord
// 0x0020
struct FInputChord
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShift : 1;                                                // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCtrl : 1;                                                 // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAlt : 1;                                                  // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCmd : 1;                                                  // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L05Z[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Slate.Anchors
// 0x0010
struct FAnchors
{
	struct FVector2D                                   Minimum;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Maximum;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Slate.CustomizedToolMenuEntry
// 0x0004
struct FCustomizedToolMenuEntry
{
	Slate_ECustomizedToolMenuVisibility                Visibility;                                                // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FJ5W[0x3];                                     // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};

// ScriptStruct Slate.CustomizedToolMenuSection
// 0x0004
struct FCustomizedToolMenuSection
{
	Slate_ECustomizedToolMenuVisibility                Visibility;                                                // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H3UA[0x3];                                     // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};

// ScriptStruct Slate.CustomizedToolMenuNameArray
// 0x0010
struct FCustomizedToolMenuNameArray
{
	TArray<struct FName>                               Names;                                                     // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Slate.CustomizedToolMenu
// 0x01E8
struct FCustomizedToolMenu
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FCustomizedToolMenuEntry> Entries;                                                   // 0x0008(0x0050) (NativeAccessSpecifierPublic)
	TMap<struct FName, struct FCustomizedToolMenuSection> Sections;                                                  // 0x0058(0x0050) (NativeAccessSpecifierPublic)
	TMap<struct FName, struct FCustomizedToolMenuNameArray> EntryOrder;                                                // 0x00A8(0x0050) (NativeAccessSpecifierPublic)
	TArray<struct FName>                               SectionOrder;                                              // 0x00F8(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HSNS[0xE0];                                    // 0x0108(0x00E0) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
