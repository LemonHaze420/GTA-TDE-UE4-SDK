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

// Class MovieScene.MovieSceneSignedObject
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UMovieSceneSignedObject : public UObject
{
public:
	struct FGuid                                       Signature;                                                 // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KAGC[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneSignedObject");
		return ptr;
	}



};

// Class MovieScene.MovieSceneTrack
// 0x0028 (FullSize[0x0078] - InheritedSize[0x0050])
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneTrackEvalOptions                 EvalOptions;                                               // 0x0050(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BUGG[0x1];                                     // 0x0054(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsEvalDisabled;                                           // 0x0055(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8WU5[0x2];                                     // 0x0056(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       EvaluationFieldGuid;                                       // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneTrackEvaluationField             EvaluationField;                                           // 0x0068(0x0010) (ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneTrack");
		return ptr;
	}



};

// Class MovieScene.MovieSceneNameableTrack
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneNameableTrack");
		return ptr;
	}



};

// Class MovieScene.MovieSceneSection
// 0x0098 (FullSize[0x00E8] - InheritedSize[0x0050])
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneSectionEvalOptions               EvalOptions;                                               // 0x0050(0x0002) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZVXI[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneEasingSettings                   Easing;                                                    // 0x0058(0x0038) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMovieSceneFrameRange                       SectionRange;                                              // 0x0090(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FFrameNumber                                PreRollFrames;                                             // 0x00A0(0x0004) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                                PostRollFrames;                                            // 0x00A4(0x0004) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                RowIndex;                                                  // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                OverlapPriority;                                           // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bIsActive : 1;                                             // 0x00B0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bIsLocked : 1;                                             // 0x00B0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_27OG[0x3];                                     // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartTime;                                                 // 0x00B4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EndTime;                                                   // 0x00B8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PrerollTime;                                               // 0x00BC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PostrollTime;                                              // 0x00C0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bIsInfinite : 1;                                           // 0x00C4(0x0001) BIT_FIELD (Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8SYC[0x3];                                     // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bSupportsInfiniteRange;                                    // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FOptionalMovieSceneBlendType                BlendType;                                                 // 0x00C9(0x0002) (NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YHWS[0x1D];                                    // 0x00CB(0x001D) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneSection");
		return ptr;
	}



	void SetRowIndex(int NewRowIndex);
	void SetPreRollFrames(int InPreRollFrames);
	void SetPostRollFrames(int InPostRollFrames);
	void SetOverlapPriority(int NewPriority);
	void SetIsLocked(bool bInIsLocked);
	void SetIsActive(bool bInIsActive);
	void SetCompletionMode(MovieScene_EMovieSceneCompletionMode InCompletionMode);
	void SetBlendType(MovieScene_EMovieSceneBlendType InBlendType);
	bool IsLocked();
	bool IsActive();
	int GetRowIndex();
	int GetPreRollFrames();
	int GetPostRollFrames();
	int GetOverlapPriority();
	MovieScene_EMovieSceneCompletionMode GetCompletionMode();
	struct FOptionalMovieSceneBlendType GetBlendType();
};

// Class MovieScene.MovieSceneSequence
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	class UMovieSceneCompiledData*                     CompiledData;                                              // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	MovieScene_EMovieSceneCompletionMode               DefaultCompletionMode;                                     // 0x0058(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bParentContextsAreSignificant;                             // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bPlayableDirectly;                                         // 0x005A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	MovieScene_EMovieSceneSequenceFlags                SequenceFlags;                                             // 0x005B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NYQJ[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneSequence");
		return ptr;
	}



	TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(const struct FName& InBindingName);
	struct FMovieSceneObjectBindingID FindBindingByTag(const struct FName& InBindingName);
};

// Class MovieScene.MovieSceneSequencePlayer
// 0x0658 (FullSize[0x0680] - InheritedSize[0x0028])
class UMovieSceneSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData_PKN6[0x3E8];                                   // 0x0028(0x03E8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPlay;                                                    // 0x0410(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayReverse;                                             // 0x0420(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnStop;                                                    // 0x0430(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPause;                                                   // 0x0440(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFinished;                                                // 0x0450(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TEnumAsByte<MovieScene_EMovieScenePlayerStatus>    Status;                                                    // 0x0460(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_U544[0x3];                                     // 0x0461(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bReversePlayback : 1;                                      // 0x0464(0x0001) BIT_FIELD (Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_K408[0x3];                                     // 0x0465(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMovieSceneSequence*                         Sequence;                                                  // 0x0468(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFrameNumber                                StartTime;                                                 // 0x0470(0x0004) (Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                DurationFrames;                                            // 0x0474(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DurationSubFrames;                                         // 0x0478(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CurrentNumLoops;                                           // 0x047C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                          // 0x0480(0x0014) (Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VBKF[0x4];                                     // 0x0494(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneRootEvaluationTemplateInstance   RootTemplateInstance;                                      // 0x0498(0x00E8) (Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FCAG[0x68];                                    // 0x0580(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneSequenceReplProperties           NetSyncProps;                                              // 0x05E8(0x0010) (Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      PlaybackClient[0x10];                                      // 0x05F8(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	class UMovieSceneSequenceTickManager*              TickManager;                                               // 0x0608(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5BTL[0x70];                                    // 0x0610(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneSequencePlayer");
		return ptr;
	}



	void StopAtCurrentTime();
	void Stop();
	void SetTimeRange(float StartTime, float Duration);
	void SetPlayRate(float PlayRate);
	void SetPlaybackPosition(const struct FMovieSceneSequencePlaybackParams& PlaybackParams);
	void SetFrameRate(const struct FFrameRate& FrameRate);
	void SetFrameRange(int StartFrame, int Duration, float SubFrames);
	void SetDisableCameraCuts(bool bInDisableCameraCuts);
	void ScrubToSeconds(float TimeInSeconds);
	bool ScrubToMarkedFrame(const struct FString& InLabel);
	void ScrubToFrame(const struct FFrameTime& NewPosition);
	void Scrub();
	void RPC_OnStopEvent(const struct FFrameTime& StoppedTime);
	void RPC_ExplicitServerUpdateEvent(MovieScene_EUpdatePositionMethod Method, const struct FFrameTime& RelevantTime);
	void PlayToSeconds(float TimeInSeconds);
	bool PlayToMarkedFrame(const struct FString& InLabel);
	void PlayToFrame(const struct FFrameTime& NewPosition);
	void PlayTo(const struct FMovieSceneSequencePlaybackParams& PlaybackParams);
	void PlayReverse();
	void PlayLooping(int NumLoops);
	void Play();
	void Pause();
	void JumpToSeconds(float TimeInSeconds);
	bool JumpToMarkedFrame(const struct FString& InLabel);
	void JumpToFrame(const struct FFrameTime& NewPosition);
	bool IsReversed();
	bool IsPlaying();
	bool IsPaused();
	void GoToEndAndStop();
	struct FQualifiedFrameTime GetStartTime();
	float GetPlayRate();
	TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(class UObject* InObject);
	struct FFrameRate GetFrameRate();
	int GetFrameDuration();
	struct FQualifiedFrameTime GetEndTime();
	struct FQualifiedFrameTime GetDuration();
	bool GetDisableCameraCuts();
	struct FQualifiedFrameTime GetCurrentTime();
	TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
	void ChangePlaybackDirection();
};

// Class MovieScene.MovieSceneCustomClockSource
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieSceneCustomClockSource : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneCustomClockSource");
		return ptr;
	}



	void OnTick(float DeltaSeconds, float InPlayRate);
	void OnStopPlaying(const struct FQualifiedFrameTime& InStopTime);
	void OnStartPlaying(const struct FQualifiedFrameTime& InStartTime);
	struct FFrameTime OnRequestCurrentTime(const struct FQualifiedFrameTime& InCurrentTime, float InPlayRate);
};

// Class MovieScene.MovieSceneEntityProvider
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieSceneEntityProvider : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneEntityProvider");
		return ptr;
	}



};

// Class MovieScene.MovieScenePlaybackClient
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieScenePlaybackClient : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieScenePlaybackClient");
		return ptr;
	}



};

// Class MovieScene.MovieSceneTrackTemplateProducer
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieSceneTrackTemplateProducer : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneTrackTemplateProducer");
		return ptr;
	}



};

// Class MovieScene.NodeAndChannelMappings
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNodeAndChannelMappings : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.NodeAndChannelMappings");
		return ptr;
	}



};

// Class MovieScene.MovieSceneNodeGroup
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieSceneNodeGroup : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneNodeGroup");
		return ptr;
	}



};

// Class MovieScene.MovieSceneNodeGroupCollection
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieSceneNodeGroupCollection : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneNodeGroupCollection");
		return ptr;
	}



};

// Class MovieScene.MovieScene
// 0x00F8 (FullSize[0x0148] - InheritedSize[0x0050])
class UMovieScene : public UMovieSceneSignedObject
{
public:
	TArray<struct FMovieSceneSpawnable>                Spawnables;                                                // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieScenePossessable>              Possessables;                                              // 0x0060(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneBinding>                  ObjectBindings;                                            // 0x0070(0x0010) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<struct FName, struct FMovieSceneObjectBindingIDs> BindingGroups;                                             // 0x0080(0x0050) (NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>                    MasterTracks;                                              // 0x00D0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UMovieSceneTrack*                            CameraCutTrack;                                            // 0x00E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneFrameRange                       SelectionRange;                                            // 0x00E8(0x0010) (NoDestructor, NativeAccessSpecifierPrivate)
	struct FMovieSceneFrameRange                       PlaybackRange;                                             // 0x00F8(0x0010) (NoDestructor, NativeAccessSpecifierPrivate)
	struct FFrameRate                                  TickResolution;                                            // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameRate                                  DisplayRate;                                               // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	MovieScene_EMovieSceneEvaluationType               EvaluationType;                                            // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	MovieScene_EUpdateClockSource                      ClockSource;                                               // 0x0119(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8BQH[0x6];                                     // 0x011A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftObjectPath                             CustomClockSourcePath;                                     // 0x0120(0x0018) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneMarkedFrame>              MarkedFrames;                                              // 0x0138(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieScene");
		return ptr;
	}



};

// Class MovieScene.MovieSceneBindingOverrides
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UMovieSceneBindingOverrides : public UObject
{
public:
	TArray<struct FMovieSceneBindingOverrideData>      BindingData;                                               // 0x0028(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KEI6[0x58];                                    // 0x0038(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOverrides");
		return ptr;
	}



};

// Class MovieScene.MovieSceneBindingOwnerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieSceneBindingOwnerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOwnerInterface");
		return ptr;
	}



};

// Class MovieScene.MovieSceneEntitySystem
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UMovieSceneEntitySystem : public UObject
{
public:
	class UMovieSceneEntitySystemLinker*               Linker;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XWSW[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneEntitySystem");
		return ptr;
	}



};

// Class MovieScene.MovieSceneBlenderSystem
// 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
class UMovieSceneBlenderSystem : public UMovieSceneEntitySystem
{
public:
	unsigned char                                      UnknownData_SGY3[0x20];                                    // 0x0040(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneBlenderSystem");
		return ptr;
	}



};

// Class MovieScene.MovieSceneBoolSection
// 0x0098 (FullSize[0x0180] - InheritedSize[0x00E8])
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
	bool                                               DefaultValue;                                              // 0x00E8(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4NOA[0x7];                                     // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneBoolChannel                      BoolCurve;                                                 // 0x00F0(0x0090) (Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneBoolSection");
		return ptr;
	}



};

// Class MovieScene.MovieSceneEntityInstantiatorSystem
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UMovieSceneEntityInstantiatorSystem : public UMovieSceneEntitySystem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneEntityInstantiatorSystem");
		return ptr;
	}



};

// Class MovieScene.MovieSceneGenericBoundObjectInstantiator
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UMovieSceneGenericBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneGenericBoundObjectInstantiator");
		return ptr;
	}



};

// Class MovieScene.MovieSceneBoundSceneComponentInstantiator
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UMovieSceneBoundSceneComponentInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneBoundSceneComponentInstantiator");
		return ptr;
	}



};

// Class MovieScene.MovieSceneSceneComponentImpersonator
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieSceneSceneComponentImpersonator : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneSceneComponentImpersonator");
		return ptr;
	}



};

// Class MovieScene.MovieSceneCompiledData
// 0x03D0 (FullSize[0x03F8] - InheritedSize[0x0028])
class UMovieSceneCompiledData : public UObject
{
public:
	struct FMovieSceneEvaluationTemplate               EvaluationTemplate;                                        // 0x0028(0x0160) (ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FMovieSceneSequenceHierarchy                Hierarchy;                                                 // 0x0188(0x0118) (NativeAccessSpecifierPrivate)
	struct FMovieSceneEntityComponentField             EntityComponentField;                                      // 0x02A0(0x00F0) (NativeAccessSpecifierPrivate)
	struct FMovieSceneEvaluationField                  TrackTemplateField;                                        // 0x0390(0x0030) (NativeAccessSpecifierPrivate)
	TArray<struct FFrameTime>                          DeterminismFences;                                         // 0x03C0(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FGuid                                       CompiledSignature;                                         // 0x03D0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                       CompilerVersion;                                           // 0x03E0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneSequenceCompilerMaskStruct       AccumulatedMask;                                           // 0x03F0(0x0001) (NoDestructor, NativeAccessSpecifierPrivate)
	struct FMovieSceneSequenceCompilerMaskStruct       AllocatedMask;                                             // 0x03F1(0x0001) (NoDestructor, NativeAccessSpecifierPrivate)
	MovieScene_EMovieSceneSequenceFlags                AccumulatedFlags;                                          // 0x03F2(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KJC9[0x5];                                     // 0x03F3(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneCompiledData");
		return ptr;
	}



};

// Class MovieScene.MovieSceneCompiledDataManager
// 0x0208 (FullSize[0x0230] - InheritedSize[0x0028])
class UMovieSceneCompiledDataManager : public UObject
{
public:
	unsigned char                                      UnknownData_44QK[0xB0];                                    // 0x0028(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<int, struct FMovieSceneSequenceHierarchy>     Hierarchies;                                               // 0x00D8(0x0050) (NativeAccessSpecifierPrivate)
	TMap<int, struct FMovieSceneEvaluationTemplate>    TrackTemplates;                                            // 0x0128(0x0050) (ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<int, struct FMovieSceneEvaluationField>       TrackTemplateFields;                                       // 0x0178(0x0050) (NativeAccessSpecifierPrivate)
	TMap<int, struct FMovieSceneEntityComponentField>  EntityComponentFields;                                     // 0x01C8(0x0050) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Z5B5[0x18];                                    // 0x0218(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneCompiledDataManager");
		return ptr;
	}



};

// Class MovieScene.MovieSceneFloatDecomposer
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieSceneFloatDecomposer : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneFloatDecomposer");
		return ptr;
	}



};

// Class MovieScene.MovieSceneBuiltInEasingFunction
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UMovieSceneBuiltInEasingFunction : public UObject
{
public:
	unsigned char                                      UnknownData_00H3[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MovieScene_EMovieSceneBuiltInEasing                Type;                                                      // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_74PV[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneBuiltInEasingFunction");
		return ptr;
	}



};

// Class MovieScene.MovieSceneEasingExternalCurve
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UMovieSceneEasingExternalCurve : public UObject
{
public:
	unsigned char                                      UnknownData_IA9S[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 Curve;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneEasingExternalCurve");
		return ptr;
	}



};

// Class MovieScene.MovieSceneEasingFunction
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieSceneEasingFunction : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneEasingFunction");
		return ptr;
	}



	float OnEvaluate(float interp);
};

// Class MovieScene.MovieSceneEntitySystemLinker
// 0x0430 (FullSize[0x0458] - InheritedSize[0x0028])
class UMovieSceneEntitySystemLinker : public UObject
{
public:
	unsigned char                                      UnknownData_PK6B[0x210];                                   // 0x0028(0x0210) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneEntitySystemGraph                SystemGraph;                                               // 0x0238(0x0138) (NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0LOG[0xE8];                                    // 0x0370(0x00E8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneEntitySystemLinker");
		return ptr;
	}



};

// Class MovieScene.MovieSceneEvalTimeSystem
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
class UMovieSceneEvalTimeSystem : public UMovieSceneEntitySystem
{
public:
	unsigned char                                      UnknownData_VELM[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneEvalTimeSystem");
		return ptr;
	}



};

// Class MovieScene.MovieSceneFolder
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UMovieSceneFolder : public UObject
{
public:
	struct FName                                       FolderName;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneFolder*>                   ChildFolders;                                              // 0x0030(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>                    ChildMasterTracks;                                         // 0x0040(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FString>                             ChildObjectBindingStrings;                                 // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_W5SM[0x10];                                    // 0x0060(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneFolder");
		return ptr;
	}



};

// Class MovieScene.MovieSceneKeyProxy
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieSceneKeyProxy : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneKeyProxy");
		return ptr;
	}



};

// Class MovieScene.MovieSceneMasterInstantiatorSystem
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UMovieSceneMasterInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneMasterInstantiatorSystem");
		return ptr;
	}



};

// Class MovieScene.MovieScenePreAnimatedStateSystemInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieScenePreAnimatedStateSystemInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieScenePreAnimatedStateSystemInterface");
		return ptr;
	}



};

// Class MovieScene.MovieSceneCachePreAnimatedStateSystem
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UMovieSceneCachePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneCachePreAnimatedStateSystem");
		return ptr;
	}



};

// Class MovieScene.MovieSceneRestorePreAnimatedStateSystem
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UMovieSceneRestorePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneRestorePreAnimatedStateSystem");
		return ptr;
	}



};

// Class MovieScene.MovieSceneSequenceTickManager
// 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
class UMovieSceneSequenceTickManager : public UObject
{
public:
	TArray<class AActor*>                              SequenceActors;                                            // 0x0028(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	class UMovieSceneEntitySystemLinker*               Linker;                                                    // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JB4M[0x90];                                    // 0x0040(0x0090) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneSequenceTickManager");
		return ptr;
	}



};

// Class MovieScene.MovieSceneSpawnablesSystem
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UMovieSceneSpawnablesSystem : public UMovieSceneEntitySystem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneSpawnablesSystem");
		return ptr;
	}



};

// Class MovieScene.MovieSceneSpawnSection
// 0x0008 (FullSize[0x0188] - InheritedSize[0x0180])
class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
public:
	unsigned char                                      UnknownData_4NUX[0x8];                                     // 0x0180(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneSpawnSection");
		return ptr;
	}



};

// Class MovieScene.MovieSceneSpawnTrack
// 0x0020 (FullSize[0x0098] - InheritedSize[0x0078])
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0078(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FGuid                                       ObjectGuid;                                                // 0x0088(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneSpawnTrack");
		return ptr;
	}



};

// Class MovieScene.MovieSceneSubSection
// 0x0078 (FullSize[0x0160] - InheritedSize[0x00E8])
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSectionParameters                Parameters;                                                // 0x00E8(0x0024) (Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	float                                              StartOffset;                                               // 0x010C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              TimeScale;                                                 // 0x0110(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              PrerollTime;                                               // 0x0114(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMovieSceneSequence*                         SubSequence;                                               // 0x0118(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TLazyObjectPtr<class AActor>                       ActorToRecord;                                             // 0x0120(0x001C) (Edit, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_452F[0x4];                                     // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TargetSequenceName;                                        // 0x0140(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDirectoryPath                              TargetPathToRecordTo;                                      // 0x0150(0x0010) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneSubSection");
		return ptr;
	}



	void SetSequence(class UMovieSceneSequence* Sequence);
	class UMovieSceneSequence* GetSequence();
};

// Class MovieScene.MovieSceneSubTrack
// 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0078(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneSubTrack");
		return ptr;
	}



};

// Class MovieScene.TestMovieSceneTrack
// 0x0020 (FullSize[0x0098] - InheritedSize[0x0078])
class UTestMovieSceneTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData_AXPQ[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bHighPassFilter;                                           // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9QFD[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMovieSceneSection*>                  SectionArray;                                              // 0x0088(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.TestMovieSceneTrack");
		return ptr;
	}



};

// Class MovieScene.TestMovieSceneSection
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class UTestMovieSceneSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSection");
		return ptr;
	}



};

// Class MovieScene.TestMovieSceneSequence
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UTestMovieSceneSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                                // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSequence");
		return ptr;
	}



};

// Class MovieScene.TestMovieSceneSubTrack
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UTestMovieSceneSubTrack : public UMovieSceneSubTrack
{
public:
	TArray<class UMovieSceneSection*>                  SectionArray;                                              // 0x0088(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSubTrack");
		return ptr;
	}



};

// Class MovieScene.TestMovieSceneSubSection
// 0x0000 (FullSize[0x0160] - InheritedSize[0x0160])
class UTestMovieSceneSubSection : public UMovieSceneSubSection
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSubSection");
		return ptr;
	}



};

// Class MovieScene.MovieSceneTrackInstance
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UMovieSceneTrackInstance : public UObject
{
public:
	class UObject*                                     AnimatedObject;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bIsMasterTrackInstance;                                    // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3WIE[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMovieSceneEntitySystemLinker*               Linker;                                                    // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneTrackInstanceInput>       Inputs;                                                    // 0x0040(0x0010) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneTrackInstance");
		return ptr;
	}



};

// Class MovieScene.MovieSceneTrackInstanceInstantiator
// 0x00B0 (FullSize[0x00F0] - InheritedSize[0x0040])
class UMovieSceneTrackInstanceInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:
	unsigned char                                      UnknownData_4GR2[0xB0];                                    // 0x0040(0x00B0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneTrackInstanceInstantiator");
		return ptr;
	}



};

// Class MovieScene.MovieSceneTrackInstanceSystem
// 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
class UMovieSceneTrackInstanceSystem : public UMovieSceneEntitySystem
{
public:
	class UMovieSceneTrackInstanceInstantiator*        Instantiator;                                              // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneTrackInstanceSystem");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
