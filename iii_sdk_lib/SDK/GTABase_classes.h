#pragma once

// Name: GTA III, Version: 1.0.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class GTABase.DFFExtraData
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UDFFExtraData : public UDataAsset
{
public:
	TArray<struct FGTAModelData>                       ModelData;                                                 // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     TextFileLocation;                                          // 0x0040(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.DFFExtraData");
		return ptr;
	}



	void CheckAllReferences();
};

// Class GTABase.DistantHLODBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UDistantHLODBuilder : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.DistantHLODBuilder");
		return ptr;
	}



	void BuildAtlas();
};

// Class GTABase.GTAGameMode
// 0x0038 (FullSize[0x02F8] - InheritedSize[0x02C0])
class AGTAGameMode : public AGameModeBase
{
public:
	class UGameterface*                                Gameface;                                                  // 0x02C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TEB5[0x30];                                    // 0x02C8(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAGameMode");
		return ptr;
	}



	class UGameterface* GetGameterface();
};

// Class GTABase.Gameterface
// 0x0708 (FullSize[0x0730] - InheritedSize[0x0028])
class UGameterface : public UObject
{
public:
	unsigned char                                      UnknownData_UEMK[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ALevelSequenceActor*                         CinematicPlayer;                                           // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WSOF[0x20];                                    // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGTAStreamRequest>                   StreamRequests;                                            // 0x0058(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UGTAEffectLibrary*                           EffectsLibrary;                                            // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      Cinematics[0x10];                                          // 0x0070(0x0010) UNKNOWN PROPERTY: ArrayProperty
	class UGTACinematicDB*                             CinematicDB;                                               // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9DQJ[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      CarRecordings[0x28];                                       // 0x0088(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	class UGTAHaptics*                                 Haptics;                                                   // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEntityLinker*                               EntityLink;                                                // 0x00C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ExtraPedDensityMult;                                       // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ExtraPedDistanceMult;                                      // 0x00CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ExtraCarDensityMult;                                       // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ExtraCarDistanceMult;                                      // 0x00D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SV99[0x8];                                     // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      LoadedObjects[0x50];                                       // 0x00D8(0x0050) UNKNOWN PROPERTY: SetProperty
	struct FName                                       CurrentCutscene;                                           // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGTAScalability*                             Scalability;                                               // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGTARadar*                                   Radar;                                                     // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGTATargetHalo*                              TargetHalo;                                                // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGTASkidmarks*                               Skidmarks;                                                 // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGTARopes*                                   Ropes;                                                     // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGTABloodyFootprints*                        BloodyFootprints;                                          // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGTASceneProbeListing*                       SceneProbes;                                               // 0x0168(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGTAWater*                                   Water;                                                     // 0x0170(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGTATexLookup*                               TextureLookup;                                             // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDFFExtraData*                               ModelData;                                                 // 0x0180(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGTAPathfindNodes*                           PathfindingNodes;                                          // 0x0188(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFont*>                               Fonts;                                                     // 0x0190(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UGTASoundPak*>                        Paks;                                                      // 0x01A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UProcTextData*                               RoadSignText;                                              // 0x01B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInstanceConstant*>           RoadSignPalettes;                                          // 0x01B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UGTASoundBank*>                       Streams;                                                   // 0x01C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UIMGFile*>                            IMGs;                                                      // 0x01D8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              Markers;                                                   // 0x01E8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UClass*                                      TargetHaloClass;                                           // 0x01F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FireClass;                                                 // 0x0200(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DecalHelperClass;                                          // 0x0208(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceConstant*                   DefaultScorchedMI;                                         // 0x0210(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WaterDetailDistance;                                       // 0x0218(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WaterDetailDistance_InBoat;                                // 0x021C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               NeedsInvincibilityCheck;                                   // 0x0220(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InvincibilityNewGameCheck;                                 // 0x0221(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1Q4X[0x6];                                     // 0x0222(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USkeletalMesh*>                       SKMsSetUpForGangSigns;                                     // 0x0228(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FSpecialCutsceneMapping>             SpecialCutsceneMappings;                                   // 0x0238(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          DefaultHeadlightOffMaterial;                               // 0x0248(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          DefaultHeadlightOnMaterial;                                // 0x0250(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      BloodPoolClass;                                            // 0x0258(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SpecialCharacterExcludeFromWindFlapping[0x50];             // 0x0260(0x0050) UNKNOWN PROPERTY: SetProperty
	class UUI_GTAHUDDrawer*                            CurrentHudDrawer;                                          // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUI_GTAHUDDrawer*                            CurrentPriorityHudDrawer;                                  // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, class UClass*>                TransitionMap;                                             // 0x02C0(0x0050) (Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	class UUserWidget*                                 CurrentMenu;                                               // 0x0310(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0P72[0x4];                                     // 0x0318(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               LaunchedFromMainMenu;                                      // 0x031C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsMenuMapUpdating;                                         // 0x031D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZL5D[0x2];                                     // 0x031E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                listeningForKeyMapping;                                    // 0x0320(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CXHH[0xC];                                     // 0x0324(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FHUDItem>                            items;                                                     // 0x0330(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DERC[0x130];                                   // 0x0340(0x0130) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<int, int>                                     CEntityRefCounter;                                         // 0x0470(0x0050) (NativeAccessSpecifierPublic)
	struct FLinearColor                                DynamicColorBoost;                                         // 0x04C0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHelpTextOverrides>                  HelpTextOverrides;                                         // 0x04D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      CollisionCache[0x28];                                      // 0x04E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      CollisionSectionContainer[0x28];                           // 0x0508(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      UnknownData_UWYU[0x10];                                    // 0x0530(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      PathIplContainer[0x28];                                    // 0x0530(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	class UGTARadioStream*                             RadioStreams;                                              // 0x0568(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      TrafficLightCache[0x28];                                   // 0x0570(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	class AGTARTCaptureBase*                           ReflectionActor;                                           // 0x0598(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CurrentReflectionPosition;                                 // 0x05A0(0x000C) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TargetReflectionPosition;                                  // 0x05AC(0x000C) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReflectionTargetContext;                                   // 0x05B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGTATimeOfDay*                               ActiveTOD;                                                 // 0x05C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7G4Y[0x8];                                     // 0x05C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      SSRReflectionClass[0x28];                                  // 0x05C8(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      PlanarReflectionClass[0x28];                               // 0x05F8(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      CubeReflectionClass[0x28];                                 // 0x0620(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	TArray<struct FReflectionMaterialSetup>            ReflectionMaterialSetups;                                  // 0x0648(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UClass*                                      ChalkOutlineClass;                                         // 0x0658(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      CinematicCarClass;                                         // 0x0660(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      IFPFileContainer[0x28];                                    // 0x0668(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      UnknownData_C5F8[0x18];                                    // 0x0690(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMesh*                               SpecialBlankMeshForCutscenes;                              // 0x06A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUI_DesignTimeUserWidget*                    SocialClubUI;                                              // 0x06B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RVKP[0x18];                                    // 0x06B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      IntroMovieClass;                                           // 0x06D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     IntroMovieFile;                                            // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     LowQualityIntroMovieFile;                                  // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUI_DesignTimeUserWidget*                    IntroMovieAsset;                                           // 0x06E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64_t                                           FramesSinceLastLongDistanceCut;                            // 0x06F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                           VerticalBlurInstance;                                      // 0x06F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                           HorizontalBlurInstance;                                    // 0x0700(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGTAActivityManager*                         ActivityManager;                                           // 0x0708(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J1YF[0x20];                                    // 0x0710(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.Gameterface");
		return ptr;
	}



	bool WasRightBumperButtonJustPressed();
	bool WasLeftBumperButtonJustPressed();
	bool WasBackButtonJustPressed();
	bool WasAcceptButtonJustPressed();
	bool UseSystemFont();
	bool UseSocialClubInGameMenu();
	void UpdateMapCustomWaypoint();
	struct FString TheTextGet(const struct FString& Key, const struct FString& missionText);
	void StopIntroMovie();
	void StopCredits();
	void StartTransition(const struct FString& TransitionToStart);
	class UUserWidget* StartRemapping(int mappingID);
	void StartNewGameFromMenu();
	void StartLoadingTransition();
	void StartIntroMovie();
	class AGTAExplosion* SpawnExplosion(const struct FVector& Location, TEnumAsByte<GTABase_EGTAExplosionType> Type, TEnumAsByte<GTABase_EGTAExplosionSurface> Surface, const struct FVector& SurfaceNormal, float Scale, int DebrisCount, class AActor* ExplodingActor, bool bSuppressLight);
	void SocialClubSignUp();
	void SocialClubSignOut();
	void SocialClubSignIn();
	void SocialClubShowAchievements();
	bool SocialClubIsLinked();
	bool SocialClubAreServicesAvailable();
	bool STATIC_SnapToWorldZ(struct FVector* Coord, float AdditionalZOffset);
	bool SlotHasSave(int slotnum);
	void ShowHUDDrawer(bool Visible, bool CreateIfNotMade);
	bool ShouldUseTransitionWarnings(float* TimeBeforeWarning);
	bool ShouldShowFullOptions();
	void STATIC_SetUserFocusToGameViewport();
	void SetTransitionStateFadeTime(TEnumAsByte<GTABase_EGTATransitionState> StateToChange, float TimeToFade);
	void SetMenuTransitionStateFadeTime(TEnumAsByte<GTABase_EGTATransitionState> StateToChange, float TimeToFade);
	void SetLoadingTransitionProgress(float Progress);
	void SetCustomWaypoint(const struct FVector& position);
	void SaveKeyboardMappings();
	void SaveDataInSlot(int SlotIndex);
	bool ResumeGameFromMenu();
	bool RestartWithFreshMenu();
	void ReplaceGameSpecificImageTags(struct FString* QueuedMessage);
	bool RefreshSocialClubAchivements();
	void RefreshMenuUserInfo();
	void PromptLogin();
	void PlayHapticEffectBP(TEnumAsByte<GTABase_EHapticEffectType> Type);
	bool PlatformRequiresLogin();
	void OnAudioTabChanged(bool wasSelected);
	bool MoveMenuToGameTab(TEnumAsByte<GTABase_EGTASaveTabState> tabState);
	void MissionRetryCallback(bool doRetry);
	void MenuMapExtra();
	bool LoadDataInSlot(int SlotIndex);
	bool IsViewport4kOrGreater();
	bool IsVeryWideScreen();
	bool isSlotCheckpointSave(int slotnum);
	bool isSlotAutoSave(int slotnum);
	bool IsShowingControllerReconnectScreen();
	bool IsShowAllOptions();
	bool IsReleaseBuild();
	bool IsPlayingGame();
	bool STATIC_IsJapaneseBuild();
	bool IsIntroMoviePlaying(bool AllowHandleStop);
	bool IsInCredits();
	bool IsCurrentTransition(const struct FString& Name);
	bool IsActiveControllerLoggedIn();
	void InterruptCurrentTransition(const struct FString& TransitionToStart, TEnumAsByte<GTABase_EGTATransitionState> startingState, bool takeOldOpacity);
	void InterruptCurrentMenuTransition(const struct FString& TransitionToStart, TEnumAsByte<GTABase_EGTATransitionState> startingState, bool takeOldOpacity);
	bool HasSaveData();
	bool HasCurrentTransitionScreen(bool CheckOnlyInGameTransitions);
	void GrabFocus();
	float STATIC_GetWorldZ(const struct FVector& FromCoord, bool* success);
	struct FString GetVersionString();
	class UTexture2D* GetUVMappingForMenuTabPrev(float* U, float* V, float* ULength, float* VLength);
	class UTexture2D* GetUVMappingForMenuTabNext(float* U, float* V, float* ULength, float* VLength);
	class UTexture2D* GetUVImageForHUDMapping(TEnumAsByte<GTABase_EHIDMapping> mapping, float* U, float* V, float* ULength, float* VLength);
	class UTexture2D* GetUserNameAndImage(struct FString* OutName);
	class UUITransition* GetTransitionManager();
	TArray<struct FString> GetStats(TArray<struct FString>* StatValues, struct FString* CriminalRating);
	TArray<struct FSCAchive> GetSocialClubAchivements();
	class UClass* GetScalabilityClass();
	TArray<struct FString> GetSaveDataNames();
	struct FString GetSaveDataName(int SlotIndex);
	void GetRightStickValues(float* X, float* Y);
	class URage* GetRageActor();
	int GetRadioStationOffset();
	TEnumAsByte<GTABase_EPlatformType> STATIC_GetPlatformType();
	float GetOptionTextSize();
	float GetOptionHelpTextSize();
	int GetNextValidLanguageIndex(bool IsLanguage, bool Forward, int currentIndex);
	float GetMapZoomOut();
	float GetMapZoomIn();
	struct FString GetMappingStringForButton(int nButtonID, int whichType);
	TArray<struct FName> GetMapLegendNames();
	void GetMapLegend(TArray<class UTexture2D*>* Textures, TArray<struct FText>* Strings);
	void GetMapAreaName(const struct FVector& WorldPosition, struct FString* OutName);
	void GetLeftStickValues(float* X, float* Y);
	int GetLastSaveSlotIndex();
	TArray<struct FKeyboardDisplayStrings> GetKeyboardMappings(int whichType);
	class UTexture2D* GetHIDTexture();
	struct FVector GetGTAPlayerPosition();
	bool GetGroundZCoord(const struct FVector& FromCoord, struct FVector* OutCoord);
	TEnumAsByte<GTABase_EGTAInputType> GetCurrentInputType();
	bool GetButtonMappingReleased(TEnumAsByte<GTABase_EHIDMapping> mapping);
	bool GetButtonMappingJustPressed(TEnumAsByte<GTABase_EHIDMapping> mapping);
	bool GetButtonMappingIsPressed(TEnumAsByte<GTABase_EHIDMapping> mapping);
	struct FString GetBriefString();
	int GetAppropriateGamepadTab();
	int GetActiveControllerIndex();
	bool GameHasGangsOverlay();
	bool GameHasFlightGamepadTab();
	bool GameHasBMXGamepadTab();
	void FreezeTime(int Hours, int Minutes, int Seconds);
	void ForceMapSwitchRefresh(bool MenuMode);
	void ExitGame();
	bool DoesLanguageUseLargerHeightSubtitles();
	bool DoesGameViewportHaveFocus();
	void DeleteSavedKeyboardMappings();
	void DeleteDataInSlot(int SlotIndex);
	void ContinueTransition(TEnumAsByte<GTABase_EGTATransitionState> toState);
	void ContinueMenuTransition(TEnumAsByte<GTABase_EGTATransitionState> toState);
	void CloseCurrentTransition();
	void CloseCurrentMenuTransition();
	void ClearCustomWaypoint();
	void CleanupCinematicActorOnEndPlay(class AActor* Actor, TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	bool STATIC_CheckWorldLine(const struct FVector& Start, const struct FVector& finished, struct FVector* outCol, struct FVector* outNormal, bool bCheckBuildings, bool bCheckVehicles, bool bCheckPeds);
	void CheckShowAllOptionsChanged();
	void BPUpdateVolumeMixers();
	void AutoDestroyedParticleSystem(class UParticleSystemComponent* Component);
	bool AreMultipleTouchesDown();
	bool AllowMapJump();
	bool AllowCustomWaypointManagement();
	bool AllowActiveControllerSet();
};

// Class GTABase.EntityLinker
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UEntityLinker : public UObject
{
public:
	unsigned char                                      UnknownData_K1WO[0x50];                                    // 0x0028(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.EntityLinker");
		return ptr;
	}



};

// Class GTABase.GTAOptionsList
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UGTAOptionsList : public UDataAsset
{
public:
	TEnumAsByte<GTABase_EGTASettingsCategory>          Category;                                                  // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CD8Z[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGTAOptionsItemTemplate>             Options;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAOptionsList");
		return ptr;
	}



};

// Class GTABase.GTAFidelityOption
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UGTAFidelityOption : public UDataAsset
{
public:
	struct FText                                       OptionName;                                                // 0x0030(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGTAFidelityChanges                         Changables;                                                // 0x0048(0x0044) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KMCV[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAFidelityOption");
		return ptr;
	}



};

// Class GTABase.GameterSettings
// 0x0200 (FullSize[0x0320] - InheritedSize[0x0120])
class UGameterSettings : public UGameUserSettings
{
public:
	unsigned char                                      UnknownData_1S8Y[0x4];                                     // 0x0120(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGTASettings_Graphics                       Graphics;                                                  // 0x0124(0x007C) (Edit, BlueprintVisible, ZeroConstructor, Transient, Config, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FGTASettings_Controls                       Controls;                                                  // 0x01A0(0x0048) (Edit, BlueprintVisible, ZeroConstructor, Transient, Config, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FGTASettings_Gameplay                       Gameplay;                                                  // 0x01E8(0x0018) (Edit, BlueprintVisible, ZeroConstructor, Transient, Config, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FGTASettings_Audio                          Audio;                                                     // 0x0200(0x0020) (Edit, BlueprintVisible, ZeroConstructor, Transient, Config, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FGTASettings_Language                       Language;                                                  // 0x0220(0x001C) (Edit, BlueprintVisible, ZeroConstructor, Transient, Config, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IBLM[0x4];                                     // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DefaultClassName;                                          // 0x0240(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FidelitySetting;                                           // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, Config, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DefaultsVersion;                                           // 0x0254(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HeldLastResolution;                                        // 0x0258(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HeldLastScreenMode;                                        // 0x025C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HeldLastOutputMonitor;                                     // 0x0260(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RequiresRestart;                                           // 0x0264(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisableDynamicResolution;                                 // 0x0265(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZTZ6[0x2];                                     // 0x0266(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               UserOverrideCVars;                                         // 0x0268(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FString>                             UserOverrideValues;                                        // 0x0278(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FGTAFidelitySettings>                PlatformFidelitySettings;                                  // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                LastRefreshRate;                                           // 0x0298(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LNRL[0x4];                                     // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LastOutputMonitorName;                                     // 0x02A0(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                lastSystemLanguage;                                        // 0x02B0(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ForcedSCEnvironment;                                       // 0x02B4(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           TotalTimePlayed;                                           // 0x02B8(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QUJV[0x10];                                    // 0x02BC(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                GPUBenchmarkScore;                                         // 0x02CC(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0CGZ[0x50];                                    // 0x02D0(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GameterSettings");
		return ptr;
	}



	void UpdateFidelitySettings(bool SkipCallback);
	void UpdateDefaultVersion(bool SkipSave);
	void UpdateAllGraphicsSettings();
	void SetupGlobalSettingsCallbacks();
	void SetResolutionToDefault(bool doConfirmVideoMode);
	void SetIntValue(const struct FName& VariableName, int NewValue);
	void SetInitialScreenValues();
	void SetFloatValue(const struct FName& VariableName, float NewValue);
	void SetBoolValue(const struct FName& VariableName, bool NewValue);
	void RevertOption(const struct FName& OptionName);
	void ResetSettingsToPlatformDefault(TEnumAsByte<GTABase_EGTASettingsCategory> Category, bool SkipDisplayChanges, bool SkipSave);
	void ResetDefaultCheck();
	void RefreshSettingsOnFirstLoad(bool ForceReset);
	void OnTextureQualitySet();
	void OnShadowSet();
	void OnRTXSet();
	void OnResolutionSet(bool ApplySettings);
	void OnReflectionQualitySet();
	void OnOutputMonitorSet();
	void OnMotionBlurSet();
	void OnLensFlareSet();
	void OnLanguageSet();
	void OnFrameRateLimitSet(bool ApplySettings);
	void OnFrameRateLimitPCSet(bool ApplySettings);
	void OnDistanceScaleSet();
	void OnDisplayModeSet(bool ApplySettings);
	void OnDepthOfFieldSet();
	void OnCloudQualitySet();
	void OnCarReflectionMethodSet();
	void OnBloomSet();
	void OnAspectRatioSet();
	void OnAOSet();
	void OnAnisotropicSet();
	void NormalizeInitialScreenSize();
	void InitializeGlobalSettings();
	bool HasEverSetToDefault();
	void GTASaveSettings(const struct FName& SettingName);
	TArray<struct FText> GetSelectionNamesForEmptyEntry(const struct FName& EntryName);
	TArray<struct FText> GetScreenResolutionNames();
	TEnumAsByte<GTABase_EGTAPlatforms> GetPlatformToEmulate();
	class UClass* GetPlatformDefaults(TEnumAsByte<GTABase_EGTAPlatforms> PlatformOverride, bool IsEditor);
	class UDefaultGameterSettings_Rules* GetPlatformDefaultRules();
	int GetPCFidelitySetting();
	int GetNumberValue(const struct FName& VariableName);
	TArray<struct FText> GetListOfFidelityOptionNamesFromSettings(TEnumAsByte<GTABase_EGTAPlatforms> PlatformOverride, bool IsEditor);
	int GetIntValue(const struct FName& VariableName);
	float GetFloatValue(const struct FName& VariableName);
	int GetFidelityOptionsNum(TEnumAsByte<GTABase_EGTAPlatforms> PlatformOverride, bool IsEditor);
	TArray<struct FText> GetFidelityOptionNames(TEnumAsByte<GTABase_EGTAPlatforms> PlatformOverride);
	class UGTAFidelityOption* GetCurrentFidelityOption(int CurrentSelection, TEnumAsByte<GTABase_EGTAPlatforms> PlatformOverride, bool IsEditor);
	bool GetBoolValue(const struct FName& VariableName);
	void FinalOptionCheck(const struct FName& OptionName);
	bool CheckSpecialOptionEnabled(const struct FName& OptionName, int* ErrorCode);
	void CheckDisplayModeAndUpdateSettings();
};

// Class GTABase.DefaultGameterSettings_Rules
// 0x0120 (FullSize[0x0148] - InheritedSize[0x0028])
class UDefaultGameterSettings_Rules : public UObject
{
public:
	struct FGTASettings_Graphics                       Graphics;                                                  // 0x0028(0x007C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FGTASettings_Controls                       Controls;                                                  // 0x00A4(0x0048) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FGTASettings_Gameplay                       Gameplay;                                                  // 0x00EC(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FGTASettings_Audio                          Audio;                                                     // 0x0104(0x0020) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FGTASettings_Language                       Language;                                                  // 0x0124(0x001C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                FidelitySetting;                                           // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HRMI[0x4];                                     // 0x0144(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.DefaultGameterSettings_Rules");
		return ptr;
	}



};

// Class GTABase.GrungeProxy
// 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
class AGrungeProxy : public AActor
{
public:
	unsigned char                                      UnknownData_7S55[0x8];                                     // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UProceduralMeshComponent*>            BuiltComponents;                                           // 0x0228(0x0010) (Edit, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GrungeProxy");
		return ptr;
	}



};

// Class GTABase.GrungePlacementBase
// 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
class AGrungePlacementBase : public AActor
{
public:
	struct FGuid                                       Guid;                                                      // 0x0220(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeInMapProxy;                                        // 0x0230(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SKPT[0x7];                                     // 0x0231(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GrungePlacementBase");
		return ptr;
	}



};

// Class GTABase.GTAActivityManager
// 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
class UGTAActivityManager : public UObject
{
public:
	unsigned char                                      UnknownData_VT3D[0xC0];                                    // 0x0028(0x00C0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAActivityManager");
		return ptr;
	}



};

// Class GTABase.GTAActor
// 0x0080 (FullSize[0x02A0] - InheritedSize[0x0220])
class AGTAActor : public AActor
{
public:
	uint32_t                                           ModelID;                                                   // 0x0220(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LZQ2[0x4];                                     // 0x0224(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<int, class UPrimitiveComponent*>              AttachedFrameComponents;                                   // 0x0228(0x0050) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FTimerHandle                                FadeDelegate;                                              // 0x0278(0x0008) (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CurrentAlpha;                                              // 0x0280(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QF1Q[0x4];                                     // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bMaskFromDecalHeadlights : 1;                              // 0x0288(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bShouldImpostorInProxy : 1;                                // 0x0288(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bUseVertexAO : 1;                                          // 0x0288(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bUseVertexUplighting : 1;                                  // 0x0288(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bUseDynamicVolumetricLookup : 1;                           // 0x0288(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bUseStaticVolumetricLookup : 1;                            // 0x0288(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bIgnoreForVolGridBuilding : 1;                             // 0x0288(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bSpawnedFromGTA : 1;                                       // 0x0288(0x0001) BIT_FIELD (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bProminent : 1;                                            // 0x0289(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bMultipleMeshComponents : 1;                               // 0x0289(0x0001) BIT_FIELD (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bTickLessOffScreen : 1;                                    // 0x0289(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bConstructSeparateProxy : 1;                               // 0x0289(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint16_t                                           VariationSeed;                                             // 0x028A(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DynamicAO;                                                 // 0x028C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FColor                                      DynamicUplighting;                                         // 0x0290(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              UplightStrength;                                           // 0x0294(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              AOStrength;                                                // 0x0298(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_M64L[0x4];                                     // 0x029C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAActor");
		return ptr;
	}



	void TimeChanged(bool bEditor);
	void SetScorched(bool scorched);
	void SetDamaged(bool damaged);
	void SetAlpha(float withAlpha);
	float GetTimeOfDay();
	void CheckTreeFarShadowSetting();
	void AddCollisionEffects(float impulseAmt, const struct FVector& Pos, const struct FVector& Dir);
};

// Class GTABase.GTASMActor
// 0x0008 (FullSize[0x02A8] - InheritedSize[0x02A0])
class AGTASMActor : public AGTAActor
{
public:
	class UStaticMeshComponent*                        Mesh;                                                      // 0x02A0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTASMActor");
		return ptr;
	}



};

// Class GTABase.GTASKActor
// 0x0080 (FullSize[0x0320] - InheritedSize[0x02A0])
class AGTASKActor : public AGTAActor
{
public:
	class UGTAPoseableComponent*                       Mesh;                                                      // 0x02A0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHasBoneTransformTweaks;                                   // 0x02A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_O9EW[0x7];                                     // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class USkeletalMesh*, struct FSkeletonToSkeletonMap> maps;                                                      // 0x02B0(0x0050) (Transient, Protected, NativeAccessSpecifierProtected)
	bool                                               bNeedsRawToFinalPose;                                      // 0x0300(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NL3A[0x1F];                                    // 0x0301(0x001F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTASKActor");
		return ptr;
	}



	class USkeleton* GetOverrideSkeleton();
	struct FTransform GetBoneTransformTweak(const struct FTransform& InTransform, const struct FName& InBoneName, bool* OutShouldRemove, const struct FName& TweakType);
};

// Class GTABase.GTAAOSkeletalProxy
// 0x0088 (FullSize[0x0328] - InheritedSize[0x02A0])
class AGTAAOSkeletalProxy : public AGTAActor
{
public:
	class UStaticMeshComponent*                        ConstructedComponent;                                      // 0x02A0(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        AccompanyComponent;                                        // 0x02A8(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UStaticMeshComponent*>                WheelComponents;                                           // 0x02B0(0x0010) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 GeneratedMesh;                                             // 0x02C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               SrcMesh;                                                   // 0x02C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ExcludeBones;                                              // 0x02D0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bIncludeTranslucents;                                      // 0x02E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAddWheels;                                                // 0x02E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2BTE[0x2];                                     // 0x02E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WheelScaling;                                              // 0x02E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSkelProxyBoneTweak>                 BoneTweaks;                                                // 0x02E8(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   MinMaxAO;                                                  // 0x02F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 AccompanyMesh;                                             // 0x0300(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             OnlyTransferBones;                                         // 0x0308(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UMaterialInstanceConstant*                   WindowMIC;                                                 // 0x0318(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D7Q5[0x8];                                     // 0x0320(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAAOSkeletalProxy");
		return ptr;
	}



	void ConstructStatic();
	void ApplyVertexColor();
};

// Class GTABase.GTASKProxyActor
// 0x0038 (FullSize[0x0358] - InheritedSize[0x0320])
class AGTASKProxyActor : public AGTASKActor
{
public:
	int                                                CurSeed;                                                   // 0x0320(0x0004) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                SkinColorMult;                                             // 0x0324(0x0010) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ClothingColorMult;                                         // 0x0334(0x0010) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                AccessoryColorMult;                                        // 0x0344(0x0010) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bValidSkinColorMult;                                       // 0x0354(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bValidClothingColorMult;                                   // 0x0355(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bValidAccessoryColorMult;                                  // 0x0356(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IEKD[0x1];                                     // 0x0357(0x0001) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTASKProxyActor");
		return ptr;
	}



	void CycleMe();
	void CycleAll();
};

// Class GTABase.GTAAudioComponent
// 0x0030 (FullSize[0x0890] - InheritedSize[0x0860])
class UGTAAudioComponent : public UAudioComponent
{
public:
	unsigned char                                      UnknownData_3XLK[0x30];                                    // 0x0860(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAAudioComponent");
		return ptr;
	}



	float GetPlaybackPosition();
};

// Class GTABase.GTABloodPool
// 0x0008 (FullSize[0x02A8] - InheritedSize[0x02A0])
class AGTABloodPool : public AGTAActor
{
public:
	float                                              AlphaValue;                                                // 0x02A0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IHE6[0x4];                                     // 0x02A4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTABloodPool");
		return ptr;
	}



};

// Class GTABase.GTAVertexSettingsOverride
// 0x0068 (FullSize[0x0288] - InheritedSize[0x0220])
class AGTAVertexSettingsOverride : public AActor
{
public:
	bool                                               bDisallowPerInstanceColors;                                // 0x0220(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KGE2[0x3];                                     // 0x0221(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAOGenSettings                              aoSettings;                                                // 0x0224(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FUplightGenSettings                         uplightSettings;                                           // 0x0240(0x0048) (Edit, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAVertexSettingsOverride");
		return ptr;
	}



};

// Class GTABase.GTALightingProbeComponent
// 0x0008 (FullSize[0x0200] - InheritedSize[0x01F8])
class UGTALightingProbeComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_33SM[0x8];                                     // 0x01F8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTALightingProbeComponent");
		return ptr;
	}



};

// Class GTABase.GTALightingProbe
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class AGTALightingProbe : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTALightingProbe");
		return ptr;
	}



};

// Class GTABase.GTAVertexLightSphere
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class AGTAVertexLightSphere : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAVertexLightSphere");
		return ptr;
	}



};

// Class GTABase.GTABloodyFootprints
// 0x0060 (FullSize[0x0300] - InheritedSize[0x02A0])
class AGTABloodyFootprints : public AGTAActor
{
public:
	class UMaterialInstanceConstant*                   FootprintMI;                                               // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProceduralMeshComponent*                    FootprintPMC;                                              // 0x02A8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FootprintLifetimeOverride;                                 // 0x02B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     FootprintScale;                                            // 0x02B4(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              InitialAlphaScale;                                         // 0x02C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WH3R[0x4];                                     // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBloodyFootprint>                    Footprints;                                                // 0x02C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FVector                                     DecalSize;                                                 // 0x02D8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                                    DecalRotationOffset;                                       // 0x02E4(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EHHE[0x10];                                    // 0x02F0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTABloodyFootprints");
		return ptr;
	}



	void UpdateMeshSection(int MeshSection, float Alpha);
	void OnFootprintTick(int MeshSection, float Lifetime);
	void OnFootprintAdded(int MeshSection, float Alpha);
	class UDecalComponent* GetDecal(int MeshSection);
};

// Class GTABase.GTAUE4MapCache
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UGTAUE4MapCache : public UDataAsset
{
public:
	TMap<struct FString, struct FUE4CachedMap>         MapAssets;                                                 // 0x0030(0x0050) (Protected, NativeAccessSpecifierProtected)
	bool                                               bInvalidateCacheOnNextRun;                                 // 0x0080(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_U0PS[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAUE4MapCache");
		return ptr;
	}



};

// Class GTABase.IMGFileUserData
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UIMGFileUserData : public UAssetUserData
{
public:
	unsigned char                                      SmRef[0x28];                                               // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      GtaImageFile[0x28];                                        // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               bFixupIPLOffset;                                           // 0x0078(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YQKV[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CustomModelId;                                             // 0x007C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.IMGFileUserData");
		return ptr;
	}



};

// Class GTABase.CollisionExcludeList
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UCollisionExcludeList : public UDataAsset
{
public:
	TArray<struct FString>                             CollisionNames;                                            // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	TEnumAsByte<GTABase_EGTAIMGGame>                   ImgGame;                                                   // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NP7K[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.CollisionExcludeList");
		return ptr;
	}



};

// Class GTABase.CollisionMaterialViz
// 0x0010 (FullSize[0x02B0] - InheritedSize[0x02A0])
class ACollisionMaterialViz : public AGTAActor
{
public:
	class UProceduralMeshComponent*                    VizComponent;                                              // 0x02A0(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          VizMaterial;                                               // 0x02A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.CollisionMaterialViz");
		return ptr;
	}



};

// Class GTABase.IPLMapActor
// 0x0018 (FullSize[0x02C0] - InheritedSize[0x02A8])
class AIPLMapActor : public AGTASMActor
{
public:
	struct FName                                       OriginalDFF;                                               // 0x02A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint32_t                                           areaCodeAndFlags;                                          // 0x02B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                IplIndex;                                                  // 0x02B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bIsOnlyGround : 1;                                         // 0x02B8(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bEntityLinkActor : 1;                                      // 0x02B8(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bEntityUpdatePosition : 1;                                 // 0x02B8(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bLinkerIgnoreMaxDist : 1;                                  // 0x02B8(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bCanOverwriteActor : 1;                                    // 0x02B8(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bIsSubway : 1;                                             // 0x02B8(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZOB8[0x7];                                     // 0x02B9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.IPLMapActor");
		return ptr;
	}



	void GetStaticVolumetricStrength(float* intoAO, float* intoUplight);
	void CopyVertexLighting(class UMeshComponent* ToComponent, bool bSwapToDynamic);
	void ChangedLightSwitch(bool bOn, bool bIsEditor);
};

// Class GTABase.DynamicIPLMapActor
// 0x0018 (FullSize[0x02D8] - InheritedSize[0x02C0])
class ADynamicIPLMapActor : public AIPLMapActor
{
public:
	bool                                               bConstructDynamically;                                     // 0x02C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnAtZero;                                              // 0x02C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SF2T[0x2];                                     // 0x02C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              VolumetricAOStrength;                                      // 0x02C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VolumetricUplightingStrength;                              // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageAmt;                                                 // 0x02CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q11S[0x8];                                     // 0x02D0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.DynamicIPLMapActor");
		return ptr;
	}



	bool ShouldForceInstanceBakedColors();
	bool SetupBroken(const struct FVector& impulseSrc, const struct FVector& impulseVelocity, const struct FTransform& floorTransform);
	bool SetupBreakableInGTA();
	void SetEffect(int effectNo, float amt);
	void OnUpdatedDamageAmount();
	void GetTrafficState(bool* Enabled, int* lightState, int* walkState);
	class UStaticMeshComponent* GetPhysicsFloorC();
	void EntityRemoved(int reason);
	void EntityLinked(bool bShouldBeVisible);
	void Dislodged();
	float BreakableImpulseFactor();
	void AddRandomOutwardVelocityToAllBodies(class USkeletalMeshComponent* InPrimitive, float amt);
	void AddImpulseAtLocationForAllBodiesBelow(class USkeletalMeshComponent* InPrimitive, const struct FVector& Impulse, const struct FVector& position);
};

// Class GTABase.MeshBevellingDataBase
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UMeshBevellingDataBase : public UAssetUserData
{
public:
	bool                                               bApplyBevelling;                                           // 0x0028(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoveBevelling;                                          // 0x0029(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceBevellingAlreadyApplied;                             // 0x002A(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasBevelApplied;                                          // 0x002B(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RW8L[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.MeshBevellingDataBase");
		return ptr;
	}



	void Unbevel();
	void Bevel(bool bSkipBuild);
};

// Class GTABase.ProcTextData
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UProcTextData : public UDataAsset
{
public:
	TMap<int, struct FVector4>                         CharacterMap;                                              // 0x0030(0x0050) (Edit, NativeAccessSpecifierPrivate)
	float                                              SpaceSize;                                                 // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              LineSpacing;                                               // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.ProcTextData");
		return ptr;
	}



	void ConstructText(class UProceduralMeshComponent* onComponent, class UMaterialInstanceConstant* UsingMIC, const struct FString& Text, const struct FVector2D& Scale, bool bCentered, bool bHorizontalLeft, float LineScaling);
};

// Class GTABase.Rage
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class URage : public UObject
{
public:
	unsigned char                                      UnknownData_RG3K[0x58];                                    // 0x0028(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.Rage");
		return ptr;
	}



	void SetSocialclubMenu(class UGTASocialClub* sc);
};

// Class GTABase.RageEditorMenu
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URageEditorMenu : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.RageEditorMenu");
		return ptr;
	}



};

// Class GTABase.RageSaveData
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class URageSaveData : public USaveGame
{
public:
	struct FString                                     SaveSlotName;                                              // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LastModifiedTime;                                          // 0x0038(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SaveData;                                                  // 0x0048(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.RageSaveData");
		return ptr;
	}



};

// Class GTABase.StreetDecalComponent
// 0x0010 (FullSize[0x04F0] - InheritedSize[0x04E0])
class UStreetDecalComponent : public UProceduralMeshComponent
{
public:
	unsigned char                                      UnknownData_WLT7[0x10];                                    // 0x04E0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.StreetDecalComponent");
		return ptr;
	}



};

// Class GTABase.StreetLightMapActor
// 0x0098 (FullSize[0x0370] - InheritedSize[0x02D8])
class AStreetLightMapActor : public ADynamicIPLMapActor
{
public:
	TArray<struct FStreetDecalData>                    Decals;                                                    // 0x02D8(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, Protected, NativeAccessSpecifierProtected)
	int                                                DecalGridSize;                                             // 0x02E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DecalBrightness;                                           // 0x02EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceConstant*                   DecalMIC;                                                  // 0x02F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_APEJ[0x8];                                     // 0x02F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector4                                    DecalUVs;                                                  // 0x0300(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bDisableDecals : 1;                                        // 0x0310(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bIncludeInQuadrantProxies : 1;                             // 0x0310(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bForceLowQualityLight : 1;                                 // 0x0310(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6NCJ : 2;                                      // 0x0310(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bNeverCastShadows : 1;                                     // 0x0310(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bAllowSmallMeshCulling : 1;                                // 0x0310(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7QD1[0x3];                                     // 0x0311(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStreetLightLowQualitySetting               LowQualitySettings;                                        // 0x0314(0x0018) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Z0HI[0x34];                                    // 0x032C(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStreetDecalComponent*                       CurrentDecalComponent;                                     // 0x0360(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9PTD[0x8];                                     // 0x0368(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.StreetLightMapActor");
		return ptr;
	}



	void SetupImpostorComponent(class UStaticMeshComponent* Component);
	void SetLowQualityLights(bool bIsLow);
	void SetLightVisibility(class ULightComponent* Component, bool bIsVisible);
	void SetLights(bool bLightsOn, bool bForceForEditor);
	void SetAsLowQualityLightTemplate();
	void RerollLights();
	void RemoveDecal();
	void EnableViz();
	void BuildDecal();
};

// Class GTABase.UITransition
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UUITransition : public UObject
{
public:
	class UUITransitionScreen*                         TransitionObject;                                          // 0x0028(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUITransitionScreen*                         MenuTransitionObject;                                      // 0x0030(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.UITransition");
		return ptr;
	}



	bool UseTransitionObject();
	void StartMenu(class APlayerController* OwningPlayer, class UClass* ScreenClass, TEnumAsByte<GTABase_EGTATransitionState> startingState, const struct FString& NameToCreateWith);
	void Start(class APlayerController* OwningPlayer, class UClass* ScreenClass, TEnumAsByte<GTABase_EGTATransitionState> startingState, const struct FString& NameToCreateWith);
	void SetTransitionStateFadeTime(TEnumAsByte<GTABase_EGTATransitionState> StateToChange, float TimeToFade);
	void SetMenuTransitionStateFadeTime(TEnumAsByte<GTABase_EGTATransitionState> StateToChange, float TimeToFade);
	bool IsOpaque();
	void InterruptCurrentTransition(class APlayerController* OwningPlayer, class UClass* ScreenClass, TEnumAsByte<GTABase_EGTATransitionState> startingState, const struct FString& NameToCreateWith, bool takeOldOpacity);
	void InterruptCurrentMenuTransition(class APlayerController* OwningPlayer, class UClass* ScreenClass, TEnumAsByte<GTABase_EGTATransitionState> startingState, const struct FString& NameToCreateWith, bool takeOldOpacity);
	TEnumAsByte<GTABase_EGTATransitionState> GetState();
	bool GetIsFading();
	void CustomFunctionOnTransitionWithString(const struct FString& FunctionString, const struct FString& VariableString);
	void CustomFunctionOnTransitionWithColor(const struct FString& FunctionString, const struct FLinearColor& Color);
	void CustomFunctionOnTransition(const struct FString& FunctionString);
	void ContinueMenu(TEnumAsByte<GTABase_EGTATransitionState> toState);
	void Continue(TEnumAsByte<GTABase_EGTATransitionState> toState);
};

// Class GTABase.UITransitionScreen
// 0x0050 (FullSize[0x02B0] - InheritedSize[0x0260])
class UUITransitionScreen : public UUserWidget
{
public:
	TEnumAsByte<GTABase_EGTATransitionState>           CurrentState;                                              // 0x0260(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RRUY[0x7];                                     // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      FadeTimes;                                                 // 0x0268(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<bool>                                       FadeInDirection;                                           // 0x0278(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bIsInGameTransition;                                       // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6V67[0x7];                                     // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     NameGivenAtCreation;                                       // 0x0290(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsFlexibleTransition;                                     // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDoesOverrideSimpleFades;                                  // 0x02A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DoesModifyDialogVolume;                                    // 0x02A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6Q2E[0x1];                                     // 0x02A3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DialogVolumeMultiplier;                                    // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasTickedSinceLastChange;                                  // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DJ2H[0x7];                                     // 0x02A9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.UITransitionScreen");
		return ptr;
	}



	void SetProgress(float Value);
	void SetHudItemPosition(float X, float Y, float Xmax, float Ymax);
	void OverrideBackgroundColor(const struct FLinearColor& ToColor);
	bool IsOpaque();
	TEnumAsByte<GTABase_EGTATransitionState> GetState();
	bool GetIsFading();
	class UUI_GTAHUDItem* GetHudItem();
	class UGameterface* GetGameterface();
	float GetDialogVolumeMultiplier();
	float GetCurrentFadeOpacity();
	void ForceCurrentFadeOpacity(float newOpacity);
	void CustomFunctionFromStringWithString(const struct FString& FunctionString, const struct FString& VariableString);
	void CustomFunctionFromStringWithColor(const struct FString& FunctionString, const struct FLinearColor& Color);
	void CustomFunctionFromString(const struct FString& FunctionString);
	void Continue(TEnumAsByte<GTABase_EGTATransitionState> toState);
	void BP_SetTransitionStateFadeTime(TEnumAsByte<GTABase_EGTATransitionState> StateToChange, float TimeToFade);
	void BP_Continue();
	bool AllowBackwardsTransition();
};

// Class GTABase.GTACarRecordings
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UGTACarRecordings : public UDataAsset
{
public:
	TMap<int, struct FGTACarRecordingFile>             Files;                                                     // 0x0030(0x0050) (Edit, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0080(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartFrame;                                                // 0x0084(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndFrame;                                                  // 0x0088(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q86H[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTACarRecordings");
		return ptr;
	}



	void RestoreOriginalFile();
	void InsertFile();
	void FlattenBetweenFrames();
};

// Class GTABase.GTACinematicDB
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UGTACinematicDB : public UDataAsset
{
public:
	TArray<struct FGTACinematicData>                   Cinematics;                                                // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H2TA[0x50];                                    // 0x0040(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTACinematicDB");
		return ptr;
	}



};

// Class GTABase.GTACollisionCache
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UGTACollisionCache : public UDataAsset
{
public:
	TArray<struct FGTAColAccelItem>                    ColItems;                                                  // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGTAColDefAccelItem>                 ColBounds;                                                 // 0x0040(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGTAIplAccelItem>                    IplItems;                                                  // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGTAIplDef>                          IplBounds;                                                 // 0x0060(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        SectionSizes;                                              // 0x0070(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTACollisionCache");
		return ptr;
	}



	void ImportOldCache();
	void Clear();
};

// Class GTABase.GTATimeOfDay
// 0x0E98 (FullSize[0x1138] - InheritedSize[0x02A0])
class AGTATimeOfDay : public AGTAActor
{
public:
	unsigned char                                      UnknownData_SWJ8[0xC];                                     // 0x02A0(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bLiveEditMode;                                             // 0x02AC(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_71B8[0x3];                                     // 0x02AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                SkylightColor;                                             // 0x02B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                SkyLowerColor;                                             // 0x02C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                SkyUpperColor;                                             // 0x02D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                SkyReflectionColor;                                        // 0x02E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                CameraParameters;                                          // 0x02F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                CloudParams;                                               // 0x0300(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                VolumetricCloudColor;                                      // 0x0310(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                VolumetricCloudExtinction;                                 // 0x0320(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                VolumetricCloudEmission;                                   // 0x0330(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                CloudBackgroundColor;                                      // 0x0340(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                CloudLowerColor;                                           // 0x0350(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                CloudUpperColor;                                           // 0x0360(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                CloudSecondaryColor;                                       // 0x0370(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CloudDensityVariation;                                     // 0x0380(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CloudBaseDensity;                                          // 0x0384(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CloudVariationSpeed;                                       // 0x0388(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CloudWindSpeed;                                            // 0x038C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                FogColor;                                                  // 0x0390(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                FogParameters;                                             // 0x03A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                MoonColor;                                                 // 0x03B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                StarsColor;                                                // 0x03C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                SunColor;                                                  // 0x03D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SunshineAmount;                                            // 0x03E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                UplightingColor;                                           // 0x03E4(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                PostSettings;                                              // 0x03F4(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CityGlowAmount;                                            // 0x0404(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtraSunnyAmount;                                          // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SmogAmount;                                                // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CloudyAmount;                                              // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RainyAmount;                                               // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FoggyAmount;                                               // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SandstormAmount;                                           // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              UnderwaterAmount;                                          // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Misc1Amount;                                               // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Misc2Amount;                                               // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RiotAmount;                                                // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CurrentSkyVisibility;                                      // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                OccludedSky_PostSettings;                                  // 0x0434(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                OccludedSky_UplightingColor;                               // 0x0444(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                OccludedSky_FogColor;                                      // 0x0454(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                OccludedSky_FogParameters;                                 // 0x0464(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                OccludedSky_SkylightColor;                                 // 0x0474(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                OccludedSky_OverrideGroundColor;                           // 0x0484(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              OccludedSky_SkyReflectivity;                               // 0x0494(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AGTAPostProcessVolume*                       PostProcessVolume;                                         // 0x0498(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASkyAtmosphere*                              Atmosphere;                                                // 0x04A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AGTAVolumetricCloud*                         CloudActor;                                                // 0x04A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      VolumetricCloudClass[0x28];                                // 0x04B0(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	struct FLinearColor                                BaseGroundColor;                                           // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AActor*>                              GroundEffectingLights;                                     // 0x04E8(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	struct FLinearColor                                CurrentGroundColor;                                        // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ADirectionalLight*                           SunLightActor;                                             // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SecondsToInterpSun;                                        // 0x0510(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CurSunInterpFrame;                                         // 0x0514(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                                    CurSunBaseRotator;                                         // 0x0518(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                              SunInterpThreshold;                                        // 0x0524(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SunJumpAngleThreshold;                                     // 0x0528(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SunLightShadowDefault;                                     // 0x052C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CachedAtmosphereHeight;                                    // 0x0530(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RIDR[0x4];                                     // 0x0534(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialParameterCollection*                GlobalParamInstance;                                       // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                InteriorGroundColor;                                       // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                InteriorPostEffects;                                       // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InteriorCityGlow;                                          // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                InteriorUplightingAmount;                                  // 0x0564(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                InteriorUplightingDot;                                     // 0x0574(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UplightDot_Directionality;                                 // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UplightDot_UpLerp;                                         // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasMorningShadows;                                        // 0x058C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KIPM[0x3];                                     // 0x058D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HighVelocityAOPercentage;                                  // 0x0590(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7GJS[0x4];                                     // 0x0594(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      Times;                                                     // 0x0598(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSkySettings                                BaseSettings;                                              // 0x05A8(0x0108) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FSkySettings                                ExtraSunnySettings;                                        // 0x06B0(0x0108) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FSkySettings                                SmogSettings;                                              // 0x07B8(0x0108) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FSkySettings                                CloudySettings;                                            // 0x08C0(0x0108) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FSkySettings                                RainySettings;                                             // 0x09C8(0x0108) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FSkySettings                                FoggySettings;                                             // 0x0AD0(0x0108) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FSkySettings                                SandstormSettings;                                         // 0x0BD8(0x0108) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FSkySettings                                UnderwaterSettings;                                        // 0x0CE0(0x0108) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FSkySettings                                Misc1Settings;                                             // 0x0DE8(0x0108) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FSkySettings                                Misc2Settings;                                             // 0x0EF0(0x0108) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FSkySettings                                RiotSettings;                                              // 0x0FF8(0x0108) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bIsMainTOD;                                                // 0x1100(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPurpleSky;                                                // 0x1101(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PHFB[0x2];                                     // 0x1102(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PurpleSkyChance;                                           // 0x1104(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CityGlow_LowQ[0x10];                                       // 0x1108(0x0010) UNKNOWN PROPERTY: ArrayProperty
	unsigned char                                      CityGlow_HighQ[0x10];                                      // 0x1118(0x0010) UNKNOWN PROPERTY: ArrayProperty
	TArray<class UStaticMeshComponent*>                GlowComponents;                                            // 0x1128(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTATimeOfDay");
		return ptr;
	}



	void SnagCurveTimes();
	void ShiftTimeForward();
	void ShiftTimeBackward();
	void SetWaterZ(float ZValue);
	void SaveCurrentValues();
	void Sample();
	void RotateSun(const struct FRotator& TargetRotation);
	void RerunConstruction();
	void RemoveCurrentValues();
	void PreviewWeatherChanged(TEnumAsByte<GTABase_EGTAWeather> NewWeather);
	class UMaterialInstanceDynamic* GetUnderwaterMID();
	class ASkyLight* GetSkyLightActor();
	struct FRotator GetMoonDirection();
	bool EnableCloudMaterial(bool bEnabled);
	void CycleMoonSize();
	void CullCurves();
	void CopyValuesForward();
	void CopyValuesBackward();
	void CopyBaseValues();
	void CleanCurves();
};

// Class GTABase.GTACollisionData
// 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
class UGTACollisionData : public UAssetUserData
{
public:
	struct FName                                       ModelName;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OriginalCollisionModelName;                                // 0x0030(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldReplaceGTACollision;                                // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RHCU[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGTAColBoundingBox                          BoundingBox;                                               // 0x0044(0x002C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FGTAColCapsule>                      Capsules;                                                  // 0x0070(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGTAColSphere>                       Spheres;                                                   // 0x0080(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGTAColBox>                          Boxes;                                                     // 0x0090(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGTAColTriData                              Tris;                                                      // 0x00A0(0x0028) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTACollisionData");
		return ptr;
	}



};

// Class GTABase.GTACollisionDataCollection
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UGTACollisionDataCollection : public UDataAsset
{
public:
	unsigned char                                      CollisionCollection[0x50];                                 // 0x0030(0x0050) UNKNOWN PROPERTY: MapProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTACollisionDataCollection");
		return ptr;
	}



};

// Class GTABase.CollisionFileBackup
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UCollisionFileBackup : public UAssetUserData
{
public:
	unsigned char                                      UnknownData_6M3E[0x18];                                    // 0x0028(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.CollisionFileBackup");
		return ptr;
	}



};

// Class GTABase.CollisionSectionContainer
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UCollisionSectionContainer : public UDataAsset
{
public:
	TMap<struct FName, struct FCollisionMeshSection>   CollisionSections;                                         // 0x0030(0x0050) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.CollisionSectionContainer");
		return ptr;
	}



};

// Class GTABase.GTACoronaComponent
// 0x0020 (FullSize[0x0500] - InheritedSize[0x04E0])
class UGTACoronaComponent : public UProceduralMeshComponent
{
public:
	unsigned char                                      UnknownData_D05K[0x20];                                    // 0x04E0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTACoronaComponent");
		return ptr;
	}



	void UpdateCorona(int Index, const struct FVector& position, float Scale, const struct FColor& Color, float Intensity);
	void RemoveCorona(int Index);
	int AddCorona(const struct FVector& position, float Intensity, float Scale, const struct FColor& Color);
};

// Class GTABase.GTAClutterActor
// 0x0010 (FullSize[0x02B8] - InheritedSize[0x02A8])
class AGTAClutterActor : public AGTASMActor
{
public:
	class AGTAGrassProxy*                              Parent;                                                    // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SPI7[0x8];                                     // 0x02B0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAClutterActor");
		return ptr;
	}



	bool DisallowSpawn();
};

// Class GTABase.GTACustomEntity
// 0x0020 (FullSize[0x02D8] - InheritedSize[0x02B8])
class AGTACustomEntity : public AGTAClutterActor
{
public:
	TArray<class UStaticMeshComponent*>                ExtraCollision;                                            // 0x02B8(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3LSM[0x8];                                     // 0x02C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIgnoreCollision;                                          // 0x02D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_92U5[0x7];                                     // 0x02D1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTACustomEntity");
		return ptr;
	}



	void GetStaticVolumetricStrength(float* intoAO, float* intoUplight);
};

// Class GTABase.GTACustomEntitySM
// 0x0000 (FullSize[0x02D8] - InheritedSize[0x02D8])
class AGTACustomEntitySM : public AGTACustomEntity
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTACustomEntitySM");
		return ptr;
	}



};

// Class GTABase.GTADecalHelper
// 0x0068 (FullSize[0x0288] - InheritedSize[0x0220])
class AGTADecalHelper : public AActor
{
public:
	TArray<struct FDecalEntry>                         CompletedEntries;                                          // 0x0220(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FDecalEntry>                         ActiveEntries;                                             // 0x0230(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FText3DEntry>                        ActiveText;                                                // 0x0240(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UClass*                                      TextTemplate;                                              // 0x0250(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                                TextFaceColorMult;                                         // 0x0258(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                                TextBevelColorMult;                                        // 0x0268(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                                TextExtrudeColorMult;                                      // 0x0278(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTADecalHelper");
		return ptr;
	}



};

// Class GTABase.GTAEffectLibrary
// 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
class UGTAEffectLibrary : public UDataAsset
{
public:
	TArray<struct FGTAEffectData>                      Effects;                                                   // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBulletImpactInfo>                   BulletImpacts;                                             // 0x0040(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YOCR[0x60];                                    // 0x0050(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAEffectLibrary");
		return ptr;
	}



};

// Class GTABase.GTAEnvEffect
// 0x0000 (FullSize[0x0270] - InheritedSize[0x0270])
class AGTAEnvEffect : public AEmitter
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAEnvEffect");
		return ptr;
	}



};

// Class GTABase.GTAEnvLightingVolumeGrid
// 0x0060 (FullSize[0x0280] - InheritedSize[0x0220])
class AGTAEnvLightingVolumeGrid : public AActor
{
public:
	unsigned char                                      UnknownData_PC8X[0x10];                                    // 0x0220(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBox                                        Bounds;                                                    // 0x0230(0x001C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                CellDimX;                                                  // 0x024C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CellDimY;                                                  // 0x0250(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CellDimZ;                                                  // 0x0254(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAOGridInfo                                 Info;                                                      // 0x0258(0x0028) (Edit, EditConst, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAEnvLightingVolumeGrid");
		return ptr;
	}



	void SetLevelBounds();
	float STATIC_GetSkyVisibilityAtLocation(class UObject* WorldContextObject, const struct FVector& Pos, float Radius);
	bool STATIC_GetDynamicLightingAtLocation(class AActor* forActor, const struct FVector& Pos, float Radius, float* outAO, struct FLinearColor* outUplighting, bool bForce);
	void ConstructGrid();
	void STATIC_ClearAnyCachedDynamicLighting(class AActor* forActor);
	void STATIC_ClearAllCachedLighting();
};

// Class GTABase.GTASkyOcclusionOverride
// 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
class AGTASkyOcclusionOverride : public AActor
{
public:
	bool                                               bIgnoreOccludeZ;                                           // 0x0220(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UFK2[0x3];                                     // 0x0221(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ForceOcclusionValue;                                       // 0x0224(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBoxComponent*                               Box;                                                       // 0x0228(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTASkyOcclusionOverride");
		return ptr;
	}



};

// Class GTABase.GTAExplosion
// 0x0068 (FullSize[0x0288] - InheritedSize[0x0220])
class AGTAExplosion : public AActor
{
public:
	unsigned char                                      UnknownData_YKHW[0x8];                                     // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AGTAVehicle*                                 AttachedVehicle;                                           // 0x0228(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystemComponent*                    ExplosionEffect;                                           // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*                    DebrisEffect;                                              // 0x0238(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPointLightComponent*                        ExplosionLight;                                            // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuppressLight;                                            // 0x0248(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZPHY[0x7];                                     // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceConstant*                   BlastDecalMI;                                              // 0x0250(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CullProceduralGrassScale;                                  // 0x0258(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CullClutterScale;                                          // 0x025C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 LightRadius;                                               // 0x0260(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 LightIntensity;                                            // 0x0268(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bImportantExplosion;                                       // 0x0270(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0CWX[0x3];                                     // 0x0271(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DecalMinZ;                                                 // 0x0274(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlastDecalRadius;                                          // 0x0278(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlastDecalOffset;                                          // 0x027C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BlastDecalGridSize;                                        // 0x0280(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlastDecalLifetime;                                        // 0x0284(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAExplosion");
		return ptr;
	}



	void SetupAttachedActor();
	void EditorPreview();
};

// Class GTABase.GTAFire
// 0x0078 (FullSize[0x0298] - InheritedSize[0x0220])
class AGTAFire : public AActor
{
public:
	float                                              TopologySlopeLimit;                                        // 0x0220(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2SV6[0x4];                                     // 0x0224(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    FX;                                                        // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceConstant*                   GroundSmolderBaseMI;                                       // 0x0230(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    GroundSmolderMI;                                           // 0x0238(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SmolderFadeInTime;                                         // 0x0240(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SmolderMaxTimeOnScreen;                                    // 0x0244(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SmolderScale;                                              // 0x0248(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SmolderMaxAlpha;                                           // 0x024C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SmolderRandOffset;                                         // 0x0250(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumSmolders;                                               // 0x0254(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Strength;                                                  // 0x0258(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z2LU[0x4];                                     // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AGTAActor*                                   AttachActor;                                               // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Topology[0x9];                                             // 0x0268(0x0024) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FRAX[0xC];                                     // 0x028C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAFire");
		return ptr;
	}



	void GetSystem(class UParticleSystem** System, float* Distance);
	void Extinguish();
};

// Class GTABase.FireBurningCluster
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class AFireBurningCluster : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.FireBurningCluster");
		return ptr;
	}



};

// Class GTABase.GTAGameEngine
// 0x0010 (FullSize[0x0E40] - InheritedSize[0x0E30])
class UGTAGameEngine : public UGameEngine
{
public:
	class URage*                                       RageActor;                                                 // 0x0E30(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TLU7[0x8];                                     // 0x0E38(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAGameEngine");
		return ptr;
	}



};

// Class GTABase.GTAClutterGrassType
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UGTAClutterGrassType : public UDataAsset
{
public:
	TArray<struct FGTAGrassVariety>                    Varieties;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGTAGrassListing>                    Listings;                                                  // 0x0040(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              BlendedMaterialCutoffPercent;                              // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableDensityScaling : 1;                                 // 0x0054(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J8DC[0x3];                                     // 0x0055(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAClutterGrassType");
		return ptr;
	}



};

// Class GTABase.GTAGrassProxy
// 0x0080 (FullSize[0x0320] - InheritedSize[0x02A0])
class AGTAGrassProxy : public AGTAActor
{
public:
	int                                                RandomSeedOffset;                                          // 0x02A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JWJ3[0x4];                                     // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGTAPatchDefinition>                 BuiltData;                                                 // 0x02A8(0x0010) (Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	struct FBox                                        Bounds;                                                    // 0x02B8(0x001C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_754T[0xC];                                     // 0x02D4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> RuntimeGrassComponents;                                    // 0x02E0(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UStaticMeshComponent*>                RuntimeMeshComponents;                                     // 0x02F0(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UProceduralMeshComponent*>            RuntimeProcComponents;                                     // 0x0300(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class AGTAClutterActor*>                    RuntimeActors;                                             // 0x0310(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAGrassProxy");
		return ptr;
	}



	void ToggleViz();
	void SpawnInEditor();
	void Remove();
	void BuildAndSpawn();
	void Build();
	void STATIC_AddHelicopterGrassMovement(const struct FVector& position, float Milliseconds, float StaticHeight, float GrassFlutterFactor);
	void STATIC_AddGrassMovementInfluence(const struct FVector& position, float Size);
	void STATIC_AddFoliageMovementInfluence(const struct FVector& position, float Size);
};

// Class GTABase.GTAGrassExcluder
// 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
class AGTAGrassExcluder : public AActor
{
public:
	class UBoxComponent*                               Box;                                                       // 0x0220(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAGrassExcluder");
		return ptr;
	}



};

// Class GTABase.GTATrafficLightCache
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGTATrafficLightCache : public UDataAsset
{
public:
	TArray<struct FGTATrafficLight>                    StoredTrafficLights;                                       // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTATrafficLightCache");
		return ptr;
	}



	void ClearForRebuild();
};

// Class GTABase.UI_DesignTimeUserWidget
// 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
class UUI_DesignTimeUserWidget : public UUserWidget
{
public:
	bool                                               HasTextToBeLocalized;                                      // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WB0I[0x7];                                     // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTextLayoutWidget*>                   WidgetsRequiringLoc;                                       // 0x0268(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FString>                             OriginalLocKeys;                                           // 0x0278(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_25O5[0x4];                                     // 0x0288(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bTriedSocialClubResolve;                                   // 0x028C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JUV6[0x3];                                     // 0x028D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.UI_DesignTimeUserWidget");
		return ptr;
	}



	bool UpdateLanguage();
	bool TryToResolveSocialClubOnce();
	bool TakeFocus();
	void SetLocalizedStringsifNeeded();
	void PlayMenuSoundNative(float Volume);
	void OnSynchronizeProperties();
	void LaunchGame(const struct FString& Game);
	bool IsWindowInForeground();
	bool IsPlayingMovie();
	bool HandleBack();
	class AWorldSettings* GetWorldSettings();
	int STATIC_GetPlayerControlerIndex();
	struct FString GetLocalizedStringFromKey(const struct FString& Key);
	int STATIC_GetLastUserIndex();
	struct FString GetImageFilename();
	class UGameterface* GetGameterface();
	struct FVector4 FindUVsFromMapping(TEnumAsByte<GTABase_EHIDMapping> mapping);
	void ClearUserFocus(class AGTAPlayerController* PC);
};

// Class GTABase.UI_GTAHUDItem
// 0x0010 (FullSize[0x02A0] - InheritedSize[0x0290])
class UUI_GTAHUDItem : public UUI_DesignTimeUserWidget
{
public:
	class UUI_GTAHUDDrawer*                            ParentHUD;                                                 // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ZOrderOverride;                                            // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowColorToChangeVisibility;                              // 0x029C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L6D0[0x3];                                     // 0x029D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.UI_GTAHUDItem");
		return ptr;
	}



	void SetWidgetTranslationPercent(float X, float Y);
	void SetWantedLevel(int numStars, int numParole, bool bIsBlinking);
	void SetVisible(bool IsVisible);
	void SetTotalWidgetColor(const struct FLinearColor& Color);
	void SetThirdImageColor(const struct FLinearColor& Color);
	void SetThirdImage(class UTexture2D* Texture);
	void SetThirdFillBarSizeAndFill(float FillBarPct, float FillBarSize);
	void SetSixthImageColor(const struct FLinearColor& Color);
	void SetSixthImage(class UTexture2D* Texture);
	void SetSecondImageOffsets(float xMin, float yMin, float Xmax, float Ymax);
	void SetSecondImageFillAmount(float FillAmmount);
	void SetSecondImageFill(class UTexture2D* Texture, const struct FLinearColor& FillColor, float FillAmmount);
	void SetSecondImageColor(const struct FLinearColor& Color);
	void SetSecondImageAnchors(float xMin, float Xmax, float yMin, float Ymax);
	void SetSecondImage(class UTexture2D* Texture);
	void SetSecondFillBarSizeAndFill(float FillBarPct, float FillBarSize);
	void SetPressed(bool IsPressed);
	void SetPosition(float X, float Y, float Xmax, float Ymax);
	void SetMappingImage(class UTexture2D* Tex, float U, float V, float ULength, float VLength, const struct FLinearColor& Color);
	void SetImageWithSpriteSheet(class UTexture2D* Texture, float U, float V, float ULength, float VLength);
	void SetImageOffsets(float xMin, float yMin, float Xmax, float Ymax);
	void SetImageMaterial(class UMaterialInterface* Material);
	void SetImageColor(const struct FLinearColor& Color, bool forceVisible);
	void SetImageAnchors(float xMin, float Xmax, float yMin, float Ymax);
	void SetImage(class UTexture2D* Texture);
	void SetFourthImageColor(const struct FLinearColor& Color);
	void SetFourthImage(class UTexture2D* Texture);
	void SetFillBarSizeAndFill(float FillBarPct, float FillBarSize);
	void SetFifthImageColor(const struct FLinearColor& Color);
	void SetFifthImage(class UTexture2D* Texture);
	void SetContentTextThree(const struct FText& Text, const struct FLinearColor& FontColorOverride);
	void SetContentTextFour(const struct FText& Text, const struct FLinearColor& FontColorOverride);
	void SetContentTextFive(const struct FText& Text, const struct FLinearColor& FontColorOverride);
	void SetContentTextAnchors(float xMin, float Xmax, float yMin, float Ymax);
	void SetContentTextAdditional(const struct FText& Text, const struct FLinearColor& FontColorOverride);
	void SetContentText(const struct FText& Text, const struct FLinearColor& FontColorOverride);
	void SetContentPercentOffset(float X, float Y);
	void SetAnchorsInDrawer(float minX, float maxX, float minY, float maxY);
	void RefreshAfterSettingsChange();
	void OverrideMappingImageLocation(float XMinOverride, float XMaxOverride, float YMinOverride, float YMaxOverride);
	void GetPosition(float* X, float* Y, float* Xmax, float* Ymax);
	void CustomFunctionWithStrings(const struct FString& FunctionName, TArray<struct FString> Strings);
	void CustomFunctionWithObjects(const struct FString& FunctionName, TArray<struct FSlotImageStruct> Objects);
	void CustomFunctionWithObject(const struct FString& FunctionName, class UObject* Object);
	void CustomFunctionWithInteger(const struct FString& FunctionName, int integer);
	void CustomFunctionWithFloats(const struct FString& FunctionName, TArray<float> Floats);
	void CustomFunctionWithFloat(const struct FString& FunctionName, float floatNum);
	void CustomFunctionWithColors(const struct FString& FunctionName, TArray<struct FLinearColor> Colors);
	void CustomFunctionWithColor(const struct FString& FunctionName, const struct FLinearColor& Color);
	void CustomFunction(const struct FString& FunctionName);
	bool CustomBoolReturnFunction(const struct FString& FunctionName);
};

// Class GTABase.UI_GTAHUDDrawer
// 0x0010 (FullSize[0x02A0] - InheritedSize[0x0290])
class UUI_GTAHUDDrawer : public UUI_DesignTimeUserWidget
{
public:
	float                                              XScale;                                                    // 0x0290(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              YScale;                                                    // 0x0294(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScreenSizeX;                                               // 0x0298(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScreenSizeY;                                               // 0x029C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.UI_GTAHUDDrawer");
		return ptr;
	}



	void UpdateItemsForSettings(const struct FString& Setting);
	void SetVisible(bool IsVisible);
	bool SetScreenSize(float screenWidth, float screenHeight);
	void SetHUDDrawerScale(float HudMultX, float HudMultY);
	bool RemoveGTAHUDItem(const struct FName& ForName);
	void GetScreenMultAndOverrideSize(float* SizeMult, float* WidthOverride, float* HeightOverride);
	class UUI_GTAHUDItem* GetGTAHUDItem(const struct FName& ForName, bool CreateIfNotFound);
};

// Class GTABase.GTAImageDecorator
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UGTAImageDecorator : public URichTextBlockImageDecorator
{
public:
	class UMaterial*                                   IconSpriteMaterial;                                        // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  DefaultTexture;                                            // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FName, class UMaterialInstanceDynamic*> StoredMaterials;                                           // 0x0040(0x0050) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAImageDecorator");
		return ptr;
	}



};

// Class GTABase.GTAMainMenuUITemplate
// 0x0970 (FullSize[0x09A0] - InheritedSize[0x0030])
class UGTAMainMenuUITemplate : public UDataAsset
{
public:
	int                                                GameBitMask;                                               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QQZI[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      BackgroundWidget;                                          // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 GameIcon;                                                  // 0x0040(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAnchors                                    MainButtonsAnchors;                                        // 0x00C8(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                     MainButtonsOffsets;                                        // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAnchors                                    TabAreaAnchors;                                            // 0x00E8(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                     TabAreaOffsets;                                            // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAnchors                                    LogoAreaAnchors;                                           // 0x0108(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      LeftButtonTemplate;                                        // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FText>                               LeftButtons;                                               // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FText>                               AltLeftButtonText;                                         // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                          LeftButtonSelectedBackgroundOverride;                      // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              LeftButtonVerticalSize;                                    // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                HelpTextShadowColor;                                       // 0x0154(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OTVQ[0x4];                                     // 0x0164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundWave*                                  StartupSound;                                              // 0x0168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundWave*                                  ExitSound;                                                 // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundWave*                                  StartSound;                                                // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundWave*                                  BackSound;                                                 // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundWave*                                  MainButtonHighlightSound;                                  // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundWave*                                  TabHighlightSound;                                         // 0x0190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              SelectorTabs;                                              // 0x0198(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FString>                             FunctionToCallOnPress;                                     // 0x01A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                StartingTab;                                               // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AN21[0x4];                                     // 0x01BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScrollListStyle                            SlotStyleOverride;                                         // 0x01C0(0x0158) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FScrollListStyle                            SlotStyleDefaults;                                         // 0x0318(0x0158) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UClass*                                      AdjustableControlsLayout;                                  // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScrollListStyle                            MapKeyStyle;                                               // 0x0478(0x0158) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 MapKeySlotBackgroundBrush;                                 // 0x05D0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                                MapHelpBackground;                                         // 0x0658(0x0278) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UClass*                                      SliderSlotClass;                                           // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SelectionSlotClass;                                        // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      BoolSlotClass;                                             // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      MessageSlotClass;                                          // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      TabConfirmationDialog;                                     // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FullScreenConfirmationClass;                               // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ControllerDisconnectClass;                                 // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      MissionRetryConfirmationClass;                             // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RadioVolumeMultiplier;                                     // 0x0910(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SM9S[0x4];                                     // 0x0914(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USoundCue*>                           RadioStations;                                             // 0x0918(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class USoundCue*                                   DialogSampleSound;                                         // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   SFXSampleSound;                                            // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                                 SCBackgroundTint;                                          // 0x0938(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UClass*                                      SCBackgroundWidget;                                        // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SCButtonTemplate;                                          // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PreMenuLegalScreen[0x28];                                  // 0x0970(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	class UClass*                                      LoadingScreen;                                             // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAMainMenuUITemplate");
		return ptr;
	}



};

// Class GTABase.UI_LoadingScreen
// 0x0008 (FullSize[0x0298] - InheritedSize[0x0290])
class UUI_LoadingScreen : public UUI_DesignTimeUserWidget
{
public:
	class UGameterface*                                Gameterface;                                               // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.UI_LoadingScreen");
		return ptr;
	}



	void SetImageWithTexture(int gameNumber, class UTexture2D* Texture);
};

// Class GTABase.GTAUpgradePart
// 0x0040 (FullSize[0x02E0] - InheritedSize[0x02A0])
class AGTAUpgradePart : public AGTAActor
{
public:
	unsigned char                                      UnknownData_TTIV[0x28];                                    // 0x02A0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPoseableMeshComponent*                      Mesh;                                                      // 0x02C8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                PartType;                                                  // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       SocketName;                                                // 0x02D4(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QUNU[0x4];                                     // 0x02DC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAUpgradePart");
		return ptr;
	}



	void SetupLights();
	void EnableLights(bool bEnableLightsL, bool bEnableLightsR);
};

// Class GTABase.GTAVehicleColorDB
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGTAVehicleColorDB : public UDataAsset
{
public:
	TArray<struct FGTAColorEntry>                      Colors;                                                    // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAVehicleColorDB");
		return ptr;
	}



	void Alphabetize();
};

// Class GTABase.GTAViewportClient
// 0x0008 (FullSize[0x0368] - InheritedSize[0x0360])
class UGTAViewportClient : public UGameViewportClient
{
public:
	class UUITransition*                               TransitionManager;                                         // 0x0360(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAViewportClient");
		return ptr;
	}



	class UUITransition* InitTransition();
	class UGTAViewportClient* STATIC_GetViewportClient(class UWorld* ForWorld);
	class UUITransition* STATIC_GetTransitionManager();
	void DestroyTransition();
};

// Class GTABase.GTAVolumetricCloud
// 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
class AGTAVolumetricCloud : public AVolumetricCloud
{
public:
	class AGTATimeOfDay*                               TimeOfDayActor;                                            // 0x0228(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAVolumetricCloud");
		return ptr;
	}



	void UpdateCloudiness(float SunAmt, float CloudAmt);
	void SetSkyParams(float SunIntensity, float MoonIntensity);
	void SetQualityLevel(int quality);
	void SetExtinction(const struct FLinearColor& Color);
	void SetEmission(const struct FLinearColor& Color);
	void SetColor(const struct FLinearColor& Color, float Intensity, float raleigh, class USkyAtmosphereComponent* AtmosphereComponent);
	bool IsHDRActive();
};

// Class GTABase.GTAWater
// 0x02D0 (FullSize[0x0570] - InheritedSize[0x02A0])
class AGTAWater : public AGTAActor
{
public:
	class UProceduralMeshComponent*                    DistantWater;                                              // 0x02A0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProceduralMeshComponent*                    CloseWater;                                                // 0x02A8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProceduralMeshComponent*                    BoatWake;                                                  // 0x02B0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProceduralMeshComponent*                    SeaBed;                                                    // 0x02B8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProceduralMeshComponent*                    WaterCannon;                                               // 0x02C0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProceduralMeshComponent*                    BulletTrace;                                               // 0x02C8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceConstant*                   WaterMI;                                                   // 0x02D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceConstant*                   BoatWakeMI;                                                // 0x02D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceConstant*                   SeaBedMI;                                                  // 0x02E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceConstant*                   WaterCannonMI;                                             // 0x02E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceConstant*                   BulletTraceMI;                                             // 0x02F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialParameterCollection*                GlobalParamInstance;                                       // 0x02F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector4                                    WaterEdgeExtent;                                           // 0x0300(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WaterEdgeZ;                                                // 0x0310(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RippleGrowSpeed;                                           // 0x0314(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DRVB[0x258];                                   // 0x0318(0x0258) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAWater");
		return ptr;
	}



	class AGTAWater* STATIC_GetGTAWaterActor();
};

// Class GTABase.GTAWeapon
// 0x0010 (FullSize[0x02B0] - InheritedSize[0x02A0])
class AGTAWeapon : public AGTAActor
{
public:
	class UStaticMeshComponent*                        WeaponMesh;                                                // 0x02A0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    FlashMat;                                                  // 0x02A8(0x0008) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAWeapon");
		return ptr;
	}



	void StopSpin();
	void SetFlashAmount(float amt);
	void SetEffect(int effectNo, float amt);
	void SetBarrelRotation(float amt);
	int GetFlashMaterialIndex();
	bool AttachWeaponEffect(class UParticleSystemComponent* fxComp);
	void AddSpin(class AGTAWeapon* srcWeapon);
};

// Class GTABase.GTAWindowLights
// 0x00C0 (FullSize[0x0360] - InheritedSize[0x02A0])
class AGTAWindowLights : public AGTAActor
{
public:
	TArray<struct FLinearColor>                        ChannelLightStrengths;                                     // 0x02A0(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FWindowLightCollection>              BuiltWindows;                                              // 0x02B0(0x0010) (Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	struct FBox                                        Bounds;                                                    // 0x02C0(0x001C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WVQZ[0x4];                                     // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ULightComponent*>                     LightComponents;                                           // 0x02E0(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_A5TZ[0x70];                                    // 0x02F0(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAWindowLights");
		return ptr;
	}



	bool STATIC_MICHasBoolParameterSet(class UMaterialInstanceConstant* MIC, const struct FName& ParameterName);
	bool IsEmissiveWindowMaterial(class UMaterialInterface* Mat, class UGTAMaterialData* UserData, struct FWindowLightCollectionParameters* Params);
	struct FVector GetChannelMultipliers();
	struct FLinearColor STATIC_GetAverageTextureColor(class UTexture* forTexture);
	class ULightComponent* ConstructLight(int detailSetting, const struct FTransform& Trx, const struct FLinearColor& lightColor, float Width, float Height);
	void Build();
};

// Class GTABase.GTAWorldComposition
// 0x0240 (FullSize[0x0270] - InheritedSize[0x0030])
class UGTAWorldComposition : public UDataAsset
{
public:
	unsigned char                                      UnknownData_HGFN[0xB0];                                    // 0x0030(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint64_t                                           TextureFlushNextFrame;                                     // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FGTAMapSection>                      Sections;                                                  // 0x00E8(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FGTAInteriorArea>                    Interiors;                                                 // 0x00F8(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FName>                               ExteriorMaps;                                              // 0x0108(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FName>                               GrungeMaps;                                                // 0x0118(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                              QuadrantDistance;                                          // 0x0128(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MapProxyDistance;                                          // 0x012C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SubMapDistance;                                            // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EmergencySubMapDistance;                                   // 0x0134(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EmergencyLoadMS_Min;                                       // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EmergencyLoadMS_Max;                                       // 0x013C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CurrentEmergencyLoadMS;                                    // 0x0140(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              UnloadSubMapDistance;                                      // 0x0144(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MobileReduction_Sections;                                  // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MobileReduction_Quadrants;                                 // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MobileReduction_Maps;                                      // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_J72Q[0x4];                                     // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceConstant*                   HiddenDistanceHLODMIC;                                     // 0x0158(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Velocity_SampleInterval;                                   // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Velocity_MinBoundsScale;                                   // 0x0164(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Velocity_Max;                                              // 0x0168(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Velocity_MinSimSpeed;                                      // 0x016C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_B6TX[0x70];                                    // 0x0170(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      RequestedMaps[0x50];                                       // 0x0170(0x0050) UNKNOWN PROPERTY: SetProperty
	class AGTAWorldSettings*                           parentSettings;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                lastArea;                                                  // 0x0238(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Y5OO[0x24];                                    // 0x023C(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceConstant*                   FarCoronaMIC;                                              // 0x0260(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHidden;                                                   // 0x0268(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CPDM[0x7];                                     // 0x0269(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAWorldComposition");
		return ptr;
	}



	void ProcessedStreamRequest(const struct FGTAStreamRequest& request);
	void LoadAllHLODMaps();
	void GenerateQuadrantHLODs();
	void GenerateDistantSectionHLODs();
	void GenerateAllWorldComp();
	void GenerateAllStreetLights();
	void GenerateAllProxyLighting();
	void GenerateAllMeshProxies();
	void GenerateAllHeadlightRibbons();
	void BuildAllMapData();
};

// Class GTABase.GTAWorldBoundsExtender
// 0x0008 (FullSize[0x02A8] - InheritedSize[0x02A0])
class AGTAWorldBoundsExtender : public AGTAActor
{
public:
	class UBoxComponent*                               Box;                                                       // 0x02A0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAWorldBoundsExtender");
		return ptr;
	}



};

// Class GTABase.GTAWorldSettings
// 0x0120 (FullSize[0x04C0] - InheritedSize[0x03A0])
class AGTAWorldSettings : public AWorldSettings
{
public:
	unsigned char                                      UnknownData_6FLO[0x10];                                    // 0x03A0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGTACoronaComponent*                         StaticCoronaComponent;                                     // 0x03B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGTACoronaComponent*                         DynamicCoronaComponent;                                    // 0x03B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGTACoronaComponent*                         UpcloseCoronaComponent;                                    // 0x03C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SubwayActors[0x50];                                        // 0x03C8(0x0050) UNKNOWN PROPERTY: SetProperty
	bool                                               bCulledSubwayActors;                                       // 0x0418(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZNPU[0x3];                                     // 0x0419(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StreetLight_OffTime;                                       // 0x041C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StreetLight_OnTime;                                        // 0x0420(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SkyOcclusionZ;                                             // 0x0424(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      GameInterfaceClass;                                        // 0x0428(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGTAWorldComposition*                        WorldComposition;                                          // 0x0430(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGTAVehicleColorDB*                          VehicleColorDB;                                            // 0x0438(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GTABase_EGTAPlatforms>                 EmulatePlatform;                                           // 0x0440(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C23I[0x7];                                     // 0x0441(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGTAMainMenuUITemplate*                      MainMenuUITemplate;                                        // 0x0448(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      MainMenuClass;                                             // 0x0450(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGTAMainMenuUITemplate*                      PauseMenuUITemplate;                                       // 0x0458(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PauseMenuClass;                                            // 0x0460(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SaveMenuClass;                                             // 0x0468(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          GenericCoronaMIC;                                          // 0x0470(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          UpCloseCoronaMIC;                                          // 0x0478(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                DynamicColorBoost;                                         // 0x0480(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ParticleEmissiveScale;                                     // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BXUU[0x4];                                     // 0x0494(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AGTADecalHelper*                             DecalHelper;                                               // 0x0498(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      HUDDrawerClass;                                            // 0x04A0(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PriorityHUDDrawerClass;                                    // 0x04A8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseHudDrawer;                                             // 0x04B0(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9QPY[0x3];                                     // 0x04B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TextureRebiasPercentage;                                   // 0x04B4(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NETR[0x8];                                     // 0x04B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAWorldSettings");
		return ptr;
	}



	void WorstTextureUsage();
	void WorstMapData();
	void VertexColorSize();
	void ToggleOnlyCastFarShadows();
	void ResetLODs();
	void OscillateLODs();
	void HighVertCounts();
	class UGTACoronaComponent* GetCoronaComponent(bool bDynamic, bool bUpClose);
	void FixLODs();
	void FindDefaultMat();
	void CycleFarShadowModes();
};

// Class GTABase.IMGFile
// 0x00C8 (FullSize[0x00F8] - InheritedSize[0x0030])
class UIMGFile : public UDataAsset
{
public:
	TArray<struct FIMGFileEntry>                       allEntries;                                                // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                numFiles;                                                  // 0x0040(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                totalSize;                                                 // 0x0044(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     srcFilename;                                               // 0x0048(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K5JP[0x50];                                    // 0x0058(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      CollisionImportHashTable[0x50];                            // 0x0058(0x0050) UNKNOWN PROPERTY: MapProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.IMGFile");
		return ptr;
	}



};

// Class GTABase.GTAHaptics
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGTAHaptics : public UDataAsset
{
public:
	TArray<struct FGTAForceFeedback>                   ForceFeedbackTable;                                        // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAHaptics");
		return ptr;
	}



};

// Class GTABase.GTAHUD
// 0x0008 (FullSize[0x0318] - InheritedSize[0x0310])
class AGTAHUD : public AHUD
{
public:
	class UFont*                                       Font;                                                      // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAHUD");
		return ptr;
	}



	void STATIC_PrintString(float X, float Y, const struct FVector2D& Scale, const struct FString& pCharacters, const struct FColor& Color, class UFont* InFont, TEnumAsByte<GTABase_EHUDTextJustify> justify, bool inShadow);
};

// Class GTABase.GTAPathfindVisualization
// 0x0148 (FullSize[0x0368] - InheritedSize[0x0220])
class AGTAPathfindVisualization : public AActor
{
public:
	class UPathRegion*                                 LoadedRegion;                                              // 0x0220(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UPathRegion*>                         LoadedAdjacentRegions;                                     // 0x0228(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class UGTAPathfindNodes*                           NodeContainer;                                             // 0x0238(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCustomInstancedMesh*                        InstancedNodes;                                            // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGTAWorldComposition*                        AssociatedComposition;                                     // 0x0248(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                SelectedInstance;                                          // 0x0250(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_G9MN[0x4];                                     // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UProceduralMeshComponent*                    MeshGenVizComponent;                                       // 0x0258(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                          MeshGenVizMI;                                              // 0x0260(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bOnlyDrawFloodFill;                                        // 0x0268(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bGenerateDataAfterFill;                                    // 0x0269(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bAppendIfExists;                                           // 0x026A(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QFQZ[0x5];                                     // 0x026B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      GeneratedPathData[0x28];                                   // 0x026B(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	float                                              LaneWidth;                                                 // 0x0298(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32_t                                           FloodFillNodeLimit;                                        // 0x029C(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FFloodTweak>                         FloodNodeTweaks;                                           // 0x02A0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FNodeAddr>                           IgnoreTheseNodes;                                          // 0x02B0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UMaterialInterface*>                  FloodFillMats;                                             // 0x02C0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	int                                                SelectNodeToSnapTo;                                        // 0x02D0(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              RenderDistance;                                            // 0x02D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                                NodeColor;                                                 // 0x02D8(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGTASelectedNode                            ActiveNode;                                                // 0x02E8(0x0080) (Edit, Transient, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAPathfindVisualization");
		return ptr;
	}



	void SnapToNodeIndex();
	void SetReversePoint();
	void SetDebugPoint();
	void RunMeshGenVisualization();
	void DoFloodFill();
};

// Class GTABase.PathsIplContainer
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UPathsIplContainer : public UDataAsset
{
public:
	bool                                               bReloadFromIpl;                                            // 0x0030(0x0001) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAssignRadarGroupType;                                     // 0x0031(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDeleteLastGroup;                                          // 0x0032(0x0001) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFixOldIndex;                                              // 0x0033(0x0001) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReimportSafely;                                           // 0x0034(0x0001) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZX3Q[0x23];                                    // 0x0035(0x0023) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.PathsIplContainer");
		return ptr;
	}



};

// Class GTABase.GTAPathfindVizRaw
// 0x0038 (FullSize[0x0258] - InheritedSize[0x0220])
class AGTAPathfindVizRaw : public AActor
{
public:
	class UCustomInstancedMesh*                        InstancedNodes;                                            // 0x0220(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRawNodesContainer                          Nodes;                                                     // 0x0228(0x0010) (Transient, NativeAccessSpecifierPublic)
	float                                              RenderDistance;                                            // 0x0238(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRawSelectedNode                            SelectedNode;                                              // 0x023C(0x000C) (Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     NodesOffset;                                               // 0x0248(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GTABase_EGTAVizGame>                   VizGame;                                                   // 0x0254(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HWNY[0x3];                                     // 0x0255(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAPathfindVizRaw");
		return ptr;
	}



};

// Class GTABase.FloodPath
// 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
class UFloodPath : public UDataAsset
{
public:
	TArray<struct FConstructPath>                      ConstructPaths;                                            // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      AssociatedMeshes[0x50];                                    // 0x0040(0x0050) UNKNOWN PROPERTY: SetProperty
	TArray<struct FVector>                             ForceReversePoints;                                        // 0x0090(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              ColinearOptimizeCosine;                                    // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ColinearOptimizeMaxDiffDist;                               // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.FloodPath");
		return ptr;
	}



	void RebuildPathUVs();
	void OptimizePaths();
	void CheckDebugPoint();
};

// Class GTABase.GTAPlayerActor
// 0x0038 (FullSize[0x0358] - InheritedSize[0x0320])
class AGTAPlayerActor : public AGTASKActor
{
public:
	bool                                               bUseBoneTweaks;                                            // 0x0320(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3AYP[0x7];                                     // 0x0321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  CurrentTorsoMask;                                          // 0x0328(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              fatness;                                                   // 0x0330(0x0004) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              muscle;                                                    // 0x0334(0x0004) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FBoneHackTweak>                      HoldPhoneTweaks;                                           // 0x0338(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneHackTweak>                      CrouchTweaks;                                              // 0x0348(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAPlayerActor");
		return ptr;
	}



	bool UseBoneTweaks();
	void SetupPlayerMorph(class UGTAPoseableComponent* forComp, float withFatness, float withRippedness);
	class USkeletalMesh* GetSkeletalMesh();
	class UGTAPoseableComponent* GetMeshForAttachment();
	class UGTAClothingTable* GetClothingTable();
	class USkinnedMeshComponent* GetBodyPart(int Index);
};

// Class GTABase.GTACheatManager
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UGTACheatManager : public UCheatManager
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTACheatManager");
		return ptr;
	}



};

// Class GTABase.GTAPlayerController
// 0x0028 (FullSize[0x0598] - InheritedSize[0x0570])
class AGTAPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData_2IOL[0x20];                                    // 0x0570(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACameraActor*                                CutsceneCamera;                                            // 0x0590(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAPlayerController");
		return ptr;
	}



	void ClearUserFocus();
};

// Class GTABase.GTAPoseableComponent
// 0x00F9 (FullSize[0x08F8] - InheritedSize[0x07FF])
class UGTAPoseableComponent : public UPoseableMeshComponent
{
public:
	unsigned char                                      bDisableClothSimulation : 1;                               // 0x07FF(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_66KT : 1;                                      // 0x07FF(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bLocalSpaceSimulation : 1;                                 // 0x07FF(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bResetAfterTeleport : 1;                                   // 0x07FF(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B9RQ : 2;                                      // 0x07FF(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bWaitForParallelClothTask : 1;                             // 0x07FF(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9426[0x38];                                    // 0x0800(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TeleportDistanceThreshold;                                 // 0x0838(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TeleportRotationThreshold;                                 // 0x083C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_15M7[0xB8];                                    // 0x0840(0x00B8) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAPoseableComponent");
		return ptr;
	}



	void UnbindClothFromMasterPoseComponent(bool bRestoreSimulationSpace);
	void SuspendClothingSimulation();
	void SetMorphTargetWeight(const struct FName& forMorph, float Weight);
	void ResumeClothingSimulation();
	void ResetClothTeleportMode();
	bool IsClothingSimulationSuspended();
	class UClothingSimulationInteractor* GetClothingSimulationInteractor();
	void ForceClothNextUpdateTeleportAndReset();
	void ForceClothNextUpdateTeleport();
	void BindClothToMasterPoseComponent();
};

// Class GTABase.GTAPoseableMeshComponent_BlendTarget
// 0x0028 (FullSize[0x0920] - InheritedSize[0x08F8])
class UGTAPoseableMeshComponent_BlendTarget : public UGTAPoseableComponent
{
public:
	TArray<struct FName>                               DontLerpTheseBones;                                        // 0x08F8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<bool>                                       LerpList;                                                  // 0x0908(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IBVT[0x8];                                     // 0x0918(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAPoseableMeshComponent_BlendTarget");
		return ptr;
	}



};

// Class GTABase.GTABlendableSKActor
// 0x0008 (FullSize[0x0328] - InheritedSize[0x0320])
class AGTABlendableSKActor : public AGTASKActor
{
public:
	class UGTAPoseableMeshComponent_BlendTarget*       ActiveBlendComponent;                                      // 0x0320(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTABlendableSKActor");
		return ptr;
	}



};

// Class GTABase.GTAPostLightReplacer
// 0x0038 (FullSize[0x0258] - InheritedSize[0x0220])
class AGTAPostLightReplacer : public AActor
{
public:
	class USphereComponent*                            Sphere;                                                    // 0x0220(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AGTARectLight*>                       EffectedLights;                                            // 0x0228(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                          PostProcessMaterial;                                       // 0x0238(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              TransitionRadius;                                          // 0x0240(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              CurrentPostAmount;                                         // 0x0244(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<float>                                      BaseLightIntensities;                                      // 0x0248(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAPostLightReplacer");
		return ptr;
	}



	void PreviewInEditor();
};

// Class GTABase.GTAPostProcessVolume
// 0x00D0 (FullSize[0x0890] - InheritedSize[0x07C0])
class AGTAPostProcessVolume : public APostProcessVolume
{
public:
	unsigned char                                      UnknownData_I4K8[0x48];                                    // 0x07C0(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          DarknessMaterial;                                          // 0x0808(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          InfraredMaterial;                                          // 0x0810(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          NightVisionMaterial;                                       // 0x0818(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ThermalPedMaterialColor;                                   // 0x0820(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ThermalVehicleMaterialColor;                               // 0x0830(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HDR_TweakSaturation;                                       // 0x0840(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HDR_TweakGain;                                             // 0x0844(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HDR_TweakContrast;                                         // 0x0848(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HDR_TweakGamma;                                            // 0x084C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsInteriorPostProcess;                                    // 0x0850(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_894Y[0x3];                                     // 0x0851(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LastBrightnessMod;                                         // 0x0854(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastContrastMod;                                           // 0x0858(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastSaturationMod;                                         // 0x085C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    LastColorMod;                                              // 0x0860(0x0010) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    VerticalBlurMat;                                           // 0x0870(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    HorizontalBlurMat;                                         // 0x0878(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7VT4[0x10];                                    // 0x0880(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAPostProcessVolume");
		return ptr;
	}



	void UpdateColorOptions();
	void SetCameraParameters(const struct FLinearColor& withValue);
	void SetAutoExposure(float withValue);
};

// Class GTABase.GTARadar
// 0x03E0 (FullSize[0x0680] - InheritedSize[0x02A0])
class AGTARadar : public AGTAActor
{
public:
	float                                              ZoomFactor;                                                // 0x02A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Sprite3DScale;                                             // 0x02A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SpriteMapScale;                                            // 0x02A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              InGamePitch;                                               // 0x02AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FinalPitchOffset;                                          // 0x02B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SpriteBias;                                                // 0x02B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              StartingSpriteZDelta;                                      // 0x02B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SpriteZDelta;                                              // 0x02BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              GangBias;                                                  // 0x02C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ZoneBias;                                                  // 0x02C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PathBias;                                                  // 0x02C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PathWidth;                                                 // 0x02CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PauseMapPathWidthMult;                                     // 0x02D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxPathWidth;                                              // 0x02D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              StartingMenuZoom;                                          // 0x02D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MapScaleFactor;                                            // 0x02DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                                     EdgeSpriteOffsets;                                         // 0x02E0(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FGTARadarSprite>                     SpriteLibrary;                                             // 0x02F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UProceduralMeshComponent*                    SpritesComponent;                                          // 0x0300(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProceduralMeshComponent*                    GangComponent;                                             // 0x0308(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProceduralMeshComponent*                    ZoneComponent;                                             // 0x0310(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProceduralMeshComponent*                    PathComponent;                                             // 0x0318(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProceduralMeshComponent*                    FlyingComponent;                                           // 0x0320(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGTASceneCaptureComponent2D*                 CameraComponent;                                           // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextureRenderTarget2D*                      RenderTarget;                                              // 0x0330(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextureRenderTarget2D*                      MapRenderTarget;                                           // 0x0338(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     MinWorldPosition;                                          // 0x0340(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     MaxWorldPosition;                                          // 0x034C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceConstant*                   SpriteMI;                                                  // 0x0358(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceConstant*                   GangMI;                                                    // 0x0360(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMaterialInstanceConstant*>           ColorBlindGangMaterials;                                   // 0x0368(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UMaterialInstanceConstant*>           ColorBlindGangMaterialsGame;                               // 0x0378(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UTexture2D*>                          ColorBlindGangTextures;                                    // 0x0388(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UMaterialInstanceConstant*                   PathMI;                                                    // 0x0398(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceConstant*                   ColorBlindPathMI;                                          // 0x03A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceConstant*                   RadarCircleMI;                                             // 0x03A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceConstant*                   FlyingMI;                                                  // 0x03B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceConstant*                   ZonesMI;                                                   // 0x03B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    ZoneDynMat;                                                // 0x03C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  ZoneProceduralTex;                                         // 0x03C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QUI7[0x10];                                    // 0x03D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FRadarEdgeSprite>                    EdgeSprites;                                               // 0x03E0(0x0010) (BlueprintVisible, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_U7UK[0x1E0];                                   // 0x03F0(0x01E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInstanceDynamic*>            MIDs;                                                      // 0x05D0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OYIC[0x44];                                    // 0x05E0(0x0044) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxAnimatingIconSize;                                      // 0x0624(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CurrentForcePulseIconScale;                                // 0x0628(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PulseAnimPeriod;                                           // 0x062C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CurrentHeartBeatIconScale;                                 // 0x0630(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CurrentHeartBeatTime;                                      // 0x0634(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HeartBeatAnimDelayTime;                                    // 0x0638(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HeartBeatAnimGrowTime;                                     // 0x063C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HeartBeatAnimShrinkTime;                                   // 0x0640(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxMapZoom;                                                // 0x0644(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinMapZoom;                                                // 0x0648(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IQTQ[0x4];                                     // 0x064C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector4                                    ZoomedInPositionBounds;                                    // 0x0650(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector4                                    ZoomedOutPositionBounds;                                   // 0x0660(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              AutoRemoveWaypointDist;                                    // 0x0670(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlipMagnetWaypointDist;                                    // 0x0674(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G5TN[0x8];                                     // 0x0678(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTARadar");
		return ptr;
	}



	void SwitchedMode(bool bMenuMode);
	void SetupMenu(const struct FVector& position, const struct FVector& playerDirection, float zoomAmt);
	bool IsActive();
	void GetReferencePoints(struct FVector* MinRef, struct FVector* MaxRef);
	TEnumAsByte<GTABase_ERadarState> GetRadarState();
	struct FVector4 GetMapZoomedOutPositionBounds();
	struct FVector4 GetMapZoomedInPositionBounds();
	void GetMapZoomBounds(float* MinZoom, float* MaxZoom);
	void GetMapPositionBoundsWithZoom(float CurrentZoom, struct FVector4* Bounds);
	class AGTARadar* STATIC_GetGTARadarActor();
	void FetchRadarComponents(TArray<class UPrimitiveComponent*>* Components);
	struct FVector ConvertToWorldSpace(const struct FVector& RadarPos);
	struct FVector ConvertToRadarSpace(const struct FVector& WorldPos);
};

// Class GTABase.UI_Radar
// 0x0018 (FullSize[0x02A8] - InheritedSize[0x0290])
class UUI_Radar : public UUI_DesignTimeUserWidget
{
public:
	class UTextureRenderTarget2D*                      RenderTarget;                                              // 0x0290(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextureRenderTarget2D*                      MapRenderTarget;                                           // 0x0298(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KKG2[0x8];                                     // 0x02A0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.UI_Radar");
		return ptr;
	}



	void SetUVs(const struct FBox2D& newUVs);
	void SetupMap(struct FVector* InitialPosition, float* InitialZoom);
	void ResizeMap();
	struct FVector2D RenderMap(const struct FVector& position, float zoomAmt);
	struct FVector GetWorldPosition(const struct FVector2D& MousePosition);
	struct FBox2D GetCurrentUVs();
	void DoMapJump(const struct FVector2D& MousePosition);
	void CloseMap();
	void AddCustomWaypoint(const struct FVector2D& MousePosition);
};

// Class GTABase.GTARadioStream
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UGTARadioStream : public UDataAsset
{
public:
	TArray<struct FGTARadioStation>                    RadioStations;                                             // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TEnumAsByte<GTABase_EGTARadioGame>                 ImgGame;                                                   // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_60HK[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTARadioStream");
		return ptr;
	}



};

// Class GTABase.GTASoundWaveProcedural
// 0x0010 (FullSize[0x03D0] - InheritedSize[0x03C0])
class UGTASoundWaveProcedural : public USoundWaveProcedural
{
public:
	unsigned char                                      UnknownData_TTFL[0x10];                                    // 0x03C0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTASoundWaveProcedural");
		return ptr;
	}



};

// Class GTABase.SoundNodeProceduralWavePlayer
// 0x02A8 (FullSize[0x02F0] - InheritedSize[0x0048])
class USoundNodeProceduralWavePlayer : public USoundNodeAssetReferencer
{
public:
	unsigned char                                      UnknownData_C5JQ[0x18];                                    // 0x0048(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCachedSoundWaveAsset>               SoundWaveAssets;                                           // 0x0060(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class USoundWaveProcedural*                        SoundWave;                                                 // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FProcQueuedPayload>                  QueuedSoundWaves;                                          // 0x0078(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZOAV[0x34];                                    // 0x0088(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bContinuouslyLoop;                                         // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AZHI[0x1E3];                                   // 0x00BD(0x01E3) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              VolumeScale;                                               // 0x02A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Z1DO[0x4];                                     // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bExistsInSoundBank;                                        // 0x02A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bRecomputeData;                                            // 0x02A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_65W0[0x46];                                    // 0x02AA(0x0046) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.SoundNodeProceduralWavePlayer");
		return ptr;
	}



	void StreamingAssetsLoadedCallback();
	void PreloadedAssetsLoadedCallback();
};

// Class GTABase.GTARoadSign
// 0x0030 (FullSize[0x0250] - InheritedSize[0x0220])
class AGTARoadSign : public AActor
{
public:
	class UProceduralMeshComponent*                    TextComponent;                                             // 0x0220(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SignText;                                                  // 0x0228(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PaletteNum;                                                // 0x0238(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   SignScale;                                                 // 0x023C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCenterAllLines;                                           // 0x0244(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9M6B[0x3];                                     // 0x0245(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LineScaling;                                               // 0x0248(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PM1T[0x4];                                     // 0x024C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTARoadSign");
		return ptr;
	}



};

// Class GTABase.GTARopes
// 0x0030 (FullSize[0x02D0] - InheritedSize[0x02A0])
class AGTARopes : public AGTAActor
{
public:
	class UProceduralMeshComponent*                    RopeComponent;                                             // 0x02A0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceConstant*                   RopeMI;                                                    // 0x02A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              RopeRadius;                                                // 0x02B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                NumFacesPerCylinder;                                       // 0x02B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OF24[0x18];                                    // 0x02B8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTARopes");
		return ptr;
	}



};

// Class GTABase.GTAScalability
// 0x0120 (FullSize[0x03C0] - InheritedSize[0x02A0])
class AGTAScalability : public AGTAActor
{
public:
	TArray<class UClass*>                              TreeBPClasses;                                             // 0x02A0(0x0010) (Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	float                                              MinScreenResolution;                                       // 0x02B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MaxScreenResolution;                                       // 0x02B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              DynamicResolutionThreshold;                                // 0x02B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                TexturePoolSize;                                           // 0x02BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<float>                                      ValidScreenResolutions;                                    // 0x02C0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FVector4                                    TweakPostSettings;                                         // 0x02D0(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FString>                             CVarsToResetOnStop;                                        // 0x02E0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7G00[0x10];                                    // 0x02F0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGTAVisualsSetting>                  Visuals;                                                   // 0x0300(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FGTASimulationScaleSetting>          SimScales;                                                 // 0x0310(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FGTAShadowSetting>                   Shadows;                                                   // 0x0320(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FGTACVarListSetting>                 AntiAlias;                                                 // 0x0330(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FGTACVarListSetting>                 RTX;                                                       // 0x0340(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FGTACVarListSetting>                 DLSS;                                                      // 0x0350(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FGTAHeadlightSetting>                headlights;                                                // 0x0360(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FGTAHeadlightSetting>                Headlights_PlayerOccupied;                                 // 0x0370(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FGTAStreetlightSetting>              Streetlights;                                              // 0x0380(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class ADirectionalLight*                           SunLight;                                                  // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ADirectionalLight*                           MoonLight;                                                 // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASkyLight*                                   SkyLight;                                                  // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtraPedDensityMult;                                       // 0x03A8(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtraPedDistanceMult;                                      // 0x03AC(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtraCarDensityMult;                                       // 0x03B0(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtraCarDistanceMult;                                      // 0x03B4(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MNU0[0x8];                                     // 0x03B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAScalability");
		return ptr;
	}



};

// Class GTABase.GTAScalableRichTextBlock
// 0x0020 (FullSize[0x0698] - InheritedSize[0x0678])
class UGTAScalableRichTextBlock : public URichTextBlock
{
public:
	unsigned char                                      UnknownData_9IAM[0x10];                                    // 0x0678(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LineHeightPercentageOverride;                              // 0x0688(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LineHeightPercentageOverrideForLargeFonts;                 // 0x068C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               UseSubtitleSize;                                           // 0x0690(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WQH5[0x3];                                     // 0x0691(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ExtraSizeScale;                                            // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAScalableRichTextBlock");
		return ptr;
	}



	void ForceRefreshProperties();
};

// Class GTABase.GTASceneCaptureComponent2D
// 0x0008 (FullSize[0x08C0] - InheritedSize[0x08B8])
class UGTASceneCaptureComponent2D : public USceneCaptureComponent2D
{
public:
	class AActor*                                      ViewOwner;                                                 // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTASceneCaptureComponent2D");
		return ptr;
	}



};

// Class GTABase.GTASceneCaptureComponentCube
// 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
class UGTASceneCaptureComponentCube : public USceneCaptureComponentCube
{
public:
	class AActor*                                      ViewOwner;                                                 // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTASceneCaptureComponentCube");
		return ptr;
	}



};

// Class GTABase.GTARTCaptureBase
// 0x0090 (FullSize[0x0330] - InheritedSize[0x02A0])
class AGTARTCaptureBase : public AGTAActor
{
public:
	unsigned char                                      UnknownData_6M9X[0x50];                                    // 0x02A0(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UProceduralMeshComponent*                    CoronaComponent;                                           // 0x02F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceConstant*                   CoronaMI;                                                  // 0x02F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5U5Q[0x30];                                    // 0x0300(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTARTCaptureBase");
		return ptr;
	}



	void STATIC_UnregisterCoronaByID(int ID);
	int STATIC_RegisterCoronaWithParams(const struct FVector& position, const struct FLinearColor& withColor, float WithSize, float WithBrightness);
	int STATIC_RegisterCoronaUsingLight(class ULightComponent* ForLight, float WithSize);
};

// Class GTABase.GTARTCapture
// 0x0020 (FullSize[0x0350] - InheritedSize[0x0330])
class AGTARTCapture : public AGTARTCaptureBase
{
public:
	bool                                               bIsLowProxyRender;                                         // 0x0330(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YUV4[0x7];                                     // 0x0331(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UStaticMeshComponent*>                ProxyComponents;                                           // 0x0338(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UGTASceneCaptureComponent2D*                 PlanarCameraComponent;                                     // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTARTCapture");
		return ptr;
	}



};

// Class GTABase.GTAIFPFileContainer
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UGTAIFPFileContainer : public UDataAsset
{
public:
	TMap<struct FString, struct FGTAIFPFile>           AnimationFiles;                                            // 0x0030(0x0050) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAIFPFileContainer");
		return ptr;
	}



};

// Class GTABase.GTAJetpack
// 0x0010 (FullSize[0x02B0] - InheritedSize[0x02A0])
class AGTAJetpack : public AGTAActor
{
public:
	class UPoseableMeshComponent*                      Mesh;                                                      // 0x02A0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OO5J[0x8];                                     // 0x02A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAJetpack");
		return ptr;
	}



	void UpdateThrust(float newThrustLeft, float newThrustRight);
};

// Class GTABase.GTALevelScriptActor
// 0x0000 (FullSize[0x0228] - InheritedSize[0x0228])
class AGTALevelScriptActor : public ALevelScriptActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTALevelScriptActor");
		return ptr;
	}



	void SetWeatherImpactEffects(float RoadWetness, float WaveAmount);
	void SetWeatherEffects(float CloudCoverage, float RainAmount, float SandstormAmount, float Wind, const struct FVector& WindDir, float ExtraSunny);
	void SetWeather(TEnumAsByte<GTABase_EGTAWeather> weather1, TEnumAsByte<GTABase_EGTAWeather> weather2, TEnumAsByte<GTABase_EGTAWeatherRegion> region1, TEnumAsByte<GTABase_EGTAWeatherRegion> region2, float interp);
	void SetupScalability(class AGTAScalability* ToSetup);
	void SetTimeOfDay(float Hours);
	void SetStreetlightAmount(float LightAmount, float LightDistance, float DecalFadeDistance);
	void SetSkyColors(const struct FColor& skyBottom, const struct FColor& skyTop);
	void SetLocationEffects(float UnderwaterAmt, float TunnelAmt);
	void SetLightColors(const struct FColor& ambient, const struct FColor& directional);
	void SetEnvironmentEffects(float Foggyness, float HeatHaze, float LightningFlash, float Riot);
	void SetCCTV(int Type);
	void SetAdrenaline(float Amount);
};

// Class GTABase.GTALightBase
// 0x0038 (FullSize[0x02D8] - InheritedSize[0x02A0])
class AGTALightBase : public AGTAActor
{
public:
	unsigned char                                      bCurrentLightState : 1;                                    // 0x02A0(0x0001) BIT_FIELD (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsExteriorLight : 1;                                      // 0x02A0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsInteriorRegistered : 1;                                 // 0x02A0(0x0001) BIT_FIELD (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRegisterCorona : 1;                                       // 0x02A0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bInsertCoronaIntoProxies : 1;                              // 0x02A0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GTABase_EGTAMiscLightType>             LightSetting;                                              // 0x02A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EELQ[0x6];                                     // 0x02A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AIPLMapActor*                                ChangeActorReference;                                      // 0x02A8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceConstant*                   ChangeActorEmissiveMaterial;                               // 0x02B0(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGTALightTriggerVolume*                      TriggerVolume;                                             // 0x02B8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ProximityRadius;                                           // 0x02C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CoronaIntensity;                                           // 0x02C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CoronaSize;                                                // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SL09[0xC];                                     // 0x02CC(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTALightBase");
		return ptr;
	}



	void SetFarCorona(float WithIntensity, float WithSize);
	void STATIC_SetDecalComponentSize(class UDecalComponent* Decal, const struct FVector& newSize);
	float GetProximityCooldownTime();
	struct FVector GetCoronaPosition();
	struct FColor GetCoronaColor();
	void ChangedLightSwitch(bool bOn, bool bIsEditor);
};

// Class GTABase.GTASpotLight
// 0x0008 (FullSize[0x02E0] - InheritedSize[0x02D8])
class AGTASpotLight : public AGTALightBase
{
public:
	class USpotLightComponent*                         SpotLightComponent;                                        // 0x02D8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTASpotLight");
		return ptr;
	}



};

// Class GTABase.GTAPointLight
// 0x0008 (FullSize[0x02E0] - InheritedSize[0x02D8])
class AGTAPointLight : public AGTALightBase
{
public:
	class UPointLightComponent*                        PointLightComponent;                                       // 0x02D8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAPointLight");
		return ptr;
	}



};

// Class GTABase.GTARectLight
// 0x0010 (FullSize[0x02E8] - InheritedSize[0x02D8])
class AGTARectLight : public AGTALightBase
{
public:
	float                                              BackscatterInUplightingStrength;                           // 0x02D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QW0C[0x4];                                     // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class URectLightComponent*                         RectLightComponent;                                        // 0x02E0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTARectLight");
		return ptr;
	}



};

// Class GTABase.GTAHeightFog
// 0x0010 (FullSize[0x02B0] - InheritedSize[0x02A0])
class AGTAHeightFog : public AGTAActor
{
public:
	class UExponentialHeightFogComponent*              HeightFogComponent;                                        // 0x02A0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGTATimeOfDay*                               TimeOfDayActor;                                            // 0x02A8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAHeightFog");
		return ptr;
	}



	void UpdateColors();
};

// Class GTABase.GTAWindowLight
// 0x0010 (FullSize[0x02E8] - InheritedSize[0x02D8])
class AGTAWindowLight : public AGTALightBase
{
public:
	class USpotLightComponent*                         WindowSpotLight;                                           // 0x02D8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDecalComponent*                             EmissiveHighlightDecal;                                    // 0x02E0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAWindowLight");
		return ptr;
	}



	void SetupLights(float TimeOfDay);
	float GetAttenuationMult();
};

// Class GTABase.GTALightTriggerVolume
// 0x0030 (FullSize[0x0288] - InheritedSize[0x0258])
class AGTALightTriggerVolume : public AVolume
{
public:
	TArray<class AGTALightBase*>                       ConnectedLights;                                           // 0x0258(0x0010) (Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	float                                              OverrideSkyOcclusion;                                      // 0x0268(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              OverrideSkyOcclusion_Distance;                             // 0x026C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              OverrideSkyOcclusion_StartFromTop;                         // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CT6C[0x14];                                    // 0x0274(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTALightTriggerVolume");
		return ptr;
	}



};

// Class GTABase.GTAMarkerActor
// 0x0008 (FullSize[0x02A8] - InheritedSize[0x02A0])
class AGTAMarkerActor : public AGTAActor
{
public:
	TEnumAsByte<GTABase_ECheckpointType>               CheckpointType;                                            // 0x02A0(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bInitialized;                                              // 0x02A1(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DO01[0x6];                                     // 0x02A2(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAMarkerActor");
		return ptr;
	}



	void StartDissolve(bool bPickedUp);
	void SetPickupLight(bool bOn);
	void SetPickupFlags(bool IsWeapon, bool IsOutOfStock, bool IsPurchase, bool ShowMoney);
	void SetPickupColor(const struct FColor& Color);
	void SetMarkerOutline(const struct FColor& withColor);
	void SetMarkerMesh(class UStaticMesh* withMesh);
	void SetMarkerColor(const struct FColor& withColor);
	void SetMarkerCameraGlow(bool bShouldGlow, bool bIsMainHidden);
	void SetGroundLocation(const struct FVector& withLocation);
	void SetCheckpointType(int Cpt);
};

// Class GTABase.GTAMaterialData
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UGTAMaterialData : public UAssetUserData
{
public:
	float                                              WindowRectMultiplier;                                      // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4VGB[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAMaterialData");
		return ptr;
	}



};

// Class GTABase.UnpackedMaterialDataBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUnpackedMaterialDataBase : public UAssetUserData
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.UnpackedMaterialDataBase");
		return ptr;
	}



};

// Class GTABase.GTATargetHalo
// 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
class AGTATargetHalo : public AActor
{
public:
	TArray<struct FTargetHaloInfo>                     CurrentTargets;                                            // 0x0220(0x0010) (Edit, ZeroConstructor, EditConst, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTATargetHalo");
		return ptr;
	}



	void UpdateTargetComponent(class UMeshComponent* Component, TEnumAsByte<GTABase_ETargetHighlightType> HighlightType, float Alpha);
	void SetupTargetComponent(class UMeshComponent* Component, TEnumAsByte<GTABase_ETargetHighlightType> HighlightType, float InitialAlpha);
};

// Class GTABase.GTATerrainDB
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UGTATerrainDB : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTATerrainDB");
		return ptr;
	}



	void UpdateAll();
};

// Class GTABase.GTATexLookup
// 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
class UGTATexLookup : public UDataAsset
{
public:
	unsigned char                                      Textures[0x50];                                            // 0x0030(0x0050) UNKNOWN PROPERTY: MapProperty
	unsigned char                                      Materials[0x50];                                           // 0x0080(0x0050) UNKNOWN PROPERTY: MapProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTATexLookup");
		return ptr;
	}



};

// Class GTABase.GTAParticleInitialLocationScale
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UGTAParticleInitialLocationScale : public UParticleModuleLocationBase
{
public:
	struct FRawDistributionVector                      ScaleStartLocation;                                        // 0x0030(0x0048) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAParticleInitialLocationScale");
		return ptr;
	}



};

// Class GTABase.GTAParticleRotationOverLife
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UGTAParticleRotationOverLife : public UParticleModuleRotationRateBase
{
public:
	struct FRawDistributionFloat                       RotRate;                                                   // 0x0030(0x0030) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAParticleRotationOverLife");
		return ptr;
	}



};

// Class GTABase.GTAParticleAddColor
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UGTAParticleAddColor : public UParticleModuleColorBase
{
public:
	struct FRawDistributionFloat                       ColorAdd;                                                  // 0x0030(0x0030) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAParticleAddColor");
		return ptr;
	}



};

// Class GTABase.GTAPerParticleSpawn
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UGTAPerParticleSpawn : public UParticleModuleLocationBase
{
public:
	int                                                SpawnCount;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDoSpawnStream;                                            // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnCountPerSecond;                                      // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6LCV[0x2];                                     // 0x0036(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAPerParticleSpawn");
		return ptr;
	}



};

// Class GTABase.GTAParticleWind
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UGTAParticleWind : public UParticleModuleAccelerationBase
{
public:
	float                                              WindConstant;                                              // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L4CL[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAParticleWind");
		return ptr;
	}



};

// Class GTABase.GTAFixToWaterPlane
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UGTAFixToWaterPlane : public UParticleModuleLocationBase
{
public:
	bool                                               bSpawnOnly;                                                // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YS69[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WaterPlaneZOffset;                                         // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAFixToWaterPlane");
		return ptr;
	}



};

// Class GTABase.ParticleModuleGTABase
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UParticleModuleGTABase : public UParticleModule
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.ParticleModuleGTABase");
		return ptr;
	}



};

// Class GTABase.ParticleModuleKillAtOpacity
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UParticleModuleKillAtOpacity : public UParticleModuleGTABase
{
public:
	float                                              KillOpacity;                                               // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinLifetime;                                               // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.ParticleModuleKillAtOpacity");
		return ptr;
	}



};

// Class GTABase.GTABounceFloor
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UGTABounceFloor : public UParticleModuleGTABase
{
public:
	float                                              Acceleration;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ZFloor;                                                    // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDoGameWorldCheck;                                         // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V280[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              EnergyAbsorption;                                          // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StopVelocity;                                              // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpinByVelocity;                                            // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularBendPerBounce;                                      // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FallThroughLifetime;                                       // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTABounceFloor");
		return ptr;
	}



};

// Class GTABase.GTAFireTopology
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UGTAFireTopology : public UParticleModuleGTABase
{
public:
	float                                              MiddleHeight;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EdgeHeight;                                                // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EdgeDistribution;                                          // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseTopology;                                              // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_63W1[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Distance;                                                  // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AVAI[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRawDistributionVector                      ColorDistribution;                                         // 0x0048(0x0048) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                              ColorDistributionScale;                                    // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3NF2[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAFireTopology");
		return ptr;
	}



};

// Class GTABase.GTAColorScale
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UGTAColorScale : public UParticleModuleGTABase
{
public:
	struct FLinearColor                                GTA3_ColorScale;                                           // 0x0030(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                VC_ColorScale;                                             // 0x0040(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                SA_ColorScale;                                             // 0x0050(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAColorScale");
		return ptr;
	}



};

// Class GTABase.GTAFollowTerrainVelocity
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UGTAFollowTerrainVelocity : public UParticleModuleGTABase
{
public:
	float                                              CheckDistance;                                             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseSystemForRoot;                                         // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1N8J[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAFollowTerrainVelocity");
		return ptr;
	}



};

// Class GTABase.PathRegion
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UPathRegion : public UDataAsset
{
public:
	int                                                RegionIndex;                                               // 0x0030(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           NumVehNodes;                                               // 0x0034(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           NumPedNodes;                                               // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E9RC[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPathNode>                           CarNodes;                                                  // 0x0040(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPathNode>                           PedNodes;                                                  // 0x0050(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPathNode>                           RadarNodes;                                                // 0x0060(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPathLink>                           Links;                                                     // 0x0070(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPathAdjacent>                       Adjacents;                                                 // 0x0080(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.PathRegion");
		return ptr;
	}



};

// Class GTABase.GTAPathfindNodes
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UGTAPathfindNodes : public UDataAsset
{
public:
	struct FString                                     ImportPath;                                                // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGTARegionMetadata                          MetaData;                                                  // 0x0040(0x0018) (Edit, EditConst, NativeAccessSpecifierPrivate)
	unsigned char                                      Regions[0x10];                                             // 0x0058(0x0010) UNKNOWN PROPERTY: ArrayProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAPathfindNodes");
		return ptr;
	}



	void VCImportRegion();
	void VCImportRawNodes();
	void GTA3ImportRegion();
};

// Class GTABase.CustomInstancedMesh
// 0x0000 (FullSize[0x0580] - InheritedSize[0x0580])
class UCustomInstancedMesh : public UInstancedStaticMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.CustomInstancedMesh");
		return ptr;
	}



};

// Class GTABase.GTAClothingTable
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UGTAClothingTable : public UDataAsset
{
public:
	TArray<struct FGTAClothingModelType>               ModelTypes;                                                // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FGTAClothingMaterialType>            MaterialTypes;                                             // 0x0040(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAClothingTable");
		return ptr;
	}



	class UTexture* GetShirtMaskTexture();
	void ConvertOldData();
};

// Class GTABase.GTASceneProbeListing
// 0x0098 (FullSize[0x00C8] - InheritedSize[0x0030])
class UGTASceneProbeListing : public UDataAsset
{
public:
	unsigned char                                      UnknownData_7928[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGTASceneExperiment>                 Experiments;                                               // 0x0038(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FGTASceneProbe>                      Probes_GTA3;                                               // 0x0048(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FGTASceneProbe>                      Probes_VC;                                                 // 0x0058(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FGTASceneProbe>                      Probes_SA;                                                 // 0x0068(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FGTASettings_Graphics>               PCProbeSettings;                                           // 0x0078(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGTASettings_Graphics>               SwitchProbeSettings;                                       // 0x0088(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGTASettings_Graphics>               Gen8ProbeSettings;                                         // 0x0098(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGTASettings_Graphics>               Gen9ProbeSettings;                                         // 0x00A8(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGTASettings_Graphics>               MobileProbeSettings;                                       // 0x00B8(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTASceneProbeListing");
		return ptr;
	}



};

// Class GTABase.GTASingleton
// 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
class UGTASingleton : public UObject
{
public:
	class UGameterSettings*                            GameSettings;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6Q7M[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundMix*                                   MobileSFXVolumeMix;                                        // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundMix*                                   MobileMusicVolumeMix;                                      // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundMix*                                   MobileDialogueVolumeMix;                                   // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      GameSettingsClass;                                         // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CinematicCameraCutThreshold_Velocity;                      // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CinematicCameraCutThreshold_RotVelocity;                   // 0x0064(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           CinematicCameraCutThreshold_MaxCutFrames;                  // 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LKB1[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialParameterCollection*                ParticleCollection;                                        // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      CinematicVehicleBlueprintBase;                             // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGTACollisionDataCollection*                 CollisionCollection;                                       // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      GTAReverbPresets[0x50];                                    // 0x0088(0x0050) UNKNOWN PROPERTY: MapProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTASingleton");
		return ptr;
	}



	void STATIC_SetShadowResolutionScale(class ULightComponent* onComponent, float newResolution);
	void STATIC_SetShadowRenderDistance(class ULightComponent* onComponent, float newRenderDistance);
	void STATIC_SetPostProcessSceneColorTint(class APostProcessVolume* Volume, const struct FLinearColor& withTint);
	void STATIC_SetMaxDrawDistance(class ULightComponent* onComponent, float newMaxDrawDistance, float fadeStartPercent);
	void STATIC_SetLightingChannels(class USceneComponent* onComponent, bool channel0, bool channel1, bool channel2);
	void STATIC_ResetSettingsToDefault(TEnumAsByte<GTABase_EGTASettingsCategory> Category);
	void STATIC_RemoveCurveData(class UCurveBase* toCurve, float atTime);
	class UGameterSettings* STATIC_GetUncheckedSettings();
	class UGameterSettings* STATIC_GetSettings(bool ForceRefresh, bool bForceUpdateAudio, bool forceNoChanges);
	class UClass* STATIC_GetRulesOverrideValue();
	struct FVector STATIC_GetGTAWorldZ(const struct FVector& OfLocation, bool* successful);
	class AGTAWorldSettings* STATIC_GetGTAWorldSettings(class UObject* WorldContext);
	struct FVector STATIC_GetGTAWaterZ(const struct FVector& OfLocation, bool* successful);
	class UGameterface* STATIC_GetGameterface();
	struct FName STATIC_GetCurrentCutscene();
	bool STATIC_AreGameSettingRulesOverwritten();
	void STATIC_AddFloatCurveData(class UCurveFloat* toCurve, float atTime, float withFloat, float timeGranularity);
	void STATIC_AddColorCurveData(class UCurveLinearColor* toCurve, float atTime, const struct FLinearColor& withColor, float timeGranularity);
};

// Class GTABase.GTASkeletalComponent
// 0x0010 (FullSize[0x0EF0] - InheritedSize[0x0EE0])
class UGTASkeletalComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      bRequiresVehicleRendering : 1;                             // 0x0EE0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4DFZ[0xF];                                     // 0x0EE1(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTASkeletalComponent");
		return ptr;
	}



};

// Class GTABase.GTASkeletalUserData
// 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
class UGTASkeletalUserData : public UAssetUserData
{
public:
	bool                                               bHasVertexAO;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F67T[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              VertexAOStrength;                                          // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  Variations;                                                // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                VariationMaterialSlot;                                     // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseNextGenVariation;                                      // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B0D2[0x3];                                     // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNextVariationData                          NextGenVariationData;                                      // 0x0048(0x00B8) (Edit, NativeAccessSpecifierPublic)
	float                                              PedHeightOverride;                                         // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8029[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTASkeletalUserData");
		return ptr;
	}



};

// Class GTABase.GTASkidmarks
// 0x0060 (FullSize[0x0300] - InheritedSize[0x02A0])
class AGTASkidmarks : public AGTAActor
{
public:
	class UProceduralMeshComponent*                    SkidmarkComponent;                                         // 0x02A0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceConstant*                   DefaultSkidmarkMI;                                         // 0x02A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceConstant*                   MuddySkidmarkMI;                                           // 0x02B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceConstant*                   SandySkidmarkMI;                                           // 0x02B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceConstant*                   BloodySkidmarkMI;                                          // 0x02C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0147[0x20];                                    // 0x02C8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PointUpdateInterval;                                       // 0x02E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              UVScale;                                                   // 0x02EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                MaxSkidmarks;                                              // 0x02F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32_t                                           TireBloodLimit;                                            // 0x02F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32_t                                           PointsUntilReplacement;                                    // 0x02F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_T8D2[0x4];                                     // 0x02FC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTASkidmarks");
		return ptr;
	}



};

// Class GTABase.UI_Menu_Base
// 0x0008 (FullSize[0x0298] - InheritedSize[0x0290])
class UUI_Menu_Base : public UUI_DesignTimeUserWidget
{
public:
	class UGameterface*                                Gameterface;                                               // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.UI_Menu_Base");
		return ptr;
	}



	void StartMenuSFX();
	void StartMenuRadio(int Station);
	void StartMenuDialog();
	bool ShouldShowGangsInMap();
	void SetVersionNumber(const struct FString& VersionNum);
	void SetTemplate(class UGTAMainMenuUITemplate* InTemplate, bool IncludeSaveTab);
	void SetMenuToSpecificGameTab(TEnumAsByte<GTABase_EGTASaveTabState> toState);
	void SetMenuToMissionRetry();
	class UUserWidget* SetKeyListeningDialog(bool bTurnOn);
	void SaveDataInSlotEvent(bool success, int SlotIndex);
	void LoadDataInSlotEvent(bool success, int SlotIndex);
	void GrabFocus();
	float GetRightSidePosOfWidgetInsideScaleBox(class UWidget* Widget);
	float GetLeftSideOfFullSizeBox();
	void EndMenuSFX();
	void EndMenuRadio();
	void EndMenuDialogue();
	void DeleteDataInSlotEvent(bool success, int SlotIndex);
	bool CustomFunctionWithBoolReturn(const struct FString& FunctionString, bool* Handled);
	void CustomFunctionFromStringWithText(const struct FString& FunctionString, const struct FText& UsableText);
	void CustomFunctionFromString(const struct FString& FunctionString);
};

// Class GTABase.GTASocialClub
// 0x0000 (FullSize[0x0298] - InheritedSize[0x0298])
class UGTASocialClub : public UUI_Menu_Base
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTASocialClub");
		return ptr;
	}



	void OnRageBPEvent(int EventId, int Result);
};

// Class GTABase.GTASoundBank
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UGTASoundBank : public UDataAsset
{
public:
	unsigned char                                      Sounds[0x10];                                              // 0x0030(0x0010) UNKNOWN PROPERTY: ArrayProperty
	TArray<float>                                      Durations;                                                 // 0x0040(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	bool                                               bSaveSoundDurations;                                       // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FI9K[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FRequestedSoundStruct>               RequestedSounds;                                           // 0x0058(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	int                                                BankID;                                                    // 0x0068(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BankSlotID;                                                // 0x006C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SpecificSoundID;                                           // 0x0070(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MCIQ[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USoundBase*>                          LoadedSounds;                                              // 0x0078(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F937[0x10];                                    // 0x0088(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTASoundBank");
		return ptr;
	}



	void StreamingAssetsLoadedCallback();
	void AssetsLoadedCallback();
};

// Class GTABase.GTASoundPak
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UGTASoundPak : public UDataAsset
{
public:
	uint32_t                                           StartingBankIndex;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DH22[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      Banks[0x10];                                               // 0x0034(0x0010) UNKNOWN PROPERTY: ArrayProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTASoundPak");
		return ptr;
	}



};

// Class GTABase.GTAStaticMeshActor
// 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
class AGTAStaticMeshActor : public AStaticMeshActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAStaticMeshActor");
		return ptr;
	}



};

// Class GTABase.GTAAssetProcessor
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGTAAssetProcessor : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAAssetProcessor");
		return ptr;
	}



	void ProcessedStreamRequest(const struct FGTAStreamRequest& request);
};

// Class GTABase.GTAVehicle
// 0x0190 (FullSize[0x0430] - InheritedSize[0x02A0])
class AGTAVehicle : public AGTAActor
{
public:
	class USceneComponent*                             Root;                                                      // 0x02A0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGTAPoseableComponent*                       Mesh;                                                      // 0x02A8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkeletalMeshComponent*                      PhysicsMesh;                                               // 0x02B0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AGTASMActor*>                         StaticFlyingComponents;                                    // 0x02B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class AGTASKActor*>                         SkeletalFlyingComponents;                                  // 0x02C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FDynamicMaterials                           DynMats[0x4];                                              // 0x02D8(0x0040) (Edit, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BR1K[0x18];                                    // 0x0318(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInstanceConstant*>           Colour1Mats;                                               // 0x0330(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UMaterialInstanceConstant*>           Colour2Mats;                                               // 0x0340(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UMaterialInstanceConstant*>           Colour3Mats;                                               // 0x0350(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UMaterialInstanceConstant*>           Colour4Mats;                                               // 0x0360(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FString>                             Colour1Postfixes;                                          // 0x0370(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FString>                             Colour2Postfixes;                                          // 0x0380(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FString>                             Colour3Postfixes;                                          // 0x0390(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FString>                             Colour4Postfixes;                                          // 0x03A0(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<int>                                        ScheduleDamageUpdate;                                      // 0x03B0(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                              DynamicVolumetricUplightingStrength;                       // 0x03C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_C9KQ[0x1];                                     // 0x03C4(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bNeedsHeadlightDecal : 1;                                  // 0x03C5(0x0001) BIT_FIELD (Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEngineOn : 1;                                             // 0x03C5(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZBVP[0x2];                                     // 0x03C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<int, bool>                                    DamagedFrames;                                             // 0x03C8(0x0050) (Edit, EditConst, NativeAccessSpecifierPublic)
	TEnumAsByte<GTABase_EGTAVehicleType>               VehicleType;                                               // 0x0418(0x0001) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2E8I[0x3];                                     // 0x0419(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     MoveSpeed;                                                 // 0x041C(0x000C) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HI4R[0x8];                                     // 0x0428(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAVehicle");
		return ptr;
	}



	void UpdateEngineOn(bool bNewEngineOn);
	void ShowExtraComponent(const struct FName& BoneName, bool Visible, int Index);
	void SetupVehicleBP();
	void SetupHeadlightOption(const struct FGTAHeadlightSetting& Setting);
	void SetTaxiLight(bool bEnabled);
	void SetSpecialCarLights(TEnumAsByte<GTABase_EFSpecialLightType> LightToModify, bool bEnable);
	void SetLicensePlateDesign(int Param);
	void SetLicensePlate(const struct FString& WithText);
	void SetDirtiness(float dirtinessAlpha);
	void SetDamagedPart(int frameID, bool bDamaged);
	void SetCopterSpotLight(class AActor* Target, float brightnessPercent);
	void SetColorEntry(int Index, int ColorIndex, float MetallicOverride);
	void SetColor(int Index, const struct FColor& Color);
	void SetCarLights(bool bLeftHeadlight, bool bRightHeadlight, bool bLeftTaillight, bool bRightTaillight);
	void SetBoneDamaged(const struct FName& BoneName, bool bDamaged);
	void MeshBrokenNearby(const struct FVector& EventLocation);
	bool IsComponentVisible(class USceneComponent* Component);
	void InitializeColors(class UMaterialInterface* remapMaterial);
	class UGTAVehicleUserData* GetVehicleData();
	float GetPlateRenderDistance();
	class USkeletalMeshComponent* GetPhysicsMesh();
	class UMaterialInstanceConstant* GetHeadlightDecalMIC(bool bLeftHeadlight, bool bRightHeadlight, bool bIsPlayerOccupied);
	class UParticleSystemComponent* GetAttachedFX(int Index);
	void ExtraComponentShown(int Index);
	class UPointLightComponent* CreatePointLightComponentUsingClass(class UClass* ComponentToCreate);
	void CleanupPhysState();
	void BoneSetAsDamaged(const struct FName& BoneName, bool bDamaged);
};

// Class GTABase.GTAVehicleUserData
// 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
class UGTAVehicleUserData : public UAssetUserData
{
public:
	class UStaticMesh*                                 WheelMesh;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReflectionPower;                                           // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MetallicPaint1;                                            // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MetallicPaint2;                                            // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasVertexAO;                                              // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3P6O[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              VertexAOStrength;                                          // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CQXL[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInterface*>                  remapMaterials;                                            // 0x0048(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UMaterialInstanceConstant*                   LightOnMIC;                                                // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceConstant*                   LightOnTailLightsMIC;                                      // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceConstant*                   LightOffMIC;                                               // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceConstant*                   TaxiLightOnMIC;                                            // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   LicensePlateScaling;                                       // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LightIndex_LF;                                             // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LightIndex_RF;                                             // 0x0084(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LightIndex_LR;                                             // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LightIndex_RR;                                             // 0x008C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TaxiLightIndex;                                            // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LeftSirenIndex;                                            // 0x0094(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RightSirenIndex;                                           // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherSirenIndex;                                           // 0x009C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWindowSectionInfoContainer>         WindowsByLOD;                                              // 0x00A0(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FDamageInfoContainer>                SectionDamageData;                                         // 0x00B0(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	class UMaterialInstanceConstant*                   WindowMIC;                                                 // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAVehicleUserData");
		return ptr;
	}



};

// Class GTABase.GTAVehicleCinematic
// 0x0008 (FullSize[0x0438] - InheritedSize[0x0430])
class AGTAVehicleCinematic : public AGTAVehicle
{
public:
	class UGTASkeletalComponent*                       AnimatedMesh;                                              // 0x0430(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.GTAVehicleCinematic");
		return ptr;
	}



};

// Class GTABase.UVImage
// 0x0018 (FullSize[0x0228] - InheritedSize[0x0210])
class UUVImage : public UImage
{
public:
	struct FBox2D                                      UVs;                                                       // 0x0210(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UEBX[0x4];                                     // 0x0224(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GTABase.UVImage");
		return ptr;
	}



	void SetUVs(const struct FBox2D& InUVs);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
