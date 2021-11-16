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

// Class TimeManagement.FixedFrameRateCustomTimeStep
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{
public:
	struct FFrameRate                                  FixedFrameRate;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TimeManagement.FixedFrameRateCustomTimeStep");
		return ptr;
	}



};

// Class TimeManagement.GenlockedCustomTimeStep
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UGenlockedCustomTimeStep : public UFixedFrameRateCustomTimeStep
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TimeManagement.GenlockedCustomTimeStep");
		return ptr;
	}



};

// Class TimeManagement.GenlockedTimecodeProvider
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UGenlockedTimecodeProvider : public UTimecodeProvider
{
public:
	bool                                               bUseGenlockToCount;                                        // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y9SM[0x27];                                    // 0x0031(0x0027) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TimeManagement.GenlockedTimecodeProvider");
		return ptr;
	}



};

// Class TimeManagement.TimeManagementBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TimeManagement.TimeManagementBlueprintLibrary");
		return ptr;
	}



	struct FFrameTime TransformTime(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& DestinationRate);
	struct FFrameNumber Subtract_FrameNumberInteger(const struct FFrameNumber& A, int B);
	struct FFrameNumber Subtract_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B);
	struct FFrameTime SnapFrameTimeToRate(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& SnapToRate);
	struct FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, const struct FFrameRate& FrameRate);
	struct FFrameNumber Multiply_FrameNumberInteger(const struct FFrameNumber& A, int B);
	bool IsValid_MultipleOf(const struct FFrameRate& InFrameRate, const struct FFrameRate& OtherFramerate);
	bool IsValid_Framerate(const struct FFrameRate& InFrameRate);
	struct FFrameRate GetTimecodeFrameRate();
	struct FTimecode GetTimecode();
	struct FFrameNumber Divide_FrameNumberInteger(const struct FFrameNumber& A, int B);
	struct FString Conv_TimecodeToString(const struct FTimecode& InTimecode, bool bForceSignDisplay);
	float Conv_QualifiedFrameTimeToSeconds(const struct FQualifiedFrameTime& InFrameTime);
	float Conv_FrameRateToSeconds(const struct FFrameRate& InFrameRate);
	int Conv_FrameNumberToInteger(const struct FFrameNumber& InFrameNumber);
	struct FFrameNumber Add_FrameNumberInteger(const struct FFrameNumber& A, int B);
	struct FFrameNumber Add_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B);
};

// Class TimeManagement.TimeSynchronizationSource
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UTimeSynchronizationSource : public UObject
{
public:
	bool                                               bUseForSynchronization;                                    // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M5RK[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                FrameOffset;                                               // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TimeManagement.TimeSynchronizationSource");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
