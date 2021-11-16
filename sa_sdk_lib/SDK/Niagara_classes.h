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
// Classes
//---------------------------------------------------------------------------

// Class Niagara.NiagaraDataInterface
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{
public:
	unsigned char                                      UnknownData_BZD6[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterface");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceRWBase
// 0x00A0 (FullSize[0x00D8] - InheritedSize[0x0038])
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{
public:
	unsigned char                                      OutputShaderStages[0x50];                                  // 0x0038(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      IterationShaderStages[0x50];                               // 0x0088(0x0050) UNKNOWN PROPERTY: SetProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceRWBase");
		return ptr;
	}



};

// Class Niagara.MovieSceneNiagaraTrack
// 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0078(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraTrack");
		return ptr;
	}



};

// Class Niagara.MovieSceneNiagaraParameterTrack
// 0x0020 (FullSize[0x00A8] - InheritedSize[0x0088])
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{
public:
	struct FNiagaraVariable                            Parameter;                                                 // 0x0088(0x0020) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraParameterTrack");
		return ptr;
	}



};

// Class Niagara.MovieSceneNiagaraBoolParameterTrack
// 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	unsigned char                                      UnknownData_9PJI[0x8];                                     // 0x00A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraBoolParameterTrack");
		return ptr;
	}



};

// Class Niagara.MovieSceneNiagaraColorParameterTrack
// 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	unsigned char                                      UnknownData_IGH2[0x8];                                     // 0x00A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraColorParameterTrack");
		return ptr;
	}



};

// Class Niagara.MovieSceneNiagaraFloatParameterTrack
// 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	unsigned char                                      UnknownData_YMK1[0x8];                                     // 0x00A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraFloatParameterTrack");
		return ptr;
	}



};

// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
// 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	unsigned char                                      UnknownData_UDWG[0x8];                                     // 0x00A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraIntegerParameterTrack");
		return ptr;
	}



};

// Class Niagara.MovieSceneNiagaraSystemSpawnSection
// 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{
public:
	Niagara_ENiagaraSystemSpawnSectionStartBehavior    SectionStartBehavior;                                      // 0x00E8(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SW72[0x3];                                     // 0x00E8(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior;                                   // 0x00EC(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_O3FH[0x3];                                     // 0x00EC(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	Niagara_ENiagaraSystemSpawnSectionEndBehavior      SectionEndBehavior;                                        // 0x00F0(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_50R2[0x3];                                     // 0x00F0(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	Niagara_ENiagaraAgeUpdateMode                      AgeUpdateMode;                                             // 0x00F4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1A2P[0x3];                                     // 0x00F5(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraSystemSpawnSection");
		return ptr;
	}



};

// Class Niagara.MovieSceneNiagaraSystemTrack
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{
public:
	unsigned char                                      UnknownData_DBET[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraSystemTrack");
		return ptr;
	}



};

// Class Niagara.MovieSceneNiagaraVectorParameterTrack
// 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	unsigned char                                      UnknownData_FLXW[0x8];                                     // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ChannelsUsed;                                              // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YVGL[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraVectorParameterTrack");
		return ptr;
	}



};

// Class Niagara.NiagaraActor
// 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
class ANiagaraActor : public AActor
{
public:
	class UNiagaraComponent*                           NiagaraComponent;                                          // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bDestroyOnSystemFinish : 1;                                // 0x0228(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1YM9[0x7];                                     // 0x0229(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraActor");
		return ptr;
	}



	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);
	void OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent);
};

// Class Niagara.NiagaraComponent
// 0x01A8 (FullSize[0x05F0] - InheritedSize[0x0448])
class UNiagaraComponent : public UFXSystemComponent
{
public:
	class UNiagaraSystem*                              Asset;                                                     // 0x0448(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	Niagara_ENiagaraTickBehavior                       TickBehavior;                                              // 0x0450(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TPIE[0x7];                                     // 0x0451(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraUserRedirectionParameterStore       OverrideParameters;                                        // 0x0458(0x00C8) (NativeAccessSpecifierPrivate)
	unsigned char                                      bForceSolo : 1;                                            // 0x0520(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bEnableGpuComputeDebug : 1;                                // 0x0520(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MEVX[0x2B];                                    // 0x0521(0x002B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bAutoDestroy : 1;                                          // 0x054C(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bRenderingEnabled : 1;                                     // 0x054C(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bAutoManageAttachment : 1;                                 // 0x054C(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAutoAttachWeldSimulatedBodies : 1;                        // 0x054C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UVS6[0x3];                                     // 0x054D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxTimeBeforeForceUpdateTransform;                         // 0x0550(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VKV6[0x4];                                     // 0x0554(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FNiagaraMaterialOverride>            EmitterMaterials;                                          // 0x0558(0x0010) (ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZDKP[0x8];                                     // 0x0568(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnSystemFinished;                                          // 0x0570(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USceneComponent>              AutoAttachParent;                                          // 0x0580(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AutoAttachSocketName;                                      // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAttachmentRule                             AutoAttachLocationRule;                                    // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAttachmentRule                             AutoAttachRotationRule;                                    // 0x0591(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAttachmentRule                             AutoAttachScaleRule;                                       // 0x0592(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G6QJ[0x5D];                                    // 0x0593(0x005D) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraComponent");
		return ptr;
	}



	void SetVariableVec4(const struct FName& InVariableName, const struct FVector4& InValue);
	void SetVariableVec3(const struct FName& InVariableName, const struct FVector& InValue);
	void SetVariableVec2(const struct FName& InVariableName, const struct FVector2D& InValue);
	void SetVariableTextureRenderTarget(const struct FName& InVariableName, class UTextureRenderTarget* TextureRenderTarget);
	void SetVariableQuat(const struct FName& InVariableName, const struct FQuat& InValue);
	void SetVariableObject(const struct FName& InVariableName, class UObject* Object);
	void SetVariableMaterial(const struct FName& InVariableName, class UMaterialInterface* Object);
	void SetVariableLinearColor(const struct FName& InVariableName, const struct FLinearColor& InValue);
	void SetVariableInt(const struct FName& InVariableName, int InValue);
	void SetVariableFloat(const struct FName& InVariableName, float InValue);
	void SetVariableBool(const struct FName& InVariableName, bool InValue);
	void SetVariableActor(const struct FName& InVariableName, class AActor* Actor);
	void SetTickBehavior(Niagara_ENiagaraTickBehavior NewTickBehavior);
	void SetSeekDelta(float InSeekDelta);
	void SetRenderingEnabled(bool bInRenderingEnabled);
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);
	void SetPaused(bool bInPaused);
	void SetNiagaraVariableVec4(const struct FString& InVariableName, const struct FVector4& InValue);
	void SetNiagaraVariableVec3(const struct FString& InVariableName, const struct FVector& InValue);
	void SetNiagaraVariableVec2(const struct FString& InVariableName, const struct FVector2D& InValue);
	void SetNiagaraVariableQuat(const struct FString& InVariableName, const struct FQuat& InValue);
	void SetNiagaraVariableObject(const struct FString& InVariableName, class UObject* Object);
	void SetNiagaraVariableLinearColor(const struct FString& InVariableName, const struct FLinearColor& InValue);
	void SetNiagaraVariableInt(const struct FString& InVariableName, int InValue);
	void SetNiagaraVariableFloat(const struct FString& InVariableName, float InValue);
	void SetNiagaraVariableBool(const struct FString& InVariableName, bool InValue);
	void SetNiagaraVariableActor(const struct FString& InVariableName, class AActor* Actor);
	void SetMaxSimTime(float InMaxTime);
	void SetGpuComputeDebug(bool bEnableDebug);
	void SetForceSolo(bool bInForceSolo);
	void SetDesiredAge(float InDesiredAge);
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);
	void SetAutoDestroy(bool bInAutoDestroy);
	void SetAsset(class UNiagaraSystem* InAsset);
	void SetAllowScalability(bool bAllow);
	void SetAgeUpdateMode(Niagara_ENiagaraAgeUpdateMode InAgeUpdateMode);
	void SeekToDesiredAge(float InDesiredAge);
	void ResetSystem();
	void ReinitializeSystem();
	bool IsPaused();
	Niagara_ENiagaraTickBehavior GetTickBehavior();
	float GetSeekDelta();
	bool GetPreviewLODDistanceEnabled();
	int GetPreviewLODDistance();
	TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(const struct FString& InEmitterName, const struct FString& InValueName);
	TArray<float> GetNiagaraParticleValues_DebugOnly(const struct FString& InEmitterName, const struct FString& InValueName);
	TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(const struct FString& InEmitterName);
	float GetMaxSimTime();
	bool GetForceSolo();
	float GetDesiredAge();
	class UNiagaraDataInterface* GetDataInterface(const struct FString& Name);
	class UNiagaraSystem* GetAsset();
	Niagara_ENiagaraAgeUpdateMode GetAgeUpdateMode();
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
	void AdvanceSimulation(int TickCount, float TickDeltaSeconds);
};

// Class Niagara.NiagaraComponentPool
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UNiagaraComponentPool : public UObject
{
public:
	TMap<class UNiagaraSystem*, struct FNCPool>        WorldParticleSystemPools;                                  // 0x0028(0x0050) (ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KV4P[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraComponentPool");
		return ptr;
	}



};

// Class Niagara.NiagaraRendererProperties
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UNiagaraRendererProperties : public UNiagaraMergeable
{
public:
	struct FNiagaraPlatformSet                         Platforms;                                                 // 0x0028(0x0030) (Edit, NativeAccessSpecifierPublic)
	int                                                SortOrderHint;                                             // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsEnabled;                                                // 0x005C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMotionBlurEnabled;                                        // 0x005D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1844[0x22];                                    // 0x005E(0x0022) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraRendererProperties");
		return ptr;
	}



};

// Class Niagara.NiagaraComponentRendererProperties
// 0x00E0 (FullSize[0x0160] - InheritedSize[0x0080])
class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{
public:
	class UClass*                                      ComponentType;                                             // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           ComponentCountLimit;                                       // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6ZNT[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraVariableAttributeBinding            EnabledBinding;                                            // 0x0090(0x0058) (Edit, NativeAccessSpecifierPublic)
	bool                                               bAssignComponentsOnParticleID;                             // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyCreateComponentsOnParticleSpawn;                      // 0x00E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4IN1[0x6];                                     // 0x00EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             TemplateComponent;                                         // 0x00F0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraComponentPropertyBinding>    PropertyBindings;                                          // 0x00F8(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D8DI[0x58];                                    // 0x0108(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraComponentRendererProperties");
		return ptr;
	}



};

// Class Niagara.NiagaraComponentSettings
// 0x00F0 (FullSize[0x0118] - InheritedSize[0x0028])
class UNiagaraComponentSettings : public UObject
{
public:
	unsigned char                                      SuppressActivationList[0x50];                              // 0x0028(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      ForceAutoPooolingList[0x50];                               // 0x0078(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      SuppressEmitterList[0x50];                                 // 0x00C8(0x0050) UNKNOWN PROPERTY: SetProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraComponentSettings");
		return ptr;
	}



};

// Class Niagara.NiagaraConvertInPlaceUtilityBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNiagaraConvertInPlaceUtilityBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraConvertInPlaceUtilityBase");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterface2DArrayTexture
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
{
public:
	class UTexture2DArray*                             Texture;                                                   // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterface2DArrayTexture");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceArray
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UNiagaraDataInterfaceArray : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData_LR05[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxElements;                                               // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JWT5[0xC];                                     // 0x0044(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceArray");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceArrayFloat
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
{
public:
	TArray<float>                                      FloatData;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceArrayFloat");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceArrayFloat2
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FVector2D>                           FloatData;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceArrayFloat2");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceArrayFloat3
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FVector>                             FloatData;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceArrayFloat3");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceArrayFloat4
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FVector4>                            FloatData;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceArrayFloat4");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceArrayColor
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FLinearColor>                        ColorData;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceArrayColor");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceArrayQuat
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FQuat>                               QuatData;                                                  // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceArrayQuat");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceArrayFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceArrayFunctionLibrary");
		return ptr;
	}



	void SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FVector4> ArrayData);
	void SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FVector2D> ArrayData);
	void SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FVector> ArrayData);
	void SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FQuat> ArrayData);
	void SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<int> ArrayData);
	void SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<float> ArrayData);
	void SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FLinearColor> ArrayData);
	void SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<bool> ArrayData);
	TArray<struct FVector4> GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName);
	TArray<struct FVector2D> GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName);
	TArray<struct FVector> GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName);
	TArray<struct FQuat> GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName);
	TArray<int> GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName);
	TArray<float> GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName);
	TArray<struct FLinearColor> GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName);
	TArray<bool> GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName);
};

// Class Niagara.NiagaraDataInterfaceArrayInt32
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray
{
public:
	TArray<int>                                        IntData;                                                   // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceArrayInt32");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceArrayBool
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
{
public:
	TArray<bool>                                       BoolData;                                                  // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceArrayBool");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceAudioSubmix
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{
public:
	class USoundSubmix*                                Submix;                                                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceAudioSubmix");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceAudioOscilloscope
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{
public:
	class USoundSubmix*                                Submix;                                                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Resolution;                                                // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScopeInMilliseconds;                                       // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceAudioOscilloscope");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceAudioPlayer
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
{
public:
	class USoundBase*                                  SoundToPlay;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                           Attenuation;                                               // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundConcurrency*                           Concurrency;                                               // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ParameterNames;                                            // 0x0050(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bLimitPlaysPerTick;                                        // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PNPU[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxPlaysPerTick;                                           // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopWhenComponentIsDestroyed;                             // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HV51[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceAudioPlayer");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceAudioSpectrum
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{
public:
	int                                                Resolution;                                                // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumFrequency;                                          // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaximumFrequency;                                          // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NoiseFloorDb;                                              // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceAudioSpectrum");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceCamera
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{
public:
	int                                                PlayerControllerIndex;                                     // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequireCurrentFrameData;                                  // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BCO5[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCamera");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceCollisionQuery
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData_WI6D[0x10];                                    // 0x0038(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCollisionQuery");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceCurveBase
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
public:
	TArray<float>                                      ShaderLUT;                                                 // 0x0038(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                              LUTMinTime;                                                // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LUTMaxTime;                                                // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LUTInvTimeRange;                                           // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LUTNumSamplesMinusOne;                                     // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bUseLUT : 1;                                               // 0x0058(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bExposeCurve : 1;                                          // 0x0058(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BN5Z[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ExposedName;                                               // 0x005C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_891W[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  ExposedTexture;                                            // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurveBase");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceColorCurve
// 0x0200 (FullSize[0x0270] - InheritedSize[0x0070])
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  RedCurve;                                                  // 0x0070(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  GreenCurve;                                                // 0x00F0(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  BlueCurve;                                                 // 0x0170(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  AlphaCurve;                                                // 0x01F0(0x0080) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceColorCurve");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceCurlNoise
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{
public:
	uint32_t                                           Seed;                                                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VEPT[0xC];                                     // 0x003C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurlNoise");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceCurve
// 0x0080 (FullSize[0x00F0] - InheritedSize[0x0070])
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  Curve;                                                     // 0x0070(0x0080) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurve");
		return ptr;
	}



};

// Class Niagara.NiagaraParticleCallbackHandler
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNiagaraParticleCallbackHandler : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraParticleCallbackHandler");
		return ptr;
	}



	void ReceiveParticleData(TArray<struct FBasicParticleData> Data, class UNiagaraSystem* NiagaraSystem);
};

// Class Niagara.NiagaraDataInterfaceExport
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{
public:
	struct FNiagaraUserParameterBinding                CallbackHandlerParameter;                                  // 0x0038(0x0020) (Edit, NativeAccessSpecifierPublic)
	Niagara_ENDIExport_GPUAllocationMode               GPUAllocationMode;                                         // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IJVB[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                GPUAllocationFixedSize;                                    // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GPUAllocationPerParticleSize;                              // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SR4H[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceExport");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceGBuffer
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGBuffer");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceGrid2D
// 0x0020 (FullSize[0x00F8] - InheritedSize[0x00D8])
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{
public:
	int                                                NumCellsX;                                                 // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumCellsY;                                                 // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumCellsMaxAxis;                                           // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumAttributes;                                             // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SetGridFromMaxAxis;                                        // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DTGQ[0x3];                                     // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   WorldBBoxSize;                                             // 0x00EC(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HP5F[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid2D");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceGrid2DCollection
// 0x00C8 (FullSize[0x01C0] - InheritedSize[0x00F8])
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{
public:
	struct FNiagaraUserParameterBinding                RenderTargetUserParameter;                                 // 0x00F8(0x0020) (Edit, NativeAccessSpecifierPublic)
	Niagara_ENiagaraGpuBufferFormat                    OverrideBufferFormat;                                      // 0x0118(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideFormat : 1;                                       // 0x0119(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PLA3[0x56];                                    // 0x011A(0x0056) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<uint64_t, class UTextureRenderTarget2DArray*> ManagedRenderTargets;                                      // 0x0170(0x0050) (Transient, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid2DCollection");
		return ptr;
	}



	void GetTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY);
	void GetRawTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY);
	bool FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int AttributeIndex);
	bool FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int* TilesX, int* TilesY);
};

// Class Niagara.NiagaraDataInterfaceGrid2DCollectionReader
// 0x0070 (FullSize[0x0168] - InheritedSize[0x00F8])
class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2D
{
public:
	struct FString                                     EmitterName;                                               // 0x00F8(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DIName;                                                    // 0x0108(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_30H9[0x50];                                    // 0x0118(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid2DCollectionReader");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceGrid3D
// 0x0028 (FullSize[0x0100] - InheritedSize[0x00D8])
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                                  NumCells;                                                  // 0x00D8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CellSize;                                                  // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumCellsMaxAxis;                                           // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ESetResolutionMethod                       SetResolutionMethod;                                       // 0x00EC(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PESC[0x3];                                     // 0x00EC(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FVector                                     WorldBBoxSize;                                             // 0x00F0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EZGB[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid3D");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceGrid3DCollection
// 0x0080 (FullSize[0x0180] - InheritedSize[0x0100])
class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{
public:
	int                                                NumAttributes;                                             // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6E80[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraUserParameterBinding                RenderTargetUserParameter;                                 // 0x0108(0x0020) (Edit, NativeAccessSpecifierPublic)
	Niagara_ENiagaraGpuBufferFormat                    BufferFormat;                                              // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1U4G[0x57];                                    // 0x0129(0x0057) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid3DCollection");
		return ptr;
	}



	void GetTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY, int* SizeZ);
	void GetRawTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY, int* SizeZ);
	bool FillVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int AttributeIndex);
	bool FillRawVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int* TilesX, int* TilesY, int* TileZ);
};

// Class Niagara.NiagaraDataInterfaceLandscape
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
{
public:
	class AActor*                                      SourceLandscape;                                           // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceLandscape");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
// 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{
public:
	uint32_t                                           MaxNeighborsPerCell;                                       // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DU7Y[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceNeighborGrid3D");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceOcclusion
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceOcclusion");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceParticleRead
// 0x0010 (FullSize[0x00E8] - InheritedSize[0x00D8])
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
{
public:
	struct FString                                     EmitterName;                                               // 0x00D8(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceParticleRead");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfacePlatformSet
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
{
public:
	struct FNiagaraPlatformSet                         Platforms;                                                 // 0x0038(0x0030) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfacePlatformSet");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceRenderTarget2D
// 0x0080 (FullSize[0x0158] - InheritedSize[0x00D8])
class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntPoint                                   Size;                                                      // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETextureRenderTargetFormat>     OverrideRenderTargetFormat;                                // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideFormat : 1;                                       // 0x00E1(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YNVS[0x6];                                     // 0x00E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraUserParameterBinding                RenderTargetUserParameter;                                 // 0x00E8(0x0020) (Edit, NativeAccessSpecifierPublic)
	TMap<uint64_t, class UTextureRenderTarget2D*>      ManagedRenderTargets;                                      // 0x0108(0x0050) (Transient, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceRenderTarget2D");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceRenderTarget2DArray
// 0x0080 (FullSize[0x0158] - InheritedSize[0x00D8])
class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                                  Size;                                                      // 0x00D8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETextureRenderTargetFormat>     OverrideRenderTargetFormat;                                // 0x00E4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideFormat : 1;                                       // 0x00E5(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D2KF[0x2];                                     // 0x00E6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraUserParameterBinding                RenderTargetUserParameter;                                 // 0x00E8(0x0020) (Edit, NativeAccessSpecifierPublic)
	TMap<uint64_t, class UTextureRenderTarget2DArray*> ManagedRenderTargets;                                      // 0x0108(0x0050) (Transient, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceRenderTarget2DArray");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceRenderTargetVolume
// 0x0080 (FullSize[0x0158] - InheritedSize[0x00D8])
class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                                  Size;                                                      // 0x00D8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETextureRenderTargetFormat>     OverrideRenderTargetFormat;                                // 0x00E4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideFormat : 1;                                       // 0x00E5(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9KL4[0x2];                                     // 0x00E6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraUserParameterBinding                RenderTargetUserParameter;                                 // 0x00E8(0x0020) (Edit, NativeAccessSpecifierPublic)
	TMap<uint64_t, class UTextureRenderTargetVolume*>  ManagedRenderTargets;                                      // 0x0108(0x0050) (Transient, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceRenderTargetVolume");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceSimpleCounter
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSimpleCounter");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceSkeletalMesh
// 0x0088 (FullSize[0x00C0] - InheritedSize[0x0038])
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{
public:
	Niagara_ENDISkeletalMesh_SourceMode                SourceMode;                                                // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7171[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Source;                                                    // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding                MeshUserParameter;                                         // 0x0048(0x0020) (Edit, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      SourceComponent;                                           // 0x0068(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ENDISkeletalMesh_SkinningMode              SkinningMode;                                              // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8INW[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               SamplingRegions;                                           // 0x0078(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                WholeMeshLOD;                                              // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NULE[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               FilteredBones;                                             // 0x0090(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               FilteredSockets;                                           // 0x00A0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FName                                       ExcludeBoneName;                                           // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bExcludeBone : 1;                                          // 0x00B8(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequireCurrentFrameData;                                  // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZM7W[0x6];                                     // 0x00BA(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSkeletalMesh");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceSpline
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
public:
	class AActor*                                      Source;                                                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSpline");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceStaticMesh
// 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
public:
	Niagara_ENDIStaticMesh_SourceMode                  SourceMode;                                                // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_INB7[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 DefaultMesh;                                               // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Source;                                                    // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        SourceComponent;                                           // 0x0050(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNDIStaticMeshSectionFilter                 SectionFilter;                                             // 0x0058(0x0010) (Edit, NativeAccessSpecifierPublic)
	bool                                               bUsePhysicsBodyVelocity;                                   // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BNNJ[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               FilteredSockets;                                           // 0x0070(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_76XE[0x8];                                     // 0x0080(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceStaticMesh");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceTexture
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{
public:
	class UTexture*                                    Texture;                                                   // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceTexture");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceVector2DCurve
// 0x0100 (FullSize[0x0170] - InheritedSize[0x0070])
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                    // 0x0070(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  YCurve;                                                    // 0x00F0(0x0080) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVector2DCurve");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceVector4Curve
// 0x0200 (FullSize[0x0270] - InheritedSize[0x0070])
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                    // 0x0070(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  YCurve;                                                    // 0x00F0(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  ZCurve;                                                    // 0x0170(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  WCurve;                                                    // 0x01F0(0x0080) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVector4Curve");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceVectorCurve
// 0x0180 (FullSize[0x01F0] - InheritedSize[0x0070])
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                    // 0x0070(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  YCurve;                                                    // 0x00F0(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  ZCurve;                                                    // 0x0170(0x0080) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVectorCurve");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceVectorField
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{
public:
	class UVectorField*                                Field;                                                     // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTileX;                                                    // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTileY;                                                    // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTileZ;                                                    // 0x0042(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DIVJ[0x5];                                     // 0x0043(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVectorField");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceVolumeTexture
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{
public:
	class UVolumeTexture*                              Texture;                                                   // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVolumeTexture");
		return ptr;
	}



};

// Class Niagara.NiagaraEditorDataBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNiagaraEditorDataBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraEditorDataBase");
		return ptr;
	}



};

// Class Niagara.NiagaraSignificanceHandler
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNiagaraSignificanceHandler : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraSignificanceHandler");
		return ptr;
	}



};

// Class Niagara.NiagaraSignificanceHandlerDistance
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraSignificanceHandlerDistance");
		return ptr;
	}



};

// Class Niagara.NiagaraSignificanceHandlerAge
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraSignificanceHandlerAge");
		return ptr;
	}



};

// Class Niagara.NiagaraEffectType
// 0x00E8 (FullSize[0x0110] - InheritedSize[0x0028])
class UNiagaraEffectType : public UObject
{
public:
	Niagara_ENiagaraScalabilityUpdateFrequency         UpdateFrequency;                                           // 0x0028(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JNTO[0x3];                                     // 0x0028(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	Niagara_ENiagaraCullReaction                       CullReaction;                                              // 0x002C(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EAOA[0x3];                                     // 0x002C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UNiagaraSignificanceHandler*                 SignificanceHandler;                                       // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraSystemScalabilitySettings>   DetailLevelScalabilitySettings;                            // 0x0038(0x0010) (ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	struct FNiagaraSystemScalabilitySettingsArray      SystemScalabilitySettings;                                 // 0x0048(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScalabilitySettingsArray     EmitterScalabilitySettings;                                // 0x0058(0x0010) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I1AK[0xA8];                                    // 0x0068(0x00A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraEffectType");
		return ptr;
	}



};

// Class Niagara.NiagaraEmitter
// 0x0278 (FullSize[0x02A0] - InheritedSize[0x0028])
class UNiagaraEmitter : public UObject
{
public:
	bool                                               bLocalSpace;                                               // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDeterminism;                                              // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WVV0[0x2];                                     // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RandomSeed;                                                // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_EParticleAllocationMode                    AllocationMode;                                            // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0MJS[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PreAllocationCount;                                        // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScriptProperties             UpdateScriptProps;                                         // 0x0038(0x0028) (NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScriptProperties             SpawnScriptProps;                                          // 0x0060(0x0028) (NativeAccessSpecifierPublic)
	Niagara_ENiagaraSimTarget                          SimTarget;                                                 // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QQD1[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBox                                        FixedBounds;                                               // 0x008C(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                MinDetailLevel;                                            // 0x00A8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxDetailLevel;                                            // 0x00AC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraDetailsLevelScaleOverrides          GlobalSpawnCountScaleOverrides;                            // 0x00B0(0x0014) (Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GYZX[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraPlatformSet                         Platforms;                                                 // 0x00C8(0x0030) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScalabilityOverrides         ScalabilityOverrides;                                      // 0x00F8(0x0010) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      bInterpolatedSpawning : 1;                                 // 0x0108(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFixedBounds : 1;                                          // 0x0108(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseMinDetailLevel : 1;                                    // 0x0108(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseMaxDetailLevel : 1;                                    // 0x0108(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideGlobalSpawnCountScale : 1;                        // 0x0108(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRequiresPersistentIDs : 1;                                // 0x0108(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCombineEventSpawn : 1;                                    // 0x0108(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W459[0x3];                                     // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxDeltaTimePerTick;                                       // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           DefaultShaderStageIndex;                                   // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           MaxUpdateIterations;                                       // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SpawnStages[0x50];                                         // 0x0118(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      bSimulationStagesEnabled : 1;                              // 0x0168(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDeprecatedShaderStagesEnabled : 1;                        // 0x0168(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLimitDeltaTime : 1;                                       // 0x0168(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_13NG[0x7];                                     // 0x0169(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     UniqueEmitterName;                                         // 0x0170(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraRendererProperties*>          RendererProperties;                                        // 0x0180(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraEventScriptProperties>       EventHandlerScriptProps;                                   // 0x0190(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraSimulationStageBase*>         SimulationStages;                                          // 0x01A0(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	class UNiagaraScript*                              GPUComputeScript;                                          // 0x01B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FName>                               SharedEventGeneratorIds;                                   // 0x01B8(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GRV6[0xD8];                                    // 0x01C8(0x00D8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraEmitter");
		return ptr;
	}



};

// Class Niagara.NiagaraEventReceiverEmitterAction
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNiagaraEventReceiverEmitterAction : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction");
		return ptr;
	}



};

// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
public:
	uint32_t                                           NumParticles;                                              // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UJRO[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles");
		return ptr;
	}



};

// Class Niagara.NiagaraFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraFunctionLibrary");
		return ptr;
	}



	class UNiagaraComponent* SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<Engine_EAttachLocation> LocationType, bool bAutoDestroy, bool bAutoActivate, Niagara_ENCPoolMethod PoolingMethod, bool bPreCullCheck);
	class UNiagaraComponent* SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, bool bAutoActivate, Niagara_ENCPoolMethod PoolingMethod, bool bPreCullCheck);
	void SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UVolumeTexture* Texture);
	void SetTextureObject(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UTexture* Texture);
	void SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, TArray<struct FName> SamplingRegions);
	void OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UStaticMeshComponent* StaticMeshComponent);
	void OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UStaticMesh* StaticMesh);
	void OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent);
	class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection);
};

// Class Niagara.NiagaraLightRendererProperties
// 0x0258 (FullSize[0x02D8] - InheritedSize[0x0080])
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{
public:
	unsigned char                                      bUseInverseSquaredFalloff : 1;                             // 0x0080(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectsTranslucency : 1;                                  // 0x0080(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z10V[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RadiusScale;                                               // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ColorAdd;                                                  // 0x0088(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WE6C[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraVariableAttributeBinding            LightRenderingEnabledBinding;                              // 0x0098(0x0058) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            LightExponentBinding;                                      // 0x00F0(0x0058) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                           // 0x0148(0x0058) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                              // 0x01A0(0x0058) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            RadiusBinding;                                             // 0x01F8(0x0058) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            VolumetricScatteringBinding;                               // 0x0250(0x0058) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VSZO[0x30];                                    // 0x02A8(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraLightRendererProperties");
		return ptr;
	}



};

// Class Niagara.NiagaraMeshRendererProperties
// 0x05F8 (FullSize[0x0678] - InheritedSize[0x0080])
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{
public:
	class UStaticMesh*                                 ParticleMesh;                                              // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ENiagaraSortMode                           SortMode;                                                  // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UMAH[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bOverrideMaterials : 1;                                    // 0x008C(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSortOnlyWhenTranslucent : 1;                              // 0x008C(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_98Y9[0x3];                                     // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FNiagaraMeshMaterialOverride>        OverrideMaterials;                                         // 0x0090(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   SubImageSize;                                              // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSubImageBlend : 1;                                        // 0x00A8(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ET2V[0x3];                                     // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Niagara_ENiagaraMeshFacingMode                     FacingMode;                                                // 0x00AC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5BTY[0x3];                                     // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bLockedAxisEnable : 1;                                     // 0x00B0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H4E0[0x3];                                     // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LockedAxis;                                                // 0x00B4(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ENiagaraMeshLockedAxisSpace                LockedAxisSpace;                                           // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VES9[0x3];                                     // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     PivotOffset;                                               // 0x00C4(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ENiagaraMeshPivotOffsetSpace               PivotOffsetSpace;                                          // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XRLZ[0x3];                                     // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bEnableFrustumCulling : 1;                                 // 0x00D4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableCameraDistanceCulling : 1;                          // 0x00D4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SNWL[0x3];                                     // 0x00D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinCameraDistance;                                         // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxCameraDistance;                                         // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           RendererVisibility;                                        // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2JHL[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                           // 0x00E8(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                              // 0x0140(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                           // 0x0198(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            MeshOrientationBinding;                                    // 0x01F0(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            ScaleBinding;                                              // 0x0248(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            SubImageIndexBinding;                                      // 0x02A0(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                    // 0x02F8(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                   // 0x0350(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                   // 0x03A8(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                   // 0x0400(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                     // 0x0458(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            CustomSortingBinding;                                      // 0x04B0(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                      // 0x0508(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            CameraOffsetBinding;                                       // 0x0560(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            RendererVisibilityTagBinding;                              // 0x05B8(0x0058) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A7BO[0x68];                                    // 0x0610(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraMeshRendererProperties");
		return ptr;
	}



};

// Class Niagara.NiagaraMessageDataBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNiagaraMessageDataBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraMessageDataBase");
		return ptr;
	}



};

// Class Niagara.NiagaraParameterCollectionInstance
// 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
class UNiagaraParameterCollectionInstance : public UObject
{
public:
	class UNiagaraParameterCollection*                 Collection;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariable>                    OverridenParameters;                                       // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraParameterStore                      ParameterStorage;                                          // 0x0040(0x0078) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FVHG[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraParameterCollectionInstance");
		return ptr;
	}



	void SetVectorParameter(const struct FString& InVariableName, const struct FVector& InValue);
	void SetVector4Parameter(const struct FString& InVariableName, const struct FVector4& InValue);
	void SetVector2DParameter(const struct FString& InVariableName, const struct FVector2D& InValue);
	void SetQuatParameter(const struct FString& InVariableName, const struct FQuat& InValue);
	void SetIntParameter(const struct FString& InVariableName, int InValue);
	void SetFloatParameter(const struct FString& InVariableName, float InValue);
	void SetColorParameter(const struct FString& InVariableName, const struct FLinearColor& InValue);
	void SetBoolParameter(const struct FString& InVariableName, bool InValue);
	struct FVector GetVectorParameter(const struct FString& InVariableName);
	struct FVector4 GetVector4Parameter(const struct FString& InVariableName);
	struct FVector2D GetVector2DParameter(const struct FString& InVariableName);
	struct FQuat GetQuatParameter(const struct FString& InVariableName);
	int GetIntParameter(const struct FString& InVariableName);
	float GetFloatParameter(const struct FString& InVariableName);
	struct FLinearColor GetColorParameter(const struct FString& InVariableName);
	bool GetBoolParameter(const struct FString& InVariableName);
};

// Class Niagara.NiagaraParameterCollection
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UNiagaraParameterCollection : public UObject
{
public:
	struct FName                                       Namespace;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FNiagaraVariable>                    Parameters;                                                // 0x0030(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UMaterialParameterCollection*                SourceMaterialCollection;                                  // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraParameterCollectionInstance*         DefaultInstance;                                           // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                       CompileId;                                                 // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraParameterCollection");
		return ptr;
	}



};

// Class Niagara.NiagaraPrecompileContainer
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UNiagaraPrecompileContainer : public UObject
{
public:
	TArray<class UNiagaraScript*>                      Scripts;                                                   // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                              System;                                                    // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraPrecompileContainer");
		return ptr;
	}



};

// Class Niagara.NiagaraPreviewBase
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class ANiagaraPreviewBase : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraPreviewBase");
		return ptr;
	}



	void SetSystem(class UNiagaraSystem* InSystem);
	void SetLabelText(const struct FText& InXAxisText, const struct FText& InYAxisText);
};

// Class Niagara.NiagaraPreviewAxis
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNiagaraPreviewAxis : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis");
		return ptr;
	}



	int Num();
	void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int PreviewIndex, bool bIsXAxis, struct FString* OutLabelText);
};

// Class Niagara.NiagaraPreviewAxis_InterpParamBase
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{
public:
	struct FName                                       Param;                                                     // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                Count;                                                     // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EVSW[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamBase");
		return ptr;
	}



};

// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	int                                                Min;                                                       // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Max;                                                       // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamInt32");
		return ptr;
	}



};

// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	float                                              Min;                                                       // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              Max;                                                       // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamFloat");
		return ptr;
	}



};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector2D                                   Min;                                                       // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                                   Max;                                                       // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector2D");
		return ptr;
	}



};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector                                     Min;                                                       // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     Max;                                                       // 0x0044(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector");
		return ptr;
	}



};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	unsigned char                                      UnknownData_6JMG[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector4                                    Min;                                                       // 0x0040(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector4                                    Max;                                                       // 0x0050(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector4");
		return ptr;
	}



};

// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FLinearColor                                Min;                                                       // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                                Max;                                                       // 0x0048(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor");
		return ptr;
	}



};

// Class Niagara.NiagaraPreviewGrid
// 0x0050 (FullSize[0x0270] - InheritedSize[0x0220])
class ANiagaraPreviewGrid : public AActor
{
public:
	class UNiagaraSystem*                              System;                                                    // 0x0220(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ENiagaraPreviewGridResetMode               ResetMode;                                                 // 0x0228(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I3IX[0x7];                                     // 0x0229(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UNiagaraPreviewAxis*                         PreviewAxisX;                                              // 0x0230(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraPreviewAxis*                         PreviewAxisY;                                              // 0x0238(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PreviewClass;                                              // 0x0240(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpacingX;                                                  // 0x0248(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpacingY;                                                  // 0x024C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumX;                                                      // 0x0250(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                NumY;                                                      // 0x0254(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UChildActorComponent*>                PreviewComponents;                                         // 0x0258(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WJ1D[0x8];                                     // 0x0268(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraPreviewGrid");
		return ptr;
	}



	void SetPaused(bool bPaused);
	void GetPreviews(TArray<class UNiagaraComponent*>* OutPreviews);
	void DeactivatePreviews();
	void ActivatePreviews(bool bReset);
};

// Class Niagara.NiagaraRibbonRendererProperties
// 0x0758 (FullSize[0x07D8] - InheritedSize[0x0080])
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                          Material;                                                  // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding                MaterialUserParamBinding;                                  // 0x0088(0x0020) (Edit, NativeAccessSpecifierPublic)
	Niagara_ENiagaraRibbonFacingMode                   FacingMode;                                                // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_38J2[0x3];                                     // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraRibbonUVSettings                    UV0Settings;                                               // 0x00AC(0x0024) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraRibbonUVSettings                    UV1Settings;                                               // 0x00D0(0x0024) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	Niagara_ENiagaraRibbonDrawDirection                DrawDirection;                                             // 0x00F4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A8Y9[0x3];                                     // 0x00F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurveTension;                                              // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ENiagaraRibbonTessellationMode             TessellationMode;                                          // 0x00FC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DE1M[0x3];                                     // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TessellationFactor;                                        // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseConstantFactor;                                        // 0x0104(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E9DH[0x3];                                     // 0x0105(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TessellationAngle;                                         // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bScreenSpaceTessellation;                                  // 0x010C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9LC9[0x3];                                     // 0x010D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                           // 0x0110(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                              // 0x0168(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                           // 0x01C0(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                      // 0x0218(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            RibbonTwistBinding;                                        // 0x0270(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            RibbonWidthBinding;                                        // 0x02C8(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            RibbonFacingBinding;                                       // 0x0320(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            RibbonIdBinding;                                           // 0x0378(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            RibbonLinkOrderBinding;                                    // 0x03D0(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                     // 0x0428(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                    // 0x0480(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                   // 0x04D8(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                   // 0x0530(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                   // 0x0588(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            U0OverrideBinding;                                         // 0x05E0(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            V0RangeOverrideBinding;                                    // 0x0638(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            U1OverrideBinding;                                         // 0x0690(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            V1RangeOverrideBinding;                                    // 0x06E8(0x0058) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NLOR[0x98];                                    // 0x0740(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraRibbonRendererProperties");
		return ptr;
	}



};

// Class Niagara.NiagaraScript
// 0x0298 (FullSize[0x02C0] - InheritedSize[0x0028])
class UNiagaraScript : public UNiagaraScriptBase
{
public:
	Niagara_ENiagaraScriptUsage                        Usage;                                                     // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z110[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                UsageIndex;                                                // 0x002C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       UsageId;                                                   // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNiagaraParameterStore                      RapidIterationParameters;                                  // 0x0040(0x0078) (NativeAccessSpecifierPublic)
	struct FNiagaraScriptExecutionParameterStore       ScriptExecutionParamStore;                                 // 0x00B8(0x0098) (NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraBoundParameter>              ScriptExecutionBoundParameters;                            // 0x0150(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FNiagaraVMExecutableDataId                  CachedScriptVMId;                                          // 0x0160(0x0048) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LDUA[0x10];                                    // 0x01A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraVMExecutableData                    CachedScriptVM;                                            // 0x01B8(0x00E0) (NativeAccessSpecifierPrivate)
	TArray<class UNiagaraParameterCollection*>         CachedParameterCollectionReferences;                       // 0x0298(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraScriptDataInterfaceInfo>     CachedDefaultDataInterfaces;                               // 0x02A8(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_A0NL[0x8];                                     // 0x02B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraScript");
		return ptr;
	}



	void RaiseOnGPUCompilationComplete();
};

// Class Niagara.NiagaraScriptSourceBase
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UNiagaraScriptSourceBase : public UObject
{
public:
	unsigned char                                      UnknownData_TAQP[0x20];                                    // 0x0028(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraScriptSourceBase");
		return ptr;
	}



};

// Class Niagara.NiagaraSettings
// 0x0088 (FullSize[0x00C0] - InheritedSize[0x0038])
class UNiagaraSettings : public UDeveloperSettings
{
public:
	struct FSoftObjectPath                             DefaultEffectType;                                         // 0x0038(0x0018) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FText>                               QualityLevels;                                             // 0x0050(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FText>                 ComponentRendererWarningsPerClass;                         // 0x0060(0x0050) (Edit, Config, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETextureRenderTargetFormat>     DefaultRenderTargetFormat;                                 // 0x00B0(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ENiagaraGpuBufferFormat                    DefaultGridFormat;                                         // 0x00B1(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WNTJ[0x6];                                     // 0x00B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UNiagaraEffectType*                          DefaultEffectTypePtr;                                      // 0x00B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraSettings");
		return ptr;
	}



};

// Class Niagara.NiagaraSimulationStageBase
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UNiagaraSimulationStageBase : public UNiagaraMergeable
{
public:
	class UNiagaraScript*                              Script;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SimulationStageName;                                       // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnabled : 1;                                              // 0x0038(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K5AY[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraSimulationStageBase");
		return ptr;
	}



};

// Class Niagara.NiagaraSimulationStageGeneric
// 0x0030 (FullSize[0x0070] - InheritedSize[0x0040])
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{
public:
	Niagara_ENiagaraIterationSource                    IterationSource;                                           // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CU17[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Iterations;                                                // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSpawnOnly : 1;                                            // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDisablePartialParticleUpdate : 1;                         // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K0QS[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraVariableDataInterfaceBinding        DataInterface;                                             // 0x0050(0x0020) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraSimulationStageGeneric");
		return ptr;
	}



};

// Class Niagara.NiagaraSpriteRendererProperties
// 0x0720 (FullSize[0x07A0] - InheritedSize[0x0080])
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                          Material;                                                  // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ENiagaraRendererSourceDataMode             SourceMode;                                                // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P059[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraUserParameterBinding                MaterialUserParamBinding;                                  // 0x0090(0x0020) (Edit, NativeAccessSpecifierPublic)
	Niagara_ENiagaraSpriteAlignment                    Alignment;                                                 // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ENiagaraSpriteFacingMode                   FacingMode;                                                // 0x00B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0859[0x2];                                     // 0x00B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   PivotInUVSpace;                                            // 0x00B4(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ENiagaraSortMode                           SortMode;                                                  // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XJQQ[0x3];                                     // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   SubImageSize;                                              // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSubImageBlend : 1;                                        // 0x00C8(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRemoveHMDRollInVR : 1;                                    // 0x00C8(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSortOnlyWhenTranslucent : 1;                              // 0x00C8(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGpuLowLatencyTranslucency : 1;                            // 0x00C8(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G6TM[0x3];                                     // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinFacingCameraBlendDistance;                              // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxFacingCameraBlendDistance;                              // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableCameraDistanceCulling : 1;                          // 0x00D4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G49Z[0x3];                                     // 0x00D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinCameraDistance;                                         // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxCameraDistance;                                         // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           RendererVisibility;                                        // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C1HU[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                           // 0x00E8(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                              // 0x0140(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                           // 0x0198(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            SpriteRotationBinding;                                     // 0x01F0(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            SpriteSizeBinding;                                         // 0x0248(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            SpriteFacingBinding;                                       // 0x02A0(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            SpriteAlignmentBinding;                                    // 0x02F8(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            SubImageIndexBinding;                                      // 0x0350(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                    // 0x03A8(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                   // 0x0400(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                   // 0x0458(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                   // 0x04B0(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            CameraOffsetBinding;                                       // 0x0508(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            UVScaleBinding;                                            // 0x0560(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                     // 0x05B8(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            CustomSortingBinding;                                      // 0x0610(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                      // 0x0668(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            RendererVisibilityTagBinding;                              // 0x06C0(0x0058) (Edit, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraMaterialAttributeBinding>    MaterialParameterBindings;                                 // 0x0718(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZCU3[0x78];                                    // 0x0728(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraSpriteRendererProperties");
		return ptr;
	}



};

// Class Niagara.NiagaraSystem
// 0x0450 (FullSize[0x0480] - InheritedSize[0x0030])
class UNiagaraSystem : public UFXSystemAsset
{
public:
	bool                                               bDumpDebugSystemInfo;                                      // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDumpDebugEmitterInfo;                                     // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequireCurrentFrameData;                                  // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PVCW[0x1];                                     // 0x0033(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bFixedBounds : 1;                                          // 0x0034(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PHR1[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UNiagaraEffectType*                          EffectType;                                                // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bOverrideScalabilitySettings;                              // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_49DE[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FNiagaraSystemScalabilityOverride>   ScalabilityOverrides;                                      // 0x0048(0x0010) (ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected)
	struct FNiagaraSystemScalabilityOverrides          SystemScalabilityOverrides;                                // 0x0058(0x0010) (Edit, Protected, NativeAccessSpecifierProtected)
	TArray<struct FNiagaraEmitterHandle>               EmitterHandles;                                            // 0x0068(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;                              // 0x0078(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UNiagaraScript*                              SystemSpawnScript;                                         // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraScript*                              SystemUpdateScript;                                        // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DBN2[0x10];                                    // 0x0098(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraSystemCompiledData                  SystemCompiledData;                                        // 0x00A8(0x0218) (Protected, NativeAccessSpecifierProtected)
	struct FNiagaraUserRedirectionParameterStore       ExposedParameters;                                         // 0x02C0(0x00C8) (Protected, NativeAccessSpecifierProtected)
	struct FBox                                        FixedBounds;                                               // 0x0388(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bAutoDeactivate;                                           // 0x03A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SWPM[0x3];                                     // 0x03A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WarmupTime;                                                // 0x03A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                WarmupTickCount;                                           // 0x03AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WarmupTickDelta;                                           // 0x03B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHasSystemScriptDIsWithPerInstanceData;                    // 0x03B4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_X153[0x3];                                     // 0x03B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               UserDINamesReadInSystemScripts;                            // 0x03B8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6MO5[0xB8];                                    // 0x03C8(0x00B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraSystem");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
