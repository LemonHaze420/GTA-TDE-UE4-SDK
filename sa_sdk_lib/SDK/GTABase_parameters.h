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
// Parameters
//---------------------------------------------------------------------------

// Function GTABase.DFFExtraData.CheckAllReferences
struct UDFFExtraData_CheckAllReferences_Params
{
};

// Function GTABase.DistantHLODBuilder.BuildAtlas
struct UDistantHLODBuilder_BuildAtlas_Params
{
};

// Function GTABase.GTAGameMode.GetGameterface
struct AGTAGameMode_GetGameterface_Params
{
	class UGameterface*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.WasRightBumperButtonJustPressed
struct UGameterface_WasRightBumperButtonJustPressed_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.WasLeftBumperButtonJustPressed
struct UGameterface_WasLeftBumperButtonJustPressed_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.WasBackButtonJustPressed
struct UGameterface_WasBackButtonJustPressed_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.WasAcceptButtonJustPressed
struct UGameterface_WasAcceptButtonJustPressed_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.UseSystemFont
struct UGameterface_UseSystemFont_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.UseSocialClubInGameMenu
struct UGameterface_UseSocialClubInGameMenu_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.UpdateMapCustomWaypoint
struct UGameterface_UpdateMapCustomWaypoint_Params
{
};

// Function GTABase.Gameterface.TheTextGet
struct UGameterface_TheTextGet_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     missionText;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.StopIntroMovie
struct UGameterface_StopIntroMovie_Params
{
};

// Function GTABase.Gameterface.StopCredits
struct UGameterface_StopCredits_Params
{
};

// Function GTABase.Gameterface.StartTransition
struct UGameterface_StartTransition_Params
{
	struct FString                                     TransitionToStart;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.StartRemapping
struct UGameterface_StartRemapping_Params
{
	int                                                mappingID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                                 ReturnValue;                                               // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.StartNewGameFromMenu
struct UGameterface_StartNewGameFromMenu_Params
{
};

// Function GTABase.Gameterface.StartLoadingTransition
struct UGameterface_StartLoadingTransition_Params
{
};

// Function GTABase.Gameterface.StartIntroMovie
struct UGameterface_StartIntroMovie_Params
{
};

// Function GTABase.Gameterface.SpawnExplosion
struct UGameterface_SpawnExplosion_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GTABase_EGTAExplosionType>             Type;                                                      // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GTABase_EGTAExplosionSurface>          Surface;                                                   // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SurfaceNormal;                                             // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DebrisCount;                                               // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ExplodingActor;                                            // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuppressLight;                                            // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGTAExplosion*                               ReturnValue;                                               // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.SocialClubSignUp
struct UGameterface_SocialClubSignUp_Params
{
};

// Function GTABase.Gameterface.SocialClubSignOut
struct UGameterface_SocialClubSignOut_Params
{
};

// Function GTABase.Gameterface.SocialClubSignIn
struct UGameterface_SocialClubSignIn_Params
{
};

// Function GTABase.Gameterface.SocialClubShowAchievements
struct UGameterface_SocialClubShowAchievements_Params
{
};

// Function GTABase.Gameterface.SocialClubIsLinked
struct UGameterface_SocialClubIsLinked_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.SocialClubAreServicesAvailable
struct UGameterface_SocialClubAreServicesAvailable_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.SnapToWorldZ
struct UGameterface_SnapToWorldZ_Params
{
	struct FVector                                     Coord;                                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AdditionalZOffset;                                         // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.SlotHasSave
struct UGameterface_SlotHasSave_Params
{
	int                                                slotnum;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.ShowHUDDrawer
struct UGameterface_ShowHUDDrawer_Params
{
	bool                                               Visible;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CreateIfNotMade;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.ShouldUseTransitionWarnings
struct UGameterface_ShouldUseTransitionWarnings_Params
{
	float                                              TimeBeforeWarning;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.ShouldShowFullOptions
struct UGameterface_ShouldShowFullOptions_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.SetUserFocusToGameViewport
struct UGameterface_SetUserFocusToGameViewport_Params
{
};

// Function GTABase.Gameterface.SetTransitionStateFadeTime
struct UGameterface_SetTransitionStateFadeTime_Params
{
	TEnumAsByte<GTABase_EGTATransitionState>           StateToChange;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeToFade;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.SetMenuTransitionStateFadeTime
struct UGameterface_SetMenuTransitionStateFadeTime_Params
{
	TEnumAsByte<GTABase_EGTATransitionState>           StateToChange;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeToFade;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.SetLoadingTransitionProgress
struct UGameterface_SetLoadingTransitionProgress_Params
{
	float                                              Progress;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.SetCustomWaypoint
struct UGameterface_SetCustomWaypoint_Params
{
	struct FVector                                     position;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.SaveKeyboardMappings
struct UGameterface_SaveKeyboardMappings_Params
{
};

// Function GTABase.Gameterface.SaveDataInSlot
struct UGameterface_SaveDataInSlot_Params
{
	int                                                SlotIndex;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.ResumeGameFromMenu
struct UGameterface_ResumeGameFromMenu_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.RestartWithFreshMenu
struct UGameterface_RestartWithFreshMenu_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.ReplaceGameSpecificImageTags
struct UGameterface_ReplaceGameSpecificImageTags_Params
{
	struct FString                                     QueuedMessage;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.RefreshSocialClubAchivements
struct UGameterface_RefreshSocialClubAchivements_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.RefreshMenuUserInfo
struct UGameterface_RefreshMenuUserInfo_Params
{
};

// Function GTABase.Gameterface.PromptLogin
struct UGameterface_PromptLogin_Params
{
};

// Function GTABase.Gameterface.PlayHapticEffectBP
struct UGameterface_PlayHapticEffectBP_Params
{
	TEnumAsByte<GTABase_EHapticEffectType>             Type;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.PlatformRequiresLogin
struct UGameterface_PlatformRequiresLogin_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.OnAudioTabChanged
struct UGameterface_OnAudioTabChanged_Params
{
	bool                                               wasSelected;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.MoveMenuToGameTab
struct UGameterface_MoveMenuToGameTab_Params
{
	TEnumAsByte<GTABase_EGTASaveTabState>              tabState;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.MissionRetryCallback
struct UGameterface_MissionRetryCallback_Params
{
	bool                                               doRetry;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.MenuMapExtra
struct UGameterface_MenuMapExtra_Params
{
};

// Function GTABase.Gameterface.LoadDataInSlot
struct UGameterface_LoadDataInSlot_Params
{
	int                                                SlotIndex;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.IsViewport4kOrGreater
struct UGameterface_IsViewport4kOrGreater_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.IsVeryWideScreen
struct UGameterface_IsVeryWideScreen_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.isSlotCheckpointSave
struct UGameterface_isSlotCheckpointSave_Params
{
	int                                                slotnum;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.isSlotAutoSave
struct UGameterface_isSlotAutoSave_Params
{
	int                                                slotnum;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.IsShowingControllerReconnectScreen
struct UGameterface_IsShowingControllerReconnectScreen_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.IsShowAllOptions
struct UGameterface_IsShowAllOptions_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.IsReleaseBuild
struct UGameterface_IsReleaseBuild_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.IsPlayingGame
struct UGameterface_IsPlayingGame_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.IsJapaneseBuild
struct UGameterface_IsJapaneseBuild_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.IsIntroMoviePlaying
struct UGameterface_IsIntroMoviePlaying_Params
{
	bool                                               AllowHandleStop;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.IsInCredits
struct UGameterface_IsInCredits_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.IsCurrentTransition
struct UGameterface_IsCurrentTransition_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.IsActiveControllerLoggedIn
struct UGameterface_IsActiveControllerLoggedIn_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.InterruptCurrentTransition
struct UGameterface_InterruptCurrentTransition_Params
{
	struct FString                                     TransitionToStart;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GTABase_EGTATransitionState>           startingState;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               takeOldOpacity;                                            // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.InterruptCurrentMenuTransition
struct UGameterface_InterruptCurrentMenuTransition_Params
{
	struct FString                                     TransitionToStart;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GTABase_EGTATransitionState>           startingState;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               takeOldOpacity;                                            // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.HasSaveData
struct UGameterface_HasSaveData_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.HasCurrentTransitionScreen
struct UGameterface_HasCurrentTransitionScreen_Params
{
	bool                                               CheckOnlyInGameTransitions;                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GrabFocus
struct UGameterface_GrabFocus_Params
{
};

// Function GTABase.Gameterface.GetWorldZ
struct UGameterface_GetWorldZ_Params
{
	struct FVector                                     FromCoord;                                                 // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               success;                                                   // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetVersionString
struct UGameterface_GetVersionString_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetUVMappingForMenuTabPrev
struct UGameterface_GetUVMappingForMenuTabPrev_Params
{
	float                                              U;                                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              V;                                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ULength;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VLength;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetUVMappingForMenuTabNext
struct UGameterface_GetUVMappingForMenuTabNext_Params
{
	float                                              U;                                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              V;                                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ULength;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VLength;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetUVImageForHUDMapping
struct UGameterface_GetUVImageForHUDMapping_Params
{
	TEnumAsByte<GTABase_EHIDMapping>                   mapping;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              U;                                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              V;                                                         // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ULength;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VLength;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetUserNameAndImage
struct UGameterface_GetUserNameAndImage_Params
{
	struct FString                                     OutName;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetTransitionManager
struct UGameterface_GetTransitionManager_Params
{
	class UUITransition*                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetStats
struct UGameterface_GetStats_Params
{
	TArray<struct FString>                             StatValues;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     CriminalRating;                                            // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ReturnValue;                                               // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetSocialClubAchivements
struct UGameterface_GetSocialClubAchivements_Params
{
	TArray<struct FSCAchive>                           ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetScalabilityClass
struct UGameterface_GetScalabilityClass_Params
{
	class UClass*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetSaveDataNames
struct UGameterface_GetSaveDataNames_Params
{
	TArray<struct FString>                             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetSaveDataName
struct UGameterface_GetSaveDataName_Params
{
	int                                                SlotIndex;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetRightStickValues
struct UGameterface_GetRightStickValues_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetRageActor
struct UGameterface_GetRageActor_Params
{
	class URage*                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetRadioStationOffset
struct UGameterface_GetRadioStationOffset_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetPlatformType
struct UGameterface_GetPlatformType_Params
{
	TEnumAsByte<GTABase_EPlatformType>                 ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetOptionTextSize
struct UGameterface_GetOptionTextSize_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetOptionHelpTextSize
struct UGameterface_GetOptionHelpTextSize_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetNextValidLanguageIndex
struct UGameterface_GetNextValidLanguageIndex_Params
{
	bool                                               IsLanguage;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Forward;                                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                currentIndex;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetMapZoomOut
struct UGameterface_GetMapZoomOut_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetMapZoomIn
struct UGameterface_GetMapZoomIn_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetMappingStringForButton
struct UGameterface_GetMappingStringForButton_Params
{
	int                                                nButtonID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                whichType;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetMapLegendNames
struct UGameterface_GetMapLegendNames_Params
{
	TArray<struct FName>                               ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetMapLegend
struct UGameterface_GetMapLegend_Params
{
	TArray<class UTexture2D*>                          Textures;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FText>                               Strings;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetMapAreaName
struct UGameterface_GetMapAreaName_Params
{
	struct FVector                                     WorldPosition;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OutName;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetLeftStickValues
struct UGameterface_GetLeftStickValues_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetLastSaveSlotIndex
struct UGameterface_GetLastSaveSlotIndex_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetKeyboardMappings
struct UGameterface_GetKeyboardMappings_Params
{
	int                                                whichType;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKeyboardDisplayStrings>             ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetHIDTexture
struct UGameterface_GetHIDTexture_Params
{
	class UTexture2D*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetGTAPlayerPosition
struct UGameterface_GetGTAPlayerPosition_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetGroundZCoord
struct UGameterface_GetGroundZCoord_Params
{
	struct FVector                                     FromCoord;                                                 // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutCoord;                                                  // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetCurrentInputType
struct UGameterface_GetCurrentInputType_Params
{
	TEnumAsByte<GTABase_EGTAInputType>                 ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetButtonMappingReleased
struct UGameterface_GetButtonMappingReleased_Params
{
	TEnumAsByte<GTABase_EHIDMapping>                   mapping;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetButtonMappingJustPressed
struct UGameterface_GetButtonMappingJustPressed_Params
{
	TEnumAsByte<GTABase_EHIDMapping>                   mapping;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetButtonMappingIsPressed
struct UGameterface_GetButtonMappingIsPressed_Params
{
	TEnumAsByte<GTABase_EHIDMapping>                   mapping;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetBriefString
struct UGameterface_GetBriefString_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetAppropriateGamepadTab
struct UGameterface_GetAppropriateGamepadTab_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GetActiveControllerIndex
struct UGameterface_GetActiveControllerIndex_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GameHasGangsOverlay
struct UGameterface_GameHasGangsOverlay_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GameHasFlightGamepadTab
struct UGameterface_GameHasFlightGamepadTab_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.GameHasBMXGamepadTab
struct UGameterface_GameHasBMXGamepadTab_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.FreezeTime
struct UGameterface_FreezeTime_Params
{
	int                                                Hours;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Minutes;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Seconds;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.ForceMapSwitchRefresh
struct UGameterface_ForceMapSwitchRefresh_Params
{
	bool                                               MenuMode;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.ExitGame
struct UGameterface_ExitGame_Params
{
};

// Function GTABase.Gameterface.DoesLanguageUseLargerHeightSubtitles
struct UGameterface_DoesLanguageUseLargerHeightSubtitles_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.DoesGameViewportHaveFocus
struct UGameterface_DoesGameViewportHaveFocus_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.DeleteSavedKeyboardMappings
struct UGameterface_DeleteSavedKeyboardMappings_Params
{
};

// Function GTABase.Gameterface.DeleteDataInSlot
struct UGameterface_DeleteDataInSlot_Params
{
	int                                                SlotIndex;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.ContinueTransition
struct UGameterface_ContinueTransition_Params
{
	TEnumAsByte<GTABase_EGTATransitionState>           toState;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.ContinueMenuTransition
struct UGameterface_ContinueMenuTransition_Params
{
	TEnumAsByte<GTABase_EGTATransitionState>           toState;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.CloseCurrentTransition
struct UGameterface_CloseCurrentTransition_Params
{
};

// Function GTABase.Gameterface.CloseCurrentMenuTransition
struct UGameterface_CloseCurrentMenuTransition_Params
{
};

// Function GTABase.Gameterface.ClearCustomWaypoint
struct UGameterface_ClearCustomWaypoint_Params
{
};

// Function GTABase.Gameterface.CleanupCinematicActorOnEndPlay
struct UGameterface_CleanupCinematicActorOnEndPlay_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.CheckWorldLine
struct UGameterface_CheckWorldLine_Params
{
	struct FVector                                     Start;                                                     // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     finished;                                                  // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     outCol;                                                    // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     outNormal;                                                 // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckBuildings;                                           // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckVehicles;                                            // 0x0031(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckPeds;                                                // 0x0032(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0033(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.CheckShowAllOptionsChanged
struct UGameterface_CheckShowAllOptionsChanged_Params
{
};

// Function GTABase.Gameterface.BPUpdateVolumeMixers
struct UGameterface_BPUpdateVolumeMixers_Params
{
};

// Function GTABase.Gameterface.AutoDestroyedParticleSystem
struct UGameterface_AutoDestroyedParticleSystem_Params
{
	class UParticleSystemComponent*                    Component;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.AreMultipleTouchesDown
struct UGameterface_AreMultipleTouchesDown_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.AllowMapJump
struct UGameterface_AllowMapJump_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.AllowCustomWaypointManagement
struct UGameterface_AllowCustomWaypointManagement_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Gameterface.AllowActiveControllerSet
struct UGameterface_AllowActiveControllerSet_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.UpdateFidelitySettings
struct UGameterSettings_UpdateFidelitySettings_Params
{
	bool                                               SkipCallback;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.UpdateDefaultVersion
struct UGameterSettings_UpdateDefaultVersion_Params
{
	bool                                               SkipSave;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.UpdateAllGraphicsSettings
struct UGameterSettings_UpdateAllGraphicsSettings_Params
{
};

// Function GTABase.GameterSettings.SetupGlobalSettingsCallbacks
struct UGameterSettings_SetupGlobalSettingsCallbacks_Params
{
};

// Function GTABase.GameterSettings.SetResolutionToDefault
struct UGameterSettings_SetResolutionToDefault_Params
{
	bool                                               doConfirmVideoMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.SetIntValue
struct UGameterSettings_SetIntValue_Params
{
	struct FName                                       VariableName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewValue;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.SetInitialScreenValues
struct UGameterSettings_SetInitialScreenValues_Params
{
};

// Function GTABase.GameterSettings.SetFloatValue
struct UGameterSettings_SetFloatValue_Params
{
	struct FName                                       VariableName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewValue;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.SetBoolValue
struct UGameterSettings_SetBoolValue_Params
{
	struct FName                                       VariableName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               NewValue;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.RevertOption
struct UGameterSettings_RevertOption_Params
{
	struct FName                                       OptionName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.ResetSettingsToPlatformDefault
struct UGameterSettings_ResetSettingsToPlatformDefault_Params
{
	TEnumAsByte<GTABase_EGTASettingsCategory>          Category;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SkipDisplayChanges;                                        // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SkipSave;                                                  // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.ResetDefaultCheck
struct UGameterSettings_ResetDefaultCheck_Params
{
};

// Function GTABase.GameterSettings.RefreshSettingsOnFirstLoad
struct UGameterSettings_RefreshSettingsOnFirstLoad_Params
{
	bool                                               ForceReset;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.OnTextureQualitySet
struct UGameterSettings_OnTextureQualitySet_Params
{
};

// Function GTABase.GameterSettings.OnShadowSet
struct UGameterSettings_OnShadowSet_Params
{
};

// Function GTABase.GameterSettings.OnRTXSet
struct UGameterSettings_OnRTXSet_Params
{
};

// Function GTABase.GameterSettings.OnResolutionSet
struct UGameterSettings_OnResolutionSet_Params
{
	bool                                               ApplySettings;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.OnReflectionQualitySet
struct UGameterSettings_OnReflectionQualitySet_Params
{
};

// Function GTABase.GameterSettings.OnOutputMonitorSet
struct UGameterSettings_OnOutputMonitorSet_Params
{
};

// Function GTABase.GameterSettings.OnMotionBlurSet
struct UGameterSettings_OnMotionBlurSet_Params
{
};

// Function GTABase.GameterSettings.OnLensFlareSet
struct UGameterSettings_OnLensFlareSet_Params
{
};

// Function GTABase.GameterSettings.OnLanguageSet
struct UGameterSettings_OnLanguageSet_Params
{
};

// Function GTABase.GameterSettings.OnFrameRateLimitSet
struct UGameterSettings_OnFrameRateLimitSet_Params
{
	bool                                               ApplySettings;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.OnFrameRateLimitPCSet
struct UGameterSettings_OnFrameRateLimitPCSet_Params
{
	bool                                               ApplySettings;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.OnDistanceScaleSet
struct UGameterSettings_OnDistanceScaleSet_Params
{
};

// Function GTABase.GameterSettings.OnDisplayModeSet
struct UGameterSettings_OnDisplayModeSet_Params
{
	bool                                               ApplySettings;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.OnDepthOfFieldSet
struct UGameterSettings_OnDepthOfFieldSet_Params
{
};

// Function GTABase.GameterSettings.OnCloudQualitySet
struct UGameterSettings_OnCloudQualitySet_Params
{
};

// Function GTABase.GameterSettings.OnCarReflectionMethodSet
struct UGameterSettings_OnCarReflectionMethodSet_Params
{
};

// Function GTABase.GameterSettings.OnBloomSet
struct UGameterSettings_OnBloomSet_Params
{
};

// Function GTABase.GameterSettings.OnAspectRatioSet
struct UGameterSettings_OnAspectRatioSet_Params
{
};

// Function GTABase.GameterSettings.OnAOSet
struct UGameterSettings_OnAOSet_Params
{
};

// Function GTABase.GameterSettings.OnAnisotropicSet
struct UGameterSettings_OnAnisotropicSet_Params
{
};

// Function GTABase.GameterSettings.NormalizeInitialScreenSize
struct UGameterSettings_NormalizeInitialScreenSize_Params
{
};

// Function GTABase.GameterSettings.InitializeGlobalSettings
struct UGameterSettings_InitializeGlobalSettings_Params
{
};

// Function GTABase.GameterSettings.HasEverSetToDefault
struct UGameterSettings_HasEverSetToDefault_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.GTASaveSettings
struct UGameterSettings_GTASaveSettings_Params
{
	struct FName                                       SettingName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.GetSelectionNamesForEmptyEntry
struct UGameterSettings_GetSelectionNamesForEmptyEntry_Params
{
	struct FName                                       EntryName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FText>                               ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.GetScreenResolutionNames
struct UGameterSettings_GetScreenResolutionNames_Params
{
	TArray<struct FText>                               ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.GetPlatformToEmulate
struct UGameterSettings_GetPlatformToEmulate_Params
{
	TEnumAsByte<GTABase_EGTAPlatforms>                 ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.GetPlatformDefaults
struct UGameterSettings_GetPlatformDefaults_Params
{
	TEnumAsByte<GTABase_EGTAPlatforms>                 PlatformOverride;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsEditor;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.GetPlatformDefaultRules
struct UGameterSettings_GetPlatformDefaultRules_Params
{
	class UDefaultGameterSettings_Rules*               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.GetPCFidelitySetting
struct UGameterSettings_GetPCFidelitySetting_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.GetNumberValue
struct UGameterSettings_GetNumberValue_Params
{
	struct FName                                       VariableName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.GetListOfFidelityOptionNamesFromSettings
struct UGameterSettings_GetListOfFidelityOptionNamesFromSettings_Params
{
	TEnumAsByte<GTABase_EGTAPlatforms>                 PlatformOverride;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsEditor;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FText>                               ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.GetIntValue
struct UGameterSettings_GetIntValue_Params
{
	struct FName                                       VariableName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.GetFloatValue
struct UGameterSettings_GetFloatValue_Params
{
	struct FName                                       VariableName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.GetFidelityOptionsNum
struct UGameterSettings_GetFidelityOptionsNum_Params
{
	TEnumAsByte<GTABase_EGTAPlatforms>                 PlatformOverride;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsEditor;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.GetFidelityOptionNames
struct UGameterSettings_GetFidelityOptionNames_Params
{
	TEnumAsByte<GTABase_EGTAPlatforms>                 PlatformOverride;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FText>                               ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.GetCurrentFidelityOption
struct UGameterSettings_GetCurrentFidelityOption_Params
{
	int                                                CurrentSelection;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GTABase_EGTAPlatforms>                 PlatformOverride;                                          // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsEditor;                                                  // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGTAFidelityOption*                          ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.GetBoolValue
struct UGameterSettings_GetBoolValue_Params
{
	struct FName                                       VariableName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.FinalOptionCheck
struct UGameterSettings_FinalOptionCheck_Params
{
	struct FName                                       OptionName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.CheckSpecialOptionEnabled
struct UGameterSettings_CheckSpecialOptionEnabled_Params
{
	struct FName                                       OptionName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ErrorCode;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GameterSettings.CheckDisplayModeAndUpdateSettings
struct UGameterSettings_CheckDisplayModeAndUpdateSettings_Params
{
};

// Function GTABase.GTAActor.TimeChanged
struct AGTAActor_TimeChanged_Params
{
	bool                                               bEditor;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAActor.SetScorched
struct AGTAActor_SetScorched_Params
{
	bool                                               scorched;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAActor.SetDamaged
struct AGTAActor_SetDamaged_Params
{
	bool                                               damaged;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAActor.SetAlpha
struct AGTAActor_SetAlpha_Params
{
	float                                              withAlpha;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAActor.GetTimeOfDay
struct AGTAActor_GetTimeOfDay_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAActor.CheckTreeFarShadowSetting
struct AGTAActor_CheckTreeFarShadowSetting_Params
{
};

// Function GTABase.GTAActor.AddCollisionEffects
struct AGTAActor_AddCollisionEffects_Params
{
	float                                              impulseAmt;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Pos;                                                       // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Dir;                                                       // 0x0010(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTASKActor.GetOverrideSkeleton
struct AGTASKActor_GetOverrideSkeleton_Params
{
	class USkeleton*                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTASKActor.GetBoneTransformTweak
struct AGTASKActor_GetBoneTransformTweak_Params
{
	struct FTransform                                  InTransform;                                               // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       InBoneName;                                                // 0x0030(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OutShouldRemove;                                           // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TweakType;                                                 // 0x003C(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // 0x0050(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAAOSkeletalProxy.ConstructStatic
struct AGTAAOSkeletalProxy_ConstructStatic_Params
{
};

// Function GTABase.GTAAOSkeletalProxy.ApplyVertexColor
struct AGTAAOSkeletalProxy_ApplyVertexColor_Params
{
};

// Function GTABase.GTASKProxyActor.CycleMe
struct AGTASKProxyActor_CycleMe_Params
{
};

// Function GTABase.GTASKProxyActor.CycleAll
struct AGTASKProxyActor_CycleAll_Params
{
};

// Function GTABase.GTAAudioComponent.GetPlaybackPosition
struct UGTAAudioComponent_GetPlaybackPosition_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTABloodyFootprints.UpdateMeshSection
struct AGTABloodyFootprints_UpdateMeshSection_Params
{
	int                                                MeshSection;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTABloodyFootprints.OnFootprintTick
struct AGTABloodyFootprints_OnFootprintTick_Params
{
	int                                                MeshSection;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Lifetime;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTABloodyFootprints.OnFootprintAdded
struct AGTABloodyFootprints_OnFootprintAdded_Params
{
	int                                                MeshSection;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTABloodyFootprints.GetDecal
struct AGTABloodyFootprints_GetDecal_Params
{
	int                                                MeshSection;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDecalComponent*                             ReturnValue;                                               // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTACarRecordings.RestoreOriginalFile
struct UGTACarRecordings_RestoreOriginalFile_Params
{
};

// Function GTABase.GTACarRecordings.InsertFile
struct UGTACarRecordings_InsertFile_Params
{
};

// Function GTABase.GTACarRecordings.FlattenBetweenFrames
struct UGTACarRecordings_FlattenBetweenFrames_Params
{
};

// Function GTABase.GTACollisionCache.ImportOldCache
struct UGTACollisionCache_ImportOldCache_Params
{
};

// Function GTABase.GTACollisionCache.Clear
struct UGTACollisionCache_Clear_Params
{
};

// Function GTABase.GTACoronaComponent.UpdateCorona
struct UGTACoronaComponent_UpdateCorona_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     position;                                                  // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      Color;                                                     // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Intensity;                                                 // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTACoronaComponent.RemoveCorona
struct UGTACoronaComponent_RemoveCorona_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTACoronaComponent.AddCorona
struct UGTACoronaComponent_AddCorona_Params
{
	struct FVector                                     position;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Intensity;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      Color;                                                     // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAClutterActor.DisallowSpawn
struct AGTAClutterActor_DisallowSpawn_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTACustomEntity.GetStaticVolumetricStrength
struct AGTACustomEntity_GetStaticVolumetricStrength_Params
{
	float                                              intoAO;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              intoUplight;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAEnvLightingVolumeGrid.SetLevelBounds
struct AGTAEnvLightingVolumeGrid_SetLevelBounds_Params
{
};

// Function GTABase.GTAEnvLightingVolumeGrid.GetSkyVisibilityAtLocation
struct AGTAEnvLightingVolumeGrid_GetSkyVisibilityAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Pos;                                                       // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAEnvLightingVolumeGrid.GetDynamicLightingAtLocation
struct AGTAEnvLightingVolumeGrid_GetDynamicLightingAtLocation_Params
{
	class AActor*                                      forActor;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Pos;                                                       // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              outAO;                                                     // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                outUplighting;                                             // 0x001C(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForce;                                                    // 0x002C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x002D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAEnvLightingVolumeGrid.ConstructGrid
struct AGTAEnvLightingVolumeGrid_ConstructGrid_Params
{
};

// Function GTABase.GTAEnvLightingVolumeGrid.ClearAnyCachedDynamicLighting
struct AGTAEnvLightingVolumeGrid_ClearAnyCachedDynamicLighting_Params
{
	class AActor*                                      forActor;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAEnvLightingVolumeGrid.ClearAllCachedLighting
struct AGTAEnvLightingVolumeGrid_ClearAllCachedLighting_Params
{
};

// Function GTABase.GTAExplosion.SetupAttachedActor
struct AGTAExplosion_SetupAttachedActor_Params
{
};

// Function GTABase.GTAExplosion.EditorPreview
struct AGTAExplosion_EditorPreview_Params
{
};

// Function GTABase.GTAFire.GetSystem
struct AGTAFire_GetSystem_Params
{
	class UParticleSystem*                             System;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Distance;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAFire.Extinguish
struct AGTAFire_Extinguish_Params
{
};

// Function GTABase.GTAGrassProxy.ToggleViz
struct AGTAGrassProxy_ToggleViz_Params
{
};

// Function GTABase.GTAGrassProxy.SpawnInEditor
struct AGTAGrassProxy_SpawnInEditor_Params
{
};

// Function GTABase.GTAGrassProxy.Remove
struct AGTAGrassProxy_Remove_Params
{
};

// Function GTABase.GTAGrassProxy.BuildAndSpawn
struct AGTAGrassProxy_BuildAndSpawn_Params
{
};

// Function GTABase.GTAGrassProxy.Build
struct AGTAGrassProxy_Build_Params
{
};

// Function GTABase.GTAGrassProxy.AddHelicopterGrassMovement
struct AGTAGrassProxy_AddHelicopterGrassMovement_Params
{
	struct FVector                                     position;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Milliseconds;                                              // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StaticHeight;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GrassFlutterFactor;                                        // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAGrassProxy.AddGrassMovementInfluence
struct AGTAGrassProxy_AddGrassMovementInfluence_Params
{
	struct FVector                                     position;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Size;                                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAGrassProxy.AddFoliageMovementInfluence
struct AGTAGrassProxy_AddFoliageMovementInfluence_Params
{
	struct FVector                                     position;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Size;                                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAHUD.PrintString
struct AGTAHUD_PrintString_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Scale;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     pCharacters;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      Color;                                                     // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFont*                                       InFont;                                                    // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GTABase_EHUDTextJustify>               justify;                                                   // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               inShadow;                                                  // 0x0031(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTASingleton.SetShadowResolutionScale
struct UGTASingleton_SetShadowResolutionScale_Params
{
	class ULightComponent*                             onComponent;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              newResolution;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTASingleton.SetShadowRenderDistance
struct UGTASingleton_SetShadowRenderDistance_Params
{
	class ULightComponent*                             onComponent;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              newRenderDistance;                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTASingleton.SetPostProcessSceneColorTint
struct UGTASingleton_SetPostProcessSceneColorTint_Params
{
	class APostProcessVolume*                          Volume;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                withTint;                                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTASingleton.SetMaxDrawDistance
struct UGTASingleton_SetMaxDrawDistance_Params
{
	class ULightComponent*                             onComponent;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              newMaxDrawDistance;                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              fadeStartPercent;                                          // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTASingleton.SetLightingChannels
struct UGTASingleton_SetLightingChannels_Params
{
	class USceneComponent*                             onComponent;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               channel0;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               channel1;                                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               channel2;                                                  // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTASingleton.ResetSettingsToDefault
struct UGTASingleton_ResetSettingsToDefault_Params
{
	TEnumAsByte<GTABase_EGTASettingsCategory>          Category;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTASingleton.RemoveCurveData
struct UGTASingleton_RemoveCurveData_Params
{
	class UCurveBase*                                  toCurve;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              atTime;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTASingleton.GetUncheckedSettings
struct UGTASingleton_GetUncheckedSettings_Params
{
	class UGameterSettings*                            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTASingleton.GetSettings
struct UGTASingleton_GetSettings_Params
{
	bool                                               ForceRefresh;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceUpdateAudio;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               forceNoChanges;                                            // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameterSettings*                            ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTASingleton.GetRulesOverrideValue
struct UGTASingleton_GetRulesOverrideValue_Params
{
	class UClass*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTASingleton.GetGTAWorldZ
struct UGTASingleton_GetGTAWorldZ_Params
{
	struct FVector                                     OfLocation;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               successful;                                                // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTASingleton.GetGTAWorldSettings
struct UGTASingleton_GetGTAWorldSettings_Params
{
	class UObject*                                     WorldContext;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGTAWorldSettings*                           ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTASingleton.GetGTAWaterZ
struct UGTASingleton_GetGTAWaterZ_Params
{
	struct FVector                                     OfLocation;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               successful;                                                // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTASingleton.GetGameterface
struct UGTASingleton_GetGameterface_Params
{
	class UGameterface*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTASingleton.GetCurrentCutscene
struct UGTASingleton_GetCurrentCutscene_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTASingleton.AreGameSettingRulesOverwritten
struct UGTASingleton_AreGameSettingRulesOverwritten_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTASingleton.AddFloatCurveData
struct UGTASingleton_AddFloatCurveData_Params
{
	class UCurveFloat*                                 toCurve;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              atTime;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              withFloat;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              timeGranularity;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTASingleton.AddColorCurveData
struct UGTASingleton_AddColorCurveData_Params
{
	class UCurveLinearColor*                           toCurve;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              atTime;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                withColor;                                                 // 0x000C(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              timeGranularity;                                           // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_DesignTimeUserWidget.UpdateLanguage
struct UUI_DesignTimeUserWidget_UpdateLanguage_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_DesignTimeUserWidget.TryToResolveSocialClubOnce
struct UUI_DesignTimeUserWidget_TryToResolveSocialClubOnce_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_DesignTimeUserWidget.TakeFocus
struct UUI_DesignTimeUserWidget_TakeFocus_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_DesignTimeUserWidget.SetLocalizedStringsifNeeded
struct UUI_DesignTimeUserWidget_SetLocalizedStringsifNeeded_Params
{
};

// Function GTABase.UI_DesignTimeUserWidget.PlayMenuSoundNative
struct UUI_DesignTimeUserWidget_PlayMenuSoundNative_Params
{
	float                                              Volume;                                                    // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_DesignTimeUserWidget.OnSynchronizeProperties
struct UUI_DesignTimeUserWidget_OnSynchronizeProperties_Params
{
};

// Function GTABase.UI_DesignTimeUserWidget.LaunchGame
struct UUI_DesignTimeUserWidget_LaunchGame_Params
{
	struct FString                                     Game;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_DesignTimeUserWidget.IsWindowInForeground
struct UUI_DesignTimeUserWidget_IsWindowInForeground_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_DesignTimeUserWidget.IsPlayingMovie
struct UUI_DesignTimeUserWidget_IsPlayingMovie_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_DesignTimeUserWidget.HandleBack
struct UUI_DesignTimeUserWidget_HandleBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_DesignTimeUserWidget.GetWorldSettings
struct UUI_DesignTimeUserWidget_GetWorldSettings_Params
{
	class AWorldSettings*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_DesignTimeUserWidget.GetPlayerControlerIndex
struct UUI_DesignTimeUserWidget_GetPlayerControlerIndex_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_DesignTimeUserWidget.GetLocalizedStringFromKey
struct UUI_DesignTimeUserWidget_GetLocalizedStringFromKey_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_DesignTimeUserWidget.GetLastUserIndex
struct UUI_DesignTimeUserWidget_GetLastUserIndex_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_DesignTimeUserWidget.GetImageFilename
struct UUI_DesignTimeUserWidget_GetImageFilename_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_DesignTimeUserWidget.GetGameterface
struct UUI_DesignTimeUserWidget_GetGameterface_Params
{
	class UGameterface*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_DesignTimeUserWidget.FindUVsFromMapping
struct UUI_DesignTimeUserWidget_FindUVsFromMapping_Params
{
	TEnumAsByte<GTABase_EHIDMapping>                   mapping;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_DesignTimeUserWidget.ClearUserFocus
struct UUI_DesignTimeUserWidget_ClearUserFocus_Params
{
	class AGTAPlayerController*                        PC;                                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_Menu_Base.StartMenuSFX
struct UUI_Menu_Base_StartMenuSFX_Params
{
};

// Function GTABase.UI_Menu_Base.StartMenuRadio
struct UUI_Menu_Base_StartMenuRadio_Params
{
	int                                                Station;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_Menu_Base.StartMenuDialog
struct UUI_Menu_Base_StartMenuDialog_Params
{
};

// Function GTABase.UI_Menu_Base.ShouldShowGangsInMap
struct UUI_Menu_Base_ShouldShowGangsInMap_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_Menu_Base.SetVersionNumber
struct UUI_Menu_Base_SetVersionNumber_Params
{
	struct FString                                     VersionNum;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_Menu_Base.SetTemplate
struct UUI_Menu_Base_SetTemplate_Params
{
	class UGTAMainMenuUITemplate*                      InTemplate;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IncludeSaveTab;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_Menu_Base.SetMenuToSpecificGameTab
struct UUI_Menu_Base_SetMenuToSpecificGameTab_Params
{
	TEnumAsByte<GTABase_EGTASaveTabState>              toState;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_Menu_Base.SetMenuToMissionRetry
struct UUI_Menu_Base_SetMenuToMissionRetry_Params
{
};

// Function GTABase.UI_Menu_Base.SetKeyListeningDialog
struct UUI_Menu_Base_SetKeyListeningDialog_Params
{
	bool                                               bTurnOn;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                                 ReturnValue;                                               // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_Menu_Base.SaveDataInSlotEvent
struct UUI_Menu_Base_SaveDataInSlotEvent_Params
{
	bool                                               success;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SlotIndex;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_Menu_Base.LoadDataInSlotEvent
struct UUI_Menu_Base_LoadDataInSlotEvent_Params
{
	bool                                               success;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SlotIndex;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_Menu_Base.GrabFocus
struct UUI_Menu_Base_GrabFocus_Params
{
};

// Function GTABase.UI_Menu_Base.GetRightSidePosOfWidgetInsideScaleBox
struct UUI_Menu_Base_GetRightSidePosOfWidgetInsideScaleBox_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_Menu_Base.GetLeftSideOfFullSizeBox
struct UUI_Menu_Base_GetLeftSideOfFullSizeBox_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_Menu_Base.EndMenuSFX
struct UUI_Menu_Base_EndMenuSFX_Params
{
};

// Function GTABase.UI_Menu_Base.EndMenuRadio
struct UUI_Menu_Base_EndMenuRadio_Params
{
};

// Function GTABase.UI_Menu_Base.EndMenuDialogue
struct UUI_Menu_Base_EndMenuDialogue_Params
{
};

// Function GTABase.UI_Menu_Base.DeleteDataInSlotEvent
struct UUI_Menu_Base_DeleteDataInSlotEvent_Params
{
	bool                                               success;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SlotIndex;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_Menu_Base.CustomFunctionWithBoolReturn
struct UUI_Menu_Base_CustomFunctionWithBoolReturn_Params
{
	struct FString                                     FunctionString;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Handled;                                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_Menu_Base.CustomFunctionFromStringWithText
struct UUI_Menu_Base_CustomFunctionFromStringWithText_Params
{
	struct FString                                     FunctionString;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       UsableText;                                                // 0x0010(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_Menu_Base.CustomFunctionFromString
struct UUI_Menu_Base_CustomFunctionFromString_Params
{
	struct FString                                     FunctionString;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTASocialClub.OnRageBPEvent
struct UGTASocialClub_OnRageBPEvent_Params
{
	int                                                EventId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Result;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTASoundBank.StreamingAssetsLoadedCallback
struct UGTASoundBank_StreamingAssetsLoadedCallback_Params
{
};

// Function GTABase.GTASoundBank.AssetsLoadedCallback
struct UGTASoundBank_AssetsLoadedCallback_Params
{
};

// Function GTABase.GTAAssetProcessor.ProcessedStreamRequest
struct UGTAAssetProcessor_ProcessedStreamRequest_Params
{
	struct FGTAStreamRequest                           request;                                                   // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function GTABase.GTATimeOfDay.SnagCurveTimes
struct AGTATimeOfDay_SnagCurveTimes_Params
{
};

// Function GTABase.GTATimeOfDay.ShiftTimeForward
struct AGTATimeOfDay_ShiftTimeForward_Params
{
};

// Function GTABase.GTATimeOfDay.ShiftTimeBackward
struct AGTATimeOfDay_ShiftTimeBackward_Params
{
};

// Function GTABase.GTATimeOfDay.SetWaterZ
struct AGTATimeOfDay_SetWaterZ_Params
{
	float                                              ZValue;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTATimeOfDay.SaveCurrentValues
struct AGTATimeOfDay_SaveCurrentValues_Params
{
};

// Function GTABase.GTATimeOfDay.Sample
struct AGTATimeOfDay_Sample_Params
{
};

// Function GTABase.GTATimeOfDay.RotateSun
struct AGTATimeOfDay_RotateSun_Params
{
	struct FRotator                                    TargetRotation;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GTABase.GTATimeOfDay.RerunConstruction
struct AGTATimeOfDay_RerunConstruction_Params
{
};

// Function GTABase.GTATimeOfDay.RemoveCurrentValues
struct AGTATimeOfDay_RemoveCurrentValues_Params
{
};

// Function GTABase.GTATimeOfDay.PreviewWeatherChanged
struct AGTATimeOfDay_PreviewWeatherChanged_Params
{
	TEnumAsByte<GTABase_EGTAWeather>                   NewWeather;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTATimeOfDay.GetUnderwaterMID
struct AGTATimeOfDay_GetUnderwaterMID_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTATimeOfDay.GetSkyLightActor
struct AGTATimeOfDay_GetSkyLightActor_Params
{
	class ASkyLight*                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTATimeOfDay.GetMoonDirection
struct AGTATimeOfDay_GetMoonDirection_Params
{
	struct FRotator                                    ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GTABase.GTATimeOfDay.EnableCloudMaterial
struct AGTATimeOfDay_EnableCloudMaterial_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTATimeOfDay.CycleMoonSize
struct AGTATimeOfDay_CycleMoonSize_Params
{
};

// Function GTABase.GTATimeOfDay.CullCurves
struct AGTATimeOfDay_CullCurves_Params
{
};

// Function GTABase.GTATimeOfDay.CopyValuesForward
struct AGTATimeOfDay_CopyValuesForward_Params
{
};

// Function GTABase.GTATimeOfDay.CopyValuesBackward
struct AGTATimeOfDay_CopyValuesBackward_Params
{
};

// Function GTABase.GTATimeOfDay.CopyBaseValues
struct AGTATimeOfDay_CopyBaseValues_Params
{
};

// Function GTABase.GTATimeOfDay.CleanCurves
struct AGTATimeOfDay_CleanCurves_Params
{
};

// Function GTABase.GTAJetpack.UpdateThrust
struct AGTAJetpack_UpdateThrust_Params
{
	float                                              newThrustLeft;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              newThrustRight;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTALevelScriptActor.SetWeatherImpactEffects
struct AGTALevelScriptActor_SetWeatherImpactEffects_Params
{
	float                                              RoadWetness;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WaveAmount;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTALevelScriptActor.SetWeatherEffects
struct AGTALevelScriptActor_SetWeatherEffects_Params
{
	float                                              CloudCoverage;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RainAmount;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SandstormAmount;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Wind;                                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WindDir;                                                   // 0x0010(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtraSunny;                                                // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTALevelScriptActor.SetWeather
struct AGTALevelScriptActor_SetWeather_Params
{
	TEnumAsByte<GTABase_EGTAWeather>                   weather1;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GTABase_EGTAWeather>                   weather2;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GTABase_EGTAWeatherRegion>             region1;                                                   // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GTABase_EGTAWeatherRegion>             region2;                                                   // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              interp;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTALevelScriptActor.SetupScalability
struct AGTALevelScriptActor_SetupScalability_Params
{
	class AGTAScalability*                             ToSetup;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTALevelScriptActor.SetTimeOfDay
struct AGTALevelScriptActor_SetTimeOfDay_Params
{
	float                                              Hours;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTALevelScriptActor.SetStreetlightAmount
struct AGTALevelScriptActor_SetStreetlightAmount_Params
{
	float                                              LightAmount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LightDistance;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DecalFadeDistance;                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTALevelScriptActor.SetSkyColors
struct AGTALevelScriptActor_SetSkyColors_Params
{
	struct FColor                                      skyBottom;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      skyTop;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTALevelScriptActor.SetLocationEffects
struct AGTALevelScriptActor_SetLocationEffects_Params
{
	float                                              UnderwaterAmt;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TunnelAmt;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTALevelScriptActor.SetLightColors
struct AGTALevelScriptActor_SetLightColors_Params
{
	struct FColor                                      ambient;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      directional;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTALevelScriptActor.SetEnvironmentEffects
struct AGTALevelScriptActor_SetEnvironmentEffects_Params
{
	float                                              Foggyness;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeatHaze;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LightningFlash;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RIOT;                                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTALevelScriptActor.SetCCTV
struct AGTALevelScriptActor_SetCCTV_Params
{
	int                                                Type;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTALevelScriptActor.SetAdrenaline
struct AGTALevelScriptActor_SetAdrenaline_Params
{
	float                                              Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTALightBase.SetFarCorona
struct AGTALightBase_SetFarCorona_Params
{
	float                                              WithIntensity;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WithSize;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTALightBase.SetDecalComponentSize
struct AGTALightBase_SetDecalComponentSize_Params
{
	class UDecalComponent*                             Decal;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     newSize;                                                   // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTALightBase.GetProximityCooldownTime
struct AGTALightBase_GetProximityCooldownTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTALightBase.GetCoronaPosition
struct AGTALightBase_GetCoronaPosition_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTALightBase.GetCoronaColor
struct AGTALightBase_GetCoronaColor_Params
{
	struct FColor                                      ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTALightBase.ChangedLightSwitch
struct AGTALightBase_ChangedLightSwitch_Params
{
	bool                                               bOn;                                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsEditor;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAHeightFog.UpdateColors
struct AGTAHeightFog_UpdateColors_Params
{
};

// Function GTABase.GTAWindowLight.SetupLights
struct AGTAWindowLight_SetupLights_Params
{
	float                                              TimeOfDay;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAWindowLight.GetAttenuationMult
struct AGTAWindowLight_GetAttenuationMult_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAMarkerActor.StartDissolve
struct AGTAMarkerActor_StartDissolve_Params
{
	bool                                               bPickedUp;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAMarkerActor.SetPickupLight
struct AGTAMarkerActor_SetPickupLight_Params
{
	bool                                               bOn;                                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAMarkerActor.SetPickupFlags
struct AGTAMarkerActor_SetPickupFlags_Params
{
	bool                                               IsWeapon;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsOutOfStock;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPurchase;                                                // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShowMoney;                                                 // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAMarkerActor.SetPickupColor
struct AGTAMarkerActor_SetPickupColor_Params
{
	struct FColor                                      Color;                                                     // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAMarkerActor.SetMarkerOutline
struct AGTAMarkerActor_SetMarkerOutline_Params
{
	struct FColor                                      withColor;                                                 // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAMarkerActor.SetMarkerMesh
struct AGTAMarkerActor_SetMarkerMesh_Params
{
	class UStaticMesh*                                 withMesh;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAMarkerActor.SetMarkerColor
struct AGTAMarkerActor_SetMarkerColor_Params
{
	struct FColor                                      withColor;                                                 // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAMarkerActor.SetMarkerCameraGlow
struct AGTAMarkerActor_SetMarkerCameraGlow_Params
{
	bool                                               bShouldGlow;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsMainHidden;                                             // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAMarkerActor.SetGroundLocation
struct AGTAMarkerActor_SetGroundLocation_Params
{
	struct FVector                                     withLocation;                                              // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAMarkerActor.SetCheckpointType
struct AGTAMarkerActor_SetCheckpointType_Params
{
	int                                                Cpt;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAPathfindNodes.VCImportRegion
struct UGTAPathfindNodes_VCImportRegion_Params
{
};

// Function GTABase.GTAPathfindNodes.VCImportRawNodes
struct UGTAPathfindNodes_VCImportRawNodes_Params
{
};

// Function GTABase.GTAPathfindNodes.GTA3ImportRegion
struct UGTAPathfindNodes_GTA3ImportRegion_Params
{
};

// Function GTABase.GTAPathfindVisualization.SnapToNodeIndex
struct AGTAPathfindVisualization_SnapToNodeIndex_Params
{
};

// Function GTABase.GTAPathfindVisualization.SetReversePoint
struct AGTAPathfindVisualization_SetReversePoint_Params
{
};

// Function GTABase.GTAPathfindVisualization.SetDebugPoint
struct AGTAPathfindVisualization_SetDebugPoint_Params
{
};

// Function GTABase.GTAPathfindVisualization.RunMeshGenVisualization
struct AGTAPathfindVisualization_RunMeshGenVisualization_Params
{
};

// Function GTABase.GTAPathfindVisualization.DoFloodFill
struct AGTAPathfindVisualization_DoFloodFill_Params
{
};

// Function GTABase.FloodPath.RebuildPathUVs
struct UFloodPath_RebuildPathUVs_Params
{
};

// Function GTABase.FloodPath.OptimizePaths
struct UFloodPath_OptimizePaths_Params
{
};

// Function GTABase.FloodPath.CheckDebugPoint
struct UFloodPath_CheckDebugPoint_Params
{
};

// Function GTABase.GTAClothingTable.GetShirtMaskTexture
struct UGTAClothingTable_GetShirtMaskTexture_Params
{
	class UTexture*                                    ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAClothingTable.ConvertOldData
struct UGTAClothingTable_ConvertOldData_Params
{
};

// Function GTABase.GTAPlayerActor.UseBoneTweaks
struct AGTAPlayerActor_UseBoneTweaks_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAPlayerActor.SetupPlayerMorph
struct AGTAPlayerActor_SetupPlayerMorph_Params
{
	class UGTAPoseableComponent*                       forComp;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              withFatness;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              withRippedness;                                            // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAPlayerActor.GetSkeletalMesh
struct AGTAPlayerActor_GetSkeletalMesh_Params
{
	class USkeletalMesh*                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAPlayerActor.GetMeshForAttachment
struct AGTAPlayerActor_GetMeshForAttachment_Params
{
	class UGTAPoseableComponent*                       ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAPlayerActor.GetClothingTable
struct AGTAPlayerActor_GetClothingTable_Params
{
	class UGTAClothingTable*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAPlayerActor.GetBodyPart
struct AGTAPlayerActor_GetBodyPart_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkinnedMeshComponent*                       ReturnValue;                                               // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAPlayerController.ClearUserFocus
struct AGTAPlayerController_ClearUserFocus_Params
{
};

// Function GTABase.GTAPoseableComponent.UnbindClothFromMasterPoseComponent
struct UGTAPoseableComponent_UnbindClothFromMasterPoseComponent_Params
{
	bool                                               bRestoreSimulationSpace;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAPoseableComponent.SuspendClothingSimulation
struct UGTAPoseableComponent_SuspendClothingSimulation_Params
{
};

// Function GTABase.GTAPoseableComponent.SetMorphTargetWeight
struct UGTAPoseableComponent_SetMorphTargetWeight_Params
{
	struct FName                                       forMorph;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAPoseableComponent.ResumeClothingSimulation
struct UGTAPoseableComponent_ResumeClothingSimulation_Params
{
};

// Function GTABase.GTAPoseableComponent.ResetClothTeleportMode
struct UGTAPoseableComponent_ResetClothTeleportMode_Params
{
};

// Function GTABase.GTAPoseableComponent.IsClothingSimulationSuspended
struct UGTAPoseableComponent_IsClothingSimulationSuspended_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAPoseableComponent.GetClothingSimulationInteractor
struct UGTAPoseableComponent_GetClothingSimulationInteractor_Params
{
	class UClothingSimulationInteractor*               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAPoseableComponent.ForceClothNextUpdateTeleportAndReset
struct UGTAPoseableComponent_ForceClothNextUpdateTeleportAndReset_Params
{
};

// Function GTABase.GTAPoseableComponent.ForceClothNextUpdateTeleport
struct UGTAPoseableComponent_ForceClothNextUpdateTeleport_Params
{
};

// Function GTABase.GTAPoseableComponent.BindClothToMasterPoseComponent
struct UGTAPoseableComponent_BindClothToMasterPoseComponent_Params
{
};

// Function GTABase.GTAPostLightReplacer.PreviewInEditor
struct AGTAPostLightReplacer_PreviewInEditor_Params
{
};

// Function GTABase.GTAPostProcessVolume.UpdateColorOptions
struct AGTAPostProcessVolume_UpdateColorOptions_Params
{
};

// Function GTABase.GTAPostProcessVolume.SetCameraParameters
struct AGTAPostProcessVolume_SetCameraParameters_Params
{
	struct FLinearColor                                withValue;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAPostProcessVolume.SetAutoExposure
struct AGTAPostProcessVolume_SetAutoExposure_Params
{
	float                                              withValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTARadar.SwitchedMode
struct AGTARadar_SwitchedMode_Params
{
	bool                                               bMenuMode;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTARadar.SetupMenu
struct AGTARadar_SetupMenu_Params
{
	struct FVector                                     position;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     playerDirection;                                           // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              zoomAmt;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTARadar.IsActive
struct AGTARadar_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTARadar.GetReferencePoints
struct AGTARadar_GetReferencePoints_Params
{
	struct FVector                                     MinRef;                                                    // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     MaxRef;                                                    // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTARadar.GetRadarState
struct AGTARadar_GetRadarState_Params
{
	TEnumAsByte<GTABase_ERadarState>                   ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTARadar.GetMapZoomedOutPositionBounds
struct AGTARadar_GetMapZoomedOutPositionBounds_Params
{
	struct FVector4                                    ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTARadar.GetMapZoomedInPositionBounds
struct AGTARadar_GetMapZoomedInPositionBounds_Params
{
	struct FVector4                                    ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTARadar.GetMapZoomBounds
struct AGTARadar_GetMapZoomBounds_Params
{
	float                                              MinZoom;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxZoom;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTARadar.GetMapPositionBoundsWithZoom
struct AGTARadar_GetMapPositionBoundsWithZoom_Params
{
	float                                              CurrentZoom;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    Bounds;                                                    // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTARadar.GetGTARadarActor
struct AGTARadar_GetGTARadarActor_Params
{
	class AGTARadar*                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTARadar.FetchRadarComponents
struct AGTARadar_FetchRadarComponents_Params
{
	TArray<class UPrimitiveComponent*>                 Components;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function GTABase.GTARadar.ConvertToWorldSpace
struct AGTARadar_ConvertToWorldSpace_Params
{
	struct FVector                                     RadarPos;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTARadar.ConvertToRadarSpace
struct AGTARadar_ConvertToRadarSpace_Params
{
	struct FVector                                     WorldPos;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_Radar.SetUVs
struct UUI_Radar_SetUVs_Params
{
	struct FBox2D                                      newUVs;                                                    // 0x0000(0x0014)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_Radar.SetupMap
struct UUI_Radar_SetupMap_Params
{
	struct FVector                                     InitialPosition;                                           // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InitialZoom;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_Radar.ResizeMap
struct UUI_Radar_ResizeMap_Params
{
};

// Function GTABase.UI_Radar.RenderMap
struct UUI_Radar_RenderMap_Params
{
	struct FVector                                     position;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              zoomAmt;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_Radar.GetWorldPosition
struct UUI_Radar_GetWorldPosition_Params
{
	struct FVector2D                                   MousePosition;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_Radar.GetCurrentUVs
struct UUI_Radar_GetCurrentUVs_Params
{
	struct FBox2D                                      ReturnValue;                                               // 0x0000(0x0014)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_Radar.DoMapJump
struct UUI_Radar_DoMapJump_Params
{
	struct FVector2D                                   MousePosition;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_Radar.CloseMap
struct UUI_Radar_CloseMap_Params
{
};

// Function GTABase.UI_Radar.AddCustomWaypoint
struct UUI_Radar_AddCustomWaypoint_Params
{
	struct FVector2D                                   MousePosition;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.SoundNodeProceduralWavePlayer.StreamingAssetsLoadedCallback
struct USoundNodeProceduralWavePlayer_StreamingAssetsLoadedCallback_Params
{
};

// Function GTABase.SoundNodeProceduralWavePlayer.PreloadedAssetsLoadedCallback
struct USoundNodeProceduralWavePlayer_PreloadedAssetsLoadedCallback_Params
{
};

// Function GTABase.GTAScalableRichTextBlock.ForceRefreshProperties
struct UGTAScalableRichTextBlock_ForceRefreshProperties_Params
{
};

// Function GTABase.GTARTCaptureBase.UnregisterCoronaByID
struct AGTARTCaptureBase_UnregisterCoronaByID_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTARTCaptureBase.RegisterCoronaWithParams
struct AGTARTCaptureBase_RegisterCoronaWithParams_Params
{
	struct FVector                                     position;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                withColor;                                                 // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WithSize;                                                  // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WithBrightness;                                            // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTARTCaptureBase.RegisterCoronaUsingLight
struct AGTARTCaptureBase_RegisterCoronaUsingLight_Params
{
	class ULightComponent*                             ForLight;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WithSize;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTATargetHalo.UpdateTargetComponent
struct AGTATargetHalo_UpdateTargetComponent_Params
{
	class UMeshComponent*                              Component;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GTABase_ETargetHighlightType>          HighlightType;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                     // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTATargetHalo.SetupTargetComponent
struct AGTATargetHalo_SetupTargetComponent_Params
{
	class UMeshComponent*                              Component;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GTABase_ETargetHighlightType>          HighlightType;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InitialAlpha;                                              // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTATerrainDB.UpdateAll
struct UGTATerrainDB_UpdateAll_Params
{
};

// Function GTABase.GTATrafficLightCache.ClearForRebuild
struct UGTATrafficLightCache_ClearForRebuild_Params
{
};

// Function GTABase.UI_GTAHUDItem.SetWidgetTranslationPercent
struct UUI_GTAHUDItem_SetWidgetTranslationPercent_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetWantedLevel
struct UUI_GTAHUDItem_SetWantedLevel_Params
{
	int                                                numStars;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                numParole;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsBlinking;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetVisible
struct UUI_GTAHUDItem_SetVisible_Params
{
	bool                                               IsVisible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetTotalWidgetColor
struct UUI_GTAHUDItem_SetTotalWidgetColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetThirdImageColor
struct UUI_GTAHUDItem_SetThirdImageColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetThirdImage
struct UUI_GTAHUDItem_SetThirdImage_Params
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetThirdFillBarSizeAndFill
struct UUI_GTAHUDItem_SetThirdFillBarSizeAndFill_Params
{
	float                                              FillBarPct;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FillBarSize;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetSixthImageColor
struct UUI_GTAHUDItem_SetSixthImageColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetSixthImage
struct UUI_GTAHUDItem_SetSixthImage_Params
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetSecondImageOffsets
struct UUI_GTAHUDItem_SetSecondImageOffsets_Params
{
	float                                              xMin;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              yMin;                                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Xmax;                                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Ymax;                                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetSecondImageFillAmount
struct UUI_GTAHUDItem_SetSecondImageFillAmount_Params
{
	float                                              FillAmmount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetSecondImageFill
struct UUI_GTAHUDItem_SetSecondImageFill_Params
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                FillColor;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FillAmmount;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetSecondImageColor
struct UUI_GTAHUDItem_SetSecondImageColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetSecondImageAnchors
struct UUI_GTAHUDItem_SetSecondImageAnchors_Params
{
	float                                              xMin;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Xmax;                                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              yMin;                                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Ymax;                                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetSecondImage
struct UUI_GTAHUDItem_SetSecondImage_Params
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetSecondFillBarSizeAndFill
struct UUI_GTAHUDItem_SetSecondFillBarSizeAndFill_Params
{
	float                                              FillBarPct;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FillBarSize;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetPressed
struct UUI_GTAHUDItem_SetPressed_Params
{
	bool                                               IsPressed;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetPosition
struct UUI_GTAHUDItem_SetPosition_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Xmax;                                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Ymax;                                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetMappingImage
struct UUI_GTAHUDItem_SetMappingImage_Params
{
	class UTexture2D*                                  Tex;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              U;                                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              V;                                                         // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ULength;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VLength;                                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x0018(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetImageWithSpriteSheet
struct UUI_GTAHUDItem_SetImageWithSpriteSheet_Params
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              U;                                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              V;                                                         // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ULength;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VLength;                                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetImageOffsets
struct UUI_GTAHUDItem_SetImageOffsets_Params
{
	float                                              xMin;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              yMin;                                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Xmax;                                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Ymax;                                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetImageMaterial
struct UUI_GTAHUDItem_SetImageMaterial_Params
{
	class UMaterialInterface*                          Material;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetImageColor
struct UUI_GTAHUDItem_SetImageColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               forceVisible;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetImageAnchors
struct UUI_GTAHUDItem_SetImageAnchors_Params
{
	float                                              xMin;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Xmax;                                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              yMin;                                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Ymax;                                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetImage
struct UUI_GTAHUDItem_SetImage_Params
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetFourthImageColor
struct UUI_GTAHUDItem_SetFourthImageColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetFourthImage
struct UUI_GTAHUDItem_SetFourthImage_Params
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetFillBarSizeAndFill
struct UUI_GTAHUDItem_SetFillBarSizeAndFill_Params
{
	float                                              FillBarPct;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FillBarSize;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetFifthImageColor
struct UUI_GTAHUDItem_SetFifthImageColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetFifthImage
struct UUI_GTAHUDItem_SetFifthImage_Params
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetContentTextThree
struct UUI_GTAHUDItem_SetContentTextThree_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLinearColor                                FontColorOverride;                                         // 0x0018(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetContentTextFour
struct UUI_GTAHUDItem_SetContentTextFour_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLinearColor                                FontColorOverride;                                         // 0x0018(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetContentTextFive
struct UUI_GTAHUDItem_SetContentTextFive_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLinearColor                                FontColorOverride;                                         // 0x0018(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetContentTextAnchors
struct UUI_GTAHUDItem_SetContentTextAnchors_Params
{
	float                                              xMin;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Xmax;                                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              yMin;                                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Ymax;                                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetContentTextAdditional
struct UUI_GTAHUDItem_SetContentTextAdditional_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLinearColor                                FontColorOverride;                                         // 0x0018(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetContentText
struct UUI_GTAHUDItem_SetContentText_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLinearColor                                FontColorOverride;                                         // 0x0018(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetContentPercentOffset
struct UUI_GTAHUDItem_SetContentPercentOffset_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.SetAnchorsInDrawer
struct UUI_GTAHUDItem_SetAnchorsInDrawer_Params
{
	float                                              minX;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              maxX;                                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              minY;                                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              maxY;                                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.RefreshAfterSettingsChange
struct UUI_GTAHUDItem_RefreshAfterSettingsChange_Params
{
};

// Function GTABase.UI_GTAHUDItem.OverrideMappingImageLocation
struct UUI_GTAHUDItem_OverrideMappingImageLocation_Params
{
	float                                              XMinOverride;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              XMaxOverride;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              YMinOverride;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              YMaxOverride;                                              // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.GetPosition
struct UUI_GTAHUDItem_GetPosition_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Xmax;                                                      // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Ymax;                                                      // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.CustomFunctionWithStrings
struct UUI_GTAHUDItem_CustomFunctionWithStrings_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Strings;                                                   // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.CustomFunctionWithObjects
struct UUI_GTAHUDItem_CustomFunctionWithObjects_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSlotImageStruct>                    Objects;                                                   // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.CustomFunctionWithObject
struct UUI_GTAHUDItem_CustomFunctionWithObject_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Object;                                                    // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.CustomFunctionWithInteger
struct UUI_GTAHUDItem_CustomFunctionWithInteger_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                integer;                                                   // 0x0010(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.CustomFunctionWithFloats
struct UUI_GTAHUDItem_CustomFunctionWithFloats_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      Floats;                                                    // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.CustomFunctionWithFloat
struct UUI_GTAHUDItem_CustomFunctionWithFloat_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              floatNum;                                                  // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.CustomFunctionWithColors
struct UUI_GTAHUDItem_CustomFunctionWithColors_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                        Colors;                                                    // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.CustomFunctionWithColor
struct UUI_GTAHUDItem_CustomFunctionWithColor_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.CustomFunction
struct UUI_GTAHUDItem_CustomFunction_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDItem.CustomBoolReturnFunction
struct UUI_GTAHUDItem_CustomBoolReturnFunction_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDDrawer.UpdateItemsForSettings
struct UUI_GTAHUDDrawer_UpdateItemsForSettings_Params
{
	struct FString                                     Setting;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDDrawer.SetVisible
struct UUI_GTAHUDDrawer_SetVisible_Params
{
	bool                                               IsVisible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDDrawer.SetScreenSize
struct UUI_GTAHUDDrawer_SetScreenSize_Params
{
	float                                              screenWidth;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              screenHeight;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDDrawer.SetHUDDrawerScale
struct UUI_GTAHUDDrawer_SetHUDDrawerScale_Params
{
	float                                              HudMultX;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HudMultY;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDDrawer.RemoveGTAHUDItem
struct UUI_GTAHUDDrawer_RemoveGTAHUDItem_Params
{
	struct FName                                       ForName;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDDrawer.GetScreenMultAndOverrideSize
struct UUI_GTAHUDDrawer_GetScreenMultAndOverrideSize_Params
{
	float                                              SizeMult;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WidthOverride;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeightOverride;                                            // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_GTAHUDDrawer.GetGTAHUDItem
struct UUI_GTAHUDDrawer_GetGTAHUDItem_Params
{
	struct FName                                       ForName;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CreateIfNotFound;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUI_GTAHUDItem*                              ReturnValue;                                               // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UI_LoadingScreen.SetImageWithTexture
struct UUI_LoadingScreen_SetImageWithTexture_Params
{
	int                                                gameNumber;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Texture;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAUpgradePart.SetupLights
struct AGTAUpgradePart_SetupLights_Params
{
};

// Function GTABase.GTAUpgradePart.EnableLights
struct AGTAUpgradePart_EnableLights_Params
{
	bool                                               bEnableLightsL;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableLightsR;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVehicle.UpdateEngineOn
struct AGTAVehicle_UpdateEngineOn_Params
{
	bool                                               bNewEngineOn;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVehicle.ShowExtraComponent
struct AGTAVehicle_ShowExtraComponent_Params
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Visible;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVehicle.SetupVehicleBP
struct AGTAVehicle_SetupVehicleBP_Params
{
};

// Function GTABase.GTAVehicle.SetupHeadlightOption
struct AGTAVehicle_SetupHeadlightOption_Params
{
	struct FGTAHeadlightSetting                        Setting;                                                   // 0x0000(0x0014)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVehicle.SetTaxiLight
struct AGTAVehicle_SetTaxiLight_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVehicle.SetSpecialCarLights
struct AGTAVehicle_SetSpecialCarLights_Params
{
	TEnumAsByte<GTABase_EFSpecialLightType>            LightToModify;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnable;                                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVehicle.SetLicensePlateDesign
struct AGTAVehicle_SetLicensePlateDesign_Params
{
	int                                                Param;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVehicle.SetLicensePlate
struct AGTAVehicle_SetLicensePlate_Params
{
	struct FString                                     WithText;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVehicle.SetDirtiness
struct AGTAVehicle_SetDirtiness_Params
{
	float                                              dirtinessAlpha;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVehicle.SetDamagedPart
struct AGTAVehicle_SetDamagedPart_Params
{
	int                                                frameID;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDamaged;                                                  // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVehicle.SetCopterSpotLight
struct AGTAVehicle_SetCopterSpotLight_Params
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              brightnessPercent;                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVehicle.SetColorEntry
struct AGTAVehicle_SetColorEntry_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ColorIndex;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MetallicOverride;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVehicle.SetColor
struct AGTAVehicle_SetColor_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      Color;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVehicle.SetCarLights
struct AGTAVehicle_SetCarLights_Params
{
	bool                                               bLeftHeadlight;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRightHeadlight;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLeftTaillight;                                            // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRightTaillight;                                           // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVehicle.SetBoneDamaged
struct AGTAVehicle_SetBoneDamaged_Params
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDamaged;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVehicle.MeshBrokenNearby
struct AGTAVehicle_MeshBrokenNearby_Params
{
	struct FVector                                     EventLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVehicle.IsComponentVisible
struct AGTAVehicle_IsComponentVisible_Params
{
	class USceneComponent*                             Component;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVehicle.InitializeColors
struct AGTAVehicle_InitializeColors_Params
{
	class UMaterialInterface*                          remapMaterial;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVehicle.GetVehicleData
struct AGTAVehicle_GetVehicleData_Params
{
	class UGTAVehicleUserData*                         ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVehicle.GetPlateRenderDistance
struct AGTAVehicle_GetPlateRenderDistance_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVehicle.GetPhysicsMesh
struct AGTAVehicle_GetPhysicsMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVehicle.GetHeadlightDecalMIC
struct AGTAVehicle_GetHeadlightDecalMIC_Params
{
	bool                                               bLeftHeadlight;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRightHeadlight;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPlayerOccupied;                                         // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceConstant*                   ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVehicle.GetAttachedFX
struct AGTAVehicle_GetAttachedFX_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*                    ReturnValue;                                               // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVehicle.ExtraComponentShown
struct AGTAVehicle_ExtraComponentShown_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVehicle.CreatePointLightComponentUsingClass
struct AGTAVehicle_CreatePointLightComponentUsingClass_Params
{
	class UClass*                                      ComponentToCreate;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPointLightComponent*                        ReturnValue;                                               // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVehicle.CleanupPhysState
struct AGTAVehicle_CleanupPhysState_Params
{
};

// Function GTABase.GTAVehicle.BoneSetAsDamaged
struct AGTAVehicle_BoneSetAsDamaged_Params
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDamaged;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVehicleColorDB.Alphabetize
struct UGTAVehicleColorDB_Alphabetize_Params
{
};

// Function GTABase.GTAViewportClient.InitTransition
struct UGTAViewportClient_InitTransition_Params
{
	class UUITransition*                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAViewportClient.GetViewportClient
struct UGTAViewportClient_GetViewportClient_Params
{
	class UWorld*                                      ForWorld;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGTAViewportClient*                          ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAViewportClient.GetTransitionManager
struct UGTAViewportClient_GetTransitionManager_Params
{
	class UUITransition*                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAViewportClient.DestroyTransition
struct UGTAViewportClient_DestroyTransition_Params
{
};

// Function GTABase.GTAVolumetricCloud.UpdateCloudiness
struct AGTAVolumetricCloud_UpdateCloudiness_Params
{
	float                                              SunAmt;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CloudAmt;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVolumetricCloud.SetSkyParams
struct AGTAVolumetricCloud_SetSkyParams_Params
{
	float                                              SunIntensity;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MoonIntensity;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVolumetricCloud.SetQualityLevel
struct AGTAVolumetricCloud_SetQualityLevel_Params
{
	int                                                quality;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVolumetricCloud.SetExtinction
struct AGTAVolumetricCloud_SetExtinction_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVolumetricCloud.SetEmission
struct AGTAVolumetricCloud_SetEmission_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVolumetricCloud.SetColor
struct AGTAVolumetricCloud_SetColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Intensity;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              raleigh;                                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkyAtmosphereComponent*                     AtmosphereComponent;                                       // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAVolumetricCloud.IsHDRActive
struct AGTAVolumetricCloud_IsHDRActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAWater.GetGTAWaterActor
struct AGTAWater_GetGTAWaterActor_Params
{
	class AGTAWater*                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAWeapon.StopSpin
struct AGTAWeapon_StopSpin_Params
{
};

// Function GTABase.GTAWeapon.SetFlashAmount
struct AGTAWeapon_SetFlashAmount_Params
{
	float                                              amt;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAWeapon.SetEffect
struct AGTAWeapon_SetEffect_Params
{
	int                                                effectNo;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              amt;                                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAWeapon.SetBarrelRotation
struct AGTAWeapon_SetBarrelRotation_Params
{
	float                                              amt;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAWeapon.GetFlashMaterialIndex
struct AGTAWeapon_GetFlashMaterialIndex_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAWeapon.AttachWeaponEffect
struct AGTAWeapon_AttachWeaponEffect_Params
{
	class UParticleSystemComponent*                    fxComp;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAWeapon.AddSpin
struct AGTAWeapon_AddSpin_Params
{
	class AGTAWeapon*                                  srcWeapon;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAWindowLights.MICHasBoolParameterSet
struct AGTAWindowLights_MICHasBoolParameterSet_Params
{
	class UMaterialInstanceConstant*                   MIC;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ParameterName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAWindowLights.IsEmissiveWindowMaterial
struct AGTAWindowLights_IsEmissiveWindowMaterial_Params
{
	class UMaterialInterface*                          Mat;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGTAMaterialData*                            UserData;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWindowLightCollectionParameters            Params;                                                    // 0x0010(0x0058)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAWindowLights.GetChannelMultipliers
struct AGTAWindowLights_GetChannelMultipliers_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAWindowLights.GetAverageTextureColor
struct AGTAWindowLights_GetAverageTextureColor_Params
{
	class UTexture*                                    forTexture;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAWindowLights.ConstructLight
struct AGTAWindowLights_ConstructLight_Params
{
	int                                                detailSetting;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Trx;                                                       // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                lightColor;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Width;                                                     // 0x0050(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Height;                                                    // 0x0054(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULightComponent*                             ReturnValue;                                               // 0x0058(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAWindowLights.Build
struct AGTAWindowLights_Build_Params
{
};

// Function GTABase.GTAWorldComposition.ProcessedStreamRequest
struct UGTAWorldComposition_ProcessedStreamRequest_Params
{
	struct FGTAStreamRequest                           request;                                                   // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAWorldComposition.LoadAllHLODMaps
struct UGTAWorldComposition_LoadAllHLODMaps_Params
{
};

// Function GTABase.GTAWorldComposition.GenerateQuadrantHLODs
struct UGTAWorldComposition_GenerateQuadrantHLODs_Params
{
};

// Function GTABase.GTAWorldComposition.GenerateDistantSectionHLODs
struct UGTAWorldComposition_GenerateDistantSectionHLODs_Params
{
};

// Function GTABase.GTAWorldComposition.GenerateAllWorldComp
struct UGTAWorldComposition_GenerateAllWorldComp_Params
{
};

// Function GTABase.GTAWorldComposition.GenerateAllStreetLights
struct UGTAWorldComposition_GenerateAllStreetLights_Params
{
};

// Function GTABase.GTAWorldComposition.GenerateAllProxyLighting
struct UGTAWorldComposition_GenerateAllProxyLighting_Params
{
};

// Function GTABase.GTAWorldComposition.GenerateAllMeshProxies
struct UGTAWorldComposition_GenerateAllMeshProxies_Params
{
};

// Function GTABase.GTAWorldComposition.GenerateAllHeadlightRibbons
struct UGTAWorldComposition_GenerateAllHeadlightRibbons_Params
{
};

// Function GTABase.GTAWorldComposition.BuildAllMapData
struct UGTAWorldComposition_BuildAllMapData_Params
{
};

// Function GTABase.GTAWorldSettings.WorstTextureUsage
struct AGTAWorldSettings_WorstTextureUsage_Params
{
};

// Function GTABase.GTAWorldSettings.WorstMapData
struct AGTAWorldSettings_WorstMapData_Params
{
};

// Function GTABase.GTAWorldSettings.VertexColorSize
struct AGTAWorldSettings_VertexColorSize_Params
{
};

// Function GTABase.GTAWorldSettings.ToggleOnlyCastFarShadows
struct AGTAWorldSettings_ToggleOnlyCastFarShadows_Params
{
};

// Function GTABase.GTAWorldSettings.ResetLODs
struct AGTAWorldSettings_ResetLODs_Params
{
};

// Function GTABase.GTAWorldSettings.OscillateLODs
struct AGTAWorldSettings_OscillateLODs_Params
{
};

// Function GTABase.GTAWorldSettings.HighVertCounts
struct AGTAWorldSettings_HighVertCounts_Params
{
};

// Function GTABase.GTAWorldSettings.GetCoronaComponent
struct AGTAWorldSettings_GetCoronaComponent_Params
{
	bool                                               bDynamic;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpClose;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGTACoronaComponent*                         ReturnValue;                                               // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.GTAWorldSettings.FixLODs
struct AGTAWorldSettings_FixLODs_Params
{
};

// Function GTABase.GTAWorldSettings.FindDefaultMat
struct AGTAWorldSettings_FindDefaultMat_Params
{
};

// Function GTABase.GTAWorldSettings.CycleFarShadowModes
struct AGTAWorldSettings_CycleFarShadowModes_Params
{
};

// Function GTABase.IPLMapActor.GetStaticVolumetricStrength
struct AIPLMapActor_GetStaticVolumetricStrength_Params
{
	float                                              intoAO;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              intoUplight;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.IPLMapActor.CopyVertexLighting
struct AIPLMapActor_CopyVertexLighting_Params
{
	class UMeshComponent*                              ToComponent;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSwapToDynamic;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.IPLMapActor.ChangedLightSwitch
struct AIPLMapActor_ChangedLightSwitch_Params
{
	bool                                               bOn;                                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsEditor;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.DynamicIPLMapActor.ShouldForceInstanceBakedColors
struct ADynamicIPLMapActor_ShouldForceInstanceBakedColors_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.DynamicIPLMapActor.SetupBroken
struct ADynamicIPLMapActor_SetupBroken_Params
{
	struct FVector                                     impulseSrc;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     impulseVelocity;                                           // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  floorTransform;                                            // 0x0020(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.DynamicIPLMapActor.SetupBreakableInGTA
struct ADynamicIPLMapActor_SetupBreakableInGTA_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.DynamicIPLMapActor.SetEffect
struct ADynamicIPLMapActor_SetEffect_Params
{
	int                                                effectNo;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              amt;                                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.DynamicIPLMapActor.OnUpdatedDamageAmount
struct ADynamicIPLMapActor_OnUpdatedDamageAmount_Params
{
};

// Function GTABase.DynamicIPLMapActor.GetTrafficState
struct ADynamicIPLMapActor_GetTrafficState_Params
{
	bool                                               Enabled;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                lightState;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                walkState;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.DynamicIPLMapActor.GetPhysicsFloorC
struct ADynamicIPLMapActor_GetPhysicsFloorC_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.DynamicIPLMapActor.EntityRemoved
struct ADynamicIPLMapActor_EntityRemoved_Params
{
	int                                                reason;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.DynamicIPLMapActor.EntityLinked
struct ADynamicIPLMapActor_EntityLinked_Params
{
	bool                                               bShouldBeVisible;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.DynamicIPLMapActor.Dislodged
struct ADynamicIPLMapActor_Dislodged_Params
{
};

// Function GTABase.DynamicIPLMapActor.BreakableImpulseFactor
struct ADynamicIPLMapActor_BreakableImpulseFactor_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.DynamicIPLMapActor.AddRandomOutwardVelocityToAllBodies
struct ADynamicIPLMapActor_AddRandomOutwardVelocityToAllBodies_Params
{
	class USkeletalMeshComponent*                      InPrimitive;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              amt;                                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.DynamicIPLMapActor.AddImpulseAtLocationForAllBodiesBelow
struct ADynamicIPLMapActor_AddImpulseAtLocationForAllBodiesBelow_Params
{
	class USkeletalMeshComponent*                      InPrimitive;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Impulse;                                                   // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     position;                                                  // 0x0014(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.MeshBevellingDataBase.Unbevel
struct UMeshBevellingDataBase_Unbevel_Params
{
};

// Function GTABase.MeshBevellingDataBase.Bevel
struct UMeshBevellingDataBase_Bevel_Params
{
	bool                                               bSkipBuild;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.ProcTextData.ConstructText
struct UProcTextData_ConstructText_Params
{
	class UProceduralMeshComponent*                    onComponent;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceConstant*                   UsingMIC;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Text;                                                      // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Scale;                                                     // 0x0020(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCentered;                                                 // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHorizontalLeft;                                           // 0x0029(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LineScaling;                                               // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.Rage.SetSocialclubMenu
struct URage_SetSocialclubMenu_Params
{
	class UGTASocialClub*                              sc;                                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.StreetLightMapActor.SetupImpostorComponent
struct AStreetLightMapActor_SetupImpostorComponent_Params
{
	class UStaticMeshComponent*                        Component;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.StreetLightMapActor.SetLowQualityLights
struct AStreetLightMapActor_SetLowQualityLights_Params
{
	bool                                               bIsLow;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.StreetLightMapActor.SetLightVisibility
struct AStreetLightMapActor_SetLightVisibility_Params
{
	class ULightComponent*                             Component;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsVisible;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.StreetLightMapActor.SetLights
struct AStreetLightMapActor_SetLights_Params
{
	bool                                               bLightsOn;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceForEditor;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.StreetLightMapActor.SetAsLowQualityLightTemplate
struct AStreetLightMapActor_SetAsLowQualityLightTemplate_Params
{
};

// Function GTABase.StreetLightMapActor.RerollLights
struct AStreetLightMapActor_RerollLights_Params
{
};

// Function GTABase.StreetLightMapActor.RemoveDecal
struct AStreetLightMapActor_RemoveDecal_Params
{
};

// Function GTABase.StreetLightMapActor.EnableViz
struct AStreetLightMapActor_EnableViz_Params
{
};

// Function GTABase.StreetLightMapActor.BuildDecal
struct AStreetLightMapActor_BuildDecal_Params
{
};

// Function GTABase.UITransition.UseTransitionObject
struct UUITransition_UseTransitionObject_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransition.StartMenu
struct UUITransition_StartMenu_Params
{
	class APlayerController*                           OwningPlayer;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ScreenClass;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GTABase_EGTATransitionState>           startingState;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NameToCreateWith;                                          // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransition.Start
struct UUITransition_Start_Params
{
	class APlayerController*                           OwningPlayer;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ScreenClass;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GTABase_EGTATransitionState>           startingState;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NameToCreateWith;                                          // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransition.SetTransitionStateFadeTime
struct UUITransition_SetTransitionStateFadeTime_Params
{
	TEnumAsByte<GTABase_EGTATransitionState>           StateToChange;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeToFade;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransition.SetMenuTransitionStateFadeTime
struct UUITransition_SetMenuTransitionStateFadeTime_Params
{
	TEnumAsByte<GTABase_EGTATransitionState>           StateToChange;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeToFade;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransition.IsOpaque
struct UUITransition_IsOpaque_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransition.InterruptCurrentTransition
struct UUITransition_InterruptCurrentTransition_Params
{
	class APlayerController*                           OwningPlayer;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ScreenClass;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GTABase_EGTATransitionState>           startingState;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NameToCreateWith;                                          // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               takeOldOpacity;                                            // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransition.InterruptCurrentMenuTransition
struct UUITransition_InterruptCurrentMenuTransition_Params
{
	class APlayerController*                           OwningPlayer;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ScreenClass;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GTABase_EGTATransitionState>           startingState;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NameToCreateWith;                                          // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               takeOldOpacity;                                            // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransition.GetState
struct UUITransition_GetState_Params
{
	TEnumAsByte<GTABase_EGTATransitionState>           ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransition.GetIsFading
struct UUITransition_GetIsFading_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransition.CustomFunctionOnTransitionWithString
struct UUITransition_CustomFunctionOnTransitionWithString_Params
{
	struct FString                                     FunctionString;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VariableString;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransition.CustomFunctionOnTransitionWithColor
struct UUITransition_CustomFunctionOnTransitionWithColor_Params
{
	struct FString                                     FunctionString;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransition.CustomFunctionOnTransition
struct UUITransition_CustomFunctionOnTransition_Params
{
	struct FString                                     FunctionString;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransition.ContinueMenu
struct UUITransition_ContinueMenu_Params
{
	TEnumAsByte<GTABase_EGTATransitionState>           toState;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransition.Continue
struct UUITransition_Continue_Params
{
	TEnumAsByte<GTABase_EGTATransitionState>           toState;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransitionScreen.SetProgress
struct UUITransitionScreen_SetProgress_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransitionScreen.SetHudItemPosition
struct UUITransitionScreen_SetHudItemPosition_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Xmax;                                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Ymax;                                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransitionScreen.OverrideBackgroundColor
struct UUITransitionScreen_OverrideBackgroundColor_Params
{
	struct FLinearColor                                ToColor;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransitionScreen.IsOpaque
struct UUITransitionScreen_IsOpaque_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransitionScreen.GetState
struct UUITransitionScreen_GetState_Params
{
	TEnumAsByte<GTABase_EGTATransitionState>           ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransitionScreen.GetIsFading
struct UUITransitionScreen_GetIsFading_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransitionScreen.GetHudItem
struct UUITransitionScreen_GetHudItem_Params
{
	class UUI_GTAHUDItem*                              ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransitionScreen.GetGameterface
struct UUITransitionScreen_GetGameterface_Params
{
	class UGameterface*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransitionScreen.GetDialogVolumeMultiplier
struct UUITransitionScreen_GetDialogVolumeMultiplier_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransitionScreen.GetCurrentFadeOpacity
struct UUITransitionScreen_GetCurrentFadeOpacity_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransitionScreen.ForceCurrentFadeOpacity
struct UUITransitionScreen_ForceCurrentFadeOpacity_Params
{
	float                                              newOpacity;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransitionScreen.CustomFunctionFromStringWithString
struct UUITransitionScreen_CustomFunctionFromStringWithString_Params
{
	struct FString                                     FunctionString;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VariableString;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransitionScreen.CustomFunctionFromStringWithColor
struct UUITransitionScreen_CustomFunctionFromStringWithColor_Params
{
	struct FString                                     FunctionString;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransitionScreen.CustomFunctionFromString
struct UUITransitionScreen_CustomFunctionFromString_Params
{
	struct FString                                     FunctionString;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransitionScreen.Continue
struct UUITransitionScreen_Continue_Params
{
	TEnumAsByte<GTABase_EGTATransitionState>           toState;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransitionScreen.BP_SetTransitionStateFadeTime
struct UUITransitionScreen_BP_SetTransitionStateFadeTime_Params
{
	TEnumAsByte<GTABase_EGTATransitionState>           StateToChange;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeToFade;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UITransitionScreen.BP_Continue
struct UUITransitionScreen_BP_Continue_Params
{
};

// Function GTABase.UITransitionScreen.AllowBackwardsTransition
struct UUITransitionScreen_AllowBackwardsTransition_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GTABase.UVImage.SetUVs
struct UUVImage_SetUVs_Params
{
	struct FBox2D                                      InUVs;                                                     // 0x0000(0x0014)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
