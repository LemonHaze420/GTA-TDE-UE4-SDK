﻿#pragma once

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

// Class Overlay.Overlays
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UOverlays : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Overlay.Overlays");
		return ptr;
	}



};

// Class Overlay.BasicOverlays
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UBasicOverlays : public UOverlays
{
public:
	TArray<struct FOverlayItem>                        Overlays;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Overlay.BasicOverlays");
		return ptr;
	}



};

// Class Overlay.LocalizedOverlays
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class ULocalizedOverlays : public UOverlays
{
public:
	class UBasicOverlays*                              DefaultOverlays;                                           // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, class UBasicOverlays*>        LocaleToOverlaysMap;                                       // 0x0030(0x0050) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Overlay.LocalizedOverlays");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
