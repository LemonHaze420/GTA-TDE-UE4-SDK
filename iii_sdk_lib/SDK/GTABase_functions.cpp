// Name: GTA III, Version: 1.0.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.DFFExtraData.CheckAllReferences
//		Flags  -> (Final, Native, Public)
void UDFFExtraData::CheckAllReferences()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.DFFExtraData.CheckAllReferences");

	UDFFExtraData_CheckAllReferences_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.DistantHLODBuilder.BuildAtlas
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UDistantHLODBuilder::BuildAtlas()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.DistantHLODBuilder.BuildAtlas");

	UDistantHLODBuilder_BuildAtlas_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B8AF70
//		Name   -> Function GTABase.GTAGameMode.GetGameterface
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UGameterface*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameterface* AGTAGameMode::GetGameterface()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAGameMode.GetGameterface");

	AGTAGameMode_GetGameterface_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B78070
//		Name   -> Function GTABase.Gameterface.WasRightBumperButtonJustPressed
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::WasRightBumperButtonJustPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.WasRightBumperButtonJustPressed");

	UGameterface_WasRightBumperButtonJustPressed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B780A0
//		Name   -> Function GTABase.Gameterface.WasLeftBumperButtonJustPressed
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::WasLeftBumperButtonJustPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.WasLeftBumperButtonJustPressed");

	UGameterface_WasLeftBumperButtonJustPressed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B780D0
//		Name   -> Function GTABase.Gameterface.WasBackButtonJustPressed
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::WasBackButtonJustPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.WasBackButtonJustPressed");

	UGameterface_WasBackButtonJustPressed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B78100
//		Name   -> Function GTABase.Gameterface.WasAcceptButtonJustPressed
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::WasAcceptButtonJustPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.WasAcceptButtonJustPressed");

	UGameterface_WasAcceptButtonJustPressed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B79BA0
//		Name   -> Function GTABase.Gameterface.UseSystemFont
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::UseSystemFont()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.UseSystemFont");

	UGameterface_UseSystemFont_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B75CE0
//		Name   -> Function GTABase.Gameterface.UseSocialClubInGameMenu
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::UseSocialClubInGameMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.UseSocialClubInGameMenu");

	UGameterface_UseSocialClubInGameMenu_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B79660
//		Name   -> Function GTABase.Gameterface.UpdateMapCustomWaypoint
//		Flags  -> (Native, Public)
void UGameterface::UpdateMapCustomWaypoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.UpdateMapCustomWaypoint");

	UGameterface_UpdateMapCustomWaypoint_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B76940
//		Name   -> Function GTABase.Gameterface.TheTextGet
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     missionText                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGameterface::TheTextGet(const struct FString& Key, const struct FString& missionText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.TheTextGet");

	UGameterface_TheTextGet_Params params {};
	params.Key = Key;
	params.missionText = missionText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B75D00
//		Name   -> Function GTABase.Gameterface.StopIntroMovie
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGameterface::StopIntroMovie()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.StopIntroMovie");

	UGameterface_StopIntroMovie_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B79E60
//		Name   -> Function GTABase.Gameterface.StopCredits
//		Flags  -> (Native, Public, BlueprintCallable)
void UGameterface::StopCredits()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.StopCredits");

	UGameterface_StopCredits_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7AB90
//		Name   -> Function GTABase.Gameterface.StartTransition
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     TransitionToStart                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterface::StartTransition(const struct FString& TransitionToStart)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.StartTransition");

	UGameterface_StartTransition_Params params {};
	params.TransitionToStart = TransitionToStart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B76B30
//		Name   -> Function GTABase.Gameterface.StartRemapping
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                mappingID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUserWidget*                                 ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUserWidget* UGameterface::StartRemapping(int mappingID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.StartRemapping");

	UGameterface_StartRemapping_Params params {};
	params.mappingID = mappingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B78D40
//		Name   -> Function GTABase.Gameterface.StartNewGameFromMenu
//		Flags  -> (Native, Public, BlueprintCallable)
void UGameterface::StartNewGameFromMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.StartNewGameFromMenu");

	UGameterface_StartNewGameFromMenu_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7ACD0
//		Name   -> Function GTABase.Gameterface.StartLoadingTransition
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGameterface::StartLoadingTransition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.StartLoadingTransition");

	UGameterface_StartLoadingTransition_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B75E10
//		Name   -> Function GTABase.Gameterface.StartIntroMovie
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGameterface::StartIntroMovie()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.StartIntroMovie");

	UGameterface_StartIntroMovie_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.Gameterface.SpawnExplosion
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<GTABase_EGTAExplosionType>             Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<GTABase_EGTAExplosionSurface>          Surface                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     SurfaceNormal                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                DebrisCount                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      ExplodingActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSuppressLight                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AGTAExplosion*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AGTAExplosion* UGameterface::SpawnExplosion(const struct FVector& Location, TEnumAsByte<GTABase_EGTAExplosionType> Type, TEnumAsByte<GTABase_EGTAExplosionSurface> Surface, const struct FVector& SurfaceNormal, float Scale, int DebrisCount, class AActor* ExplodingActor, bool bSuppressLight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SpawnExplosion");

	UGameterface_SpawnExplosion_Params params {};
	params.Location = Location;
	params.Type = Type;
	params.Surface = Surface;
	params.SurfaceNormal = SurfaceNormal;
	params.Scale = Scale;
	params.DebrisCount = DebrisCount;
	params.ExplodingActor = ExplodingActor;
	params.bSuppressLight = bSuppressLight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B76070
//		Name   -> Function GTABase.Gameterface.SocialClubSignUp
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGameterface::SocialClubSignUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SocialClubSignUp");

	UGameterface_SocialClubSignUp_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B75FD0
//		Name   -> Function GTABase.Gameterface.SocialClubSignOut
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGameterface::SocialClubSignOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SocialClubSignOut");

	UGameterface_SocialClubSignOut_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B76110
//		Name   -> Function GTABase.Gameterface.SocialClubSignIn
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGameterface::SocialClubSignIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SocialClubSignIn");

	UGameterface_SocialClubSignIn_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.Gameterface.SocialClubShowAchievements
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGameterface::SocialClubShowAchievements()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SocialClubShowAchievements");

	UGameterface_SocialClubShowAchievements_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B761B0
//		Name   -> Function GTABase.Gameterface.SocialClubIsLinked
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::SocialClubIsLinked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SocialClubIsLinked");

	UGameterface_SocialClubIsLinked_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B762D0
//		Name   -> Function GTABase.Gameterface.SocialClubAreServicesAvailable
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::SocialClubAreServicesAvailable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SocialClubAreServicesAvailable");

	UGameterface_SocialClubAreServicesAvailable_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B7B3D0
//		Name   -> Function GTABase.Gameterface.SnapToWorldZ
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     Coord                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              AdditionalZOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::STATIC_SnapToWorldZ(struct FVector* Coord, float AdditionalZOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SnapToWorldZ");

	UGameterface_SnapToWorldZ_Params params {};
	params.AdditionalZOffset = AdditionalZOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Coord != nullptr)
		*Coord = params.Coord;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B78BC0
//		Name   -> Function GTABase.Gameterface.SlotHasSave
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                slotnum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::SlotHasSave(int slotnum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SlotHasSave");

	UGameterface_SlotHasSave_Params params {};
	params.slotnum = slotnum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B7ADF0
//		Name   -> Function GTABase.Gameterface.ShowHUDDrawer
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               CreateIfNotMade                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterface::ShowHUDDrawer(bool Visible, bool CreateIfNotMade)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.ShowHUDDrawer");

	UGameterface_ShowHUDDrawer_Params params {};
	params.Visible = Visible;
	params.CreateIfNotMade = CreateIfNotMade;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B79EB0
//		Name   -> Function GTABase.Gameterface.ShouldUseTransitionWarnings
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		float                                              TimeBeforeWarning                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::ShouldUseTransitionWarnings(float* TimeBeforeWarning)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.ShouldUseTransitionWarnings");

	UGameterface_ShouldUseTransitionWarnings_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TimeBeforeWarning != nullptr)
		*TimeBeforeWarning = params.TimeBeforeWarning;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B75CE0
//		Name   -> Function GTABase.Gameterface.ShouldShowFullOptions
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::ShouldShowFullOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.ShouldShowFullOptions");

	UGameterface_ShouldShowFullOptions_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B75CC0
//		Name   -> Function GTABase.Gameterface.SetUserFocusToGameViewport
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UGameterface::STATIC_SetUserFocusToGameViewport()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SetUserFocusToGameViewport");

	UGameterface_SetUserFocusToGameViewport_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7A010
//		Name   -> Function GTABase.Gameterface.SetTransitionStateFadeTime
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           StateToChange                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TimeToFade                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterface::SetTransitionStateFadeTime(TEnumAsByte<GTABase_EGTATransitionState> StateToChange, float TimeToFade)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SetTransitionStateFadeTime");

	UGameterface_SetTransitionStateFadeTime_Params params {};
	params.StateToChange = StateToChange;
	params.TimeToFade = TimeToFade;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7A170
//		Name   -> Function GTABase.Gameterface.SetMenuTransitionStateFadeTime
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           StateToChange                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TimeToFade                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterface::SetMenuTransitionStateFadeTime(TEnumAsByte<GTABase_EGTATransitionState> StateToChange, float TimeToFade)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SetMenuTransitionStateFadeTime");

	UGameterface_SetMenuTransitionStateFadeTime_Params params {};
	params.StateToChange = StateToChange;
	params.TimeToFade = TimeToFade;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7AAC0
//		Name   -> Function GTABase.Gameterface.SetLoadingTransitionProgress
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterface::SetLoadingTransitionProgress(float Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SetLoadingTransitionProgress");

	UGameterface_SetLoadingTransitionProgress_Params params {};
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B79150
//		Name   -> Function GTABase.Gameterface.SetCustomWaypoint
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterface::SetCustomWaypoint(const struct FVector& position)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SetCustomWaypoint");

	UGameterface_SetCustomWaypoint_Params params {};
	params.position = position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B76920
//		Name   -> Function GTABase.Gameterface.SaveKeyboardMappings
//		Flags  -> (Native, Public, BlueprintCallable)
void UGameterface::SaveKeyboardMappings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SaveKeyboardMappings");

	UGameterface_SaveKeyboardMappings_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B78720
//		Name   -> Function GTABase.Gameterface.SaveDataInSlot
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterface::SaveDataInSlot(int SlotIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SaveDataInSlot");

	UGameterface_SaveDataInSlot_Params params {};
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B78D10
//		Name   -> Function GTABase.Gameterface.ResumeGameFromMenu
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::ResumeGameFromMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.ResumeGameFromMenu");

	UGameterface_ResumeGameFromMenu_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B79890
//		Name   -> Function GTABase.Gameterface.RestartWithFreshMenu
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::RestartWithFreshMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.RestartWithFreshMenu");

	UGameterface_RestartWithFreshMenu_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B77010
//		Name   -> Function GTABase.Gameterface.ReplaceGameSpecificImageTags
//		Flags  -> (Native, Public, HasOutParms)
// Parameters:
//		struct FString                                     QueuedMessage                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterface::ReplaceGameSpecificImageTags(struct FString* QueuedMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.ReplaceGameSpecificImageTags");

	UGameterface_ReplaceGameSpecificImageTags_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QueuedMessage != nullptr)
		*QueuedMessage = params.QueuedMessage;

}


// Function:
//		Offset -> 0x00B75E60
//		Name   -> Function GTABase.Gameterface.RefreshSocialClubAchivements
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::RefreshSocialClubAchivements()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.RefreshSocialClubAchivements");

	UGameterface_RefreshSocialClubAchivements_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B78ED0
//		Name   -> Function GTABase.Gameterface.RefreshMenuUserInfo
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGameterface::RefreshMenuUserInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.RefreshMenuUserInfo");

	UGameterface_RefreshMenuUserInfo_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.Gameterface.PromptLogin
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGameterface::PromptLogin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.PromptLogin");

	UGameterface_PromptLogin_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B764F0
//		Name   -> Function GTABase.Gameterface.PlayHapticEffectBP
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<GTABase_EHapticEffectType>             Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterface::PlayHapticEffectBP(TEnumAsByte<GTABase_EHapticEffectType> Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.PlayHapticEffectBP");

	UGameterface_PlayHapticEffectBP_Params params {};
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B75CE0
//		Name   -> Function GTABase.Gameterface.PlatformRequiresLogin
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::PlatformRequiresLogin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.PlatformRequiresLogin");

	UGameterface_PlatformRequiresLogin_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B76820
//		Name   -> Function GTABase.Gameterface.OnAudioTabChanged
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               wasSelected                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterface::OnAudioTabChanged(bool wasSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.OnAudioTabChanged");

	UGameterface_OnAudioTabChanged_Params params {};
	params.wasSelected = wasSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B79020
//		Name   -> Function GTABase.Gameterface.MoveMenuToGameTab
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<GTABase_EGTASaveTabState>              tabState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::MoveMenuToGameTab(TEnumAsByte<GTABase_EGTASaveTabState> tabState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.MoveMenuToGameTab");

	UGameterface_MoveMenuToGameTab_Params params {};
	params.tabState = tabState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B79790
//		Name   -> Function GTABase.Gameterface.MissionRetryCallback
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               doRetry                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterface::MissionRetryCallback(bool doRetry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.MissionRetryCallback");

	UGameterface_MissionRetryCallback_Params params {};
	params.doRetry = doRetry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B79640
//		Name   -> Function GTABase.Gameterface.MenuMapExtra
//		Flags  -> (Native, Public, BlueprintCallable)
void UGameterface::MenuMapExtra()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.MenuMapExtra");

	UGameterface_MenuMapExtra_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B78630
//		Name   -> Function GTABase.Gameterface.LoadDataInSlot
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::LoadDataInSlot(int SlotIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.LoadDataInSlot");

	UGameterface_LoadDataInSlot_Params params {};
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B78FC0
//		Name   -> Function GTABase.Gameterface.IsViewport4kOrGreater
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::IsViewport4kOrGreater()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.IsViewport4kOrGreater");

	UGameterface_IsViewport4kOrGreater_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B75C90
//		Name   -> Function GTABase.Gameterface.IsVeryWideScreen
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::IsVeryWideScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.IsVeryWideScreen");

	UGameterface_IsVeryWideScreen_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B789E0
//		Name   -> Function GTABase.Gameterface.isSlotCheckpointSave
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                slotnum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::isSlotCheckpointSave(int slotnum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.isSlotCheckpointSave");

	UGameterface_isSlotCheckpointSave_Params params {};
	params.slotnum = slotnum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B78AD0
//		Name   -> Function GTABase.Gameterface.isSlotAutoSave
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                slotnum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::isSlotAutoSave(int slotnum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.isSlotAutoSave");

	UGameterface_isSlotAutoSave_Params params {};
	params.slotnum = slotnum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B78D60
//		Name   -> Function GTABase.Gameterface.IsShowingControllerReconnectScreen
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::IsShowingControllerReconnectScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.IsShowingControllerReconnectScreen");

	UGameterface_IsShowingControllerReconnectScreen_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B75CE0
//		Name   -> Function GTABase.Gameterface.IsShowAllOptions
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::IsShowAllOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.IsShowAllOptions");

	UGameterface_IsShowAllOptions_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B79870
//		Name   -> Function GTABase.Gameterface.IsReleaseBuild
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::IsReleaseBuild()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.IsReleaseBuild");

	UGameterface_IsReleaseBuild_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B78CE0
//		Name   -> Function GTABase.Gameterface.IsPlayingGame
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::IsPlayingGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.IsPlayingGame");

	UGameterface_IsPlayingGame_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B75CE0
//		Name   -> Function GTABase.Gameterface.IsJapaneseBuild
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::STATIC_IsJapaneseBuild()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.IsJapaneseBuild");

	UGameterface_IsJapaneseBuild_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B75D20
//		Name   -> Function GTABase.Gameterface.IsIntroMoviePlaying
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               AllowHandleStop                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::IsIntroMoviePlaying(bool AllowHandleStop)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.IsIntroMoviePlaying");

	UGameterface_IsIntroMoviePlaying_Params params {};
	params.AllowHandleStop = AllowHandleStop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B79E80
//		Name   -> Function GTABase.Gameterface.IsInCredits
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::IsInCredits()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.IsInCredits");

	UGameterface_IsInCredits_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B7A7F0
//		Name   -> Function GTABase.Gameterface.IsCurrentTransition
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::IsCurrentTransition(const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.IsCurrentTransition");

	UGameterface_IsCurrentTransition_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B75CE0
//		Name   -> Function GTABase.Gameterface.IsActiveControllerLoggedIn
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::IsActiveControllerLoggedIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.IsActiveControllerLoggedIn");

	UGameterface_IsActiveControllerLoggedIn_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B7A530
//		Name   -> Function GTABase.Gameterface.InterruptCurrentTransition
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     TransitionToStart                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<GTABase_EGTATransitionState>           startingState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               takeOldOpacity                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterface::InterruptCurrentTransition(const struct FString& TransitionToStart, TEnumAsByte<GTABase_EGTATransitionState> startingState, bool takeOldOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.InterruptCurrentTransition");

	UGameterface_InterruptCurrentTransition_Params params {};
	params.TransitionToStart = TransitionToStart;
	params.startingState = startingState;
	params.takeOldOpacity = takeOldOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7A2D0
//		Name   -> Function GTABase.Gameterface.InterruptCurrentMenuTransition
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     TransitionToStart                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<GTABase_EGTATransitionState>           startingState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               takeOldOpacity                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterface::InterruptCurrentMenuTransition(const struct FString& TransitionToStart, TEnumAsByte<GTABase_EGTATransitionState> startingState, bool takeOldOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.InterruptCurrentMenuTransition");

	UGameterface_InterruptCurrentMenuTransition_Params params {};
	params.TransitionToStart = TransitionToStart;
	params.startingState = startingState;
	params.takeOldOpacity = takeOldOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B78CB0
//		Name   -> Function GTABase.Gameterface.HasSaveData
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::HasSaveData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.HasSaveData");

	UGameterface_HasSaveData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B7ACF0
//		Name   -> Function GTABase.Gameterface.HasCurrentTransitionScreen
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               CheckOnlyInGameTransitions                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::HasCurrentTransitionScreen(bool CheckOnlyInGameTransitions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.HasCurrentTransitionScreen");

	UGameterface_HasCurrentTransitionScreen_Params params {};
	params.CheckOnlyInGameTransitions = CheckOnlyInGameTransitions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B78FA0
//		Name   -> Function GTABase.Gameterface.GrabFocus
//		Flags  -> (Native, Public, BlueprintCallable)
void UGameterface::GrabFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GrabFocus");

	UGameterface_GrabFocus_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7B580
//		Name   -> Function GTABase.Gameterface.GetWorldZ
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     FromCoord                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGameterface::STATIC_GetWorldZ(const struct FVector& FromCoord, bool* success)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetWorldZ");

	UGameterface_GetWorldZ_Params params {};
	params.FromCoord = FromCoord;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (success != nullptr)
		*success = params.success;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B78F20
//		Name   -> Function GTABase.Gameterface.GetVersionString
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGameterface::GetVersionString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetVersionString");

	UGameterface_GetVersionString_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B77480
//		Name   -> Function GTABase.Gameterface.GetUVMappingForMenuTabPrev
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		float                                              U                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              V                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ULength                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              VLength                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UGameterface::GetUVMappingForMenuTabPrev(float* U, float* V, float* ULength, float* VLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetUVMappingForMenuTabPrev");

	UGameterface_GetUVMappingForMenuTabPrev_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (U != nullptr)
		*U = params.U;
	if (V != nullptr)
		*V = params.V;
	if (ULength != nullptr)
		*ULength = params.ULength;
	if (VLength != nullptr)
		*VLength = params.VLength;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B77740
//		Name   -> Function GTABase.Gameterface.GetUVMappingForMenuTabNext
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		float                                              U                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              V                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ULength                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              VLength                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UGameterface::GetUVMappingForMenuTabNext(float* U, float* V, float* ULength, float* VLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetUVMappingForMenuTabNext");

	UGameterface_GetUVMappingForMenuTabNext_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (U != nullptr)
		*U = params.U;
	if (V != nullptr)
		*V = params.V;
	if (ULength != nullptr)
		*ULength = params.ULength;
	if (VLength != nullptr)
		*VLength = params.VLength;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B77140
//		Name   -> Function GTABase.Gameterface.GetUVImageForHUDMapping
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TEnumAsByte<GTABase_EHIDMapping>                   mapping                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              U                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              V                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ULength                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              VLength                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UGameterface::GetUVImageForHUDMapping(TEnumAsByte<GTABase_EHIDMapping> mapping, float* U, float* V, float* ULength, float* VLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetUVImageForHUDMapping");

	UGameterface_GetUVImageForHUDMapping_Params params {};
	params.mapping = mapping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (U != nullptr)
		*U = params.U;
	if (V != nullptr)
		*V = params.V;
	if (ULength != nullptr)
		*ULength = params.ULength;
	if (VLength != nullptr)
		*VLength = params.VLength;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B78DE0
//		Name   -> Function GTABase.Gameterface.GetUserNameAndImage
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     OutName                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UGameterface::GetUserNameAndImage(struct FString* OutName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetUserNameAndImage");

	UGameterface_GetUserNameAndImage_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutName != nullptr)
		*OutName = params.OutName;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B7ADC0
//		Name   -> Function GTABase.Gameterface.GetTransitionManager
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUITransition*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUITransition* UGameterface::GetTransitionManager()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetTransitionManager");

	UGameterface_GetTransitionManager_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B78130
//		Name   -> Function GTABase.Gameterface.GetStats
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FString>                             StatValues                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		struct FString                                     CriminalRating                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UGameterface::GetStats(TArray<struct FString>* StatValues, struct FString* CriminalRating)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetStats");

	UGameterface_GetStats_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StatValues != nullptr)
		*StatValues = params.StatValues;
	if (CriminalRating != nullptr)
		*CriminalRating = params.CriminalRating;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B75E80
//		Name   -> Function GTABase.Gameterface.GetSocialClubAchivements
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FSCAchive>                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FSCAchive> UGameterface::GetSocialClubAchivements()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetSocialClubAchivements");

	UGameterface_GetSocialClubAchivements_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.Gameterface.GetScalabilityClass
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UClass*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* UGameterface::GetScalabilityClass()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetScalabilityClass");

	UGameterface_GetScalabilityClass_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B78930
//		Name   -> Function GTABase.Gameterface.GetSaveDataNames
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UGameterface::GetSaveDataNames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetSaveDataNames");

	UGameterface_GetSaveDataNames_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B78800
//		Name   -> Function GTABase.Gameterface.GetSaveDataName
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGameterface::GetSaveDataName(int SlotIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetSaveDataName");

	UGameterface_GetSaveDataName_Params params {};
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B77BC0
//		Name   -> Function GTABase.Gameterface.GetRightStickValues
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		float                                              X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterface::GetRightStickValues(float* X, float* Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetRightStickValues");

	UGameterface_GetRightStickValues_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;

}


// Function:
//		Offset -> 0x00B79DE0
//		Name   -> Function GTABase.Gameterface.GetRageActor
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class URage*                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URage* UGameterface::GetRageActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetRageActor");

	UGameterface_GetRageActor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B767F0
//		Name   -> Function GTABase.Gameterface.GetRadioStationOffset
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UGameterface::GetRadioStationOffset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetRadioStationOffset");

	UGameterface_GetRadioStationOffset_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B76740
//		Name   -> Function GTABase.Gameterface.GetPlatformType
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<GTABase_EPlatformType>                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<GTABase_EPlatformType> UGameterface::STATIC_GetPlatformType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetPlatformType");

	UGameterface_GetPlatformType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B783A0
//		Name   -> Function GTABase.Gameterface.GetOptionTextSize
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGameterface::GetOptionTextSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetOptionTextSize");

	UGameterface_GetOptionTextSize_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B78360
//		Name   -> Function GTABase.Gameterface.GetOptionHelpTextSize
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGameterface::GetOptionHelpTextSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetOptionHelpTextSize");

	UGameterface_GetOptionHelpTextSize_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B79BC0
//		Name   -> Function GTABase.Gameterface.GetNextValidLanguageIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               IsLanguage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Forward                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                currentIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UGameterface::GetNextValidLanguageIndex(bool IsLanguage, bool Forward, int currentIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetNextValidLanguageIndex");

	UGameterface_GetNextValidLanguageIndex_Params params {};
	params.IsLanguage = IsLanguage;
	params.Forward = Forward;
	params.currentIndex = currentIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B77F10
//		Name   -> Function GTABase.Gameterface.GetMapZoomOut
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGameterface::GetMapZoomOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetMapZoomOut");

	UGameterface_GetMapZoomOut_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B77F50
//		Name   -> Function GTABase.Gameterface.GetMapZoomIn
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGameterface::GetMapZoomIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetMapZoomIn");

	UGameterface_GetMapZoomIn_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B76C90
//		Name   -> Function GTABase.Gameterface.GetMappingStringForButton
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                nButtonID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                whichType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGameterface::GetMappingStringForButton(int nButtonID, int whichType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetMappingStringForButton");

	UGameterface_GetMappingStringForButton_Params params {};
	params.nButtonID = nButtonID;
	params.whichType = whichType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B79230
//		Name   -> Function GTABase.Gameterface.GetMapLegendNames
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FName>                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FName> UGameterface::GetMapLegendNames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetMapLegendNames");

	UGameterface_GetMapLegendNames_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B79430
//		Name   -> Function GTABase.Gameterface.GetMapLegend
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<class UTexture2D*>                          Textures                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<struct FText>                               Strings                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UGameterface::GetMapLegend(TArray<class UTexture2D*>* Textures, TArray<struct FText>* Strings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetMapLegend");

	UGameterface_GetMapLegend_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Textures != nullptr)
		*Textures = params.Textures;
	if (Strings != nullptr)
		*Strings = params.Strings;

}


// Function:
//		Offset -> 0x00B792B0
//		Name   -> Function GTABase.Gameterface.GetMapAreaName
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     WorldPosition                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     OutName                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterface::GetMapAreaName(const struct FVector& WorldPosition, struct FString* OutName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetMapAreaName");

	UGameterface_GetMapAreaName_Params params {};
	params.WorldPosition = WorldPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutName != nullptr)
		*OutName = params.OutName;

}


// Function:
//		Offset -> 0x00B77A30
//		Name   -> Function GTABase.Gameterface.GetLeftStickValues
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		float                                              X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterface::GetLeftStickValues(float* X, float* Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetLeftStickValues");

	UGameterface_GetLeftStickValues_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;

}


// Function:
//		Offset -> 0x00B789B0
//		Name   -> Function GTABase.Gameterface.GetLastSaveSlotIndex
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UGameterface::GetLastSaveSlotIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetLastSaveSlotIndex");

	UGameterface_GetLastSaveSlotIndex_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B76E80
//		Name   -> Function GTABase.Gameterface.GetKeyboardMappings
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                whichType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FKeyboardDisplayStrings>             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FKeyboardDisplayStrings> UGameterface::GetKeyboardMappings(int whichType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetKeyboardMappings");

	UGameterface_GetKeyboardMappings_Params params {};
	params.whichType = whichType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B77110
//		Name   -> Function GTABase.Gameterface.GetHIDTexture
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UGameterface::GetHIDTexture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetHIDTexture");

	UGameterface_GetHIDTexture_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B76780
//		Name   -> Function GTABase.Gameterface.GetGTAPlayerPosition
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UGameterface::GetGTAPlayerPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetGTAPlayerPosition");

	UGameterface_GetGTAPlayerPosition_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B765C0
//		Name   -> Function GTABase.Gameterface.GetGroundZCoord
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FVector                                     FromCoord                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     OutCoord                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::GetGroundZCoord(const struct FVector& FromCoord, struct FVector* OutCoord)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetGroundZCoord");

	UGameterface_GetGroundZCoord_Params params {};
	params.FromCoord = FromCoord;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutCoord != nullptr)
		*OutCoord = params.OutCoord;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B78EF0
//		Name   -> Function GTABase.Gameterface.GetCurrentInputType
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<GTABase_EGTAInputType>                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<GTABase_EGTAInputType> UGameterface::GetCurrentInputType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetCurrentInputType");

	UGameterface_GetCurrentInputType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B77D50
//		Name   -> Function GTABase.Gameterface.GetButtonMappingReleased
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<GTABase_EHIDMapping>                   mapping                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::GetButtonMappingReleased(TEnumAsByte<GTABase_EHIDMapping> mapping)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetButtonMappingReleased");

	UGameterface_GetButtonMappingReleased_Params params {};
	params.mapping = mapping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B77F90
//		Name   -> Function GTABase.Gameterface.GetButtonMappingJustPressed
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<GTABase_EHIDMapping>                   mapping                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::GetButtonMappingJustPressed(TEnumAsByte<GTABase_EHIDMapping> mapping)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetButtonMappingJustPressed");

	UGameterface_GetButtonMappingJustPressed_Params params {};
	params.mapping = mapping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B77E30
//		Name   -> Function GTABase.Gameterface.GetButtonMappingIsPressed
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<GTABase_EHIDMapping>                   mapping                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::GetButtonMappingIsPressed(TEnumAsByte<GTABase_EHIDMapping> mapping)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetButtonMappingIsPressed");

	UGameterface_GetButtonMappingIsPressed_Params params {};
	params.mapping = mapping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B78410
//		Name   -> Function GTABase.Gameterface.GetBriefString
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGameterface::GetBriefString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetBriefString");

	UGameterface_GetBriefString_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B78520
//		Name   -> Function GTABase.Gameterface.GetAppropriateGamepadTab
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UGameterface::GetAppropriateGamepadTab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetAppropriateGamepadTab");

	UGameterface_GetAppropriateGamepadTab_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B78DC0
//		Name   -> Function GTABase.Gameterface.GetActiveControllerIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UGameterface::GetActiveControllerIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetActiveControllerIndex");

	UGameterface_GetActiveControllerIndex_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B78490
//		Name   -> Function GTABase.Gameterface.GameHasGangsOverlay
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::GameHasGangsOverlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GameHasGangsOverlay");

	UGameterface_GameHasGangsOverlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B784C0
//		Name   -> Function GTABase.Gameterface.GameHasFlightGamepadTab
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::GameHasFlightGamepadTab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GameHasFlightGamepadTab");

	UGameterface_GameHasFlightGamepadTab_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B784F0
//		Name   -> Function GTABase.Gameterface.GameHasBMXGamepadTab
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::GameHasBMXGamepadTab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GameHasBMXGamepadTab");

	UGameterface_GameHasBMXGamepadTab_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B798C0
//		Name   -> Function GTABase.Gameterface.FreezeTime
//		Flags  -> (Final, Native, Public)
// Parameters:
//		int                                                Hours                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Minutes                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Seconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterface::FreezeTime(int Hours, int Minutes, int Seconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.FreezeTime");

	UGameterface_FreezeTime_Params params {};
	params.Hours = Hours;
	params.Minutes = Minutes;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B796B0
//		Name   -> Function GTABase.Gameterface.ForceMapSwitchRefresh
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               MenuMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterface::ForceMapSwitchRefresh(bool MenuMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.ForceMapSwitchRefresh");

	UGameterface_ForceMapSwitchRefresh_Params params {};
	params.MenuMode = MenuMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B79AA0
//		Name   -> Function GTABase.Gameterface.ExitGame
//		Flags  -> (Native, Public, BlueprintCallable)
void UGameterface::ExitGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.ExitGame");

	UGameterface_ExitGame_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B783E0
//		Name   -> Function GTABase.Gameterface.DoesLanguageUseLargerHeightSubtitles
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::DoesLanguageUseLargerHeightSubtitles()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.DoesLanguageUseLargerHeightSubtitles");

	UGameterface_DoesLanguageUseLargerHeightSubtitles_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B78FF0
//		Name   -> Function GTABase.Gameterface.DoesGameViewportHaveFocus
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::DoesGameViewportHaveFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.DoesGameViewportHaveFocus");

	UGameterface_DoesGameViewportHaveFocus_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B76900
//		Name   -> Function GTABase.Gameterface.DeleteSavedKeyboardMappings
//		Flags  -> (Native, Public, BlueprintCallable)
void UGameterface::DeleteSavedKeyboardMappings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.DeleteSavedKeyboardMappings");

	UGameterface_DeleteSavedKeyboardMappings_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B78550
//		Name   -> Function GTABase.Gameterface.DeleteDataInSlot
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterface::DeleteDataInSlot(int SlotIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.DeleteDataInSlot");

	UGameterface_DeleteDataInSlot_Params params {};
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7A9F0
//		Name   -> Function GTABase.Gameterface.ContinueTransition
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           toState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterface::ContinueTransition(TEnumAsByte<GTABase_EGTATransitionState> toState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.ContinueTransition");

	UGameterface_ContinueTransition_Params params {};
	params.toState = toState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7A920
//		Name   -> Function GTABase.Gameterface.ContinueMenuTransition
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           toState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterface::ContinueMenuTransition(TEnumAsByte<GTABase_EGTATransitionState> toState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.ContinueMenuTransition");

	UGameterface_ContinueMenuTransition_Params params {};
	params.toState = toState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7A7D0
//		Name   -> Function GTABase.Gameterface.CloseCurrentTransition
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGameterface::CloseCurrentTransition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.CloseCurrentTransition");

	UGameterface_CloseCurrentTransition_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7A790
//		Name   -> Function GTABase.Gameterface.CloseCurrentMenuTransition
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGameterface::CloseCurrentMenuTransition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.CloseCurrentMenuTransition");

	UGameterface_CloseCurrentMenuTransition_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B79130
//		Name   -> Function GTABase.Gameterface.ClearCustomWaypoint
//		Flags  -> (Native, Public, BlueprintCallable)
void UGameterface::ClearCustomWaypoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.ClearCustomWaypoint");

	UGameterface_ClearCustomWaypoint_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B763A0
//		Name   -> Function GTABase.Gameterface.CleanupCinematicActorOnEndPlay
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterface::CleanupCinematicActorOnEndPlay(class AActor* Actor, TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.CleanupCinematicActorOnEndPlay");

	UGameterface_CleanupCinematicActorOnEndPlay_Params params {};
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7AF70
//		Name   -> Function GTABase.Gameterface.CheckWorldLine
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     Start                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     finished                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     outCol                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     outNormal                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bCheckBuildings                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bCheckVehicles                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bCheckPeds                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::STATIC_CheckWorldLine(const struct FVector& Start, const struct FVector& finished, struct FVector* outCol, struct FVector* outNormal, bool bCheckBuildings, bool bCheckVehicles, bool bCheckPeds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.CheckWorldLine");

	UGameterface_CheckWorldLine_Params params {};
	params.Start = Start;
	params.finished = finished;
	params.bCheckBuildings = bCheckBuildings;
	params.bCheckVehicles = bCheckVehicles;
	params.bCheckPeds = bCheckPeds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (outCol != nullptr)
		*outCol = params.outCol;
	if (outNormal != nullptr)
		*outNormal = params.outNormal;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.Gameterface.CheckShowAllOptionsChanged
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGameterface::CheckShowAllOptionsChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.CheckShowAllOptionsChanged");

	UGameterface_CheckShowAllOptionsChanged_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B75E30
//		Name   -> Function GTABase.Gameterface.BPUpdateVolumeMixers
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGameterface::BPUpdateVolumeMixers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.BPUpdateVolumeMixers");

	UGameterface_BPUpdateVolumeMixers_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B79AC0
//		Name   -> Function GTABase.Gameterface.AutoDestroyedParticleSystem
//		Flags  -> (Native, Public)
// Parameters:
//		class UParticleSystemComponent*                    Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterface::AutoDestroyedParticleSystem(class UParticleSystemComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.AutoDestroyedParticleSystem");

	UGameterface_AutoDestroyedParticleSystem_Params params {};
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B77A00
//		Name   -> Function GTABase.Gameterface.AreMultipleTouchesDown
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::AreMultipleTouchesDown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.AreMultipleTouchesDown");

	UGameterface_AreMultipleTouchesDown_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B79680
//		Name   -> Function GTABase.Gameterface.AllowMapJump
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::AllowMapJump()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.AllowMapJump");

	UGameterface_AllowMapJump_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B79100
//		Name   -> Function GTABase.Gameterface.AllowCustomWaypointManagement
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::AllowCustomWaypointManagement()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.AllowCustomWaypointManagement");

	UGameterface_AllowCustomWaypointManagement_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B78D90
//		Name   -> Function GTABase.Gameterface.AllowActiveControllerSet
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterface::AllowActiveControllerSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.AllowActiveControllerSet");

	UGameterface_AllowActiveControllerSet_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B7FA80
//		Name   -> Function GTABase.GameterSettings.UpdateFidelitySettings
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               SkipCallback                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterSettings::UpdateFidelitySettings(bool SkipCallback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.UpdateFidelitySettings");

	UGameterSettings_UpdateFidelitySettings_Params params {};
	params.SkipCallback = SkipCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7FE90
//		Name   -> Function GTABase.GameterSettings.UpdateDefaultVersion
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               SkipSave                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterSettings::UpdateDefaultVersion(bool SkipSave)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.UpdateDefaultVersion");

	UGameterSettings_UpdateDefaultVersion_Params params {};
	params.SkipSave = SkipSave;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7FBA0
//		Name   -> Function GTABase.GameterSettings.UpdateAllGraphicsSettings
//		Flags  -> (Final, Native, Public)
void UGameterSettings::UpdateAllGraphicsSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.UpdateAllGraphicsSettings");

	UGameterSettings_UpdateAllGraphicsSettings_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7FBC0
//		Name   -> Function GTABase.GameterSettings.SetupGlobalSettingsCallbacks
//		Flags  -> (Final, Native, Public)
void UGameterSettings::SetupGlobalSettingsCallbacks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.SetupGlobalSettingsCallbacks");

	UGameterSettings_SetupGlobalSettingsCallbacks_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7F070
//		Name   -> Function GTABase.GameterSettings.SetResolutionToDefault
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               doConfirmVideoMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterSettings::SetResolutionToDefault(bool doConfirmVideoMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.SetResolutionToDefault");

	UGameterSettings_SetResolutionToDefault_Params params {};
	params.doConfirmVideoMode = doConfirmVideoMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B80B30
//		Name   -> Function GTABase.GameterSettings.SetIntValue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       VariableName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterSettings::SetIntValue(const struct FName& VariableName, int NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.SetIntValue");

	UGameterSettings_SetIntValue_Params params {};
	params.VariableName = VariableName;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7F150
//		Name   -> Function GTABase.GameterSettings.SetInitialScreenValues
//		Flags  -> (Final, Native, Public)
void UGameterSettings::SetInitialScreenValues()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.SetInitialScreenValues");

	UGameterSettings_SetInitialScreenValues_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B80FB0
//		Name   -> Function GTABase.GameterSettings.SetFloatValue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       VariableName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterSettings::SetFloatValue(const struct FName& VariableName, float NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.SetFloatValue");

	UGameterSettings_SetFloatValue_Params params {};
	params.VariableName = VariableName;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B808E0
//		Name   -> Function GTABase.GameterSettings.SetBoolValue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       VariableName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterSettings::SetBoolValue(const struct FName& VariableName, bool NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.SetBoolValue");

	UGameterSettings_SetBoolValue_Params params {};
	params.VariableName = VariableName;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7F170
//		Name   -> Function GTABase.GameterSettings.RevertOption
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       OptionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterSettings::RevertOption(const struct FName& OptionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.RevertOption");

	UGameterSettings_RevertOption_Params params {};
	params.OptionName = OptionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7FF70
//		Name   -> Function GTABase.GameterSettings.ResetSettingsToPlatformDefault
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<GTABase_EGTASettingsCategory>          Category                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               SkipDisplayChanges                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               SkipSave                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterSettings::ResetSettingsToPlatformDefault(TEnumAsByte<GTABase_EGTASettingsCategory> Category, bool SkipDisplayChanges, bool SkipSave)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.ResetSettingsToPlatformDefault");

	UGameterSettings_ResetSettingsToPlatformDefault_Params params {};
	params.Category = Category;
	params.SkipDisplayChanges = SkipDisplayChanges;
	params.SkipSave = SkipSave;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B808B0
//		Name   -> Function GTABase.GameterSettings.ResetDefaultCheck
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGameterSettings::ResetDefaultCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.ResetDefaultCheck");

	UGameterSettings_ResetDefaultCheck_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7EF40
//		Name   -> Function GTABase.GameterSettings.RefreshSettingsOnFirstLoad
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               ForceReset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterSettings::RefreshSettingsOnFirstLoad(bool ForceReset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.RefreshSettingsOnFirstLoad");

	UGameterSettings_RefreshSettingsOnFirstLoad_Params params {};
	params.ForceReset = ForceReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7F410
//		Name   -> Function GTABase.GameterSettings.OnTextureQualitySet
//		Flags  -> (Final, Native, Public)
void UGameterSettings::OnTextureQualitySet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnTextureQualitySet");

	UGameterSettings_OnTextureQualitySet_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7F430
//		Name   -> Function GTABase.GameterSettings.OnShadowSet
//		Flags  -> (Final, Native, Public)
void UGameterSettings::OnShadowSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnShadowSet");

	UGameterSettings_OnShadowSet_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7F390
//		Name   -> Function GTABase.GameterSettings.OnRTXSet
//		Flags  -> (Final, Native, Public)
void UGameterSettings::OnRTXSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnRTXSet");

	UGameterSettings_OnRTXSet_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7F6D0
//		Name   -> Function GTABase.GameterSettings.OnResolutionSet
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               ApplySettings                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterSettings::OnResolutionSet(bool ApplySettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnResolutionSet");

	UGameterSettings_OnResolutionSet_Params params {};
	params.ApplySettings = ApplySettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7F3F0
//		Name   -> Function GTABase.GameterSettings.OnReflectionQualitySet
//		Flags  -> (Final, Native, Public)
void UGameterSettings::OnReflectionQualitySet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnReflectionQualitySet");

	UGameterSettings_OnReflectionQualitySet_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7F330
//		Name   -> Function GTABase.GameterSettings.OnOutputMonitorSet
//		Flags  -> (Final, Native, Public)
void UGameterSettings::OnOutputMonitorSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnOutputMonitorSet");

	UGameterSettings_OnOutputMonitorSet_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7F4B0
//		Name   -> Function GTABase.GameterSettings.OnMotionBlurSet
//		Flags  -> (Final, Native, Public)
void UGameterSettings::OnMotionBlurSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnMotionBlurSet");

	UGameterSettings_OnMotionBlurSet_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7F490
//		Name   -> Function GTABase.GameterSettings.OnLensFlareSet
//		Flags  -> (Final, Native, Public)
void UGameterSettings::OnLensFlareSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnLensFlareSet");

	UGameterSettings_OnLensFlareSet_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7F350
//		Name   -> Function GTABase.GameterSettings.OnLanguageSet
//		Flags  -> (Final, Native, Public)
void UGameterSettings::OnLanguageSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnLanguageSet");

	UGameterSettings_OnLanguageSet_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7F610
//		Name   -> Function GTABase.GameterSettings.OnFrameRateLimitSet
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               ApplySettings                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterSettings::OnFrameRateLimitSet(bool ApplySettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnFrameRateLimitSet");

	UGameterSettings_OnFrameRateLimitSet_Params params {};
	params.ApplySettings = ApplySettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7F530
//		Name   -> Function GTABase.GameterSettings.OnFrameRateLimitPCSet
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               ApplySettings                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterSettings::OnFrameRateLimitPCSet(bool ApplySettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnFrameRateLimitPCSet");

	UGameterSettings_OnFrameRateLimitPCSet_Params params {};
	params.ApplySettings = ApplySettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7F450
//		Name   -> Function GTABase.GameterSettings.OnDistanceScaleSet
//		Flags  -> (Final, Native, Public)
void UGameterSettings::OnDistanceScaleSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnDistanceScaleSet");

	UGameterSettings_OnDistanceScaleSet_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7F7B0
//		Name   -> Function GTABase.GameterSettings.OnDisplayModeSet
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               ApplySettings                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterSettings::OnDisplayModeSet(bool ApplySettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnDisplayModeSet");

	UGameterSettings_OnDisplayModeSet_Params params {};
	params.ApplySettings = ApplySettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7F470
//		Name   -> Function GTABase.GameterSettings.OnDepthOfFieldSet
//		Flags  -> (Final, Native, Public)
void UGameterSettings::OnDepthOfFieldSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnDepthOfFieldSet");

	UGameterSettings_OnDepthOfFieldSet_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7F370
//		Name   -> Function GTABase.GameterSettings.OnCloudQualitySet
//		Flags  -> (Final, Native, Public)
void UGameterSettings::OnCloudQualitySet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnCloudQualitySet");

	UGameterSettings_OnCloudQualitySet_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7F3B0
//		Name   -> Function GTABase.GameterSettings.OnCarReflectionMethodSet
//		Flags  -> (Final, Native, Public)
void UGameterSettings::OnCarReflectionMethodSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnCarReflectionMethodSet");

	UGameterSettings_OnCarReflectionMethodSet_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7F4D0
//		Name   -> Function GTABase.GameterSettings.OnBloomSet
//		Flags  -> (Final, Native, Public)
void UGameterSettings::OnBloomSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnBloomSet");

	UGameterSettings_OnBloomSet_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GameterSettings.OnAspectRatioSet
//		Flags  -> (Final, Native, Public)
void UGameterSettings::OnAspectRatioSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnAspectRatioSet");

	UGameterSettings_OnAspectRatioSet_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7F510
//		Name   -> Function GTABase.GameterSettings.OnAOSet
//		Flags  -> (Final, Native, Public)
void UGameterSettings::OnAOSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnAOSet");

	UGameterSettings_OnAOSet_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7F4F0
//		Name   -> Function GTABase.GameterSettings.OnAnisotropicSet
//		Flags  -> (Final, Native, Public)
void UGameterSettings::OnAnisotropicSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnAnisotropicSet");

	UGameterSettings_OnAnisotropicSet_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7F890
//		Name   -> Function GTABase.GameterSettings.NormalizeInitialScreenSize
//		Flags  -> (Final, Native, Public)
void UGameterSettings::NormalizeInitialScreenSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.NormalizeInitialScreenSize");

	UGameterSettings_NormalizeInitialScreenSize_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7FA60
//		Name   -> Function GTABase.GameterSettings.InitializeGlobalSettings
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGameterSettings::InitializeGlobalSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.InitializeGlobalSettings");

	UGameterSettings_InitializeGlobalSettings_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B80880
//		Name   -> Function GTABase.GameterSettings.HasEverSetToDefault
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterSettings::HasEverSetToDefault()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.HasEverSetToDefault");

	UGameterSettings_HasEverSetToDefault_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B81110
//		Name   -> Function GTABase.GameterSettings.GTASaveSettings
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       SettingName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterSettings::GTASaveSettings(const struct FName& SettingName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GTASaveSettings");

	UGameterSettings_GTASaveSettings_Params params {};
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7FBE0
//		Name   -> Function GTABase.GameterSettings.GetSelectionNamesForEmptyEntry
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       EntryName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FText>                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FText> UGameterSettings::GetSelectionNamesForEmptyEntry(const struct FName& EntryName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetSelectionNamesForEmptyEntry");

	UGameterSettings_GetSelectionNamesForEmptyEntry_Params params {};
	params.EntryName = EntryName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B7F020
//		Name   -> Function GTABase.GameterSettings.GetScreenResolutionNames
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FText>                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FText> UGameterSettings::GetScreenResolutionNames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetScreenResolutionNames");

	UGameterSettings_GetScreenResolutionNames_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B75CE0
//		Name   -> Function GTABase.GameterSettings.GetPlatformToEmulate
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<GTABase_EGTAPlatforms>                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<GTABase_EGTAPlatforms> UGameterSettings::GetPlatformToEmulate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetPlatformToEmulate");

	UGameterSettings_GetPlatformToEmulate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GameterSettings.GetPlatformDefaults
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<GTABase_EGTAPlatforms>                 PlatformOverride                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsEditor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* UGameterSettings::GetPlatformDefaults(TEnumAsByte<GTABase_EGTAPlatforms> PlatformOverride, bool IsEditor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetPlatformDefaults");

	UGameterSettings_GetPlatformDefaults_Params params {};
	params.PlatformOverride = PlatformOverride;
	params.IsEditor = IsEditor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B7F8D0
//		Name   -> Function GTABase.GameterSettings.GetPlatformDefaultRules
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UDefaultGameterSettings_Rules*               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDefaultGameterSettings_Rules* UGameterSettings::GetPlatformDefaultRules()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetPlatformDefaultRules");

	UGameterSettings_GetPlatformDefaultRules_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B7FB60
//		Name   -> Function GTABase.GameterSettings.GetPCFidelitySetting
//		Flags  -> (Final, Native, Public)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UGameterSettings::GetPCFidelitySetting()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetPCFidelitySetting");

	UGameterSettings_GetPCFidelitySetting_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B80C90
//		Name   -> Function GTABase.GameterSettings.GetNumberValue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       VariableName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UGameterSettings::GetNumberValue(const struct FName& VariableName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetNumberValue");

	UGameterSettings_GetNumberValue_Params params {};
	params.VariableName = VariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B80170
//		Name   -> Function GTABase.GameterSettings.GetListOfFidelityOptionNamesFromSettings
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		TEnumAsByte<GTABase_EGTAPlatforms>                 PlatformOverride                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsEditor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FText>                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FText> UGameterSettings::GetListOfFidelityOptionNamesFromSettings(TEnumAsByte<GTABase_EGTAPlatforms> PlatformOverride, bool IsEditor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetListOfFidelityOptionNamesFromSettings");

	UGameterSettings_GetListOfFidelityOptionNamesFromSettings_Params params {};
	params.PlatformOverride = PlatformOverride;
	params.IsEditor = IsEditor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B80DD0
//		Name   -> Function GTABase.GameterSettings.GetIntValue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       VariableName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UGameterSettings::GetIntValue(const struct FName& VariableName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetIntValue");

	UGameterSettings_GetIntValue_Params params {};
	params.VariableName = VariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B80EC0
//		Name   -> Function GTABase.GameterSettings.GetFloatValue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       VariableName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGameterSettings::GetFloatValue(const struct FName& VariableName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetFloatValue");

	UGameterSettings_GetFloatValue_Params params {};
	params.VariableName = VariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B80510
//		Name   -> Function GTABase.GameterSettings.GetFidelityOptionsNum
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<GTABase_EGTAPlatforms>                 PlatformOverride                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsEditor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UGameterSettings::GetFidelityOptionsNum(TEnumAsByte<GTABase_EGTAPlatforms> PlatformOverride, bool IsEditor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetFidelityOptionsNum");

	UGameterSettings_GetFidelityOptionsNum_Params params {};
	params.PlatformOverride = PlatformOverride;
	params.IsEditor = IsEditor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B80300
//		Name   -> Function GTABase.GameterSettings.GetFidelityOptionNames
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<GTABase_EGTAPlatforms>                 PlatformOverride                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FText>                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FText> UGameterSettings::GetFidelityOptionNames(TEnumAsByte<GTABase_EGTAPlatforms> PlatformOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetFidelityOptionNames");

	UGameterSettings_GetFidelityOptionNames_Params params {};
	params.PlatformOverride = PlatformOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B80690
//		Name   -> Function GTABase.GameterSettings.GetCurrentFidelityOption
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CurrentSelection                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<GTABase_EGTAPlatforms>                 PlatformOverride                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsEditor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UGTAFidelityOption*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGTAFidelityOption* UGameterSettings::GetCurrentFidelityOption(int CurrentSelection, TEnumAsByte<GTABase_EGTAPlatforms> PlatformOverride, bool IsEditor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetCurrentFidelityOption");

	UGameterSettings_GetCurrentFidelityOption_Params params {};
	params.CurrentSelection = CurrentSelection;
	params.PlatformOverride = PlatformOverride;
	params.IsEditor = IsEditor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B80A40
//		Name   -> Function GTABase.GameterSettings.GetBoolValue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       VariableName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterSettings::GetBoolValue(const struct FName& VariableName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetBoolValue");

	UGameterSettings_GetBoolValue_Params params {};
	params.VariableName = VariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B7F250
//		Name   -> Function GTABase.GameterSettings.FinalOptionCheck
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       OptionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameterSettings::FinalOptionCheck(const struct FName& OptionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.FinalOptionCheck");

	UGameterSettings_FinalOptionCheck_Params params {};
	params.OptionName = OptionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7F900
//		Name   -> Function GTABase.GameterSettings.CheckSpecialOptionEnabled
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       OptionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ErrorCode                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameterSettings::CheckSpecialOptionEnabled(const struct FName& OptionName, int* ErrorCode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.CheckSpecialOptionEnabled");

	UGameterSettings_CheckSpecialOptionEnabled_Params params {};
	params.OptionName = OptionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ErrorCode != nullptr)
		*ErrorCode = params.ErrorCode;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B7F8B0
//		Name   -> Function GTABase.GameterSettings.CheckDisplayModeAndUpdateSettings
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGameterSettings::CheckDisplayModeAndUpdateSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.CheckDisplayModeAndUpdateSettings");

	UGameterSettings_CheckDisplayModeAndUpdateSettings_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAActor.TimeChanged
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bEditor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAActor::TimeChanged(bool bEditor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAActor.TimeChanged");

	AGTAActor_TimeChanged_Params params {};
	params.bEditor = bEditor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B83190
//		Name   -> Function GTABase.GTAActor.SetScorched
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               scorched                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAActor::SetScorched(bool scorched)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAActor.SetScorched");

	AGTAActor_SetScorched_Params params {};
	params.scorched = scorched;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAActor.SetDamaged
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               damaged                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAActor::SetDamaged(bool damaged)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAActor.SetDamaged");

	AGTAActor_SetDamaged_Params params {};
	params.damaged = damaged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B832B0
//		Name   -> Function GTABase.GTAActor.SetAlpha
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              withAlpha                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAActor::SetAlpha(float withAlpha)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAActor.SetAlpha");

	AGTAActor_SetAlpha_Params params {};
	params.withAlpha = withAlpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B83270
//		Name   -> Function GTABase.GTAActor.GetTimeOfDay
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AGTAActor::GetTimeOfDay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAActor.GetTimeOfDay");

	AGTAActor_GetTimeOfDay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B83170
//		Name   -> Function GTABase.GTAActor.CheckTreeFarShadowSetting
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AGTAActor::CheckTreeFarShadowSetting()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAActor.CheckTreeFarShadowSetting");

	AGTAActor_CheckTreeFarShadowSetting_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAActor.AddCollisionEffects
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
//		float                                              impulseAmt                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Pos                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Dir                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAActor::AddCollisionEffects(float impulseAmt, const struct FVector& Pos, const struct FVector& Dir)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAActor.AddCollisionEffects");

	AGTAActor_AddCollisionEffects_Params params {};
	params.impulseAmt = impulseAmt;
	params.Pos = Pos;
	params.Dir = Dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTASKActor.GetOverrideSkeleton
//		Flags  -> (Event, Public, BlueprintEvent, Const)
// Parameters:
//		class USkeleton*                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USkeleton* AGTASKActor::GetOverrideSkeleton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTASKActor.GetOverrideSkeleton");

	AGTASKActor_GetOverrideSkeleton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTASKActor.GetBoneTransformTweak
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent, Const)
// Parameters:
//		struct FTransform                                  InTransform                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FName                                       InBoneName                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               OutShouldRemove                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       TweakType                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform AGTASKActor::GetBoneTransformTweak(const struct FTransform& InTransform, const struct FName& InBoneName, bool* OutShouldRemove, const struct FName& TweakType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTASKActor.GetBoneTransformTweak");

	AGTASKActor_GetBoneTransformTweak_Params params {};
	params.InTransform = InTransform;
	params.InBoneName = InBoneName;
	params.TweakType = TweakType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutShouldRemove != nullptr)
		*OutShouldRemove = params.OutShouldRemove;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAAOSkeletalProxy.ConstructStatic
//		Flags  -> (Final, Native, Public)
void AGTAAOSkeletalProxy::ConstructStatic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAAOSkeletalProxy.ConstructStatic");

	AGTAAOSkeletalProxy_ConstructStatic_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAAOSkeletalProxy.ApplyVertexColor
//		Flags  -> (Final, Native, Public)
void AGTAAOSkeletalProxy::ApplyVertexColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAAOSkeletalProxy.ApplyVertexColor");

	AGTAAOSkeletalProxy_ApplyVertexColor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B839A0
//		Name   -> Function GTABase.GTASKProxyActor.CycleMe
//		Flags  -> (Final, Native, Public)
void AGTASKProxyActor::CycleMe()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTASKProxyActor.CycleMe");

	AGTASKProxyActor_CycleMe_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B83980
//		Name   -> Function GTABase.GTASKProxyActor.CycleAll
//		Flags  -> (Final, Native, Public)
void AGTASKProxyActor::CycleAll()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTASKProxyActor.CycleAll");

	AGTASKProxyActor_CycleAll_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B84070
//		Name   -> Function GTABase.GTAAudioComponent.GetPlaybackPosition
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGTAAudioComponent::GetPlaybackPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAAudioComponent.GetPlaybackPosition");

	UGTAAudioComponent_GetPlaybackPosition_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B844D0
//		Name   -> Function GTABase.GTABloodyFootprints.UpdateMeshSection
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                MeshSection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTABloodyFootprints::UpdateMeshSection(int MeshSection, float Alpha)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTABloodyFootprints.UpdateMeshSection");

	AGTABloodyFootprints_UpdateMeshSection_Params params {};
	params.MeshSection = MeshSection;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTABloodyFootprints.OnFootprintTick
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                MeshSection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Lifetime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTABloodyFootprints::OnFootprintTick(int MeshSection, float Lifetime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTABloodyFootprints.OnFootprintTick");

	AGTABloodyFootprints_OnFootprintTick_Params params {};
	params.MeshSection = MeshSection;
	params.Lifetime = Lifetime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTABloodyFootprints.OnFootprintAdded
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                MeshSection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTABloodyFootprints::OnFootprintAdded(int MeshSection, float Alpha)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTABloodyFootprints.OnFootprintAdded");

	AGTABloodyFootprints_OnFootprintAdded_Params params {};
	params.MeshSection = MeshSection;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B843C0
//		Name   -> Function GTABase.GTABloodyFootprints.GetDecal
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                MeshSection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UDecalComponent*                             ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDecalComponent* AGTABloodyFootprints::GetDecal(int MeshSection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTABloodyFootprints.GetDecal");

	AGTABloodyFootprints_GetDecal_Params params {};
	params.MeshSection = MeshSection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.IPLMapActor.GetStaticVolumetricStrength
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
//		float                                              intoAO                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              intoUplight                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AIPLMapActor::GetStaticVolumetricStrength(float* intoAO, float* intoUplight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.IPLMapActor.GetStaticVolumetricStrength");

	AIPLMapActor_GetStaticVolumetricStrength_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (intoAO != nullptr)
		*intoAO = params.intoAO;
	if (intoUplight != nullptr)
		*intoUplight = params.intoUplight;

}


// Function:
//		Offset -> 0x00BADB00
//		Name   -> Function GTABase.IPLMapActor.CopyVertexLighting
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMeshComponent*                              ToComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSwapToDynamic                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AIPLMapActor::CopyVertexLighting(class UMeshComponent* ToComponent, bool bSwapToDynamic)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.IPLMapActor.CopyVertexLighting");

	AIPLMapActor_CopyVertexLighting_Params params {};
	params.ToComponent = ToComponent;
	params.bSwapToDynamic = bSwapToDynamic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.IPLMapActor.ChangedLightSwitch
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bOn                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bIsEditor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AIPLMapActor::ChangedLightSwitch(bool bOn, bool bIsEditor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.IPLMapActor.ChangedLightSwitch");

	AIPLMapActor_ChangedLightSwitch_Params params {};
	params.bOn = bOn;
	params.bIsEditor = bIsEditor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.DynamicIPLMapActor.ShouldForceInstanceBakedColors
//		Flags  -> (Event, Public, BlueprintEvent, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ADynamicIPLMapActor::ShouldForceInstanceBakedColors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.DynamicIPLMapActor.ShouldForceInstanceBakedColors");

	ADynamicIPLMapActor_ShouldForceInstanceBakedColors_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.DynamicIPLMapActor.SetupBroken
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FVector                                     impulseSrc                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     impulseVelocity                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  floorTransform                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ADynamicIPLMapActor::SetupBroken(const struct FVector& impulseSrc, const struct FVector& impulseVelocity, const struct FTransform& floorTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.DynamicIPLMapActor.SetupBroken");

	ADynamicIPLMapActor_SetupBroken_Params params {};
	params.impulseSrc = impulseSrc;
	params.impulseVelocity = impulseVelocity;
	params.floorTransform = floorTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.DynamicIPLMapActor.SetupBreakableInGTA
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ADynamicIPLMapActor::SetupBreakableInGTA()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.DynamicIPLMapActor.SetupBreakableInGTA");

	ADynamicIPLMapActor_SetupBreakableInGTA_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.DynamicIPLMapActor.SetEffect
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                effectNo                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              amt                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ADynamicIPLMapActor::SetEffect(int effectNo, float amt)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.DynamicIPLMapActor.SetEffect");

	ADynamicIPLMapActor_SetEffect_Params params {};
	params.effectNo = effectNo;
	params.amt = amt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.DynamicIPLMapActor.OnUpdatedDamageAmount
//		Flags  -> (Event, Public, BlueprintEvent)
void ADynamicIPLMapActor::OnUpdatedDamageAmount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.DynamicIPLMapActor.OnUpdatedDamageAmount");

	ADynamicIPLMapActor_OnUpdatedDamageAmount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAE1A0
//		Name   -> Function GTABase.DynamicIPLMapActor.GetTrafficState
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               Enabled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                lightState                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                walkState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ADynamicIPLMapActor::GetTrafficState(bool* Enabled, int* lightState, int* walkState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.DynamicIPLMapActor.GetTrafficState");

	ADynamicIPLMapActor_GetTrafficState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
	if (lightState != nullptr)
		*lightState = params.lightState;
	if (walkState != nullptr)
		*walkState = params.walkState;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.DynamicIPLMapActor.GetPhysicsFloorC
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UStaticMeshComponent*                        ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UStaticMeshComponent* ADynamicIPLMapActor::GetPhysicsFloorC()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.DynamicIPLMapActor.GetPhysicsFloorC");

	ADynamicIPLMapActor_GetPhysicsFloorC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.DynamicIPLMapActor.EntityRemoved
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ADynamicIPLMapActor::EntityRemoved(int reason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.DynamicIPLMapActor.EntityRemoved");

	ADynamicIPLMapActor_EntityRemoved_Params params {};
	params.reason = reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.DynamicIPLMapActor.EntityLinked
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bShouldBeVisible                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ADynamicIPLMapActor::EntityLinked(bool bShouldBeVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.DynamicIPLMapActor.EntityLinked");

	ADynamicIPLMapActor_EntityLinked_Params params {};
	params.bShouldBeVisible = bShouldBeVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.DynamicIPLMapActor.Dislodged
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ADynamicIPLMapActor::Dislodged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.DynamicIPLMapActor.Dislodged");

	ADynamicIPLMapActor_Dislodged_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAE3C0
//		Name   -> Function GTABase.DynamicIPLMapActor.BreakableImpulseFactor
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ADynamicIPLMapActor::BreakableImpulseFactor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.DynamicIPLMapActor.BreakableImpulseFactor");

	ADynamicIPLMapActor_BreakableImpulseFactor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BADE00
//		Name   -> Function GTABase.DynamicIPLMapActor.AddRandomOutwardVelocityToAllBodies
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USkeletalMeshComponent*                      InPrimitive                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              amt                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ADynamicIPLMapActor::AddRandomOutwardVelocityToAllBodies(class USkeletalMeshComponent* InPrimitive, float amt)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.DynamicIPLMapActor.AddRandomOutwardVelocityToAllBodies");

	ADynamicIPLMapActor_AddRandomOutwardVelocityToAllBodies_Params params {};
	params.InPrimitive = InPrimitive;
	params.amt = amt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BADF60
//		Name   -> Function GTABase.DynamicIPLMapActor.AddImpulseAtLocationForAllBodiesBelow
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class USkeletalMeshComponent*                      InPrimitive                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Impulse                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ADynamicIPLMapActor::AddImpulseAtLocationForAllBodiesBelow(class USkeletalMeshComponent* InPrimitive, const struct FVector& Impulse, const struct FVector& position)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.DynamicIPLMapActor.AddImpulseAtLocationForAllBodiesBelow");

	ADynamicIPLMapActor_AddImpulseAtLocationForAllBodiesBelow_Params params {};
	params.InPrimitive = InPrimitive;
	params.Impulse = Impulse;
	params.position = position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAE910
//		Name   -> Function GTABase.MeshBevellingDataBase.Unbevel
//		Flags  -> (Native, Public)
void UMeshBevellingDataBase::Unbevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.MeshBevellingDataBase.Unbevel");

	UMeshBevellingDataBase_Unbevel_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAE930
//		Name   -> Function GTABase.MeshBevellingDataBase.Bevel
//		Flags  -> (Native, Public)
// Parameters:
//		bool                                               bSkipBuild                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMeshBevellingDataBase::Bevel(bool bSkipBuild)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.MeshBevellingDataBase.Bevel");

	UMeshBevellingDataBase_Bevel_Params params {};
	params.bSkipBuild = bSkipBuild;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAEBB0
//		Name   -> Function GTABase.ProcTextData.ConstructText
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UProceduralMeshComponent*                    onComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UMaterialInstanceConstant*                   UsingMIC                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Text                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   Scale                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bCentered                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bHorizontalLeft                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              LineScaling                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProcTextData::ConstructText(class UProceduralMeshComponent* onComponent, class UMaterialInstanceConstant* UsingMIC, const struct FString& Text, const struct FVector2D& Scale, bool bCentered, bool bHorizontalLeft, float LineScaling)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.ProcTextData.ConstructText");

	UProcTextData_ConstructText_Params params {};
	params.onComponent = onComponent;
	params.UsingMIC = UsingMIC;
	params.Text = Text;
	params.Scale = Scale;
	params.bCentered = bCentered;
	params.bHorizontalLeft = bHorizontalLeft;
	params.LineScaling = LineScaling;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAF080
//		Name   -> Function GTABase.Rage.SetSocialclubMenu
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UGTASocialClub*                              sc                                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URage::SetSocialclubMenu(class UGTASocialClub* sc)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.Rage.SetSocialclubMenu");

	URage_SetSocialclubMenu_Params params {};
	params.sc = sc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.StreetLightMapActor.SetupImpostorComponent
//		Flags  -> (Event, Public, BlueprintEvent, Const)
// Parameters:
//		class UStaticMeshComponent*                        Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AStreetLightMapActor::SetupImpostorComponent(class UStaticMeshComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.StreetLightMapActor.SetupImpostorComponent");

	AStreetLightMapActor_SetupImpostorComponent_Params params {};
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAFBB0
//		Name   -> Function GTABase.StreetLightMapActor.SetLowQualityLights
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bIsLow                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AStreetLightMapActor::SetLowQualityLights(bool bIsLow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.StreetLightMapActor.SetLowQualityLights");

	AStreetLightMapActor_SetLowQualityLights_Params params {};
	params.bIsLow = bIsLow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAF950
//		Name   -> Function GTABase.StreetLightMapActor.SetLightVisibility
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ULightComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bIsVisible                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AStreetLightMapActor::SetLightVisibility(class ULightComponent* Component, bool bIsVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.StreetLightMapActor.SetLightVisibility");

	AStreetLightMapActor_SetLightVisibility_Params params {};
	params.Component = Component;
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.StreetLightMapActor.SetLights
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bLightsOn                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bForceForEditor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AStreetLightMapActor::SetLights(bool bLightsOn, bool bForceForEditor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.StreetLightMapActor.SetLights");

	AStreetLightMapActor_SetLights_Params params {};
	params.bLightsOn = bLightsOn;
	params.bForceForEditor = bForceForEditor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.StreetLightMapActor.SetAsLowQualityLightTemplate
//		Flags  -> (Final, Native, Public)
void AStreetLightMapActor::SetAsLowQualityLightTemplate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.StreetLightMapActor.SetAsLowQualityLightTemplate");

	AStreetLightMapActor_SetAsLowQualityLightTemplate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAFB90
//		Name   -> Function GTABase.StreetLightMapActor.RerollLights
//		Flags  -> (Final, Native, Public)
void AStreetLightMapActor::RerollLights()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.StreetLightMapActor.RerollLights");

	AStreetLightMapActor_RerollLights_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.StreetLightMapActor.RemoveDecal
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AStreetLightMapActor::RemoveDecal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.StreetLightMapActor.RemoveDecal");

	AStreetLightMapActor_RemoveDecal_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.StreetLightMapActor.EnableViz
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AStreetLightMapActor::EnableViz()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.StreetLightMapActor.EnableViz");

	AStreetLightMapActor_EnableViz_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.StreetLightMapActor.BuildDecal
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AStreetLightMapActor::BuildDecal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.StreetLightMapActor.BuildDecal");

	AStreetLightMapActor_BuildDecal_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B79870
//		Name   -> Function GTABase.UITransition.UseTransitionObject
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUITransition::UseTransitionObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.UseTransitionObject");

	UUITransition_UseTransitionObject_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB1100
//		Name   -> Function GTABase.UITransition.StartMenu
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class APlayerController*                           OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      ScreenClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<GTABase_EGTATransitionState>           startingState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     NameToCreateWith                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUITransition::StartMenu(class APlayerController* OwningPlayer, class UClass* ScreenClass, TEnumAsByte<GTABase_EGTATransitionState> startingState, const struct FString& NameToCreateWith)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.StartMenu");

	UUITransition_StartMenu_Params params {};
	params.OwningPlayer = OwningPlayer;
	params.ScreenClass = ScreenClass;
	params.startingState = startingState;
	params.NameToCreateWith = NameToCreateWith;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB1520
//		Name   -> Function GTABase.UITransition.Start
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class APlayerController*                           OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      ScreenClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<GTABase_EGTATransitionState>           startingState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     NameToCreateWith                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUITransition::Start(class APlayerController* OwningPlayer, class UClass* ScreenClass, TEnumAsByte<GTABase_EGTATransitionState> startingState, const struct FString& NameToCreateWith)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.Start");

	UUITransition_Start_Params params {};
	params.OwningPlayer = OwningPlayer;
	params.ScreenClass = ScreenClass;
	params.startingState = startingState;
	params.NameToCreateWith = NameToCreateWith;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB06E0
//		Name   -> Function GTABase.UITransition.SetTransitionStateFadeTime
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           StateToChange                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TimeToFade                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUITransition::SetTransitionStateFadeTime(TEnumAsByte<GTABase_EGTATransitionState> StateToChange, float TimeToFade)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.SetTransitionStateFadeTime");

	UUITransition_SetTransitionStateFadeTime_Params params {};
	params.StateToChange = StateToChange;
	params.TimeToFade = TimeToFade;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB0540
//		Name   -> Function GTABase.UITransition.SetMenuTransitionStateFadeTime
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           StateToChange                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TimeToFade                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUITransition::SetMenuTransitionStateFadeTime(TEnumAsByte<GTABase_EGTATransitionState> StateToChange, float TimeToFade)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.SetMenuTransitionStateFadeTime");

	UUITransition_SetMenuTransitionStateFadeTime_Params params {};
	params.StateToChange = StateToChange;
	params.TimeToFade = TimeToFade;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAFEF0
//		Name   -> Function GTABase.UITransition.IsOpaque
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUITransition::IsOpaque()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.IsOpaque");

	UUITransition_IsOpaque_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB0BF0
//		Name   -> Function GTABase.UITransition.InterruptCurrentTransition
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class APlayerController*                           OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      ScreenClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<GTABase_EGTATransitionState>           startingState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     NameToCreateWith                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               takeOldOpacity                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUITransition::InterruptCurrentTransition(class APlayerController* OwningPlayer, class UClass* ScreenClass, TEnumAsByte<GTABase_EGTATransitionState> startingState, const struct FString& NameToCreateWith, bool takeOldOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.InterruptCurrentTransition");

	UUITransition_InterruptCurrentTransition_Params params {};
	params.OwningPlayer = OwningPlayer;
	params.ScreenClass = ScreenClass;
	params.startingState = startingState;
	params.NameToCreateWith = NameToCreateWith;
	params.takeOldOpacity = takeOldOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB0880
//		Name   -> Function GTABase.UITransition.InterruptCurrentMenuTransition
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class APlayerController*                           OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      ScreenClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<GTABase_EGTATransitionState>           startingState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     NameToCreateWith                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               takeOldOpacity                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUITransition::InterruptCurrentMenuTransition(class APlayerController* OwningPlayer, class UClass* ScreenClass, TEnumAsByte<GTABase_EGTATransitionState> startingState, const struct FString& NameToCreateWith, bool takeOldOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.InterruptCurrentMenuTransition");

	UUITransition_InterruptCurrentMenuTransition_Params params {};
	params.OwningPlayer = OwningPlayer;
	params.ScreenClass = ScreenClass;
	params.startingState = startingState;
	params.NameToCreateWith = NameToCreateWith;
	params.takeOldOpacity = takeOldOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAFF50
//		Name   -> Function GTABase.UITransition.GetState
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<GTABase_EGTATransitionState> UUITransition::GetState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.GetState");

	UUITransition_GetState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BAFF20
//		Name   -> Function GTABase.UITransition.GetIsFading
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUITransition::GetIsFading()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.GetIsFading");

	UUITransition_GetIsFading_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB0190
//		Name   -> Function GTABase.UITransition.CustomFunctionOnTransitionWithString
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     FunctionString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     VariableString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUITransition::CustomFunctionOnTransitionWithString(const struct FString& FunctionString, const struct FString& VariableString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.CustomFunctionOnTransitionWithString");

	UUITransition_CustomFunctionOnTransitionWithString_Params params {};
	params.FunctionString = FunctionString;
	params.VariableString = VariableString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAFF80
//		Name   -> Function GTABase.UITransition.CustomFunctionOnTransitionWithColor
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     FunctionString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUITransition::CustomFunctionOnTransitionWithColor(const struct FString& FunctionString, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.CustomFunctionOnTransitionWithColor");

	UUITransition_CustomFunctionOnTransitionWithColor_Params params {};
	params.FunctionString = FunctionString;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB03E0
//		Name   -> Function GTABase.UITransition.CustomFunctionOnTransition
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     FunctionString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUITransition::CustomFunctionOnTransition(const struct FString& FunctionString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.CustomFunctionOnTransition");

	UUITransition_CustomFunctionOnTransition_Params params {};
	params.FunctionString = FunctionString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB0F60
//		Name   -> Function GTABase.UITransition.ContinueMenu
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           toState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUITransition::ContinueMenu(TEnumAsByte<GTABase_EGTATransitionState> toState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.ContinueMenu");

	UUITransition_ContinueMenu_Params params {};
	params.toState = toState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB1030
//		Name   -> Function GTABase.UITransition.Continue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           toState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUITransition::Continue(TEnumAsByte<GTABase_EGTATransitionState> toState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.Continue");

	UUITransition_Continue_Params params {};
	params.toState = toState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UITransitionScreen.SetProgress
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUITransitionScreen::SetProgress(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.SetProgress");

	UUITransitionScreen_SetProgress_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UITransitionScreen.SetHudItemPosition
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Xmax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Ymax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUITransitionScreen::SetHudItemPosition(float X, float Y, float Xmax, float Ymax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.SetHudItemPosition");

	UUITransitionScreen_SetHudItemPosition_Params params {};
	params.X = X;
	params.Y = Y;
	params.Xmax = Xmax;
	params.Ymax = Ymax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UITransitionScreen.OverrideBackgroundColor
//		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                ToColor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUITransitionScreen::OverrideBackgroundColor(const struct FLinearColor& ToColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.OverrideBackgroundColor");

	UUITransitionScreen_OverrideBackgroundColor_Params params {};
	params.ToColor = ToColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA5810
//		Name   -> Function GTABase.UITransitionScreen.IsOpaque
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUITransitionScreen::IsOpaque()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.IsOpaque");

	UUITransitionScreen_IsOpaque_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB1DF0
//		Name   -> Function GTABase.UITransitionScreen.GetState
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<GTABase_EGTATransitionState> UUITransitionScreen::GetState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.GetState");

	UUITransitionScreen_GetState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB1D80
//		Name   -> Function GTABase.UITransitionScreen.GetIsFading
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUITransitionScreen::GetIsFading()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.GetIsFading");

	UUITransitionScreen_GetIsFading_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB1D50
//		Name   -> Function GTABase.UITransitionScreen.GetHudItem
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		class UUI_GTAHUDItem*                              ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUI_GTAHUDItem* UUITransitionScreen::GetHudItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.GetHudItem");

	UUITransitionScreen_GetHudItem_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9CD10
//		Name   -> Function GTABase.UITransitionScreen.GetGameterface
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UGameterface*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameterface* UUITransitionScreen::GetGameterface()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.GetGameterface");

	UUITransitionScreen_GetGameterface_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB1D10
//		Name   -> Function GTABase.UITransitionScreen.GetDialogVolumeMultiplier
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UUITransitionScreen::GetDialogVolumeMultiplier()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.GetDialogVolumeMultiplier");

	UUITransitionScreen_GetDialogVolumeMultiplier_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB1DB0
//		Name   -> Function GTABase.UITransitionScreen.GetCurrentFadeOpacity
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UUITransitionScreen::GetCurrentFadeOpacity()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.GetCurrentFadeOpacity");

	UUITransitionScreen_GetCurrentFadeOpacity_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UITransitionScreen.ForceCurrentFadeOpacity
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              newOpacity                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUITransitionScreen::ForceCurrentFadeOpacity(float newOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.ForceCurrentFadeOpacity");

	UUITransitionScreen_ForceCurrentFadeOpacity_Params params {};
	params.newOpacity = newOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UITransitionScreen.CustomFunctionFromStringWithString
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FString                                     FunctionString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     VariableString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUITransitionScreen::CustomFunctionFromStringWithString(const struct FString& FunctionString, const struct FString& VariableString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.CustomFunctionFromStringWithString");

	UUITransitionScreen_CustomFunctionFromStringWithString_Params params {};
	params.FunctionString = FunctionString;
	params.VariableString = VariableString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UITransitionScreen.CustomFunctionFromStringWithColor
//		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FString                                     FunctionString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUITransitionScreen::CustomFunctionFromStringWithColor(const struct FString& FunctionString, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.CustomFunctionFromStringWithColor");

	UUITransitionScreen_CustomFunctionFromStringWithColor_Params params {};
	params.FunctionString = FunctionString;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UITransitionScreen.CustomFunctionFromString
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FString                                     FunctionString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUITransitionScreen::CustomFunctionFromString(const struct FString& FunctionString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.CustomFunctionFromString");

	UUITransitionScreen_CustomFunctionFromString_Params params {};
	params.FunctionString = FunctionString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB1C20
//		Name   -> Function GTABase.UITransitionScreen.Continue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           toState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUITransitionScreen::Continue(TEnumAsByte<GTABase_EGTATransitionState> toState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.Continue");

	UUITransitionScreen_Continue_Params params {};
	params.toState = toState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UITransitionScreen.BP_SetTransitionStateFadeTime
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           StateToChange                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TimeToFade                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUITransitionScreen::BP_SetTransitionStateFadeTime(TEnumAsByte<GTABase_EGTATransitionState> StateToChange, float TimeToFade)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.BP_SetTransitionStateFadeTime");

	UUITransitionScreen_BP_SetTransitionStateFadeTime_Params params {};
	params.StateToChange = StateToChange;
	params.TimeToFade = TimeToFade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UITransitionScreen.BP_Continue
//		Flags  -> (Event, Public, BlueprintEvent)
void UUITransitionScreen::BP_Continue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.BP_Continue");

	UUITransitionScreen_BP_Continue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA53A0
//		Name   -> Function GTABase.UITransitionScreen.AllowBackwardsTransition
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUITransitionScreen::AllowBackwardsTransition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.AllowBackwardsTransition");

	UUITransitionScreen_AllowBackwardsTransition_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B849A0
//		Name   -> Function GTABase.GTACarRecordings.RestoreOriginalFile
//		Flags  -> (Final, Native, Public)
void UGTACarRecordings::RestoreOriginalFile()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTACarRecordings.RestoreOriginalFile");

	UGTACarRecordings_RestoreOriginalFile_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B84AE0
//		Name   -> Function GTABase.GTACarRecordings.InsertFile
//		Flags  -> (Final, Native, Public)
void UGTACarRecordings::InsertFile()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTACarRecordings.InsertFile");

	UGTACarRecordings_InsertFile_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B84AC0
//		Name   -> Function GTABase.GTACarRecordings.FlattenBetweenFrames
//		Flags  -> (Final, Native, Public)
void UGTACarRecordings::FlattenBetweenFrames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTACarRecordings.FlattenBetweenFrames");

	UGTACarRecordings_FlattenBetweenFrames_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTACollisionCache.ImportOldCache
//		Flags  -> (Final, Native, Public)
void UGTACollisionCache::ImportOldCache()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTACollisionCache.ImportOldCache");

	UGTACollisionCache_ImportOldCache_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B85500
//		Name   -> Function GTABase.GTACollisionCache.Clear
//		Flags  -> (Final, Native, Public)
void UGTACollisionCache::Clear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTACollisionCache.Clear");

	UGTACollisionCache_Clear_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTATimeOfDay.SnagCurveTimes
//		Flags  -> (Final, Native, Public)
void AGTATimeOfDay::SnagCurveTimes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.SnagCurveTimes");

	AGTATimeOfDay_SnagCurveTimes_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTATimeOfDay.ShiftTimeForward
//		Flags  -> (Final, Native, Public)
void AGTATimeOfDay::ShiftTimeForward()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.ShiftTimeForward");

	AGTATimeOfDay_ShiftTimeForward_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTATimeOfDay.ShiftTimeBackward
//		Flags  -> (Final, Native, Public)
void AGTATimeOfDay::ShiftTimeBackward()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.ShiftTimeBackward");

	AGTATimeOfDay_ShiftTimeBackward_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA1190
//		Name   -> Function GTABase.GTATimeOfDay.SetWaterZ
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ZValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTATimeOfDay::SetWaterZ(float ZValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.SetWaterZ");

	AGTATimeOfDay_SetWaterZ_Params params {};
	params.ZValue = ZValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTATimeOfDay.SaveCurrentValues
//		Flags  -> (Final, Native, Public)
void AGTATimeOfDay::SaveCurrentValues()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.SaveCurrentValues");

	AGTATimeOfDay_SaveCurrentValues_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA1410
//		Name   -> Function GTABase.GTATimeOfDay.Sample
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AGTATimeOfDay::Sample()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.Sample");

	AGTATimeOfDay_Sample_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA1330
//		Name   -> Function GTABase.GTATimeOfDay.RotateSun
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FRotator                                    TargetRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void AGTATimeOfDay::RotateSun(const struct FRotator& TargetRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.RotateSun");

	AGTATimeOfDay_RotateSun_Params params {};
	params.TargetRotation = TargetRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTATimeOfDay.RerunConstruction
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AGTATimeOfDay::RerunConstruction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.RerunConstruction");

	AGTATimeOfDay_RerunConstruction_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTATimeOfDay.RemoveCurrentValues
//		Flags  -> (Final, Native, Public)
void AGTATimeOfDay::RemoveCurrentValues()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.RemoveCurrentValues");

	AGTATimeOfDay_RemoveCurrentValues_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTATimeOfDay.PreviewWeatherChanged
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		TEnumAsByte<GTABase_EGTAWeather>                   NewWeather                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTATimeOfDay::PreviewWeatherChanged(TEnumAsByte<GTABase_EGTAWeather> NewWeather)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.PreviewWeatherChanged");

	AGTATimeOfDay_PreviewWeatherChanged_Params params {};
	params.NewWeather = NewWeather;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA1160
//		Name   -> Function GTABase.GTATimeOfDay.GetUnderwaterMID
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMaterialInstanceDynamic*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* AGTATimeOfDay::GetUnderwaterMID()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.GetUnderwaterMID");

	AGTATimeOfDay_GetUnderwaterMID_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTATimeOfDay.GetSkyLightActor
//		Flags  -> (Event, Public, BlueprintEvent, Const)
// Parameters:
//		class ASkyLight*                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ASkyLight* AGTATimeOfDay::GetSkyLightActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.GetSkyLightActor");

	AGTATimeOfDay_GetSkyLightActor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTATimeOfDay.GetMoonDirection
//		Flags  -> (Event, Public, HasDefaults, BlueprintEvent, Const)
// Parameters:
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator AGTATimeOfDay::GetMoonDirection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.GetMoonDirection");

	AGTATimeOfDay_GetMoonDirection_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTATimeOfDay.EnableCloudMaterial
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AGTATimeOfDay::EnableCloudMaterial(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.EnableCloudMaterial");

	AGTATimeOfDay_EnableCloudMaterial_Params params {};
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTATimeOfDay.CycleMoonSize
//		Flags  -> (Event, Public, BlueprintEvent)
void AGTATimeOfDay::CycleMoonSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.CycleMoonSize");

	AGTATimeOfDay_CycleMoonSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTATimeOfDay.CullCurves
//		Flags  -> (Final, Native, Public)
void AGTATimeOfDay::CullCurves()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.CullCurves");

	AGTATimeOfDay_CullCurves_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTATimeOfDay.CopyValuesForward
//		Flags  -> (Final, Native, Public)
void AGTATimeOfDay::CopyValuesForward()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.CopyValuesForward");

	AGTATimeOfDay_CopyValuesForward_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTATimeOfDay.CopyValuesBackward
//		Flags  -> (Final, Native, Public)
void AGTATimeOfDay::CopyValuesBackward()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.CopyValuesBackward");

	AGTATimeOfDay_CopyValuesBackward_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTATimeOfDay.CopyBaseValues
//		Flags  -> (Final, Native, Public)
void AGTATimeOfDay::CopyBaseValues()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.CopyBaseValues");

	AGTATimeOfDay_CopyBaseValues_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTATimeOfDay.CleanCurves
//		Flags  -> (Final, Native, Public)
void AGTATimeOfDay::CleanCurves()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.CleanCurves");

	AGTATimeOfDay_CleanCurves_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B87F30
//		Name   -> Function GTABase.GTACoronaComponent.UpdateCorona
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FColor                                      Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Intensity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGTACoronaComponent::UpdateCorona(int Index, const struct FVector& position, float Scale, const struct FColor& Color, float Intensity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTACoronaComponent.UpdateCorona");

	UGTACoronaComponent_UpdateCorona_Params params {};
	params.Index = Index;
	params.position = position;
	params.Scale = Scale;
	params.Color = Color;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B87E60
//		Name   -> Function GTABase.GTACoronaComponent.RemoveCorona
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGTACoronaComponent::RemoveCorona(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTACoronaComponent.RemoveCorona");

	UGTACoronaComponent_RemoveCorona_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B88240
//		Name   -> Function GTABase.GTACoronaComponent.AddCorona
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Intensity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FColor                                      Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UGTACoronaComponent::AddCorona(const struct FVector& position, float Intensity, float Scale, const struct FColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTACoronaComponent.AddCorona");

	UGTACoronaComponent_AddCorona_Params params {};
	params.position = position;
	params.Intensity = Intensity;
	params.Scale = Scale;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAClutterActor.DisallowSpawn
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AGTAClutterActor::DisallowSpawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAClutterActor.DisallowSpawn");

	AGTAClutterActor_DisallowSpawn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTACustomEntity.GetStaticVolumetricStrength
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
//		float                                              intoAO                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              intoUplight                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTACustomEntity::GetStaticVolumetricStrength(float* intoAO, float* intoUplight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTACustomEntity.GetStaticVolumetricStrength");

	AGTACustomEntity_GetStaticVolumetricStrength_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (intoAO != nullptr)
		*intoAO = params.intoAO;
	if (intoUplight != nullptr)
		*intoUplight = params.intoUplight;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAEnvLightingVolumeGrid.SetLevelBounds
//		Flags  -> (Final, Native, Public)
void AGTAEnvLightingVolumeGrid::SetLevelBounds()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAEnvLightingVolumeGrid.SetLevelBounds");

	AGTAEnvLightingVolumeGrid_SetLevelBounds_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B8A760
//		Name   -> Function GTABase.GTAEnvLightingVolumeGrid.GetSkyVisibilityAtLocation
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Pos                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AGTAEnvLightingVolumeGrid::STATIC_GetSkyVisibilityAtLocation(class UObject* WorldContextObject, const struct FVector& Pos, float Radius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAEnvLightingVolumeGrid.GetSkyVisibilityAtLocation");

	AGTAEnvLightingVolumeGrid_GetSkyVisibilityAtLocation_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Pos = Pos;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B8A3D0
//		Name   -> Function GTABase.GTAEnvLightingVolumeGrid.GetDynamicLightingAtLocation
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class AActor*                                      forActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Pos                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              outAO                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                outUplighting                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AGTAEnvLightingVolumeGrid::STATIC_GetDynamicLightingAtLocation(class AActor* forActor, const struct FVector& Pos, float Radius, float* outAO, struct FLinearColor* outUplighting, bool bForce)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAEnvLightingVolumeGrid.GetDynamicLightingAtLocation");

	AGTAEnvLightingVolumeGrid_GetDynamicLightingAtLocation_Params params {};
	params.forActor = forActor;
	params.Pos = Pos;
	params.Radius = Radius;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (outAO != nullptr)
		*outAO = params.outAO;
	if (outUplighting != nullptr)
		*outUplighting = params.outUplighting;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAEnvLightingVolumeGrid.ConstructGrid
//		Flags  -> (Final, Native, Public)
void AGTAEnvLightingVolumeGrid::ConstructGrid()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAEnvLightingVolumeGrid.ConstructGrid");

	AGTAEnvLightingVolumeGrid_ConstructGrid_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B8A300
//		Name   -> Function GTABase.GTAEnvLightingVolumeGrid.ClearAnyCachedDynamicLighting
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      forActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAEnvLightingVolumeGrid::STATIC_ClearAnyCachedDynamicLighting(class AActor* forActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAEnvLightingVolumeGrid.ClearAnyCachedDynamicLighting");

	AGTAEnvLightingVolumeGrid_ClearAnyCachedDynamicLighting_Params params {};
	params.forActor = forActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B8A2E0
//		Name   -> Function GTABase.GTAEnvLightingVolumeGrid.ClearAllCachedLighting
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void AGTAEnvLightingVolumeGrid::STATIC_ClearAllCachedLighting()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAEnvLightingVolumeGrid.ClearAllCachedLighting");

	AGTAEnvLightingVolumeGrid_ClearAllCachedLighting_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B8AC30
//		Name   -> Function GTABase.GTAExplosion.SetupAttachedActor
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AGTAExplosion::SetupAttachedActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAExplosion.SetupAttachedActor");

	AGTAExplosion_SetupAttachedActor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B8ABB0
//		Name   -> Function GTABase.GTAExplosion.EditorPreview
//		Flags  -> (Final, Native, Public)
void AGTAExplosion::EditorPreview()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAExplosion.EditorPreview");

	AGTAExplosion_EditorPreview_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAFire.GetSystem
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UParticleSystem*                             System                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAFire::GetSystem(class UParticleSystem** System, float* Distance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAFire.GetSystem");

	AGTAFire_GetSystem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (System != nullptr)
		*System = params.System;
	if (Distance != nullptr)
		*Distance = params.Distance;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAFire.Extinguish
//		Flags  -> (Event, Public, BlueprintEvent)
void AGTAFire::Extinguish()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAFire.Extinguish");

	AGTAFire_Extinguish_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAGrassProxy.ToggleViz
//		Flags  -> (Final, Native, Public)
void AGTAGrassProxy::ToggleViz()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAGrassProxy.ToggleViz");

	AGTAGrassProxy_ToggleViz_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAGrassProxy.SpawnInEditor
//		Flags  -> (Final, Native, Public)
void AGTAGrassProxy::SpawnInEditor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAGrassProxy.SpawnInEditor");

	AGTAGrassProxy_SpawnInEditor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAGrassProxy.Remove
//		Flags  -> (Final, Native, Public)
void AGTAGrassProxy::Remove()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAGrassProxy.Remove");

	AGTAGrassProxy_Remove_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAGrassProxy.BuildAndSpawn
//		Flags  -> (Final, Native, Public)
void AGTAGrassProxy::BuildAndSpawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAGrassProxy.BuildAndSpawn");

	AGTAGrassProxy_BuildAndSpawn_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAGrassProxy.Build
//		Flags  -> (Final, Native, Public)
void AGTAGrassProxy::Build()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAGrassProxy.Build");

	AGTAGrassProxy_Build_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B8BFE0
//		Name   -> Function GTABase.GTAGrassProxy.AddHelicopterGrassMovement
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Milliseconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StaticHeight                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              GrassFlutterFactor                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAGrassProxy::STATIC_AddHelicopterGrassMovement(const struct FVector& position, float Milliseconds, float StaticHeight, float GrassFlutterFactor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAGrassProxy.AddHelicopterGrassMovement");

	AGTAGrassProxy_AddHelicopterGrassMovement_Params params {};
	params.position = position;
	params.Milliseconds = Milliseconds;
	params.StaticHeight = StaticHeight;
	params.GrassFlutterFactor = GrassFlutterFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B8C5A0
//		Name   -> Function GTABase.GTAGrassProxy.AddGrassMovementInfluence
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAGrassProxy::STATIC_AddGrassMovementInfluence(const struct FVector& position, float Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAGrassProxy.AddGrassMovementInfluence");

	AGTAGrassProxy_AddGrassMovementInfluence_Params params {};
	params.position = position;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B8C440
//		Name   -> Function GTABase.GTAGrassProxy.AddFoliageMovementInfluence
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAGrassProxy::STATIC_AddFoliageMovementInfluence(const struct FVector& position, float Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAGrassProxy.AddFoliageMovementInfluence");

	AGTAGrassProxy_AddFoliageMovementInfluence_Params params {};
	params.position = position;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA2660
//		Name   -> Function GTABase.GTATrafficLightCache.ClearForRebuild
//		Flags  -> (Final, Native, Public)
void UGTATrafficLightCache::ClearForRebuild()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTATrafficLightCache.ClearForRebuild");

	UGTATrafficLightCache_ClearForRebuild_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA4C80
//		Name   -> Function GTABase.UI_DesignTimeUserWidget.UpdateLanguage
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUI_DesignTimeUserWidget::UpdateLanguage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.UpdateLanguage");

	UUI_DesignTimeUserWidget_UpdateLanguage_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA51F0
//		Name   -> Function GTABase.UI_DesignTimeUserWidget.TryToResolveSocialClubOnce
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUI_DesignTimeUserWidget::TryToResolveSocialClubOnce()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.TryToResolveSocialClubOnce");

	UUI_DesignTimeUserWidget_TryToResolveSocialClubOnce_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B79100
//		Name   -> Function GTABase.UI_DesignTimeUserWidget.TakeFocus
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUI_DesignTimeUserWidget::TakeFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.TakeFocus");

	UUI_DesignTimeUserWidget_TakeFocus_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA4870
//		Name   -> Function GTABase.UI_DesignTimeUserWidget.SetLocalizedStringsifNeeded
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UUI_DesignTimeUserWidget::SetLocalizedStringsifNeeded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.SetLocalizedStringsifNeeded");

	UUI_DesignTimeUserWidget_SetLocalizedStringsifNeeded_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA4E40
//		Name   -> Function GTABase.UI_DesignTimeUserWidget.PlayMenuSoundNative
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_DesignTimeUserWidget::PlayMenuSoundNative(float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.PlayMenuSoundNative");

	UUI_DesignTimeUserWidget_PlayMenuSoundNative_Params params {};
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA5400
//		Name   -> Function GTABase.UI_DesignTimeUserWidget.OnSynchronizeProperties
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void UUI_DesignTimeUserWidget::OnSynchronizeProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.OnSynchronizeProperties");

	UUI_DesignTimeUserWidget_OnSynchronizeProperties_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA4D00
//		Name   -> Function GTABase.UI_DesignTimeUserWidget.LaunchGame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Game                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_DesignTimeUserWidget::LaunchGame(const struct FString& Game)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.LaunchGame");

	UUI_DesignTimeUserWidget_LaunchGame_Params params {};
	params.Game = Game;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA5370
//		Name   -> Function GTABase.UI_DesignTimeUserWidget.IsWindowInForeground
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUI_DesignTimeUserWidget::IsWindowInForeground()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.IsWindowInForeground");

	UUI_DesignTimeUserWidget_IsWindowInForeground_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA53A0
//		Name   -> Function GTABase.UI_DesignTimeUserWidget.IsPlayingMovie
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUI_DesignTimeUserWidget::IsPlayingMovie()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.IsPlayingMovie");

	UUI_DesignTimeUserWidget_IsPlayingMovie_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA53D0
//		Name   -> Function GTABase.UI_DesignTimeUserWidget.HandleBack
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUI_DesignTimeUserWidget::HandleBack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.HandleBack");

	UUI_DesignTimeUserWidget_HandleBack_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA5230
//		Name   -> Function GTABase.UI_DesignTimeUserWidget.GetWorldSettings
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AWorldSettings*                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AWorldSettings* UUI_DesignTimeUserWidget::GetWorldSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.GetWorldSettings");

	UUI_DesignTimeUserWidget_GetWorldSettings_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA4850
//		Name   -> Function GTABase.UI_DesignTimeUserWidget.GetPlayerControlerIndex
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUI_DesignTimeUserWidget::STATIC_GetPlayerControlerIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.GetPlayerControlerIndex");

	UUI_DesignTimeUserWidget_GetPlayerControlerIndex_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA4890
//		Name   -> Function GTABase.UI_DesignTimeUserWidget.GetLocalizedStringFromKey
//		Flags  -> (Final, Native, Public)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUI_DesignTimeUserWidget::GetLocalizedStringFromKey(const struct FString& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.GetLocalizedStringFromKey");

	UUI_DesignTimeUserWidget_GetLocalizedStringFromKey_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA4830
//		Name   -> Function GTABase.UI_DesignTimeUserWidget.GetLastUserIndex
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UUI_DesignTimeUserWidget::STATIC_GetLastUserIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.GetLastUserIndex");

	UUI_DesignTimeUserWidget_GetLastUserIndex_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA4A50
//		Name   -> Function GTABase.UI_DesignTimeUserWidget.GetImageFilename
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UUI_DesignTimeUserWidget::GetImageFilename()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.GetImageFilename");

	UUI_DesignTimeUserWidget_GetImageFilename_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9CD10
//		Name   -> Function GTABase.UI_DesignTimeUserWidget.GetGameterface
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UGameterface*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameterface* UUI_DesignTimeUserWidget::GetGameterface()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.GetGameterface");

	UUI_DesignTimeUserWidget_GetGameterface_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA4B20
//		Name   -> Function GTABase.UI_DesignTimeUserWidget.FindUVsFromMapping
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		TEnumAsByte<GTABase_EHIDMapping>                   mapping                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector4                                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector4 UUI_DesignTimeUserWidget::FindUVsFromMapping(TEnumAsByte<GTABase_EHIDMapping> mapping)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.FindUVsFromMapping");

	UUI_DesignTimeUserWidget_FindUVsFromMapping_Params params {};
	params.mapping = mapping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA52A0
//		Name   -> Function GTABase.UI_DesignTimeUserWidget.ClearUserFocus
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AGTAPlayerController*                        PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_DesignTimeUserWidget::ClearUserFocus(class AGTAPlayerController* PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.ClearUserFocus");

	UUI_DesignTimeUserWidget_ClearUserFocus_Params params {};
	params.PC = PC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetWidgetTranslationPercent
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetWidgetTranslationPercent(float X, float Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetWidgetTranslationPercent");

	UUI_GTAHUDItem_SetWidgetTranslationPercent_Params params {};
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetWantedLevel
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                numStars                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                numParole                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bIsBlinking                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetWantedLevel(int numStars, int numParole, bool bIsBlinking)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetWantedLevel");

	UUI_GTAHUDItem_SetWantedLevel_Params params {};
	params.numStars = numStars;
	params.numParole = numParole;
	params.bIsBlinking = bIsBlinking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetVisible
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetVisible(bool IsVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetVisible");

	UUI_GTAHUDItem_SetVisible_Params params {};
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetTotalWidgetColor
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetTotalWidgetColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetTotalWidgetColor");

	UUI_GTAHUDItem_SetTotalWidgetColor_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetThirdImageColor
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetThirdImageColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetThirdImageColor");

	UUI_GTAHUDItem_SetThirdImageColor_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetThirdImage
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetThirdImage(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetThirdImage");

	UUI_GTAHUDItem_SetThirdImage_Params params {};
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetThirdFillBarSizeAndFill
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              FillBarPct                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              FillBarSize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetThirdFillBarSizeAndFill(float FillBarPct, float FillBarSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetThirdFillBarSizeAndFill");

	UUI_GTAHUDItem_SetThirdFillBarSizeAndFill_Params params {};
	params.FillBarPct = FillBarPct;
	params.FillBarSize = FillBarSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetSixthImageColor
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetSixthImageColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetSixthImageColor");

	UUI_GTAHUDItem_SetSixthImageColor_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetSixthImage
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetSixthImage(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetSixthImage");

	UUI_GTAHUDItem_SetSixthImage_Params params {};
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetSecondImageOffsets
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              xMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              yMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Xmax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Ymax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetSecondImageOffsets(float xMin, float yMin, float Xmax, float Ymax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetSecondImageOffsets");

	UUI_GTAHUDItem_SetSecondImageOffsets_Params params {};
	params.xMin = xMin;
	params.yMin = yMin;
	params.Xmax = Xmax;
	params.Ymax = Ymax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetSecondImageFillAmount
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              FillAmmount                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetSecondImageFillAmount(float FillAmmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetSecondImageFillAmount");

	UUI_GTAHUDItem_SetSecondImageFillAmount_Params params {};
	params.FillAmmount = FillAmmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetSecondImageFill
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                FillColor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              FillAmmount                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetSecondImageFill(class UTexture2D* Texture, const struct FLinearColor& FillColor, float FillAmmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetSecondImageFill");

	UUI_GTAHUDItem_SetSecondImageFill_Params params {};
	params.Texture = Texture;
	params.FillColor = FillColor;
	params.FillAmmount = FillAmmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetSecondImageColor
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetSecondImageColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetSecondImageColor");

	UUI_GTAHUDItem_SetSecondImageColor_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetSecondImageAnchors
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              xMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Xmax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              yMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Ymax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetSecondImageAnchors(float xMin, float Xmax, float yMin, float Ymax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetSecondImageAnchors");

	UUI_GTAHUDItem_SetSecondImageAnchors_Params params {};
	params.xMin = xMin;
	params.Xmax = Xmax;
	params.yMin = yMin;
	params.Ymax = Ymax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetSecondImage
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetSecondImage(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetSecondImage");

	UUI_GTAHUDItem_SetSecondImage_Params params {};
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetSecondFillBarSizeAndFill
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              FillBarPct                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              FillBarSize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetSecondFillBarSizeAndFill(float FillBarPct, float FillBarSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetSecondFillBarSizeAndFill");

	UUI_GTAHUDItem_SetSecondFillBarSizeAndFill_Params params {};
	params.FillBarPct = FillBarPct;
	params.FillBarSize = FillBarSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetPressed
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsPressed                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetPressed(bool IsPressed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetPressed");

	UUI_GTAHUDItem_SetPressed_Params params {};
	params.IsPressed = IsPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetPosition
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Xmax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Ymax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetPosition(float X, float Y, float Xmax, float Ymax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetPosition");

	UUI_GTAHUDItem_SetPosition_Params params {};
	params.X = X;
	params.Y = Y;
	params.Xmax = Xmax;
	params.Ymax = Ymax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetMappingImage
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  Tex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              U                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              V                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ULength                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              VLength                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetMappingImage(class UTexture2D* Tex, float U, float V, float ULength, float VLength, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetMappingImage");

	UUI_GTAHUDItem_SetMappingImage_Params params {};
	params.Tex = Tex;
	params.U = U;
	params.V = V;
	params.ULength = ULength;
	params.VLength = VLength;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetImageWithSpriteSheet
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              U                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              V                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ULength                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              VLength                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetImageWithSpriteSheet(class UTexture2D* Texture, float U, float V, float ULength, float VLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetImageWithSpriteSheet");

	UUI_GTAHUDItem_SetImageWithSpriteSheet_Params params {};
	params.Texture = Texture;
	params.U = U;
	params.V = V;
	params.ULength = ULength;
	params.VLength = VLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetImageOffsets
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              xMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              yMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Xmax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Ymax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetImageOffsets(float xMin, float yMin, float Xmax, float Ymax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetImageOffsets");

	UUI_GTAHUDItem_SetImageOffsets_Params params {};
	params.xMin = xMin;
	params.yMin = yMin;
	params.Xmax = Xmax;
	params.Ymax = Ymax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetImageMaterial
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetImageMaterial(class UMaterialInterface* Material)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetImageMaterial");

	UUI_GTAHUDItem_SetImageMaterial_Params params {};
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetImageColor
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               forceVisible                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetImageColor(const struct FLinearColor& Color, bool forceVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetImageColor");

	UUI_GTAHUDItem_SetImageColor_Params params {};
	params.Color = Color;
	params.forceVisible = forceVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetImageAnchors
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              xMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Xmax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              yMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Ymax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetImageAnchors(float xMin, float Xmax, float yMin, float Ymax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetImageAnchors");

	UUI_GTAHUDItem_SetImageAnchors_Params params {};
	params.xMin = xMin;
	params.Xmax = Xmax;
	params.yMin = yMin;
	params.Ymax = Ymax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetImage
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetImage(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetImage");

	UUI_GTAHUDItem_SetImage_Params params {};
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetFourthImageColor
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetFourthImageColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetFourthImageColor");

	UUI_GTAHUDItem_SetFourthImageColor_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetFourthImage
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetFourthImage(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetFourthImage");

	UUI_GTAHUDItem_SetFourthImage_Params params {};
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetFillBarSizeAndFill
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              FillBarPct                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              FillBarSize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetFillBarSizeAndFill(float FillBarPct, float FillBarSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetFillBarSizeAndFill");

	UUI_GTAHUDItem_SetFillBarSizeAndFill_Params params {};
	params.FillBarPct = FillBarPct;
	params.FillBarSize = FillBarSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetFifthImageColor
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetFifthImageColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetFifthImageColor");

	UUI_GTAHUDItem_SetFifthImageColor_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetFifthImage
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetFifthImage(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetFifthImage");

	UUI_GTAHUDItem_SetFifthImage_Params params {};
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetContentTextThree
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FLinearColor                                FontColorOverride                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetContentTextThree(const struct FText& Text, const struct FLinearColor& FontColorOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetContentTextThree");

	UUI_GTAHUDItem_SetContentTextThree_Params params {};
	params.Text = Text;
	params.FontColorOverride = FontColorOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetContentTextFour
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FLinearColor                                FontColorOverride                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetContentTextFour(const struct FText& Text, const struct FLinearColor& FontColorOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetContentTextFour");

	UUI_GTAHUDItem_SetContentTextFour_Params params {};
	params.Text = Text;
	params.FontColorOverride = FontColorOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetContentTextFive
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FLinearColor                                FontColorOverride                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetContentTextFive(const struct FText& Text, const struct FLinearColor& FontColorOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetContentTextFive");

	UUI_GTAHUDItem_SetContentTextFive_Params params {};
	params.Text = Text;
	params.FontColorOverride = FontColorOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetContentTextAnchors
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              xMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Xmax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              yMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Ymax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetContentTextAnchors(float xMin, float Xmax, float yMin, float Ymax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetContentTextAnchors");

	UUI_GTAHUDItem_SetContentTextAnchors_Params params {};
	params.xMin = xMin;
	params.Xmax = Xmax;
	params.yMin = yMin;
	params.Ymax = Ymax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetContentTextAdditional
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FLinearColor                                FontColorOverride                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetContentTextAdditional(const struct FText& Text, const struct FLinearColor& FontColorOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetContentTextAdditional");

	UUI_GTAHUDItem_SetContentTextAdditional_Params params {};
	params.Text = Text;
	params.FontColorOverride = FontColorOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetContentText
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FLinearColor                                FontColorOverride                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetContentText(const struct FText& Text, const struct FLinearColor& FontColorOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetContentText");

	UUI_GTAHUDItem_SetContentText_Params params {};
	params.Text = Text;
	params.FontColorOverride = FontColorOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetContentPercentOffset
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetContentPercentOffset(float X, float Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetContentPercentOffset");

	UUI_GTAHUDItem_SetContentPercentOffset_Params params {};
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.SetAnchorsInDrawer
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              minX                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              maxX                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              minY                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              maxY                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::SetAnchorsInDrawer(float minX, float maxX, float minY, float maxY)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetAnchorsInDrawer");

	UUI_GTAHUDItem_SetAnchorsInDrawer_Params params {};
	params.minX = minX;
	params.maxX = maxX;
	params.minY = minY;
	params.maxY = maxY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.RefreshAfterSettingsChange
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UUI_GTAHUDItem::RefreshAfterSettingsChange()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.RefreshAfterSettingsChange");

	UUI_GTAHUDItem_RefreshAfterSettingsChange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.OverrideMappingImageLocation
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              XMinOverride                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              XMaxOverride                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              YMinOverride                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              YMaxOverride                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::OverrideMappingImageLocation(float XMinOverride, float XMaxOverride, float YMinOverride, float YMaxOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.OverrideMappingImageLocation");

	UUI_GTAHUDItem_OverrideMappingImageLocation_Params params {};
	params.XMinOverride = XMinOverride;
	params.XMaxOverride = XMaxOverride;
	params.YMinOverride = YMinOverride;
	params.YMaxOverride = YMaxOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.GetPosition
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Xmax                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Ymax                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::GetPosition(float* X, float* Y, float* Xmax, float* Ymax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.GetPosition");

	UUI_GTAHUDItem_GetPosition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
	if (Xmax != nullptr)
		*Xmax = params.Xmax;
	if (Ymax != nullptr)
		*Ymax = params.Ymax;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.CustomFunctionWithStrings
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             Strings                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::CustomFunctionWithStrings(const struct FString& FunctionName, TArray<struct FString> Strings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.CustomFunctionWithStrings");

	UUI_GTAHUDItem_CustomFunctionWithStrings_Params params {};
	params.FunctionName = FunctionName;
	params.Strings = Strings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.CustomFunctionWithObjects
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FSlotImageStruct>                    Objects                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::CustomFunctionWithObjects(const struct FString& FunctionName, TArray<struct FSlotImageStruct> Objects)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.CustomFunctionWithObjects");

	UUI_GTAHUDItem_CustomFunctionWithObjects_Params params {};
	params.FunctionName = FunctionName;
	params.Objects = Objects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.CustomFunctionWithObject
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     Object                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::CustomFunctionWithObject(const struct FString& FunctionName, class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.CustomFunctionWithObject");

	UUI_GTAHUDItem_CustomFunctionWithObject_Params params {};
	params.FunctionName = FunctionName;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.CustomFunctionWithInteger
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                integer                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::CustomFunctionWithInteger(const struct FString& FunctionName, int integer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.CustomFunctionWithInteger");

	UUI_GTAHUDItem_CustomFunctionWithInteger_Params params {};
	params.FunctionName = FunctionName;
	params.integer = integer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.CustomFunctionWithFloats
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<float>                                      Floats                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::CustomFunctionWithFloats(const struct FString& FunctionName, TArray<float> Floats)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.CustomFunctionWithFloats");

	UUI_GTAHUDItem_CustomFunctionWithFloats_Params params {};
	params.FunctionName = FunctionName;
	params.Floats = Floats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.CustomFunctionWithFloat
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              floatNum                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::CustomFunctionWithFloat(const struct FString& FunctionName, float floatNum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.CustomFunctionWithFloat");

	UUI_GTAHUDItem_CustomFunctionWithFloat_Params params {};
	params.FunctionName = FunctionName;
	params.floatNum = floatNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.CustomFunctionWithColors
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FLinearColor>                        Colors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::CustomFunctionWithColors(const struct FString& FunctionName, TArray<struct FLinearColor> Colors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.CustomFunctionWithColors");

	UUI_GTAHUDItem_CustomFunctionWithColors_Params params {};
	params.FunctionName = FunctionName;
	params.Colors = Colors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.CustomFunctionWithColor
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                Color                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::CustomFunctionWithColor(const struct FString& FunctionName, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.CustomFunctionWithColor");

	UUI_GTAHUDItem_CustomFunctionWithColor_Params params {};
	params.FunctionName = FunctionName;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDItem.CustomFunction
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDItem::CustomFunction(const struct FString& FunctionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.CustomFunction");

	UUI_GTAHUDItem_CustomFunction_Params params {};
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA2A30
//		Name   -> Function GTABase.UI_GTAHUDItem.CustomBoolReturnFunction
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUI_GTAHUDItem::CustomBoolReturnFunction(const struct FString& FunctionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.CustomBoolReturnFunction");

	UUI_GTAHUDItem_CustomBoolReturnFunction_Params params {};
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDDrawer.UpdateItemsForSettings
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Setting                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDDrawer::UpdateItemsForSettings(const struct FString& Setting)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDDrawer.UpdateItemsForSettings");

	UUI_GTAHUDDrawer_UpdateItemsForSettings_Params params {};
	params.Setting = Setting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDDrawer.SetVisible
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDDrawer::SetVisible(bool IsVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDDrawer.SetVisible");

	UUI_GTAHUDDrawer_SetVisible_Params params {};
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA3BF0
//		Name   -> Function GTABase.UI_GTAHUDDrawer.SetScreenSize
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              screenWidth                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              screenHeight                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUI_GTAHUDDrawer::SetScreenSize(float screenWidth, float screenHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDDrawer.SetScreenSize");

	UUI_GTAHUDDrawer_SetScreenSize_Params params {};
	params.screenWidth = screenWidth;
	params.screenHeight = screenHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA3D60
//		Name   -> Function GTABase.UI_GTAHUDDrawer.SetHUDDrawerScale
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              HudMultX                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              HudMultY                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDDrawer::SetHUDDrawerScale(float HudMultX, float HudMultY)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDDrawer.SetHUDDrawerScale");

	UUI_GTAHUDDrawer_SetHUDDrawerScale_Params params {};
	params.HudMultX = HudMultX;
	params.HudMultY = HudMultY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDDrawer.RemoveGTAHUDItem
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ForName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUI_GTAHUDDrawer::RemoveGTAHUDItem(const struct FName& ForName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDDrawer.RemoveGTAHUDItem");

	UUI_GTAHUDDrawer_RemoveGTAHUDItem_Params params {};
	params.ForName = ForName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDDrawer.GetScreenMultAndOverrideSize
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              SizeMult                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              WidthOverride                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              HeightOverride                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_GTAHUDDrawer::GetScreenMultAndOverrideSize(float* SizeMult, float* WidthOverride, float* HeightOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDDrawer.GetScreenMultAndOverrideSize");

	UUI_GTAHUDDrawer_GetScreenMultAndOverrideSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SizeMult != nullptr)
		*SizeMult = params.SizeMult;
	if (WidthOverride != nullptr)
		*WidthOverride = params.WidthOverride;
	if (HeightOverride != nullptr)
		*HeightOverride = params.HeightOverride;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_GTAHUDDrawer.GetGTAHUDItem
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       ForName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               CreateIfNotFound                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUI_GTAHUDItem*                              ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUI_GTAHUDItem* UUI_GTAHUDDrawer::GetGTAHUDItem(const struct FName& ForName, bool CreateIfNotFound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDDrawer.GetGTAHUDItem");

	UUI_GTAHUDDrawer_GetGTAHUDItem_Params params {};
	params.ForName = ForName;
	params.CreateIfNotFound = CreateIfNotFound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_LoadingScreen.SetImageWithTexture
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                gameNumber                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_LoadingScreen::SetImageWithTexture(int gameNumber, class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_LoadingScreen.SetImageWithTexture");

	UUI_LoadingScreen_SetImageWithTexture_Params params {};
	params.gameNumber = gameNumber;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAUpgradePart.SetupLights
//		Flags  -> (Event, Public, BlueprintEvent)
void AGTAUpgradePart::SetupLights()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAUpgradePart.SetupLights");

	AGTAUpgradePart_SetupLights_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAUpgradePart.EnableLights
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bEnableLightsL                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bEnableLightsR                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAUpgradePart::EnableLights(bool bEnableLightsL, bool bEnableLightsR)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAUpgradePart.EnableLights");

	AGTAUpgradePart_EnableLights_Params params {};
	params.bEnableLightsL = bEnableLightsL;
	params.bEnableLightsR = bEnableLightsR;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAVehicleColorDB.Alphabetize
//		Flags  -> (Final, Native, Public)
void UGTAVehicleColorDB::Alphabetize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicleColorDB.Alphabetize");

	UGTAVehicleColorDB_Alphabetize_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA8C30
//		Name   -> Function GTABase.GTAViewportClient.InitTransition
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UUITransition*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUITransition* UGTAViewportClient::InitTransition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAViewportClient.InitTransition");

	UGTAViewportClient_InitTransition_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA8C60
//		Name   -> Function GTABase.GTAViewportClient.GetViewportClient
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UWorld*                                      ForWorld                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UGTAViewportClient*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGTAViewportClient* UGTAViewportClient::STATIC_GetViewportClient(class UWorld* ForWorld)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAViewportClient.GetViewportClient");

	UGTAViewportClient_GetViewportClient_Params params {};
	params.ForWorld = ForWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B7ADC0
//		Name   -> Function GTABase.GTAViewportClient.GetTransitionManager
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UUITransition*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUITransition* UGTAViewportClient::STATIC_GetTransitionManager()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAViewportClient.GetTransitionManager");

	UGTAViewportClient_GetTransitionManager_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA8C10
//		Name   -> Function GTABase.GTAViewportClient.DestroyTransition
//		Flags  -> (Final, Native, Private)
void UGTAViewportClient::DestroyTransition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAViewportClient.DestroyTransition");

	UGTAViewportClient_DestroyTransition_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAVolumetricCloud.UpdateCloudiness
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              SunAmt                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              CloudAmt                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAVolumetricCloud::UpdateCloudiness(float SunAmt, float CloudAmt)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVolumetricCloud.UpdateCloudiness");

	AGTAVolumetricCloud_UpdateCloudiness_Params params {};
	params.SunAmt = SunAmt;
	params.CloudAmt = CloudAmt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAVolumetricCloud.SetSkyParams
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              SunIntensity                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              MoonIntensity                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAVolumetricCloud::SetSkyParams(float SunIntensity, float MoonIntensity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVolumetricCloud.SetSkyParams");

	AGTAVolumetricCloud_SetSkyParams_Params params {};
	params.SunIntensity = SunIntensity;
	params.MoonIntensity = MoonIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAVolumetricCloud.SetQualityLevel
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                quality                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAVolumetricCloud::SetQualityLevel(int quality)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVolumetricCloud.SetQualityLevel");

	AGTAVolumetricCloud_SetQualityLevel_Params params {};
	params.quality = quality;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAVolumetricCloud.SetExtinction
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAVolumetricCloud::SetExtinction(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVolumetricCloud.SetExtinction");

	AGTAVolumetricCloud_SetExtinction_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAVolumetricCloud.SetEmission
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAVolumetricCloud::SetEmission(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVolumetricCloud.SetEmission");

	AGTAVolumetricCloud_SetEmission_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAVolumetricCloud.SetColor
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Intensity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              raleigh                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USkyAtmosphereComponent*                     AtmosphereComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAVolumetricCloud::SetColor(const struct FLinearColor& Color, float Intensity, float raleigh, class USkyAtmosphereComponent* AtmosphereComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVolumetricCloud.SetColor");

	AGTAVolumetricCloud_SetColor_Params params {};
	params.Color = Color;
	params.Intensity = Intensity;
	params.raleigh = raleigh;
	params.AtmosphereComponent = AtmosphereComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA8F10
//		Name   -> Function GTABase.GTAVolumetricCloud.IsHDRActive
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AGTAVolumetricCloud::IsHDRActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVolumetricCloud.IsHDRActive");

	AGTAVolumetricCloud_IsHDRActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA91B0
//		Name   -> Function GTABase.GTAWater.GetGTAWaterActor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class AGTAWater*                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AGTAWater* AGTAWater::STATIC_GetGTAWaterActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWater.GetGTAWaterActor");

	AGTAWater_GetGTAWaterActor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAWeapon.StopSpin
//		Flags  -> (Event, Public, BlueprintEvent)
void AGTAWeapon::StopSpin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWeapon.StopSpin");

	AGTAWeapon_StopSpin_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA9280
//		Name   -> Function GTABase.GTAWeapon.SetFlashAmount
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		float                                              amt                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAWeapon::SetFlashAmount(float amt)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWeapon.SetFlashAmount");

	AGTAWeapon_SetFlashAmount_Params params {};
	params.amt = amt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAWeapon.SetEffect
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                effectNo                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              amt                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAWeapon::SetEffect(int effectNo, float amt)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWeapon.SetEffect");

	AGTAWeapon_SetEffect_Params params {};
	params.effectNo = effectNo;
	params.amt = amt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAWeapon.SetBarrelRotation
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              amt                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAWeapon::SetBarrelRotation(float amt)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWeapon.SetBarrelRotation");

	AGTAWeapon_SetBarrelRotation_Params params {};
	params.amt = amt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B767F0
//		Name   -> Function GTABase.GTAWeapon.GetFlashMaterialIndex
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AGTAWeapon::GetFlashMaterialIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWeapon.GetFlashMaterialIndex");

	AGTAWeapon_GetFlashMaterialIndex_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAWeapon.AttachWeaponEffect
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UParticleSystemComponent*                    fxComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AGTAWeapon::AttachWeaponEffect(class UParticleSystemComponent* fxComp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWeapon.AttachWeaponEffect");

	AGTAWeapon_AttachWeaponEffect_Params params {};
	params.fxComp = fxComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAWeapon.AddSpin
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AGTAWeapon*                                  srcWeapon                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAWeapon::AddSpin(class AGTAWeapon* srcWeapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWeapon.AddSpin");

	AGTAWeapon_AddSpin_Params params {};
	params.srcWeapon = srcWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA9A20
//		Name   -> Function GTABase.GTAWindowLights.MICHasBoolParameterSet
//		Flags  -> (Final, Native, Static, Protected, BlueprintCallable)
// Parameters:
//		class UMaterialInstanceConstant*                   MIC                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AGTAWindowLights::STATIC_MICHasBoolParameterSet(class UMaterialInstanceConstant* MIC, const struct FName& ParameterName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWindowLights.MICHasBoolParameterSet");

	AGTAWindowLights_MICHasBoolParameterSet_Params params {};
	params.MIC = MIC;
	params.ParameterName = ParameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAWindowLights.IsEmissiveWindowMaterial
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		class UMaterialInterface*                          Mat                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UGTAMaterialData*                            UserData                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FWindowLightCollectionParameters            Params                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AGTAWindowLights::IsEmissiveWindowMaterial(class UMaterialInterface* Mat, class UGTAMaterialData* UserData, struct FWindowLightCollectionParameters* Params)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWindowLights.IsEmissiveWindowMaterial");

	AGTAWindowLights_IsEmissiveWindowMaterial_Params params {};
	params.Mat = Mat;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Params != nullptr)
		*Params = params.Params;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAWindowLights.GetChannelMultipliers
//		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AGTAWindowLights::GetChannelMultipliers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWindowLights.GetChannelMultipliers");

	AGTAWindowLights_GetChannelMultipliers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA9950
//		Name   -> Function GTABase.GTAWindowLights.GetAverageTextureColor
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UTexture*                                    forTexture                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor AGTAWindowLights::STATIC_GetAverageTextureColor(class UTexture* forTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWindowLights.GetAverageTextureColor");

	AGTAWindowLights_GetAverageTextureColor_Params params {};
	params.forTexture = forTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAWindowLights.ConstructLight
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
//		int                                                detailSetting                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  Trx                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FLinearColor                                lightColor                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULightComponent*                             ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULightComponent* AGTAWindowLights::ConstructLight(int detailSetting, const struct FTransform& Trx, const struct FLinearColor& lightColor, float Width, float Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWindowLights.ConstructLight");

	AGTAWindowLights_ConstructLight_Params params {};
	params.detailSetting = detailSetting;
	params.Trx = Trx;
	params.lightColor = lightColor;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAWindowLights.Build
//		Flags  -> (Final, Native, Public)
void AGTAWindowLights::Build()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWindowLights.Build");

	AGTAWindowLights_Build_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAA970
//		Name   -> Function GTABase.GTAWorldComposition.ProcessedStreamRequest
//		Flags  -> (Native, Public, HasOutParms)
// Parameters:
//		struct FGTAStreamRequest                           request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UGTAWorldComposition::ProcessedStreamRequest(const struct FGTAStreamRequest& request)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldComposition.ProcessedStreamRequest");

	UGTAWorldComposition_ProcessedStreamRequest_Params params {};
	params.request = request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAWorldComposition.LoadAllHLODMaps
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGTAWorldComposition::LoadAllHLODMaps()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldComposition.LoadAllHLODMaps");

	UGTAWorldComposition_LoadAllHLODMaps_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAWorldComposition.GenerateQuadrantHLODs
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGTAWorldComposition::GenerateQuadrantHLODs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldComposition.GenerateQuadrantHLODs");

	UGTAWorldComposition_GenerateQuadrantHLODs_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAWorldComposition.GenerateDistantSectionHLODs
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGTAWorldComposition::GenerateDistantSectionHLODs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldComposition.GenerateDistantSectionHLODs");

	UGTAWorldComposition_GenerateDistantSectionHLODs_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAWorldComposition.GenerateAllWorldComp
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGTAWorldComposition::GenerateAllWorldComp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldComposition.GenerateAllWorldComp");

	UGTAWorldComposition_GenerateAllWorldComp_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAWorldComposition.GenerateAllStreetLights
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGTAWorldComposition::GenerateAllStreetLights()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldComposition.GenerateAllStreetLights");

	UGTAWorldComposition_GenerateAllStreetLights_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAWorldComposition.GenerateAllProxyLighting
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGTAWorldComposition::GenerateAllProxyLighting()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldComposition.GenerateAllProxyLighting");

	UGTAWorldComposition_GenerateAllProxyLighting_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAWorldComposition.GenerateAllMeshProxies
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGTAWorldComposition::GenerateAllMeshProxies()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldComposition.GenerateAllMeshProxies");

	UGTAWorldComposition_GenerateAllMeshProxies_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAWorldComposition.GenerateAllHeadlightRibbons
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGTAWorldComposition::GenerateAllHeadlightRibbons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldComposition.GenerateAllHeadlightRibbons");

	UGTAWorldComposition_GenerateAllHeadlightRibbons_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAWorldComposition.BuildAllMapData
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGTAWorldComposition::BuildAllMapData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldComposition.BuildAllMapData");

	UGTAWorldComposition_BuildAllMapData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAWorldSettings.WorstTextureUsage
//		Flags  -> (Final, Native, Public)
void AGTAWorldSettings::WorstTextureUsage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldSettings.WorstTextureUsage");

	AGTAWorldSettings_WorstTextureUsage_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAWorldSettings.WorstMapData
//		Flags  -> (Final, Native, Public)
void AGTAWorldSettings::WorstMapData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldSettings.WorstMapData");

	AGTAWorldSettings_WorstMapData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAWorldSettings.VertexColorSize
//		Flags  -> (Final, Native, Public)
void AGTAWorldSettings::VertexColorSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldSettings.VertexColorSize");

	AGTAWorldSettings_VertexColorSize_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAWorldSettings.ToggleOnlyCastFarShadows
//		Flags  -> (Final, Native, Public)
void AGTAWorldSettings::ToggleOnlyCastFarShadows()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldSettings.ToggleOnlyCastFarShadows");

	AGTAWorldSettings_ToggleOnlyCastFarShadows_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAWorldSettings.ResetLODs
//		Flags  -> (Final, Native, Public)
void AGTAWorldSettings::ResetLODs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldSettings.ResetLODs");

	AGTAWorldSettings_ResetLODs_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAWorldSettings.OscillateLODs
//		Flags  -> (Final, Native, Public)
void AGTAWorldSettings::OscillateLODs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldSettings.OscillateLODs");

	AGTAWorldSettings_OscillateLODs_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAWorldSettings.HighVertCounts
//		Flags  -> (Final, Native, Public)
void AGTAWorldSettings::HighVertCounts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldSettings.HighVertCounts");

	AGTAWorldSettings_HighVertCounts_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAC100
//		Name   -> Function GTABase.GTAWorldSettings.GetCoronaComponent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bDynamic                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUpClose                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UGTACoronaComponent*                         ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGTACoronaComponent* AGTAWorldSettings::GetCoronaComponent(bool bDynamic, bool bUpClose)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldSettings.GetCoronaComponent");

	AGTAWorldSettings_GetCoronaComponent_Params params {};
	params.bDynamic = bDynamic;
	params.bUpClose = bUpClose;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAWorldSettings.FixLODs
//		Flags  -> (Final, Native, Public)
void AGTAWorldSettings::FixLODs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldSettings.FixLODs");

	AGTAWorldSettings_FixLODs_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAWorldSettings.FindDefaultMat
//		Flags  -> (Final, Native, Public)
void AGTAWorldSettings::FindDefaultMat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldSettings.FindDefaultMat");

	AGTAWorldSettings_FindDefaultMat_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAWorldSettings.CycleFarShadowModes
//		Flags  -> (Final, Native, Public)
void AGTAWorldSettings::CycleFarShadowModes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldSettings.CycleFarShadowModes");

	AGTAWorldSettings_CycleFarShadowModes_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B8E250
//		Name   -> Function GTABase.GTAHUD.PrintString
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     pCharacters                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FColor                                      Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFont*                                       InFont                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<GTABase_EHUDTextJustify>               justify                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               inShadow                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAHUD::STATIC_PrintString(float X, float Y, const struct FVector2D& Scale, const struct FString& pCharacters, const struct FColor& Color, class UFont* InFont, TEnumAsByte<GTABase_EHUDTextJustify> justify, bool inShadow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAHUD.PrintString");

	AGTAHUD_PrintString_Params params {};
	params.X = X;
	params.Y = Y;
	params.Scale = Scale;
	params.pCharacters = pCharacters;
	params.Color = Color;
	params.InFont = InFont;
	params.justify = justify;
	params.inShadow = inShadow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAPathfindVisualization.SnapToNodeIndex
//		Flags  -> (Final, Native, Private)
void AGTAPathfindVisualization::SnapToNodeIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPathfindVisualization.SnapToNodeIndex");

	AGTAPathfindVisualization_SnapToNodeIndex_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAPathfindVisualization.SetReversePoint
//		Flags  -> (Final, Native, Private)
void AGTAPathfindVisualization::SetReversePoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPathfindVisualization.SetReversePoint");

	AGTAPathfindVisualization_SetReversePoint_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAPathfindVisualization.SetDebugPoint
//		Flags  -> (Final, Native, Private)
void AGTAPathfindVisualization::SetDebugPoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPathfindVisualization.SetDebugPoint");

	AGTAPathfindVisualization_SetDebugPoint_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B93880
//		Name   -> Function GTABase.GTAPathfindVisualization.RunMeshGenVisualization
//		Flags  -> (Final, Native, Private)
void AGTAPathfindVisualization::RunMeshGenVisualization()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPathfindVisualization.RunMeshGenVisualization");

	AGTAPathfindVisualization_RunMeshGenVisualization_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAPathfindVisualization.DoFloodFill
//		Flags  -> (Final, Native, Private)
void AGTAPathfindVisualization::DoFloodFill()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPathfindVisualization.DoFloodFill");

	AGTAPathfindVisualization_DoFloodFill_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.FloodPath.RebuildPathUVs
//		Flags  -> (Final, Native, Public)
void UFloodPath::RebuildPathUVs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.FloodPath.RebuildPathUVs");

	UFloodPath_RebuildPathUVs_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.FloodPath.OptimizePaths
//		Flags  -> (Final, Native, Public)
void UFloodPath::OptimizePaths()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.FloodPath.OptimizePaths");

	UFloodPath_OptimizePaths_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.FloodPath.CheckDebugPoint
//		Flags  -> (Final, Native, Public)
void UFloodPath::CheckDebugPoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.FloodPath.CheckDebugPoint");

	UFloodPath_CheckDebugPoint_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B956F0
//		Name   -> Function GTABase.GTAPlayerActor.UseBoneTweaks
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AGTAPlayerActor::UseBoneTweaks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPlayerActor.UseBoneTweaks");

	AGTAPlayerActor_UseBoneTweaks_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAPlayerActor.SetupPlayerMorph
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UGTAPoseableComponent*                       forComp                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              withFatness                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              withRippedness                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAPlayerActor::SetupPlayerMorph(class UGTAPoseableComponent* forComp, float withFatness, float withRippedness)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPlayerActor.SetupPlayerMorph");

	AGTAPlayerActor_SetupPlayerMorph_Params params {};
	params.forComp = forComp;
	params.withFatness = withFatness;
	params.withRippedness = withRippedness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B95710
//		Name   -> Function GTABase.GTAPlayerActor.GetSkeletalMesh
//		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
//		class USkeletalMesh*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USkeletalMesh* AGTAPlayerActor::GetSkeletalMesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPlayerActor.GetSkeletalMesh");

	AGTAPlayerActor_GetSkeletalMesh_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B956C0
//		Name   -> Function GTABase.GTAPlayerActor.GetMeshForAttachment
//		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
//		class UGTAPoseableComponent*                       ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGTAPoseableComponent* AGTAPlayerActor::GetMeshForAttachment()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPlayerActor.GetMeshForAttachment");

	AGTAPlayerActor_GetMeshForAttachment_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAPlayerActor.GetClothingTable
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UGTAClothingTable*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGTAClothingTable* AGTAPlayerActor::GetClothingTable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPlayerActor.GetClothingTable");

	AGTAPlayerActor_GetClothingTable_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAPlayerActor.GetBodyPart
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USkinnedMeshComponent*                       ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USkinnedMeshComponent* AGTAPlayerActor::GetBodyPart(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPlayerActor.GetBodyPart");

	AGTAPlayerActor_GetBodyPart_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B95AC0
//		Name   -> Function GTABase.GTAPlayerController.ClearUserFocus
//		Flags  -> (Native, Public, BlueprintCallable)
void AGTAPlayerController::ClearUserFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPlayerController.ClearUserFocus");

	AGTAPlayerController_ClearUserFocus_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B7F610
//		Name   -> Function GTABase.GTAPoseableComponent.UnbindClothFromMasterPoseComponent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bRestoreSimulationSpace                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGTAPoseableComponent::UnbindClothFromMasterPoseComponent(bool bRestoreSimulationSpace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPoseableComponent.UnbindClothFromMasterPoseComponent");

	UGTAPoseableComponent_UnbindClothFromMasterPoseComponent_Params params {};
	params.bRestoreSimulationSpace = bRestoreSimulationSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B96D80
//		Name   -> Function GTABase.GTAPoseableComponent.SuspendClothingSimulation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGTAPoseableComponent::SuspendClothingSimulation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPoseableComponent.SuspendClothingSimulation");

	UGTAPoseableComponent_SuspendClothingSimulation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B96DE0
//		Name   -> Function GTABase.GTAPoseableComponent.SetMorphTargetWeight
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       forMorph                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Weight                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGTAPoseableComponent::SetMorphTargetWeight(const struct FName& forMorph, float Weight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPoseableComponent.SetMorphTargetWeight");

	UGTAPoseableComponent_SetMorphTargetWeight_Params params {};
	params.forMorph = forMorph;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B96D50
//		Name   -> Function GTABase.GTAPoseableComponent.ResumeClothingSimulation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGTAPoseableComponent::ResumeClothingSimulation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPoseableComponent.ResumeClothingSimulation");

	UGTAPoseableComponent_ResumeClothingSimulation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B96D00
//		Name   -> Function GTABase.GTAPoseableComponent.ResetClothTeleportMode
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGTAPoseableComponent::ResetClothTeleportMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPoseableComponent.ResetClothTeleportMode");

	UGTAPoseableComponent_ResetClothTeleportMode_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B96D20
//		Name   -> Function GTABase.GTAPoseableComponent.IsClothingSimulationSuspended
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGTAPoseableComponent::IsClothingSimulationSuspended()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPoseableComponent.IsClothingSimulationSuspended");

	UGTAPoseableComponent_IsClothingSimulationSuspended_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B96CE0
//		Name   -> Function GTABase.GTAPoseableComponent.GetClothingSimulationInteractor
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UClothingSimulationInteractor*               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClothingSimulationInteractor* UGTAPoseableComponent::GetClothingSimulationInteractor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPoseableComponent.GetClothingSimulationInteractor");

	UGTAPoseableComponent_GetClothingSimulationInteractor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B96DA0
//		Name   -> Function GTABase.GTAPoseableComponent.ForceClothNextUpdateTeleportAndReset
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGTAPoseableComponent::ForceClothNextUpdateTeleportAndReset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPoseableComponent.ForceClothNextUpdateTeleportAndReset");

	UGTAPoseableComponent_ForceClothNextUpdateTeleportAndReset_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B96DC0
//		Name   -> Function GTABase.GTAPoseableComponent.ForceClothNextUpdateTeleport
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGTAPoseableComponent::ForceClothNextUpdateTeleport()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPoseableComponent.ForceClothNextUpdateTeleport");

	UGTAPoseableComponent_ForceClothNextUpdateTeleport_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAPoseableComponent.BindClothToMasterPoseComponent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGTAPoseableComponent::BindClothToMasterPoseComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPoseableComponent.BindClothToMasterPoseComponent");

	UGTAPoseableComponent_BindClothToMasterPoseComponent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTAPostLightReplacer.PreviewInEditor
//		Flags  -> (Final, Native, Public)
void AGTAPostLightReplacer::PreviewInEditor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPostLightReplacer.PreviewInEditor");

	AGTAPostLightReplacer_PreviewInEditor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B975B0
//		Name   -> Function GTABase.GTAPostProcessVolume.UpdateColorOptions
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AGTAPostProcessVolume::UpdateColorOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPostProcessVolume.UpdateColorOptions");

	AGTAPostProcessVolume_UpdateColorOptions_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B975D0
//		Name   -> Function GTABase.GTAPostProcessVolume.SetCameraParameters
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FLinearColor                                withValue                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAPostProcessVolume::SetCameraParameters(const struct FLinearColor& withValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPostProcessVolume.SetCameraParameters");

	AGTAPostProcessVolume_SetCameraParameters_Params params {};
	params.withValue = withValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B976D0
//		Name   -> Function GTABase.GTAPostProcessVolume.SetAutoExposure
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              withValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAPostProcessVolume::SetAutoExposure(float withValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPostProcessVolume.SetAutoExposure");

	AGTAPostProcessVolume_SetAutoExposure_Params params {};
	params.withValue = withValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTARadar.SwitchedMode
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               bMenuMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTARadar::SwitchedMode(bool bMenuMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTARadar.SwitchedMode");

	AGTARadar_SwitchedMode_Params params {};
	params.bMenuMode = bMenuMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B98330
//		Name   -> Function GTABase.GTARadar.SetupMenu
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     playerDirection                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              zoomAmt                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTARadar::SetupMenu(const struct FVector& position, const struct FVector& playerDirection, float zoomAmt)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTARadar.SetupMenu");

	AGTARadar_SetupMenu_Params params {};
	params.position = position;
	params.playerDirection = playerDirection;
	params.zoomAmt = zoomAmt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B982F0
//		Name   -> Function GTABase.GTARadar.IsActive
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AGTARadar::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTARadar.IsActive");

	AGTARadar_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTARadar.GetReferencePoints
//		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FVector                                     MinRef                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     MaxRef                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTARadar::GetReferencePoints(struct FVector* MinRef, struct FVector* MaxRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTARadar.GetReferencePoints");

	AGTARadar_GetReferencePoints_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MinRef != nullptr)
		*MinRef = params.MinRef;
	if (MaxRef != nullptr)
		*MaxRef = params.MaxRef;

}


// Function:
//		Offset -> 0x00B98310
//		Name   -> Function GTABase.GTARadar.GetRadarState
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TEnumAsByte<GTABase_ERadarState>                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<GTABase_ERadarState> AGTARadar::GetRadarState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTARadar.GetRadarState");

	AGTARadar_GetRadarState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B98290
//		Name   -> Function GTABase.GTARadar.GetMapZoomedOutPositionBounds
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector4                                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector4 AGTARadar::GetMapZoomedOutPositionBounds()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTARadar.GetMapZoomedOutPositionBounds");

	AGTARadar_GetMapZoomedOutPositionBounds_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B982C0
//		Name   -> Function GTABase.GTARadar.GetMapZoomedInPositionBounds
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector4                                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector4 AGTARadar::GetMapZoomedInPositionBounds()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTARadar.GetMapZoomedInPositionBounds");

	AGTARadar_GetMapZoomedInPositionBounds_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B97F10
//		Name   -> Function GTABase.GTARadar.GetMapZoomBounds
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		float                                              MinZoom                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              MaxZoom                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTARadar::GetMapZoomBounds(float* MinZoom, float* MaxZoom)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTARadar.GetMapZoomBounds");

	AGTARadar_GetMapZoomBounds_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MinZoom != nullptr)
		*MinZoom = params.MinZoom;
	if (MaxZoom != nullptr)
		*MaxZoom = params.MaxZoom;

}


// Function:
//		Offset -> 0x00B980A0
//		Name   -> Function GTABase.GTARadar.GetMapPositionBoundsWithZoom
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		float                                              CurrentZoom                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector4                                    Bounds                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTARadar::GetMapPositionBoundsWithZoom(float CurrentZoom, struct FVector4* Bounds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTARadar.GetMapPositionBoundsWithZoom");

	AGTARadar_GetMapPositionBoundsWithZoom_Params params {};
	params.CurrentZoom = CurrentZoom;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Bounds != nullptr)
		*Bounds = params.Bounds;

}


// Function:
//		Offset -> 0x00B97EE0
//		Name   -> Function GTABase.GTARadar.GetGTARadarActor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class AGTARadar*                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AGTARadar* AGTARadar::STATIC_GetGTARadarActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTARadar.GetGTARadarActor");

	AGTARadar_GetGTARadarActor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTARadar.FetchRadarComponents
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		TArray<class UPrimitiveComponent*>                 Components                                                 (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AGTARadar::FetchRadarComponents(TArray<class UPrimitiveComponent*>* Components)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTARadar.FetchRadarComponents");

	AGTARadar_FetchRadarComponents_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Components != nullptr)
		*Components = params.Components;

}


// Function:
//		Offset -> 0x00B98540
//		Name   -> Function GTABase.GTARadar.ConvertToWorldSpace
//		Flags  -> (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     RadarPos                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AGTARadar::ConvertToWorldSpace(const struct FVector& RadarPos)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTARadar.ConvertToWorldSpace");

	AGTARadar_ConvertToWorldSpace_Params params {};
	params.RadarPos = RadarPos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B98690
//		Name   -> Function GTABase.GTARadar.ConvertToRadarSpace
//		Flags  -> (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     WorldPos                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AGTARadar::ConvertToRadarSpace(const struct FVector& WorldPos)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTARadar.ConvertToRadarSpace");

	AGTARadar_ConvertToRadarSpace_Params params {};
	params.WorldPos = WorldPos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_Radar.SetUVs
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FBox2D                                      newUVs                                                     (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UUI_Radar::SetUVs(const struct FBox2D& newUVs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Radar.SetUVs");

	UUI_Radar_SetUVs_Params params {};
	params.newUVs = newUVs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B98EB0
//		Name   -> Function GTABase.UI_Radar.SetupMap
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     InitialPosition                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              InitialZoom                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_Radar::SetupMap(struct FVector* InitialPosition, float* InitialZoom)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Radar.SetupMap");

	UUI_Radar_SetupMap_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InitialPosition != nullptr)
		*InitialPosition = params.InitialPosition;
	if (InitialZoom != nullptr)
		*InitialZoom = params.InitialZoom;

}


// Function:
//		Offset -> 0x00B98E90
//		Name   -> Function GTABase.UI_Radar.ResizeMap
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UUI_Radar::ResizeMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Radar.ResizeMap");

	UUI_Radar_ResizeMap_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B98D10
//		Name   -> Function GTABase.UI_Radar.RenderMap
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              zoomAmt                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UUI_Radar::RenderMap(const struct FVector& position, float zoomAmt)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Radar.RenderMap");

	UUI_Radar_RenderMap_Params params {};
	params.position = position;
	params.zoomAmt = zoomAmt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B99140
//		Name   -> Function GTABase.UI_Radar.GetWorldPosition
//		Flags  -> (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector2D                                   MousePosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UUI_Radar::GetWorldPosition(const struct FVector2D& MousePosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Radar.GetWorldPosition");

	UUI_Radar_GetWorldPosition_Params params {};
	params.MousePosition = MousePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B98AC0
//		Name   -> Function GTABase.UI_Radar.GetCurrentUVs
//		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FBox2D                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FBox2D UUI_Radar::GetCurrentUVs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Radar.GetCurrentUVs");

	UUI_Radar_GetCurrentUVs_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B98C00
//		Name   -> Function GTABase.UI_Radar.DoMapJump
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector2D                                   MousePosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_Radar::DoMapJump(const struct FVector2D& MousePosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Radar.DoMapJump");

	UUI_Radar_DoMapJump_Params params {};
	params.MousePosition = MousePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.UI_Radar.CloseMap
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UUI_Radar::CloseMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Radar.CloseMap");

	UUI_Radar_CloseMap_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B98B00
//		Name   -> Function GTABase.UI_Radar.AddCustomWaypoint
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector2D                                   MousePosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_Radar::AddCustomWaypoint(const struct FVector2D& MousePosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Radar.AddCustomWaypoint");

	UUI_Radar_AddCustomWaypoint_Params params {};
	params.MousePosition = MousePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9A560
//		Name   -> Function GTABase.SoundNodeProceduralWavePlayer.StreamingAssetsLoadedCallback
//		Flags  -> (Final, Native, Private)
void USoundNodeProceduralWavePlayer::StreamingAssetsLoadedCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.SoundNodeProceduralWavePlayer.StreamingAssetsLoadedCallback");

	USoundNodeProceduralWavePlayer_StreamingAssetsLoadedCallback_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9A540
//		Name   -> Function GTABase.SoundNodeProceduralWavePlayer.PreloadedAssetsLoadedCallback
//		Flags  -> (Final, Native, Private)
void USoundNodeProceduralWavePlayer::PreloadedAssetsLoadedCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.SoundNodeProceduralWavePlayer.PreloadedAssetsLoadedCallback");

	USoundNodeProceduralWavePlayer_PreloadedAssetsLoadedCallback_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9BA30
//		Name   -> Function GTABase.GTAScalableRichTextBlock.ForceRefreshProperties
//		Flags  -> (Native, Public, BlueprintCallable)
void UGTAScalableRichTextBlock::ForceRefreshProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAScalableRichTextBlock.ForceRefreshProperties");

	UGTAScalableRichTextBlock_ForceRefreshProperties_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9C020
//		Name   -> Function GTABase.GTARTCaptureBase.UnregisterCoronaByID
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTARTCaptureBase::STATIC_UnregisterCoronaByID(int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTARTCaptureBase.UnregisterCoronaByID");

	AGTARTCaptureBase_UnregisterCoronaByID_Params params {};
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9C100
//		Name   -> Function GTABase.GTARTCaptureBase.RegisterCoronaWithParams
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                withColor                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              WithSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              WithBrightness                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AGTARTCaptureBase::STATIC_RegisterCoronaWithParams(const struct FVector& position, const struct FLinearColor& withColor, float WithSize, float WithBrightness)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTARTCaptureBase.RegisterCoronaWithParams");

	AGTARTCaptureBase_RegisterCoronaWithParams_Params params {};
	params.position = position;
	params.withColor = withColor;
	params.WithSize = WithSize;
	params.WithBrightness = WithBrightness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9BE40
//		Name   -> Function GTABase.GTARTCaptureBase.RegisterCoronaUsingLight
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ULightComponent*                             ForLight                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              WithSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AGTARTCaptureBase::STATIC_RegisterCoronaUsingLight(class ULightComponent* ForLight, float WithSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTARTCaptureBase.RegisterCoronaUsingLight");

	AGTARTCaptureBase_RegisterCoronaUsingLight_Params params {};
	params.ForLight = ForLight;
	params.WithSize = WithSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAJetpack.UpdateThrust
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              newThrustLeft                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              newThrustRight                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAJetpack::UpdateThrust(float newThrustLeft, float newThrustRight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAJetpack.UpdateThrust");

	AGTAJetpack_UpdateThrust_Params params {};
	params.newThrustLeft = newThrustLeft;
	params.newThrustRight = newThrustRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTALevelScriptActor.SetWeatherImpactEffects
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              RoadWetness                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              WaveAmount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTALevelScriptActor::SetWeatherImpactEffects(float RoadWetness, float WaveAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTALevelScriptActor.SetWeatherImpactEffects");

	AGTALevelScriptActor_SetWeatherImpactEffects_Params params {};
	params.RoadWetness = RoadWetness;
	params.WaveAmount = WaveAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTALevelScriptActor.SetWeatherEffects
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
//		float                                              CloudCoverage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              RainAmount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              SandstormAmount                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Wind                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     WindDir                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ExtraSunny                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTALevelScriptActor::SetWeatherEffects(float CloudCoverage, float RainAmount, float SandstormAmount, float Wind, const struct FVector& WindDir, float ExtraSunny)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTALevelScriptActor.SetWeatherEffects");

	AGTALevelScriptActor_SetWeatherEffects_Params params {};
	params.CloudCoverage = CloudCoverage;
	params.RainAmount = RainAmount;
	params.SandstormAmount = SandstormAmount;
	params.Wind = Wind;
	params.WindDir = WindDir;
	params.ExtraSunny = ExtraSunny;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTALevelScriptActor.SetWeather
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		TEnumAsByte<GTABase_EGTAWeather>                   weather1                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<GTABase_EGTAWeather>                   weather2                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<GTABase_EGTAWeatherRegion>             region1                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<GTABase_EGTAWeatherRegion>             region2                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              interp                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTALevelScriptActor::SetWeather(TEnumAsByte<GTABase_EGTAWeather> weather1, TEnumAsByte<GTABase_EGTAWeather> weather2, TEnumAsByte<GTABase_EGTAWeatherRegion> region1, TEnumAsByte<GTABase_EGTAWeatherRegion> region2, float interp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTALevelScriptActor.SetWeather");

	AGTALevelScriptActor_SetWeather_Params params {};
	params.weather1 = weather1;
	params.weather2 = weather2;
	params.region1 = region1;
	params.region2 = region2;
	params.interp = interp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTALevelScriptActor.SetupScalability
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AGTAScalability*                             ToSetup                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTALevelScriptActor::SetupScalability(class AGTAScalability* ToSetup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTALevelScriptActor.SetupScalability");

	AGTALevelScriptActor_SetupScalability_Params params {};
	params.ToSetup = ToSetup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTALevelScriptActor.SetTimeOfDay
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Hours                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTALevelScriptActor::SetTimeOfDay(float Hours)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTALevelScriptActor.SetTimeOfDay");

	AGTALevelScriptActor_SetTimeOfDay_Params params {};
	params.Hours = Hours;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTALevelScriptActor.SetStreetlightAmount
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              LightAmount                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              LightDistance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              DecalFadeDistance                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTALevelScriptActor::SetStreetlightAmount(float LightAmount, float LightDistance, float DecalFadeDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTALevelScriptActor.SetStreetlightAmount");

	AGTALevelScriptActor_SetStreetlightAmount_Params params {};
	params.LightAmount = LightAmount;
	params.LightDistance = LightDistance;
	params.DecalFadeDistance = DecalFadeDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTALevelScriptActor.SetSkyColors
//		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FColor                                      skyBottom                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FColor                                      skyTop                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTALevelScriptActor::SetSkyColors(const struct FColor& skyBottom, const struct FColor& skyTop)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTALevelScriptActor.SetSkyColors");

	AGTALevelScriptActor_SetSkyColors_Params params {};
	params.skyBottom = skyBottom;
	params.skyTop = skyTop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTALevelScriptActor.SetLocationEffects
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              UnderwaterAmt                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TunnelAmt                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTALevelScriptActor::SetLocationEffects(float UnderwaterAmt, float TunnelAmt)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTALevelScriptActor.SetLocationEffects");

	AGTALevelScriptActor_SetLocationEffects_Params params {};
	params.UnderwaterAmt = UnderwaterAmt;
	params.TunnelAmt = TunnelAmt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTALevelScriptActor.SetLightColors
//		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FColor                                      ambient                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FColor                                      directional                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTALevelScriptActor::SetLightColors(const struct FColor& ambient, const struct FColor& directional)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTALevelScriptActor.SetLightColors");

	AGTALevelScriptActor_SetLightColors_Params params {};
	params.ambient = ambient;
	params.directional = directional;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTALevelScriptActor.SetEnvironmentEffects
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Foggyness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              HeatHaze                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              LightningFlash                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Riot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTALevelScriptActor::SetEnvironmentEffects(float Foggyness, float HeatHaze, float LightningFlash, float Riot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTALevelScriptActor.SetEnvironmentEffects");

	AGTALevelScriptActor_SetEnvironmentEffects_Params params {};
	params.Foggyness = Foggyness;
	params.HeatHaze = HeatHaze;
	params.LightningFlash = LightningFlash;
	params.Riot = Riot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTALevelScriptActor.SetCCTV
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTALevelScriptActor::SetCCTV(int Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTALevelScriptActor.SetCCTV");

	AGTALevelScriptActor_SetCCTV_Params params {};
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTALevelScriptActor.SetAdrenaline
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTALevelScriptActor::SetAdrenaline(float Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTALevelScriptActor.SetAdrenaline");

	AGTALevelScriptActor_SetAdrenaline_Params params {};
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B90270
//		Name   -> Function GTABase.GTALightBase.SetFarCorona
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              WithIntensity                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              WithSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTALightBase::SetFarCorona(float WithIntensity, float WithSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTALightBase.SetFarCorona");

	AGTALightBase_SetFarCorona_Params params {};
	params.WithIntensity = WithIntensity;
	params.WithSize = WithSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B900F0
//		Name   -> Function GTABase.GTALightBase.SetDecalComponentSize
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UDecalComponent*                             Decal                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     newSize                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTALightBase::STATIC_SetDecalComponentSize(class UDecalComponent* Decal, const struct FVector& newSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTALightBase.SetDecalComponentSize");

	AGTALightBase_SetDecalComponentSize_Params params {};
	params.Decal = Decal;
	params.newSize = newSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTALightBase.GetProximityCooldownTime
//		Flags  -> (Event, Public, BlueprintEvent, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AGTALightBase::GetProximityCooldownTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTALightBase.GetProximityCooldownTime");

	AGTALightBase_GetProximityCooldownTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTALightBase.GetCoronaPosition
//		Flags  -> (Event, Public, HasDefaults, BlueprintEvent, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AGTALightBase::GetCoronaPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTALightBase.GetCoronaPosition");

	AGTALightBase_GetCoronaPosition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTALightBase.GetCoronaColor
//		Flags  -> (Event, Public, HasDefaults, BlueprintEvent, Const)
// Parameters:
//		struct FColor                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FColor AGTALightBase::GetCoronaColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTALightBase.GetCoronaColor");

	AGTALightBase_GetCoronaColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTALightBase.ChangedLightSwitch
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bOn                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bIsEditor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTALightBase::ChangedLightSwitch(bool bOn, bool bIsEditor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTALightBase.ChangedLightSwitch");

	AGTALightBase_ChangedLightSwitch_Params params {};
	params.bOn = bOn;
	params.bIsEditor = bIsEditor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B90780
//		Name   -> Function GTABase.GTAHeightFog.UpdateColors
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void AGTAHeightFog::UpdateColors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAHeightFog.UpdateColors");

	AGTAHeightFog_UpdateColors_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAWindowLight.SetupLights
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              TimeOfDay                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAWindowLight::SetupLights(float TimeOfDay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWindowLight.SetupLights");

	AGTAWindowLight_SetupLights_Params params {};
	params.TimeOfDay = TimeOfDay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B90830
//		Name   -> Function GTABase.GTAWindowLight.GetAttenuationMult
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AGTAWindowLight::GetAttenuationMult()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAWindowLight.GetAttenuationMult");

	AGTAWindowLight_GetAttenuationMult_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAMarkerActor.StartDissolve
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bPickedUp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAMarkerActor::StartDissolve(bool bPickedUp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAMarkerActor.StartDissolve");

	AGTAMarkerActor_StartDissolve_Params params {};
	params.bPickedUp = bPickedUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAMarkerActor.SetPickupLight
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bOn                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAMarkerActor::SetPickupLight(bool bOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAMarkerActor.SetPickupLight");

	AGTAMarkerActor_SetPickupLight_Params params {};
	params.bOn = bOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAMarkerActor.SetPickupFlags
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsWeapon                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsOutOfStock                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsPurchase                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ShowMoney                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAMarkerActor::SetPickupFlags(bool IsWeapon, bool IsOutOfStock, bool IsPurchase, bool ShowMoney)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAMarkerActor.SetPickupFlags");

	AGTAMarkerActor_SetPickupFlags_Params params {};
	params.IsWeapon = IsWeapon;
	params.IsOutOfStock = IsOutOfStock;
	params.IsPurchase = IsPurchase;
	params.ShowMoney = ShowMoney;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAMarkerActor.SetPickupColor
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FColor                                      Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAMarkerActor::SetPickupColor(const struct FColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAMarkerActor.SetPickupColor");

	AGTAMarkerActor_SetPickupColor_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAMarkerActor.SetMarkerOutline
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FColor                                      withColor                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAMarkerActor::SetMarkerOutline(const struct FColor& withColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAMarkerActor.SetMarkerOutline");

	AGTAMarkerActor_SetMarkerOutline_Params params {};
	params.withColor = withColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAMarkerActor.SetMarkerMesh
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UStaticMesh*                                 withMesh                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAMarkerActor::SetMarkerMesh(class UStaticMesh* withMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAMarkerActor.SetMarkerMesh");

	AGTAMarkerActor_SetMarkerMesh_Params params {};
	params.withMesh = withMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAMarkerActor.SetMarkerColor
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FColor                                      withColor                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAMarkerActor::SetMarkerColor(const struct FColor& withColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAMarkerActor.SetMarkerColor");

	AGTAMarkerActor_SetMarkerColor_Params params {};
	params.withColor = withColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAMarkerActor.SetMarkerCameraGlow
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bShouldGlow                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bIsMainHidden                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAMarkerActor::SetMarkerCameraGlow(bool bShouldGlow, bool bIsMainHidden)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAMarkerActor.SetMarkerCameraGlow");

	AGTAMarkerActor_SetMarkerCameraGlow_Params params {};
	params.bShouldGlow = bShouldGlow;
	params.bIsMainHidden = bIsMainHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAMarkerActor.SetGroundLocation
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FVector                                     withLocation                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAMarkerActor::SetGroundLocation(const struct FVector& withLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAMarkerActor.SetGroundLocation");

	AGTAMarkerActor_SetGroundLocation_Params params {};
	params.withLocation = withLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAMarkerActor.SetCheckpointType
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		int                                                Cpt                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAMarkerActor::SetCheckpointType(int Cpt)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAMarkerActor.SetCheckpointType");

	AGTAMarkerActor_SetCheckpointType_Params params {};
	params.Cpt = Cpt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTATargetHalo.UpdateTargetComponent
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UMeshComponent*                              Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<GTABase_ETargetHighlightType>          HighlightType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTATargetHalo::UpdateTargetComponent(class UMeshComponent* Component, TEnumAsByte<GTABase_ETargetHighlightType> HighlightType, float Alpha)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTATargetHalo.UpdateTargetComponent");

	AGTATargetHalo_UpdateTargetComponent_Params params {};
	params.Component = Component;
	params.HighlightType = HighlightType;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTATargetHalo.SetupTargetComponent
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UMeshComponent*                              Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<GTABase_ETargetHighlightType>          HighlightType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              InitialAlpha                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTATargetHalo::SetupTargetComponent(class UMeshComponent* Component, TEnumAsByte<GTABase_ETargetHighlightType> HighlightType, float InitialAlpha)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTATargetHalo.SetupTargetComponent");

	AGTATargetHalo_SetupTargetComponent_Params params {};
	params.Component = Component;
	params.HighlightType = HighlightType;
	params.InitialAlpha = InitialAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B74E80
//		Name   -> Function GTABase.GTATerrainDB.UpdateAll
//		Flags  -> (Final, Native, Public)
void UGTATerrainDB::UpdateAll()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTATerrainDB.UpdateAll");

	UGTATerrainDB_UpdateAll_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B93700
//		Name   -> Function GTABase.GTAPathfindNodes.VCImportRegion
//		Flags  -> (Final, Native, Private)
void UGTAPathfindNodes::VCImportRegion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPathfindNodes.VCImportRegion");

	UGTAPathfindNodes_VCImportRegion_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B93690
//		Name   -> Function GTABase.GTAPathfindNodes.VCImportRawNodes
//		Flags  -> (Final, Native, Private)
void UGTAPathfindNodes::VCImportRawNodes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPathfindNodes.VCImportRawNodes");

	UGTAPathfindNodes_VCImportRawNodes_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B93720
//		Name   -> Function GTABase.GTAPathfindNodes.GTA3ImportRegion
//		Flags  -> (Final, Native, Private)
void UGTAPathfindNodes::GTA3ImportRegion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAPathfindNodes.GTA3ImportRegion");

	UGTAPathfindNodes_GTA3ImportRegion_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B95530
//		Name   -> Function GTABase.GTAClothingTable.GetShirtMaskTexture
//		Flags  -> (Final, Native, Private, BlueprintCallable)
// Parameters:
//		class UTexture*                                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture* UGTAClothingTable::GetShirtMaskTexture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAClothingTable.GetShirtMaskTexture");

	UGTAClothingTable_GetShirtMaskTexture_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B95510
//		Name   -> Function GTABase.GTAClothingTable.ConvertOldData
//		Flags  -> (Native, Public)
void UGTAClothingTable::ConvertOldData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAClothingTable.ConvertOldData");

	UGTAClothingTable_ConvertOldData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9D790
//		Name   -> Function GTABase.GTASingleton.SetShadowResolutionScale
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ULightComponent*                             onComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              newResolution                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGTASingleton::STATIC_SetShadowResolutionScale(class ULightComponent* onComponent, float newResolution)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.SetShadowResolutionScale");

	UGTASingleton_SetShadowResolutionScale_Params params {};
	params.onComponent = onComponent;
	params.newResolution = newResolution;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9D620
//		Name   -> Function GTABase.GTASingleton.SetShadowRenderDistance
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ULightComponent*                             onComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              newRenderDistance                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGTASingleton::STATIC_SetShadowRenderDistance(class ULightComponent* onComponent, float newRenderDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.SetShadowRenderDistance");

	UGTASingleton_SetShadowRenderDistance_Params params {};
	params.onComponent = onComponent;
	params.newRenderDistance = newRenderDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9E720
//		Name   -> Function GTABase.GTASingleton.SetPostProcessSceneColorTint
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class APostProcessVolume*                          Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                withTint                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGTASingleton::STATIC_SetPostProcessSceneColorTint(class APostProcessVolume* Volume, const struct FLinearColor& withTint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.SetPostProcessSceneColorTint");

	UGTASingleton_SetPostProcessSceneColorTint_Params params {};
	params.Volume = Volume;
	params.withTint = withTint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9D430
//		Name   -> Function GTABase.GTASingleton.SetMaxDrawDistance
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ULightComponent*                             onComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              newMaxDrawDistance                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              fadeStartPercent                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGTASingleton::STATIC_SetMaxDrawDistance(class ULightComponent* onComponent, float newMaxDrawDistance, float fadeStartPercent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.SetMaxDrawDistance");

	UGTASingleton_SetMaxDrawDistance_Params params {};
	params.onComponent = onComponent;
	params.newMaxDrawDistance = newMaxDrawDistance;
	params.fadeStartPercent = fadeStartPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9D900
//		Name   -> Function GTABase.GTASingleton.SetLightingChannels
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class USceneComponent*                             onComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               channel0                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               channel1                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               channel2                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGTASingleton::STATIC_SetLightingChannels(class USceneComponent* onComponent, bool channel0, bool channel1, bool channel2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.SetLightingChannels");

	UGTASingleton_SetLightingChannels_Params params {};
	params.onComponent = onComponent;
	params.channel0 = channel0;
	params.channel1 = channel1;
	params.channel2 = channel2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9DC70
//		Name   -> Function GTABase.GTASingleton.ResetSettingsToDefault
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<GTABase_EGTASettingsCategory>          Category                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGTASingleton::STATIC_ResetSettingsToDefault(TEnumAsByte<GTABase_EGTASettingsCategory> Category)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.ResetSettingsToDefault");

	UGTASingleton_ResetSettingsToDefault_Params params {};
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9CE50
//		Name   -> Function GTABase.GTASingleton.RemoveCurveData
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UCurveBase*                                  toCurve                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              atTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGTASingleton::STATIC_RemoveCurveData(class UCurveBase* toCurve, float atTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.RemoveCurveData");

	UGTASingleton_RemoveCurveData_Params params {};
	params.toCurve = toCurve;
	params.atTime = atTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9E4B0
//		Name   -> Function GTABase.GTASingleton.GetUncheckedSettings
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		class UGameterSettings*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameterSettings* UGTASingleton::STATIC_GetUncheckedSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.GetUncheckedSettings");

	UGTASingleton_GetUncheckedSettings_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9E4E0
//		Name   -> Function GTABase.GTASingleton.GetSettings
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ForceRefresh                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bForceUpdateAudio                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               forceNoChanges                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UGameterSettings*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameterSettings* UGTASingleton::STATIC_GetSettings(bool ForceRefresh, bool bForceUpdateAudio, bool forceNoChanges)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.GetSettings");

	UGTASingleton_GetSettings_Params params {};
	params.ForceRefresh = ForceRefresh;
	params.bForceUpdateAudio = bForceUpdateAudio;
	params.forceNoChanges = forceNoChanges;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B96CE0
//		Name   -> Function GTABase.GTASingleton.GetRulesOverrideValue
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* UGTASingleton::STATIC_GetRulesOverrideValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.GetRulesOverrideValue");

	UGTASingleton_GetRulesOverrideValue_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9CB40
//		Name   -> Function GTABase.GTASingleton.GetGTAWorldZ
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FVector                                     OfLocation                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               successful                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UGTASingleton::STATIC_GetGTAWorldZ(const struct FVector& OfLocation, bool* successful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.GetGTAWorldZ");

	UGTASingleton_GetGTAWorldZ_Params params {};
	params.OfLocation = OfLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (successful != nullptr)
		*successful = params.successful;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9CD30
//		Name   -> Function GTABase.GTASingleton.GetGTAWorldSettings
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AGTAWorldSettings*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AGTAWorldSettings* UGTASingleton::STATIC_GetGTAWorldSettings(class UObject* WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.GetGTAWorldSettings");

	UGTASingleton_GetGTAWorldSettings_Params params {};
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9C980
//		Name   -> Function GTABase.GTASingleton.GetGTAWaterZ
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FVector                                     OfLocation                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               successful                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UGTASingleton::STATIC_GetGTAWaterZ(const struct FVector& OfLocation, bool* successful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.GetGTAWaterZ");

	UGTASingleton_GetGTAWaterZ_Params params {};
	params.OfLocation = OfLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (successful != nullptr)
		*successful = params.successful;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9CD10
//		Name   -> Function GTABase.GTASingleton.GetGameterface
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UGameterface*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameterface* UGTASingleton::STATIC_GetGameterface()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.GetGameterface");

	UGTASingleton_GetGameterface_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9E6E0
//		Name   -> Function GTABase.GTASingleton.GetCurrentCutscene
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UGTASingleton::STATIC_GetCurrentCutscene()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.GetCurrentCutscene");

	UGTASingleton_GetCurrentCutscene_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B75CE0
//		Name   -> Function GTABase.GTASingleton.AreGameSettingRulesOverwritten
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGTASingleton::STATIC_AreGameSettingRulesOverwritten()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.AreGameSettingRulesOverwritten");

	UGTASingleton_AreGameSettingRulesOverwritten_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9CFA0
//		Name   -> Function GTABase.GTASingleton.AddFloatCurveData
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UCurveFloat*                                 toCurve                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              atTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              withFloat                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              timeGranularity                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGTASingleton::STATIC_AddFloatCurveData(class UCurveFloat* toCurve, float atTime, float withFloat, float timeGranularity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.AddFloatCurveData");

	UGTASingleton_AddFloatCurveData_Params params {};
	params.toCurve = toCurve;
	params.atTime = atTime;
	params.withFloat = withFloat;
	params.timeGranularity = timeGranularity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9D1F0
//		Name   -> Function GTABase.GTASingleton.AddColorCurveData
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UCurveLinearColor*                           toCurve                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              atTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                withColor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              timeGranularity                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGTASingleton::STATIC_AddColorCurveData(class UCurveLinearColor* toCurve, float atTime, const struct FLinearColor& withColor, float timeGranularity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.AddColorCurveData");

	UGTASingleton_AddColorCurveData_Params params {};
	params.toCurve = toCurve;
	params.atTime = atTime;
	params.withColor = withColor;
	params.timeGranularity = timeGranularity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_Menu_Base.StartMenuSFX
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UUI_Menu_Base::StartMenuSFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.StartMenuSFX");

	UUI_Menu_Base_StartMenuSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_Menu_Base.StartMenuRadio
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Station                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_Menu_Base::StartMenuRadio(int Station)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.StartMenuRadio");

	UUI_Menu_Base_StartMenuRadio_Params params {};
	params.Station = Station;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_Menu_Base.StartMenuDialog
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UUI_Menu_Base::StartMenuDialog()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.StartMenuDialog");

	UUI_Menu_Base_StartMenuDialog_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA5810
//		Name   -> Function GTABase.UI_Menu_Base.ShouldShowGangsInMap
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUI_Menu_Base::ShouldShowGangsInMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.ShouldShowGangsInMap");

	UUI_Menu_Base_ShouldShowGangsInMap_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_Menu_Base.SetVersionNumber
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FString                                     VersionNum                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_Menu_Base::SetVersionNumber(const struct FString& VersionNum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.SetVersionNumber");

	UUI_Menu_Base_SetVersionNumber_Params params {};
	params.VersionNum = VersionNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_Menu_Base.SetTemplate
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UGTAMainMenuUITemplate*                      InTemplate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IncludeSaveTab                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_Menu_Base::SetTemplate(class UGTAMainMenuUITemplate* InTemplate, bool IncludeSaveTab)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.SetTemplate");

	UUI_Menu_Base_SetTemplate_Params params {};
	params.InTemplate = InTemplate;
	params.IncludeSaveTab = IncludeSaveTab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_Menu_Base.SetMenuToSpecificGameTab
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<GTABase_EGTASaveTabState>              toState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_Menu_Base::SetMenuToSpecificGameTab(TEnumAsByte<GTABase_EGTASaveTabState> toState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.SetMenuToSpecificGameTab");

	UUI_Menu_Base_SetMenuToSpecificGameTab_Params params {};
	params.toState = toState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_Menu_Base.SetMenuToMissionRetry
//		Flags  -> (Event, Public, BlueprintEvent)
void UUI_Menu_Base::SetMenuToMissionRetry()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.SetMenuToMissionRetry");

	UUI_Menu_Base_SetMenuToMissionRetry_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_Menu_Base.SetKeyListeningDialog
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bTurnOn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUserWidget*                                 ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUserWidget* UUI_Menu_Base::SetKeyListeningDialog(bool bTurnOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.SetKeyListeningDialog");

	UUI_Menu_Base_SetKeyListeningDialog_Params params {};
	params.bTurnOn = bTurnOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_Menu_Base.SaveDataInSlotEvent
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_Menu_Base::SaveDataInSlotEvent(bool success, int SlotIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.SaveDataInSlotEvent");

	UUI_Menu_Base_SaveDataInSlotEvent_Params params {};
	params.success = success;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_Menu_Base.LoadDataInSlotEvent
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_Menu_Base::LoadDataInSlotEvent(bool success, int SlotIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.LoadDataInSlotEvent");

	UUI_Menu_Base_LoadDataInSlotEvent_Params params {};
	params.success = success;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_Menu_Base.GrabFocus
//		Flags  -> (Event, Public, BlueprintEvent)
void UUI_Menu_Base::GrabFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.GrabFocus");

	UUI_Menu_Base_GrabFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA58D0
//		Name   -> Function GTABase.UI_Menu_Base.GetRightSidePosOfWidgetInsideScaleBox
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UUI_Menu_Base::GetRightSidePosOfWidgetInsideScaleBox(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.GetRightSidePosOfWidgetInsideScaleBox");

	UUI_Menu_Base_GetRightSidePosOfWidgetInsideScaleBox_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA5840
//		Name   -> Function GTABase.UI_Menu_Base.GetLeftSideOfFullSizeBox
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UUI_Menu_Base::GetLeftSideOfFullSizeBox()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.GetLeftSideOfFullSizeBox");

	UUI_Menu_Base_GetLeftSideOfFullSizeBox_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_Menu_Base.EndMenuSFX
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UUI_Menu_Base::EndMenuSFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.EndMenuSFX");

	UUI_Menu_Base_EndMenuSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_Menu_Base.EndMenuRadio
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UUI_Menu_Base::EndMenuRadio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.EndMenuRadio");

	UUI_Menu_Base_EndMenuRadio_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_Menu_Base.EndMenuDialogue
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UUI_Menu_Base::EndMenuDialogue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.EndMenuDialogue");

	UUI_Menu_Base_EndMenuDialogue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_Menu_Base.DeleteDataInSlotEvent
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_Menu_Base::DeleteDataInSlotEvent(bool success, int SlotIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.DeleteDataInSlotEvent");

	UUI_Menu_Base_DeleteDataInSlotEvent_Params params {};
	params.success = success;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_Menu_Base.CustomFunctionWithBoolReturn
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FString                                     FunctionString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Handled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUI_Menu_Base::CustomFunctionWithBoolReturn(const struct FString& FunctionString, bool* Handled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.CustomFunctionWithBoolReturn");

	UUI_Menu_Base_CustomFunctionWithBoolReturn_Params params {};
	params.FunctionString = FunctionString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_Menu_Base.CustomFunctionFromStringWithText
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FString                                     FunctionString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FText                                       UsableText                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UUI_Menu_Base::CustomFunctionFromStringWithText(const struct FString& FunctionString, const struct FText& UsableText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.CustomFunctionFromStringWithText");

	UUI_Menu_Base_CustomFunctionFromStringWithText_Params params {};
	params.FunctionString = FunctionString;
	params.UsableText = UsableText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.UI_Menu_Base.CustomFunctionFromString
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FString                                     FunctionString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUI_Menu_Base::CustomFunctionFromString(const struct FString& FunctionString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.CustomFunctionFromString");

	UUI_Menu_Base_CustomFunctionFromString_Params params {};
	params.FunctionString = FunctionString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTASocialClub.OnRageBPEvent
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                EventId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGTASocialClub::OnRageBPEvent(int EventId, int Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTASocialClub.OnRageBPEvent");

	UGTASocialClub_OnRageBPEvent_Params params {};
	params.EventId = EventId;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9FC00
//		Name   -> Function GTABase.GTASoundBank.StreamingAssetsLoadedCallback
//		Flags  -> (Final, Native, Private)
void UGTASoundBank::StreamingAssetsLoadedCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTASoundBank.StreamingAssetsLoadedCallback");

	UGTASoundBank_StreamingAssetsLoadedCallback_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9FC20
//		Name   -> Function GTABase.GTASoundBank.AssetsLoadedCallback
//		Flags  -> (Final, Native, Private)
void UGTASoundBank::AssetsLoadedCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTASoundBank.AssetsLoadedCallback");

	UGTASoundBank_AssetsLoadedCallback_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9FF10
//		Name   -> Function GTABase.GTAAssetProcessor.ProcessedStreamRequest
//		Flags  -> (Native, Public, HasOutParms)
// Parameters:
//		struct FGTAStreamRequest                           request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UGTAAssetProcessor::ProcessedStreamRequest(const struct FGTAStreamRequest& request)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAAssetProcessor.ProcessedStreamRequest");

	UGTAAssetProcessor_ProcessedStreamRequest_Params params {};
	params.request = request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAVehicle.UpdateEngineOn
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bNewEngineOn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAVehicle::UpdateEngineOn(bool bNewEngineOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.UpdateEngineOn");

	AGTAVehicle_UpdateEngineOn_Params params {};
	params.bNewEngineOn = bNewEngineOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA71C0
//		Name   -> Function GTABase.GTAVehicle.ShowExtraComponent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAVehicle::ShowExtraComponent(const struct FName& BoneName, bool Visible, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.ShowExtraComponent");

	AGTAVehicle_ShowExtraComponent_Params params {};
	params.BoneName = BoneName;
	params.Visible = Visible;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAVehicle.SetupVehicleBP
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AGTAVehicle::SetupVehicleBP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.SetupVehicleBP");

	AGTAVehicle_SetupVehicleBP_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAVehicle.SetupHeadlightOption
//		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FGTAHeadlightSetting                        Setting                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void AGTAVehicle::SetupHeadlightOption(const struct FGTAHeadlightSetting& Setting)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.SetupHeadlightOption");

	AGTAVehicle_SetupHeadlightOption_Params params {};
	params.Setting = Setting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAVehicle.SetTaxiLight
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAVehicle::SetTaxiLight(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.SetTaxiLight");

	AGTAVehicle_SetTaxiLight_Params params {};
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAVehicle.SetSpecialCarLights
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<GTABase_EFSpecialLightType>            LightToModify                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAVehicle::SetSpecialCarLights(TEnumAsByte<GTABase_EFSpecialLightType> LightToModify, bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.SetSpecialCarLights");

	AGTAVehicle_SetSpecialCarLights_Params params {};
	params.LightToModify = LightToModify;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAVehicle.SetLicensePlateDesign
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Param                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAVehicle::SetLicensePlateDesign(int Param)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.SetLicensePlateDesign");

	AGTAVehicle_SetLicensePlateDesign_Params params {};
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAVehicle.SetLicensePlate
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     WithText                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAVehicle::SetLicensePlate(const struct FString& WithText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.SetLicensePlate");

	AGTAVehicle_SetLicensePlate_Params params {};
	params.WithText = WithText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA7870
//		Name   -> Function GTABase.GTAVehicle.SetDirtiness
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              dirtinessAlpha                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAVehicle::SetDirtiness(float dirtinessAlpha)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.SetDirtiness");

	AGTAVehicle_SetDirtiness_Params params {};
	params.dirtinessAlpha = dirtinessAlpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA73C0
//		Name   -> Function GTABase.GTAVehicle.SetDamagedPart
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		int                                                frameID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bDamaged                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAVehicle::SetDamagedPart(int frameID, bool bDamaged)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.SetDamagedPart");

	AGTAVehicle_SetDamagedPart_Params params {};
	params.frameID = frameID;
	params.bDamaged = bDamaged;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAVehicle.SetCopterSpotLight
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              brightnessPercent                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAVehicle::SetCopterSpotLight(class AActor* Target, float brightnessPercent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.SetCopterSpotLight");

	AGTAVehicle_SetCopterSpotLight_Params params {};
	params.Target = Target;
	params.brightnessPercent = brightnessPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA7520
//		Name   -> Function GTABase.GTAVehicle.SetColorEntry
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ColorIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              MetallicOverride                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAVehicle::SetColorEntry(int Index, int ColorIndex, float MetallicOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.SetColorEntry");

	AGTAVehicle_SetColorEntry_Params params {};
	params.Index = Index;
	params.ColorIndex = ColorIndex;
	params.MetallicOverride = MetallicOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA7710
//		Name   -> Function GTABase.GTAVehicle.SetColor
//		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FColor                                      Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAVehicle::SetColor(int Index, const struct FColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.SetColor");

	AGTAVehicle_SetColor_Params params {};
	params.Index = Index;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAVehicle.SetCarLights
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bLeftHeadlight                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bRightHeadlight                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bLeftTaillight                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bRightTaillight                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAVehicle::SetCarLights(bool bLeftHeadlight, bool bRightHeadlight, bool bLeftTaillight, bool bRightTaillight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.SetCarLights");

	AGTAVehicle_SetCarLights_Params params {};
	params.bLeftHeadlight = bLeftHeadlight;
	params.bRightHeadlight = bRightHeadlight;
	params.bLeftTaillight = bLeftTaillight;
	params.bRightTaillight = bRightTaillight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA7E60
//		Name   -> Function GTABase.GTAVehicle.SetBoneDamaged
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		struct FName                                       BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bDamaged                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAVehicle::SetBoneDamaged(const struct FName& BoneName, bool bDamaged)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.SetBoneDamaged");

	AGTAVehicle_SetBoneDamaged_Params params {};
	params.BoneName = BoneName;
	params.bDamaged = bDamaged;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAVehicle.MeshBrokenNearby
//		Flags  -> (Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FVector                                     EventLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAVehicle::MeshBrokenNearby(const struct FVector& EventLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.MeshBrokenNearby");

	AGTAVehicle_MeshBrokenNearby_Params params {};
	params.EventLocation = EventLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA7940
//		Name   -> Function GTABase.GTAVehicle.IsComponentVisible
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USceneComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AGTAVehicle::IsComponentVisible(class USceneComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.IsComponentVisible");

	AGTAVehicle_IsComponentVisible_Params params {};
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA7AC0
//		Name   -> Function GTABase.GTAVehicle.InitializeColors
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMaterialInterface*                          remapMaterial                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAVehicle::InitializeColors(class UMaterialInterface* remapMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.InitializeColors");

	AGTAVehicle_InitializeColors_Params params {};
	params.remapMaterial = remapMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA7190
//		Name   -> Function GTABase.GTAVehicle.GetVehicleData
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UGTAVehicleUserData*                         ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGTAVehicleUserData* AGTAVehicle::GetVehicleData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.GetVehicleData");

	AGTAVehicle_GetVehicleData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA7DC0
//		Name   -> Function GTABase.GTAVehicle.GetPlateRenderDistance
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AGTAVehicle::GetPlateRenderDistance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.GetPlateRenderDistance");

	AGTAVehicle_GetPlateRenderDistance_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA7E40
//		Name   -> Function GTABase.GTAVehicle.GetPhysicsMesh
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		class USkeletalMeshComponent*                      ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USkeletalMeshComponent* AGTAVehicle::GetPhysicsMesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.GetPhysicsMesh");

	AGTAVehicle_GetPhysicsMesh_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAVehicle.GetHeadlightDecalMIC
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bLeftHeadlight                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bRightHeadlight                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bIsPlayerOccupied                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UMaterialInstanceConstant*                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceConstant* AGTAVehicle::GetHeadlightDecalMIC(bool bLeftHeadlight, bool bRightHeadlight, bool bIsPlayerOccupied)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.GetHeadlightDecalMIC");

	AGTAVehicle_GetHeadlightDecalMIC_Params params {};
	params.bLeftHeadlight = bLeftHeadlight;
	params.bRightHeadlight = bRightHeadlight;
	params.bIsPlayerOccupied = bIsPlayerOccupied;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAVehicle.GetAttachedFX
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UParticleSystemComponent*                    ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UParticleSystemComponent* AGTAVehicle::GetAttachedFX(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.GetAttachedFX");

	AGTAVehicle_GetAttachedFX_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAVehicle.ExtraComponentShown
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAVehicle::ExtraComponentShown(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.ExtraComponentShown");

	AGTAVehicle_ExtraComponentShown_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA7BA0
//		Name   -> Function GTABase.GTAVehicle.CreatePointLightComponentUsingClass
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      ComponentToCreate                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPointLightComponent*                        ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPointLightComponent* AGTAVehicle::CreatePointLightComponentUsingClass(class UClass* ComponentToCreate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.CreatePointLightComponentUsingClass");

	AGTAVehicle_CreatePointLightComponentUsingClass_Params params {};
	params.ComponentToCreate = ComponentToCreate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA7D80
//		Name   -> Function GTABase.GTAVehicle.CleanupPhysState
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void AGTAVehicle::CleanupPhysState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.CleanupPhysState");

	AGTAVehicle_CleanupPhysState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTABase.GTAVehicle.BoneSetAsDamaged
//		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FName                                       BoneName                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bDamaged                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGTAVehicle::BoneSetAsDamaged(const struct FName& BoneName, bool bDamaged)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.BoneSetAsDamaged");

	AGTAVehicle_BoneSetAsDamaged_Params params {};
	params.BoneName = BoneName;
	params.bDamaged = bDamaged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB27A0
//		Name   -> Function GTABase.UVImage.SetUVs
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FBox2D                                      InUVs                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUVImage::SetUVs(const struct FBox2D& InUVs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTABase.UVImage.SetUVs");

	UUVImage_SetUVs_Params params {};
	params.InUVs = InUVs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
