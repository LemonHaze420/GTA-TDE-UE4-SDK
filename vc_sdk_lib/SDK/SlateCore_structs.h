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

// Enum SlateCore.EWidgetClipping
enum class SlateCore_EWidgetClipping : uint8_t
{
	EWidgetClipping__Inherit       = 0,
	EWidgetClipping__ClipToBounds  = 1,
	EWidgetClipping__ClipToBoundsWithoutIntersecting = 2,
	EWidgetClipping__ClipToBoundsAlways = 3,
	EWidgetClipping__OnDemand      = 4,
	EWidgetClipping__EWidgetClipping_MAX = 5,

};

// Enum SlateCore.EFontLayoutMethod
enum class SlateCore_EFontLayoutMethod : uint8_t
{
	EFontLayoutMethod__Metrics     = 0,
	EFontLayoutMethod__BoundingBox = 1,
	EFontLayoutMethod__EFontLayoutMethod_MAX = 2,

};

// Enum SlateCore.EFontLoadingPolicy
enum class SlateCore_EFontLoadingPolicy : uint8_t
{
	EFontLoadingPolicy__LazyLoad   = 0,
	EFontLoadingPolicy__Stream     = 1,
	EFontLoadingPolicy__Inline     = 2,
	EFontLoadingPolicy__EFontLoadingPolicy_MAX = 3,

};

// Enum SlateCore.EFontHinting
enum class SlateCore_EFontHinting : uint8_t
{
	EFontHinting__Default          = 0,
	EFontHinting__Auto             = 1,
	EFontHinting__AutoLight        = 2,
	EFontHinting__Monochrome       = 3,
	EFontHinting__None             = 4,
	EFontHinting__EFontHinting_MAX = 5,

};

// Enum SlateCore.EFocusCause
enum class SlateCore_EFocusCause : uint8_t
{
	EFocusCause__Mouse             = 0,
	EFocusCause__Navigation        = 1,
	EFocusCause__SetDirectly       = 2,
	EFocusCause__Cleared           = 3,
	EFocusCause__OtherWidgetLostFocus = 4,
	EFocusCause__WindowActivate    = 5,
	EFocusCause__EFocusCause_MAX   = 6,

};

// Enum SlateCore.EFlowDirectionPreference
enum class SlateCore_EFlowDirectionPreference : uint8_t
{
	EFlowDirectionPreference__Inherit = 0,
	EFlowDirectionPreference__Culture = 1,
	EFlowDirectionPreference__LeftToRight = 2,
	EFlowDirectionPreference__RightToLeft = 3,
	EFlowDirectionPreference__EFlowDirectionPreference_MAX = 4,

};

// Enum SlateCore.ETextShapingMethod
enum class SlateCore_ETextShapingMethod : uint8_t
{
	ETextShapingMethod__Auto       = 0,
	ETextShapingMethod__KerningOnly = 1,
	ETextShapingMethod__FullShaping = 2,
	ETextShapingMethod__ETextShapingMethod_MAX = 3,

};

// Enum SlateCore.EUINavigationRule
enum class SlateCore_EUINavigationRule : uint8_t
{
	EUINavigationRule__Escape      = 0,
	EUINavigationRule__Explicit    = 1,
	EUINavigationRule__Wrap        = 2,
	EUINavigationRule__Stop        = 3,
	EUINavigationRule__Custom      = 4,
	EUINavigationRule__CustomBoundary = 5,
	EUINavigationRule__Invalid     = 6,
	EUINavigationRule__EUINavigationRule_MAX = 7,

};

// Enum SlateCore.EColorVisionDeficiency
enum class SlateCore_EColorVisionDeficiency : uint8_t
{
	EColorVisionDeficiency__NormalVision = 0,
	EColorVisionDeficiency__Deuteranope = 1,
	EColorVisionDeficiency__Protanope = 2,
	EColorVisionDeficiency__Tritanope = 3,
	EColorVisionDeficiency__EColorVisionDeficiency_MAX = 4,

};

// Enum SlateCore.ESlateBrushImageType
enum class SlateCore_ESlateBrushImageType : uint8_t
{
	ESlateBrushImageType__NoImage  = 0,
	ESlateBrushImageType__FullColor = 1,
	ESlateBrushImageType__Linear   = 2,
	ESlateBrushImageType__ESlateBrushImageType_MAX = 3,

};

// Enum SlateCore.ESlateBrushMirrorType
enum class SlateCore_ESlateBrushMirrorType : uint8_t
{
	ESlateBrushMirrorType__NoMirror = 0,
	ESlateBrushMirrorType__Horizontal = 1,
	ESlateBrushMirrorType__Vertical = 2,
	ESlateBrushMirrorType__Both    = 3,
	ESlateBrushMirrorType__ESlateBrushMirrorType_MAX = 4,

};

// Enum SlateCore.ESlateBrushTileType
enum class SlateCore_ESlateBrushTileType : uint8_t
{
	ESlateBrushTileType__NoTile    = 0,
	ESlateBrushTileType__Horizontal = 1,
	ESlateBrushTileType__Vertical  = 2,
	ESlateBrushTileType__Both      = 3,
	ESlateBrushTileType__ESlateBrushTileType_MAX = 4,

};

// Enum SlateCore.ESlateBrushDrawType
enum class SlateCore_ESlateBrushDrawType : uint8_t
{
	ESlateBrushDrawType__NoDrawType = 0,
	ESlateBrushDrawType__Box       = 1,
	ESlateBrushDrawType__Border    = 2,
	ESlateBrushDrawType__Image     = 3,
	ESlateBrushDrawType__ESlateBrushDrawType_MAX = 4,

};

// Enum SlateCore.ESlateColorStylingMode
enum class SlateCore_ESlateColorStylingMode : uint8_t
{
	ESlateColorStylingMode__UseColor_Specified = 0,
	ESlateColorStylingMode__UseColor_Specified_Link = 1,
	ESlateColorStylingMode__UseColor_Foreground = 2,
	ESlateColorStylingMode__UseColor_Foreground_Subdued = 3,
	ESlateColorStylingMode__UseColor_MAX = 4,

};

// Enum SlateCore.ESlateDebuggingFocusEvent
enum class SlateCore_ESlateDebuggingFocusEvent : uint8_t
{
	ESlateDebuggingFocusEvent__FocusChanging = 0,
	ESlateDebuggingFocusEvent__FocusLost = 1,
	ESlateDebuggingFocusEvent__FocusReceived = 2,
	ESlateDebuggingFocusEvent__MAX = 3,

};

// Enum SlateCore.ESlateDebuggingNavigationMethod
enum class SlateCore_ESlateDebuggingNavigationMethod : uint8_t
{
	ESlateDebuggingNavigationMethod__Unknown = 0,
	ESlateDebuggingNavigationMethod__Explicit = 1,
	ESlateDebuggingNavigationMethod__CustomDelegateBound = 2,
	ESlateDebuggingNavigationMethod__CustomDelegateUnbound = 3,
	ESlateDebuggingNavigationMethod__NextOrPrevious = 4,
	ESlateDebuggingNavigationMethod__HitTestGrid = 5,
	ESlateDebuggingNavigationMethod__ESlateDebuggingNavigationMethod_MAX = 6,

};

// Enum SlateCore.ESlateDebuggingStateChangeEvent
enum class SlateCore_ESlateDebuggingStateChangeEvent : uint8_t
{
	ESlateDebuggingStateChangeEvent__MouseCaptureGained = 0,
	ESlateDebuggingStateChangeEvent__MouseCaptureLost = 1,
	ESlateDebuggingStateChangeEvent__ESlateDebuggingStateChangeEvent_MAX = 2,

};

// Enum SlateCore.ESlateDebuggingInputEvent
enum class SlateCore_ESlateDebuggingInputEvent : uint8_t
{
	ESlateDebuggingInputEvent__MouseMove = 0,
	ESlateDebuggingInputEvent__MouseEnter = 1,
	ESlateDebuggingInputEvent__MouseLeave = 2,
	ESlateDebuggingInputEvent__PreviewMouseButtonDown = 3,
	ESlateDebuggingInputEvent__MouseButtonDown = 4,
	ESlateDebuggingInputEvent__MouseButtonUp = 5,
	ESlateDebuggingInputEvent__MouseButtonDoubleClick = 6,
	ESlateDebuggingInputEvent__MouseWheel = 7,
	ESlateDebuggingInputEvent__TouchStart = 8,
	ESlateDebuggingInputEvent__TouchEnd = 9,
	ESlateDebuggingInputEvent__TouchForceChanged = 10,
	ESlateDebuggingInputEvent__TouchFirstMove = 11,
	ESlateDebuggingInputEvent__TouchMoved = 12,
	ESlateDebuggingInputEvent__DragDetected = 13,
	ESlateDebuggingInputEvent__DragEnter = 14,
	ESlateDebuggingInputEvent__DragLeave = 15,
	ESlateDebuggingInputEvent__DragOver = 16,
	ESlateDebuggingInputEvent__DragDrop = 17,
	ESlateDebuggingInputEvent__DropMessage = 18,
	ESlateDebuggingInputEvent__PreviewKeyDown = 19,
	ESlateDebuggingInputEvent__KeyDown = 20,
	ESlateDebuggingInputEvent__KeyUp = 21,
	ESlateDebuggingInputEvent__KeyChar = 22,
	ESlateDebuggingInputEvent__AnalogInput = 23,
	ESlateDebuggingInputEvent__TouchGesture = 24,
	ESlateDebuggingInputEvent__MotionDetected = 25,
	ESlateDebuggingInputEvent__MAX = 26,

};

// Enum SlateCore.ESelectInfo
enum class SlateCore_ESelectInfo : uint8_t
{
	ESelectInfo__OnKeyPress        = 0,
	ESelectInfo__OnNavigation      = 1,
	ESelectInfo__OnMouseClick      = 2,
	ESelectInfo__Direct            = 3,
	ESelectInfo__ESelectInfo_MAX   = 4,

};

// Enum SlateCore.ETextCommit
enum class SlateCore_ETextCommit : uint8_t
{
	ETextCommit__Default           = 0,
	ETextCommit__OnEnter           = 1,
	ETextCommit__OnUserMovedFocus  = 2,
	ETextCommit__OnCleared         = 3,
	ETextCommit__ETextCommit_MAX   = 4,

};

// Enum SlateCore.EScrollDirection
enum class SlateCore_EScrollDirection : uint8_t
{
	Scroll_Down                    = 0,
	Scroll_Up                      = 1,
	Scroll_MAX                     = 2,

};

// Enum SlateCore.EOrientation
enum class SlateCore_EOrientation : uint8_t
{
	Orient_Horizontal              = 0,
	Orient_Vertical                = 1,
	Orient_MAX                     = 2,

};

// Enum SlateCore.EMenuPlacement
enum class SlateCore_EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor      = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox         = 3,
	MenuPlacement_ComboBoxRight    = 4,
	MenuPlacement_MenuRight        = 5,
	MenuPlacement_AboveAnchor      = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft         = 9,
	MenuPlacement_Center           = 10,
	MenuPlacement_RightLeftCenter  = 11,
	MenuPlacement_MatchBottomLeft  = 12,
	MenuPlacement_MAX              = 13,

};

// Enum SlateCore.EVerticalAlignment
enum class SlateCore_EVerticalAlignment : uint8_t
{
	VAlign_Fill                    = 0,
	VAlign_Top                     = 1,
	VAlign_Center                  = 2,
	VAlign_Bottom                  = 3,
	VAlign_MAX                     = 4,

};

// Enum SlateCore.EHorizontalAlignment
enum class SlateCore_EHorizontalAlignment : uint8_t
{
	HAlign_Fill                    = 0,
	HAlign_Left                    = 1,
	HAlign_Center                  = 2,
	HAlign_Right                   = 3,
	HAlign_MAX                     = 4,

};

// Enum SlateCore.ENavigationGenesis
enum class SlateCore_ENavigationGenesis : uint8_t
{
	ENavigationGenesis__Keyboard   = 0,
	ENavigationGenesis__Controller = 1,
	ENavigationGenesis__User       = 2,
	ENavigationGenesis__ENavigationGenesis_MAX = 3,

};

// Enum SlateCore.ENavigationSource
enum class SlateCore_ENavigationSource : uint8_t
{
	ENavigationSource__FocusedWidget = 0,
	ENavigationSource__WidgetUnderCursor = 1,
	ENavigationSource__ENavigationSource_MAX = 2,

};

// Enum SlateCore.EUINavigationAction
enum class SlateCore_EUINavigationAction : uint8_t
{
	EUINavigationAction__Accept    = 0,
	EUINavigationAction__Back      = 1,
	EUINavigationAction__Num       = 2,
	EUINavigationAction__Invalid   = 3,
	EUINavigationAction__EUINavigationAction_MAX = 4,

};

// Enum SlateCore.EUINavigation
enum class SlateCore_EUINavigation : uint8_t
{
	EUINavigation__Left            = 0,
	EUINavigation__Right           = 1,
	EUINavigation__Up              = 2,
	EUINavigation__Down            = 3,
	EUINavigation__Next            = 4,
	EUINavigation__Previous        = 5,
	EUINavigation__Num             = 6,
	EUINavigation__Invalid         = 7,
	EUINavigation__EUINavigation_MAX = 8,

};

// Enum SlateCore.EButtonPressMethod
enum class SlateCore_EButtonPressMethod : uint8_t
{
	EButtonPressMethod__DownAndUp  = 0,
	EButtonPressMethod__ButtonPress = 1,
	EButtonPressMethod__ButtonRelease = 2,
	EButtonPressMethod__EButtonPressMethod_MAX = 3,

};

// Enum SlateCore.EButtonTouchMethod
enum class SlateCore_EButtonTouchMethod : uint8_t
{
	EButtonTouchMethod__DownAndUp  = 0,
	EButtonTouchMethod__Down       = 1,
	EButtonTouchMethod__PreciseTap = 2,
	EButtonTouchMethod__EButtonTouchMethod_MAX = 3,

};

// Enum SlateCore.EButtonClickMethod
enum class SlateCore_EButtonClickMethod : uint8_t
{
	EButtonClickMethod__DownAndUp  = 0,
	EButtonClickMethod__MouseDown  = 1,
	EButtonClickMethod__MouseUp    = 2,
	EButtonClickMethod__PreciseClick = 3,
	EButtonClickMethod__EButtonClickMethod_MAX = 4,

};

// Enum SlateCore.ECheckBoxState
enum class SlateCore_ECheckBoxState : uint8_t
{
	ECheckBoxState__Unchecked      = 0,
	ECheckBoxState__Checked        = 1,
	ECheckBoxState__Undetermined   = 2,
	ECheckBoxState__ECheckBoxState_MAX = 3,

};

// Enum SlateCore.ESlateCheckBoxType
enum class SlateCore_ESlateCheckBoxType : uint8_t
{
	ESlateCheckBoxType__CheckBox   = 0,
	ESlateCheckBoxType__ToggleButton = 1,
	ESlateCheckBoxType__ESlateCheckBoxType_MAX = 2,

};

// Enum SlateCore.ESlateParentWindowSearchMethod
enum class SlateCore_ESlateParentWindowSearchMethod : uint8_t
{
	ESlateParentWindowSearchMethod__ActiveWindow = 0,
	ESlateParentWindowSearchMethod__MainWindow = 1,
	ESlateParentWindowSearchMethod__ESlateParentWindowSearchMethod_MAX = 2,

};

// Enum SlateCore.EConsumeMouseWheel
enum class SlateCore_EConsumeMouseWheel : uint8_t
{
	EConsumeMouseWheel__WhenScrollingPossible = 0,
	EConsumeMouseWheel__Always     = 1,
	EConsumeMouseWheel__Never      = 2,
	EConsumeMouseWheel__EConsumeMouseWheel_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SlateCore.Geometry
// 0x0038
struct FGeometry
{
	unsigned char                                      UnknownData_RGOS[0x38];                                    // 0x0000(0x0038) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.Margin
// 0x0010
struct FMargin
{
	float                                              Left;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Top;                                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Right;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bottom;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.SlateColor
// 0x0028
struct FSlateColor
{
	struct FLinearColor                                SpecifiedColor;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_ESlateColorStylingMode>      ColorUseRule;                                              // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UK3P[0x17];                                    // 0x0011(0x0017) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.SlateBrush
// 0x0088
struct FSlateBrush
{
	unsigned char                                      UnknownData_AP40[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   ImageSize;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     Margin;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateColor                                 TintColor;                                                 // 0x0020(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UObject*                                     ResourceObject;                                            // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       ResourceName;                                              // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FBox2D                                      UVRegion;                                                  // 0x0058(0x0014) (ZeroConstructor, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_ESlateBrushDrawType>         DrawAs;                                                    // 0x006C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ESlateBrushTileType>         Tiling;                                                    // 0x006D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ESlateBrushMirrorType>       Mirroring;                                                 // 0x006E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ESlateBrushImageType>        ImageType;                                                 // 0x006F(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CLGS[0x10];                                    // 0x0070(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bIsDynamicallyLoaded : 1;                                  // 0x0080(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bHasUObject : 1;                                           // 0x0080(0x0001) BIT_FIELD (Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GXLB[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.InputEvent
// 0x0018
struct FInputEvent
{
	unsigned char                                      UnknownData_X0VF[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.PointerEvent
// 0x0058 (0x0070 - 0x0018)
struct FPointerEvent : public FInputEvent
{
	unsigned char                                      UnknownData_1QFJ[0x58];                                    // 0x0018(0x0058) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.CharacterEvent
// 0x0008 (0x0020 - 0x0018)
struct FCharacterEvent : public FInputEvent
{
	unsigned char                                      UnknownData_KLHT[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.KeyEvent
// 0x0020 (0x0038 - 0x0018)
struct FKeyEvent : public FInputEvent
{
	unsigned char                                      UnknownData_08BO[0x20];                                    // 0x0018(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.NavigationEvent
// 0x0008 (0x0020 - 0x0018)
struct FNavigationEvent : public FInputEvent
{
	unsigned char                                      UnknownData_HOL2[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.AnalogInputEvent
// 0x0008 (0x0040 - 0x0038)
struct FAnalogInputEvent : public FKeyEvent
{
	unsigned char                                      UnknownData_C45H[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.FontOutlineSettings
// 0x0020
struct FFontOutlineSettings
{
	int                                                OutlineSize;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSeparateFillAlpha;                                        // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplyOutlineToDropShadows;                                // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H1J2[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     OutlineMaterial;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                OutlineColor;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.SlateFontInfo
// 0x0058
struct FSlateFontInfo
{
	class UObject*                                     FontObject;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     FontMaterial;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFontOutlineSettings                        OutlineSettings;                                           // 0x0010(0x0020) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_COJ7[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       TypefaceFontName;                                          // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Size;                                                      // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LetterSpacing;                                             // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0TC6[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.SlateWidgetStyle
// 0x0008
struct FSlateWidgetStyle
{
	unsigned char                                      UnknownData_V7LP[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.TableRowStyle
// 0x07C0 (0x07C8 - 0x0008)
struct FTableRowStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 SelectorFocusedBrush;                                      // 0x0008(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ActiveHoveredBrush;                                        // 0x0090(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ActiveBrush;                                               // 0x0118(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 InactiveHoveredBrush;                                      // 0x01A0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 InactiveBrush;                                             // 0x0228(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 EvenRowBackgroundHoveredBrush;                             // 0x02B0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 EvenRowBackgroundBrush;                                    // 0x0338(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 OddRowBackgroundHoveredBrush;                              // 0x03C0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 OddRowBackgroundBrush;                                     // 0x0448(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                                 TextColor;                                                 // 0x04D0(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                                 SelectedTextColor;                                         // 0x04F8(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 DropIndicator_Above;                                       // 0x0520(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 DropIndicator_Onto;                                        // 0x05A8(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 DropIndicator_Below;                                       // 0x0630(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ActiveHighlightedBrush;                                    // 0x06B8(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 InactiveHighlightedBrush;                                  // 0x0740(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.SlateSound
// 0x0018
struct FSlateSound
{
	class UObject*                                     ResourceObject;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OHIS[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.ButtonStyle
// 0x0270 (0x0278 - 0x0008)
struct FButtonStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Normal;                                                    // 0x0008(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Hovered;                                                   // 0x0090(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Pressed;                                                   // 0x0118(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Disabled;                                                  // 0x01A0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                                     NormalPadding;                                             // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                     PressedPadding;                                            // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                                 PressedSlateSound;                                         // 0x0248(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                                 HoveredSlateSound;                                         // 0x0260(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.ComboButtonStyle
// 0x03B0 (0x03B8 - 0x0008)
struct FComboButtonStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                ButtonStyle;                                               // 0x0008(0x0278) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 DownArrowImage;                                            // 0x0280(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector2D                                   ShadowOffset;                                              // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ShadowColorAndOpacity;                                     // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 MenuBorderBrush;                                           // 0x0320(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                                     MenuBorderPadding;                                         // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.ComboBoxStyle
// 0x03E8 (0x03F0 - 0x0008)
struct FComboBoxStyle : public FSlateWidgetStyle
{
	struct FComboButtonStyle                           ComboButtonStyle;                                          // 0x0008(0x03B8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateSound                                 PressedSlateSound;                                         // 0x03C0(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                                 SelectionChangeSlateSound;                                 // 0x03D8(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.EditableTextStyle
// 0x0218 (0x0220 - 0x0008)
struct FEditableTextStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                      // 0x0008(0x0058) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ColorAndOpacity;                                           // 0x0060(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BackgroundImageSelected;                                   // 0x0088(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BackgroundImageComposing;                                  // 0x0110(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 CaretImage;                                                // 0x0198(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.ScrollBarStyle
// 0x04C8 (0x04D0 - 0x0008)
struct FScrollBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HorizontalBackgroundImage;                                 // 0x0008(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 VerticalBackgroundImage;                                   // 0x0090(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 VerticalTopSlotImage;                                      // 0x0118(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HorizontalTopSlotImage;                                    // 0x01A0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 VerticalBottomSlotImage;                                   // 0x0228(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HorizontalBottomSlotImage;                                 // 0x02B0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 NormalThumbImage;                                          // 0x0338(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HoveredThumbImage;                                         // 0x03C0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 DraggedThumbImage;                                         // 0x0448(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.EditableTextBoxStyle
// 0x07F0 (0x07F8 - 0x0008)
struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundImageNormal;                                     // 0x0008(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BackgroundImageHovered;                                    // 0x0090(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BackgroundImageFocused;                                    // 0x0118(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BackgroundImageReadOnly;                                   // 0x01A0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                                     Padding;                                                   // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                      // 0x0238(0x0058) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ForegroundColor;                                           // 0x0290(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                                 BackgroundColor;                                           // 0x02B8(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ReadOnlyForegroundColor;                                   // 0x02E0(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                                     HScrollBarPadding;                                         // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                     VScrollBarPadding;                                         // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FScrollBarStyle                             ScrollBarStyle;                                            // 0x0328(0x04D0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.TextBlockStyle
// 0x0268 (0x0270 - 0x0008)
struct FTextBlockStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                      // 0x0008(0x0058) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ColorAndOpacity;                                           // 0x0060(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector2D                                   ShadowOffset;                                              // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ShadowColorAndOpacity;                                     // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                                 SelectedBackgroundColor;                                   // 0x00A0(0x0028) (Edit, NativeAccessSpecifierPublic)
	struct FLinearColor                                HighlightColor;                                            // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HighlightShape;                                            // 0x00D8(0x0088) (Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 StrikeBrush;                                               // 0x0160(0x0088) (Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 UnderlineBrush;                                            // 0x01E8(0x0088) (Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.SpinBoxStyle
// 0x02E0 (0x02E8 - 0x0008)
struct FSpinBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundBrush;                                           // 0x0008(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HoveredBackgroundBrush;                                    // 0x0090(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ActiveFillBrush;                                           // 0x0118(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 InactiveFillBrush;                                         // 0x01A0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ArrowsImage;                                               // 0x0228(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ForegroundColor;                                           // 0x02B0(0x0028) (NativeAccessSpecifierPublic)
	struct FMargin                                     TextPadding;                                               // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.FontData
// 0x0020
struct FFontData
{
	struct FString                                     FontFilename;                                              // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	SlateCore_EFontHinting                             Hinting;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	SlateCore_EFontLoadingPolicy                       LoadingPolicy;                                             // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_T7NY[0x2];                                     // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SubFaceIndex;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UObject*                                     FontFaceAsset;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct SlateCore.TypefaceEntry
// 0x0028
struct FTypefaceEntry
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFontData                                   Font;                                                      // 0x0008(0x0020) (HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.Typeface
// 0x0010
struct FTypeface
{
	TArray<struct FTypefaceEntry>                      Fonts;                                                     // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.CompositeFallbackFont
// 0x0018
struct FCompositeFallbackFont
{
	struct FTypeface                                   Typeface;                                                  // 0x0000(0x0010) (NativeAccessSpecifierPublic)
	float                                              ScalingFactor;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4JHB[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.CompositeSubFont
// 0x0020 (0x0038 - 0x0018)
struct FCompositeSubFont : public FCompositeFallbackFont
{
	TArray<struct FInt32Range>                         CharacterRanges;                                           // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     Cultures;                                                  // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.CompositeFont
// 0x0038
struct FCompositeFont
{
	struct FTypeface                                   DefaultTypeface;                                           // 0x0000(0x0010) (NativeAccessSpecifierPublic)
	struct FCompositeFallbackFont                      FallbackTypeface;                                          // 0x0010(0x0018) (NativeAccessSpecifierPublic)
	TArray<struct FCompositeSubFont>                   SubTypefaces;                                              // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.MotionEvent
// 0x0030 (0x0048 - 0x0018)
struct FMotionEvent : public FInputEvent
{
	unsigned char                                      UnknownData_3U1V[0x30];                                    // 0x0018(0x0030) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.CaptureLostEvent
// 0x0008
struct FCaptureLostEvent
{
	unsigned char                                      UnknownData_BVEX[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.FocusEvent
// 0x0008
struct FFocusEvent
{
	unsigned char                                      UnknownData_KQT8[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.WindowStyle
// 0x1058 (0x1060 - 0x0008)
struct FWindowStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                MinimizeButtonStyle;                                       // 0x0008(0x0278) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                                MaximizeButtonStyle;                                       // 0x0280(0x0278) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                                RestoreButtonStyle;                                        // 0x04F8(0x0278) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                                CloseButtonStyle;                                          // 0x0770(0x0278) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             TitleTextStyle;                                            // 0x09E8(0x0270) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ActiveTitleBrush;                                          // 0x0C58(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 InactiveTitleBrush;                                        // 0x0CE0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 FlashTitleBrush;                                           // 0x0D68(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                                 BackgroundColor;                                           // 0x0DF0(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 OutlineBrush;                                              // 0x0E18(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                                 OutlineColor;                                              // 0x0EA0(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BorderBrush;                                               // 0x0EC8(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BackgroundBrush;                                           // 0x0F50(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ChildBackgroundBrush;                                      // 0x0FD8(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.ScrollBorderStyle
// 0x0110 (0x0118 - 0x0008)
struct FScrollBorderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 TopShadowBrush;                                            // 0x0008(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BottomShadowBrush;                                         // 0x0090(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.ScrollBoxStyle
// 0x0220 (0x0228 - 0x0008)
struct FScrollBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 TopShadowBrush;                                            // 0x0008(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BottomShadowBrush;                                         // 0x0090(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 LeftShadowBrush;                                           // 0x0118(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 RightShadowBrush;                                          // 0x01A0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.DockTabStyle
// 0x06F8 (0x0700 - 0x0008)
struct FDockTabStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                CloseButtonStyle;                                          // 0x0008(0x0278) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 NormalBrush;                                               // 0x0280(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ActiveBrush;                                               // 0x0308(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ColorOverlayTabBrush;                                      // 0x0390(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ColorOverlayIconBrush;                                     // 0x0418(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ForegroundBrush;                                           // 0x04A0(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HoveredBrush;                                              // 0x0528(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ContentAreaBrush;                                          // 0x05B0(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 TabWellBrush;                                              // 0x0638(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     TabPadding;                                                // 0x06C0(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              OverlapWidth;                                              // 0x06D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HMWB[0x4];                                     // 0x06D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateColor                                 FlashColor;                                                // 0x06D8(0x0028) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.SplitterStyle
// 0x0110 (0x0118 - 0x0008)
struct FSplitterStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HandleNormalBrush;                                         // 0x0008(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HandleHighlightBrush;                                      // 0x0090(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.TableColumnHeaderStyle
// 0x04C8 (0x04D0 - 0x0008)
struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 SortPrimaryAscendingImage;                                 // 0x0008(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 SortPrimaryDescendingImage;                                // 0x0090(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 SortSecondaryAscendingImage;                               // 0x0118(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 SortSecondaryDescendingImage;                              // 0x01A0(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 NormalBrush;                                               // 0x0228(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HoveredBrush;                                              // 0x02B0(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 MenuDropdownImage;                                         // 0x0338(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 MenuDropdownNormalBorderBrush;                             // 0x03C0(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 MenuDropdownHoveredBorderBrush;                            // 0x0448(0x0088) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.HeaderRowStyle
// 0x0B68 (0x0B70 - 0x0008)
struct FHeaderRowStyle : public FSlateWidgetStyle
{
	struct FTableColumnHeaderStyle                     ColumnStyle;                                               // 0x0008(0x04D0) (Edit, NativeAccessSpecifierPublic)
	struct FTableColumnHeaderStyle                     LastColumnStyle;                                           // 0x04D8(0x04D0) (Edit, NativeAccessSpecifierPublic)
	struct FSplitterStyle                              ColumnSplitterStyle;                                       // 0x09A8(0x0118) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BackgroundBrush;                                           // 0x0AC0(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ForegroundColor;                                           // 0x0B48(0x0028) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.InlineTextImageStyle
// 0x0090 (0x0098 - 0x0008)
struct FInlineTextImageStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Image;                                                     // 0x0008(0x0088) (Edit, NativeAccessSpecifierPublic)
	int16_t                                            Baseline;                                                  // 0x0090(0x0002) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MMN2[0x6];                                     // 0x0092(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.SliderStyle
// 0x0338 (0x0340 - 0x0008)
struct FSliderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 NormalBarImage;                                            // 0x0008(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HoveredBarImage;                                           // 0x0090(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 DisabledBarImage;                                          // 0x0118(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 NormalThumbImage;                                          // 0x01A0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HoveredThumbImage;                                         // 0x0228(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 DisabledThumbImage;                                        // 0x02B0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              BarThickness;                                              // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_70EW[0x4];                                     // 0x033C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.VolumeControlStyle
// 0x05E8 (0x05F0 - 0x0008)
struct FVolumeControlStyle : public FSlateWidgetStyle
{
	struct FSliderStyle                                SliderStyle;                                               // 0x0008(0x0340) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HighVolumeImage;                                           // 0x0348(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 MidVolumeImage;                                            // 0x03D0(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 LowVolumeImage;                                            // 0x0458(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 NoVolumeImage;                                             // 0x04E0(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 MutedImage;                                                // 0x0568(0x0088) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.SearchBoxStyle
// 0x0A88 (0x0A90 - 0x0008)
struct FSearchBoxStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       TextBoxStyle;                                              // 0x0008(0x07F8) (Edit, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              ActiveFontInfo;                                            // 0x0800(0x0058) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 UpArrowImage;                                              // 0x0858(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 DownArrowImage;                                            // 0x08E0(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 GlassImage;                                                // 0x0968(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ClearImage;                                                // 0x09F0(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     ImagePadding;                                              // 0x0A78(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bLeftAlignButtons;                                         // 0x0A88(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R6ME[0x7];                                     // 0x0A89(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.ExpandableAreaStyle
// 0x0118 (0x0120 - 0x0008)
struct FExpandableAreaStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 CollapsedImage;                                            // 0x0008(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ExpandedImage;                                             // 0x0090(0x0088) (Edit, NativeAccessSpecifierPublic)
	float                                              RolloutAnimationSeconds;                                   // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3JU8[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.ProgressBarStyle
// 0x0198 (0x01A0 - 0x0008)
struct FProgressBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundImage;                                           // 0x0008(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 FillImage;                                                 // 0x0090(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 MarqueeImage;                                              // 0x0118(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// 0x0A68 (0x0A70 - 0x0008)
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                      // 0x0008(0x07F8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             TextStyle;                                                 // 0x0800(0x0270) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.HyperlinkStyle
// 0x04F8 (0x0500 - 0x0008)
struct FHyperlinkStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                UnderlineStyle;                                            // 0x0008(0x0278) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             TextStyle;                                                 // 0x0280(0x0270) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                                     Padding;                                                   // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.CheckBoxStyle
// 0x0578 (0x0580 - 0x0008)
struct FCheckBoxStyle : public FSlateWidgetStyle
{
	TEnumAsByte<SlateCore_ESlateCheckBoxType>          CheckBoxType;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_54QX[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateBrush                                 UncheckedImage;                                            // 0x0010(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 UncheckedHoveredImage;                                     // 0x0098(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 UncheckedPressedImage;                                     // 0x0120(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 CheckedImage;                                              // 0x01A8(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 CheckedHoveredImage;                                       // 0x0230(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 CheckedPressedImage;                                       // 0x02B8(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 UndeterminedImage;                                         // 0x0340(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 UndeterminedHoveredImage;                                  // 0x03C8(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 UndeterminedPressedImage;                                  // 0x0450(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                                     Padding;                                                   // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ForegroundColor;                                           // 0x04E8(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                                 BorderBackgroundColor;                                     // 0x0510(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateSound                                 CheckedSlateSound;                                         // 0x0538(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                                 UncheckedSlateSound;                                       // 0x0550(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                                 HoveredSlateSound;                                         // 0x0568(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
