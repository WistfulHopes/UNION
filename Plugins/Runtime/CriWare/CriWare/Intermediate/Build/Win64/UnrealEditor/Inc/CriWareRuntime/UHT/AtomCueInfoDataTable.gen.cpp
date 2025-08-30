// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomCueInfoDataTable.h"
#include "CriWareRuntime/Public/AtomCueInfoAttachedAisacControlParam.h"
#include "CriWareRuntime/Public/AtomCueInfoAttachedSelectorParam.h"
#include "CriWareRuntime/Public/AtomCueInfoBlocksParam.h"
#include "CriWareRuntime/Public/AtomCueInfoBusSendParam.h"
#include "CriWareRuntime/Public/AtomCueInfoCategoryParam.h"
#include "CriWareRuntime/Public/AtomCueInfoSelectorParam.h"
#include "CriWareRuntime/Public/AtomCueInfoTrackParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCueInfoDataTable() {}

// Begin Cross Module References
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoDataTable();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoTrackParam();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FAtomCueInfoDataTable
static_assert(std::is_polymorphic<FAtomCueInfoDataTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAtomCueInfoDataTable cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomCueInfoDataTable;
class UScriptStruct* FAtomCueInfoDataTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomCueInfoDataTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomCueInfoDataTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueInfoDataTable, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueInfoDataTable"));
	}
	return Z_Registration_Info_UScriptStruct_AtomCueInfoDataTable.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCueInfoDataTable>()
{
	return FAtomCueInfoDataTable::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CueId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CueTypeIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CueType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSelectorLabel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Public_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryCuePriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryCuePriorityType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryCuePriorityTypeIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CuePriorityType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CuePriorityTypeIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableCueLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumCueLimits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Probability_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BusSend_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blocks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachedSelector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachedAisacControl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CueId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CueTypeIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CueType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSelectorLabel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static void NewProp_Public_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Public;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CategoryCuePriority;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryCuePriorityType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CategoryCuePriorityTypeIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CuePriorityType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CuePriorityTypeIndex;
	static void NewProp_EnableCueLimit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableCueLimit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumCueLimits;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Probability;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Length;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Category_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Category;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Track_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Track;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BusSend_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BusSend;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Blocks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Blocks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttachedSelector_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttachedSelector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttachedAisacControl_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttachedAisacControl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueInfoDataTable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueId = { "CueId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, CueId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CueId_MetaData), NewProp_CueId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueTypeIndex = { "CueTypeIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, CueTypeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CueTypeIndex_MetaData), NewProp_CueTypeIndex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueType = { "CueType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, CueType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CueType_MetaData), NewProp_CueType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_DefaultSelectorLabel = { "DefaultSelectorLabel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, DefaultSelectorLabel), Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSelectorLabel_MetaData), NewProp_DefaultSelectorLabel_MetaData) }; // 3026457658
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, Volume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Volume_MetaData), NewProp_Volume_MetaData) };
void Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Public_SetBit(void* Obj)
{
	((FAtomCueInfoDataTable*)Obj)->Public = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Public = { "Public", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAtomCueInfoDataTable), &Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Public_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Public_MetaData), NewProp_Public_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriority = { "CategoryCuePriority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, CategoryCuePriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryCuePriority_MetaData), NewProp_CategoryCuePriority_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriorityType = { "CategoryCuePriorityType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, CategoryCuePriorityType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryCuePriorityType_MetaData), NewProp_CategoryCuePriorityType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriorityTypeIndex = { "CategoryCuePriorityTypeIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, CategoryCuePriorityTypeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryCuePriorityTypeIndex_MetaData), NewProp_CategoryCuePriorityTypeIndex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CuePriorityType = { "CuePriorityType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, CuePriorityType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CuePriorityType_MetaData), NewProp_CuePriorityType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CuePriorityTypeIndex = { "CuePriorityTypeIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, CuePriorityTypeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CuePriorityTypeIndex_MetaData), NewProp_CuePriorityTypeIndex_MetaData) };
void Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_EnableCueLimit_SetBit(void* Obj)
{
	((FAtomCueInfoDataTable*)Obj)->EnableCueLimit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_EnableCueLimit = { "EnableCueLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAtomCueInfoDataTable), &Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_EnableCueLimit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableCueLimit_MetaData), NewProp_EnableCueLimit_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_NumCueLimits = { "NumCueLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, NumCueLimits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumCueLimits_MetaData), NewProp_NumCueLimits_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Probability = { "Probability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, Probability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Probability_MetaData), NewProp_Probability_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, Length), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Length_MetaData), NewProp_Length_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Category_Inner = { "Category", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam, METADATA_PARAMS(0, nullptr) }; // 2241682654
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, Category), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) }; // 2241682654
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Track_Inner = { "Track", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAtomCueInfoTrackParam, METADATA_PARAMS(0, nullptr) }; // 1826622521
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, Track), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Track_MetaData), NewProp_Track_MetaData) }; // 1826622521
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_BusSend_Inner = { "BusSend", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam, METADATA_PARAMS(0, nullptr) }; // 1957126678
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_BusSend = { "BusSend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, BusSend), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BusSend_MetaData), NewProp_BusSend_MetaData) }; // 1957126678
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Blocks_Inner = { "Blocks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam, METADATA_PARAMS(0, nullptr) }; // 3103255579
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Blocks = { "Blocks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, Blocks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blocks_MetaData), NewProp_Blocks_MetaData) }; // 3103255579
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedSelector_Inner = { "AttachedSelector", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam, METADATA_PARAMS(0, nullptr) }; // 3498613443
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedSelector = { "AttachedSelector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, AttachedSelector), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachedSelector_MetaData), NewProp_AttachedSelector_MetaData) }; // 3498613443
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedAisacControl_Inner = { "AttachedAisacControl", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam, METADATA_PARAMS(0, nullptr) }; // 2688526039
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedAisacControl = { "AttachedAisacControl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, AttachedAisacControl), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachedAisacControl_MetaData), NewProp_AttachedAisacControl_MetaData) }; // 2688526039
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueTypeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_DefaultSelectorLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Public,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriorityType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriorityTypeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CuePriorityType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CuePriorityTypeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_EnableCueLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_NumCueLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Probability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Length,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Category_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Track_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Track,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_BusSend_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_BusSend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Blocks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Blocks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedSelector_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedSelector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedAisacControl_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedAisacControl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"AtomCueInfoDataTable",
	Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::PropPointers),
	sizeof(FAtomCueInfoDataTable),
	alignof(FAtomCueInfoDataTable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoDataTable()
{
	if (!Z_Registration_Info_UScriptStruct_AtomCueInfoDataTable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomCueInfoDataTable.InnerSingleton, Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AtomCueInfoDataTable.InnerSingleton;
}
// End ScriptStruct FAtomCueInfoDataTable

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoDataTable_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAtomCueInfoDataTable::StaticStruct, Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewStructOps, TEXT("AtomCueInfoDataTable"), &Z_Registration_Info_UScriptStruct_AtomCueInfoDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomCueInfoDataTable), 2257712156U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoDataTable_h_2702305798(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoDataTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoDataTable_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
