#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ECarStatusType.h"
#include "AuraData.h"
#include "EGadgetCategory.h"
#include "EGadgetId.h"
#include "ELockType.h"
#include "EMachineAuraId.h"
#include "EMachineColorPresetId.h"
#include "EMachineHornType.h"
#include "EMachineId.h"
#include "HornData.h"
#include "UserGadgetPresetData.h"
#include "UserItemProperty.h"
#include "UserMachineCustomizeData.h"
#include "UserStickerData.h"
#include "EGadgetPlateFromState.h"
#include "EGadgetPlateId.h"
#include "EMachinePartsType.h"
#include "ExtraStickerData.h"
#include "GadgetCustomCategoryColor.h"
#include "GadgetData.h"
#include "GadgetPlateData.h"
#include "GadgetPlateUIData.h"
#include "GadgetUIData.h"
#include "GadgetUIData2.h"
#include "MachineColorAreaSettingUIData.h"
#include "MachineColorAreaTextUIData.h"
#include "MachineColorParam.h"
#include "MachineColorPresetUIData.h"
#include "MachineColorSelectData.h"
#include "MachineGlowSelectData.h"
#include "MachinePartsData.h"
#include "MachinePartsUIData.h"
#include "MachineSurfaceSelectData.h"
#include "StickerSortData.h"
#include "StickerUIData.h"
#include "MachineCustomizeUtilityLibrary.generated.h"

class UDataTable;
class UTexture2D;

UCLASS(Blueprintable)
class UNION_API UMachineCustomizeUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMachineCustomizeUtilityLibrary();

    UFUNCTION(BlueprintCallable)
    static void UpdateGadgetSlotNumInUserData();
    
    UFUNCTION(BlueprintCallable)
    static void UpdateChallengeMachineParts(ECarStatusType InStatusType);
    
    UFUNCTION(BlueprintCallable)
    static void UnlockMachinePresetColor(EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable)
    static void UnlockGadgetAll();
    
    UFUNCTION(BlueprintCallable)
    static void StoreAllSticker();
    
    UFUNCTION(BlueprintCallable)
    static void StoreAllMachineParts();
    
    UFUNCTION(BlueprintCallable)
    static void StoreAllMachineAssembly();
    
    UFUNCTION(BlueprintCallable)
    static void StoreAllHorn();
    
    UFUNCTION(BlueprintCallable)
    static void StoreAllAura();
    
    UFUNCTION(BlueprintCallable)
    static void SortStickerData(TArray<FStickerSortData>& OutStickerSortedData, bool IsAscendingOrder);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectedGadgetPlateUIData(int32 InPlayerIndex, const FGadgetPlateUIData& InGadgetPlateUIData);
    
    UFUNCTION(BlueprintCallable)
    static void SetMachineCustomizeDataById(EMachineId InMachineID, const FUserMachineCustomizeData& InUserMachineCustomizeData);
    
    UFUNCTION(BlueprintCallable)
    static void SetGadgetPlateUIData(int32 InPlayerIndex, int32 InGadgetPresetIndex, const FGadgetPlateUIData& InGadgetPlateUIData);
    
    UFUNCTION(BlueprintCallable)
    static void SetGadgetNum(EGadgetId InGadgetId, int32 InGadgetNum);
    
    UFUNCTION(BlueprintCallable)
    static void SetGadgetFromState(EGadgetPlateFromState InState);
    
    UFUNCTION(BlueprintCallable)
    static void SetGadgetFragmentNum(int32 InGadgetFragmentNum);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomMachineHornNew(EMachineHornType InHornType, bool IsFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomMachineHornLockType(EMachineHornType InHornType, ELockType InLockType);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentGadgetPlateIdUseId(EGadgetPlateId plateId);
    
    UFUNCTION(BlueprintCallable)
    static FUserMachineCustomizeData SetAllMachineColorsByMode(const FUserMachineCustomizeData& InMachineCustomizeData);
    
    UFUNCTION(BlueprintCallable)
    static FUserMachineCustomizeData SetAllMachineColorsAsPreset(EMachineColorPresetId InMachineColorPresetId, const FUserMachineCustomizeData& InMachineCustomizeData);
    
    UFUNCTION(BlueprintCallable)
    static FUserMachineCustomizeData SetAllMachineColorsAsDefault(EMachineId InMachineID, const FUserMachineCustomizeData& InMachineCustomizeData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NewMachineStickerExists();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NewMachineRandomElementExists();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NewMachinePartsExists(ECarStatusType InMachineType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NewMachineHornExists();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NewMachineColorPresetExists();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NewMachineAuraExists();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NewGadgetExists();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool MachineCustomizeDataEquals(const FUserMachineCustomizeData& InData0, const FUserMachineCustomizeData& InData1);
    
    UFUNCTION(BlueprintCallable)
    static void LockGadgetAll();
    
    UFUNCTION(BlueprintCallable)
    static void LockGadget(const EGadgetId InGadgetId);
    
    UFUNCTION(BlueprintCallable)
    static void LoadTirePartsById(EMachineId InMachineID, FMachinePartsUIData& OutTirePartsUIData);
    
    UFUNCTION(BlueprintCallable)
    static void LoadRearPartsById(EMachineId InMachineID, FMachinePartsUIData& OutRearPartsUIData);
    
    UFUNCTION(BlueprintCallable)
    static void LoadFrontPartsById(EMachineId InMachineID, FMachinePartsUIData& OutFrontPartsUIData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidMachineCustomizeData(EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStickerChanged(const TArray<FUserStickerData>& InPrevStickerDataList, const TArray<FUserStickerData>& InCurrentStickerDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPossibleMachineCustomizeByAssemblyMachineParts();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMaxLevelGadgetPlateId(const EGadgetPlateId InPlateId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMachineNew(EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMachineIdOfCarStatusTypeId(EMachineId InMachineID, ECarStatusType InCarStatusType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGadgetKit(const EGadgetCategory InGadgetCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAttachableGadgetId(const FGadgetPlateUIData& InGadgetPresetData, const EGadgetId& InGadgetId, const int32 InSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    static void IntegrityCheckMachineAssemblyDataGadgetList();
    
    UFUNCTION(BlueprintCallable)
    static void InitMachineAssemblyDataGadgetPlatePreset();
    
    UFUNCTION(BlueprintCallable)
    static void InitMachineAssemblyDataGadgetList();
    
    UFUNCTION(BlueprintCallable)
    static void InitMachineAssemblyData();
    
    UFUNCTION(BlueprintCallable)
    static void IncrementSelectedGadgetPresetId(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasEnoughGadgetFragments();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasAnyGadgets();
    
    UFUNCTION(BlueprintCallable)
    static void GiveSticker(int32 InStickerId);
    
    UFUNCTION(BlueprintCallable)
    static void GiveGadget(const EGadgetId InGadgetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWirelessLobbyGadgetIds(const int32 InPlayerIndex, TArray<EGadgetId>& OutGadgetIds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetVisibleGadgetIdsToGadgetPlate(TArray<EGadgetId>& OutGadgetIds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetVisibleGadgetIdsToGadgetCustomWindow(TArray<EGadgetId>& OutGadgetIds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUsedCustomMachineNum();
    
    UFUNCTION(BlueprintCallable)
    static void GetStickerUIDataList(TArray<FStickerUIData>& OutStickerUIDataList);
    
    UFUNCTION(BlueprintCallable)
    static void GetStickerUIData(int32 InStickerId, FStickerUIData& OutStickerUIData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetStickerBaseOutsideSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetStickerBaseInsideSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetStickerBaseInitSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSelectedGadgetPlateUIData(int32 InPlayerIndex, FGadgetPlateUIData& outGadgetPlateUIData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSelectedGadgetIds(int32 InPlayerIndex, TArray<EGadgetId>& OutGadgetIds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSelectableMachineIndex(ECarStatusType InMachineType, EMachineId InMachineID, bool bInIncludeBasicMachines, bool bInIncludeUnusedCustomMachines, bool bInIncludeSimpleCustomMachines, int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    static void GetSelectableMachineIds(ECarStatusType InMachineType, bool bInIncludeBasicMachines, bool bInIncludeUnusedCustomMachines, bool bInIncludeSimpleCustomMachines, int32 InPlayerIndex, TArray<EMachineId>& OutMachineIds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSelectableMachineColorPresets(TArray<FMachineColorPresetUIData>& OutPresets);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRequiredGadgetFragmentNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGadgetPlateId GetRentalGadgetPlateId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRemainingRaceNumToGadgetPlate(int32 InSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* GetRearStickerUVTexture(EMachineId MachineId);
    
    UFUNCTION(BlueprintCallable)
    static FBox2D GetRearStickerMoveRange(EMachineId MachineId);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetRearStickerInitialLocation(EMachineId MachineId);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FExtraStickerData> GetRearExtraStickerData(EMachineId MachineId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetPlaceableGadgetIds(EGadgetPlateId InPlateId, int32 InSlotIndex, TArray<EGadgetId>& OutGadgetIds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGadgetPlateId GetNormalGadgetPlateMaxId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNextGadgetPlateRaceNum();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNextGadgetPlateIdRaceCount(EGadgetPlateId InEGadgetPlateId, int32 InRaceCount, UDataTable* GadgetPlateDataTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGadgetPlateId GetNextGadgetPlateId(const EGadgetPlateId InPlateId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxGadgetPresetNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxGadgetPresetIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxGadgetNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMachineTypeNameByMachineId(EMachineId InMachineID, FText& OutName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMachineTypeName(ECarStatusType InMachineType, FText& OutName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMachineSurfaceSelectDataList(TArray<FMachineSurfaceSelectData>& OutMachineSurfaceSelectDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMachineSurfaceNameById(int32 InMachineSurfaceId, FText& OutMachineSurfaceName);
    
    UFUNCTION(BlueprintCallable)
    static void GetMachinePartsStickerUIDataList(EMachineId InMachineID, EMachinePartsType InMachinePartsType, TArray<FStickerUIData>& OutStickerUIDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMachinePartsDataById(EMachineId InMachineID, FMachinePartsData& OutMachinePartsData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMachineNameById(EMachineId InMachineID, FText& OutMachineName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMachineName(EMachineId InFrontPartsId, EMachineId InRearPartsId, FText& OutMachineName);
    
    UFUNCTION(BlueprintCallable)
    static void GetMachineIdsCarStatusTypeEqualList(const TArray<EMachineId>& InMachineIds, ECarStatusType InCarStatusType, TArray<EMachineId>& OutMachineIds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMachineGlowSelectDataList(TArray<FMachineGlowSelectData>& OutMachineGlowSelectDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMachineGlowNameById(int32 InMachineGlowId, FText& OutMachineGlowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMachineGlowById(int32 InMachineGlowId, FLinearColor& OutMachineGlow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMachineCustomizeTabNewFlags(ECarStatusType InMachineType, TArray<bool>& bTabNewStates);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMachineCustomizeDataDebugStr(const FUserMachineCustomizeData& InMachineCustomizeData, FString& OutDebugStr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMachineCustomizeDataById(EMachineId InMachineID, FUserMachineCustomizeData& OutUserMachineCustomizeData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMachineColorSelectDataList(TArray<FMachineColorSelectData>& OutMachineColorSelectDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMachineColorNameById(int32 InMachineColorId, FText& OutMachineColorName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMachineColorById(int32 InMachineColorId, FLinearColor& OutMachineColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMachineColorAreaSettingUIData(const FUserMachineCustomizeData& InCustomizeData, const FMachineColorAreaTextUIData& InTextData, FMachineColorAreaSettingUIData& OutUIData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetHornDataForID(EMachineHornType InHornID, FHornData& OutHornData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetHornData(const FText& InName, FHornData& OutHornData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetGadgetUIDataList2Layout(TArray<FGadgetUIData2>& OutDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetGadgetUIDataList2(TArray<FGadgetUIData2>& OutGadgetUIDataList);
    
    UFUNCTION(BlueprintCallable)
    static void GetGadgetUIDataList(TArray<FGadgetUIData>& OutGadgetUIDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetGadgetUIData2(EGadgetId InGadgetId, FGadgetUIData2& OutGadgetUIData);
    
    UFUNCTION(BlueprintCallable)
    static void GetGadgetUIData(EGadgetId InGadgetId, FGadgetUIData& OutGadgetUIData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetGadgetSlotStateLocked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetGadgetSlotStateFilled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetGadgetSelectWindowSizeY();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetGadgetSelectWindowSizeX();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetGadgetSaveData(const EGadgetId InGadgetId, FUserItemProperty& OutGadgetSaveData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetGadgetPlateUIData(int32 InPlayerIndex, int32 InGadgetPresetIndex, FGadgetPlateUIData& outGadgetPlateUIData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetGadgetPlateSizeY();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetGadgetPlateSizeX();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGadgetPlateId GetGadgetPlateIdFromTotalRaceCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGadgetPlateId GetGadgetPlateId(const int32 InTotalRaceCount);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetGadgetPlateGaugeBaseValue(const EGadgetPlateId InPlateId, int32 InRaceCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetGadgetPlateDataList(TArray<FGadgetPlateData>& OutGadgetPlateDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetGadgetPlateData(EGadgetPlateId InGadgetPlateId, FGadgetPlateData& OutGadgetPlateData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetGadgetNum(EGadgetId InGadgetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGadgetPlateFromState GetGadgetFromState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetGadgetFragmentNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetGadgetDataList(TArray<FGadgetData>& OutGadgetDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetGadgetData(const EGadgetId InGadgetId, FGadgetData& OutGadgetData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetGadgetCustomCategoryData(EGadgetCategory InCategory, FGadgetCustomCategoryColor& OutCategoryData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetFullDesignStickerSurfaceId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetFullDesignStickerColorId();
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* GetFrontStickerUVTexture(EMachineId MachineId);
    
    UFUNCTION(BlueprintCallable)
    static FBox2D GetFrontStickerMoveRange(EMachineId MachineId);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetFrontStickerInitialLocation(EMachineId MachineId);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FExtraStickerData> GetFrontExtraStickerData(EMachineId MachineId);
    
    UFUNCTION(BlueprintCallable)
    static void GetEnableMachineIds(TArray<EMachineId>& OutMachineIds);
    
    UFUNCTION(BlueprintCallable)
    static void GetEnableColorPresetIgnoreGroupRaceIds(TArray<EMachineColorPresetId>& OutColorPresetIds);
    
    UFUNCTION(BlueprintCallable)
    static void GetEnableColorPresetIds(TArray<EMachineColorPresetId>& OutColorPresetIds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDefaultStickerSurfaceId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDefaultStickerColorId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetDefaultMachineCustomizeData(ECarStatusType InMachineType, FUserMachineCustomizeData& OutCustomizeData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetDefaultGadgetSlotStates(EGadgetPlateId InPlateId, TArray<int32>& OutSlotStates);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetDebugGadgetPlateUIData(const TArray<EGadgetId>& InGadgetIds, FGadgetPlateUIData& OutPlateUIData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCustomMachineHornNew(EMachineHornType InHornType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELockType GetCustomMachineHornLockType(EMachineHornType InHornType);
    
    UFUNCTION(BlueprintCallable)
    static ECarStatusType GetCarStatusType(EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetBasicMachineIds(TArray<EMachineId>& OutMachineIds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftObjectPtr<UTexture2D> GetBasicMachineIconTextureById(EMachineId InMachineID, bool bIsBig);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAuraDataForID(EMachineAuraId InAuraID, FAuraData& OutAuraData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAuraData(const FText& InName, FAuraData& OutAuraData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAttachGadgetToPlateMockup(int32 InPlayerIndex, EGadgetId InGadgetId, int32 InSlotIndex, int32& OutAttachableSlotIndex, FGadgetPlateUIData& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAttachableGadgetSlotIndex(EGadgetId InGadgetId, int32 InSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAttachableGadgetIds(int32 InSlotIndex, TArray<EGadgetId>& OutGadgetIds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAssemblyMachinePartsNum(ECarStatusType InCarStatusType, EMachinePartsType InMachinePartsType);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAllPartsAcquiredCount(ECarStatusType InStatusType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GadgetPlateUIDataEquals(const FGadgetPlateUIData& InData0, const FGadgetPlateUIData& InData1);
    
    UFUNCTION(BlueprintCallable)
    static bool DisableStickerNewFlags();
    
    UFUNCTION(BlueprintCallable)
    static bool DisablePartsListNewFlagByType(ECarStatusType InMachineType);
    
    UFUNCTION(BlueprintCallable)
    static bool DisableMachineColorPresetNewFlags();
    
    UFUNCTION(BlueprintCallable)
    static void DisableDisplayedGadgetNewFlags();
    
    UFUNCTION(BlueprintCallable)
    static void DisableCompleteMachineNewFlags();
    
    UFUNCTION(BlueprintCallable)
    static void DecrementSelectedGadgetPresetId(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool DebugOverwriteMachineColorDataTableRow(UDataTable* DataTable, const FName& RowName, const FMachineColorParam& RowData);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_StoreAllSticker();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_StoreAllMachineParts();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_StoreAllMachineAssembly();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_StoreAllHorn();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_StoreAllAura();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_FillInMachineCustomizeData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertUserGadgetPresetDataToSlotStates(const FUserGadgetPresetData& InUserGadgetPresetData, TArray<int32>& OutSlotStates);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertGadgetSlotStatesToPlateUIData(const TArray<int32>& InSlotStates, FGadgetPlateUIData& OutPlateUIData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertGadgetSlotStatesToIds(const TArray<int32>& InSlotStates, TArray<EGadgetId>& OutGadgetIds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ConvertGadgetSlotLocationToIndex(int32 InSlotLocationX, int32 InSlotLocationY);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertGadgetSlotIndexToLocation(int32 InSlotIndex, int32& OutSlotLocationX, int32& OutSlotLocationY);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertGadgetPlateUIDataToSlotStates(const FGadgetPlateUIData& InPlateUIData, TArray<int32>& OutSlotStates);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertGadgetPlateUIDataToIds(const FGadgetPlateUIData& InPlateUIData, TArray<EGadgetId>& OutGadgetIds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckTirePartsComplete(ECarStatusType InStatusType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckRearPartsComplete(ECarStatusType InStatusType);
    
    UFUNCTION(BlueprintCallable)
    static int32 CheckPartsCompleteAll();
    
    UFUNCTION(BlueprintCallable)
    static bool CheckPartsComplete(ECarStatusType InStatusType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckFrontPartsComplete(ECarStatusType InStatusType);
    
    UFUNCTION(BlueprintCallable)
    static int32 CheckCourseIconStickerCompleteAll();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanUseGadgetFromSaveData(const EGadgetId InGadgetId);
    
    UFUNCTION(BlueprintCallable)
    static int32 AttachGadgetToPlate(int32 InPlayerIndex, EGadgetId InGadgetId, int32 InSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    static void AddTirePartsById(EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable)
    static void AddRearPartsById(EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable)
    static void AddMachineParts(EMachineId InMachineID, EMachinePartsType InMachinePartsType);
    
    UFUNCTION(BlueprintCallable)
    static void AddFrontPartsById(EMachineId InMachineID);
    
};

