#include "MachineCustomizeUtilityLibrary.h"

UMachineCustomizeUtilityLibrary::UMachineCustomizeUtilityLibrary() {
}

void UMachineCustomizeUtilityLibrary::UpdateGadgetSlotNumInUserData() {
}

void UMachineCustomizeUtilityLibrary::UpdateChallengeMachineParts(ECarStatusType InStatusType) {
}

void UMachineCustomizeUtilityLibrary::UnlockMachinePresetColor(EMachineId InMachineID) {
}

void UMachineCustomizeUtilityLibrary::UnlockGadgetAll() {
}

void UMachineCustomizeUtilityLibrary::StoreAllSticker() {
}

void UMachineCustomizeUtilityLibrary::StoreAllMachineParts() {
}

void UMachineCustomizeUtilityLibrary::StoreAllMachineAssembly() {
}

void UMachineCustomizeUtilityLibrary::StoreAllHorn() {
}

void UMachineCustomizeUtilityLibrary::StoreAllAura() {
}

void UMachineCustomizeUtilityLibrary::SortStickerData(TArray<FStickerSortData>& OutStickerSortedData, bool IsAscendingOrder) {
}

void UMachineCustomizeUtilityLibrary::SetSelectedGadgetPlateUIData(int32 InPlayerIndex, const FGadgetPlateUIData& InGadgetPlateUIData) {
}

void UMachineCustomizeUtilityLibrary::SetMachineCustomizeDataById(EMachineId InMachineID, const FUserMachineCustomizeData& InUserMachineCustomizeData) {
}

void UMachineCustomizeUtilityLibrary::SetGadgetPlateUIData(int32 InPlayerIndex, int32 InGadgetPresetIndex, const FGadgetPlateUIData& InGadgetPlateUIData) {
}

void UMachineCustomizeUtilityLibrary::SetGadgetNum(EGadgetId InGadgetId, int32 InGadgetNum) {
}

void UMachineCustomizeUtilityLibrary::SetGadgetFromState(EGadgetPlateFromState InState) {
}

void UMachineCustomizeUtilityLibrary::SetGadgetFragmentNum(int32 InGadgetFragmentNum) {
}

void UMachineCustomizeUtilityLibrary::SetCustomMachineHornNew(EMachineHornType InHornType, bool IsFlag) {
}

void UMachineCustomizeUtilityLibrary::SetCustomMachineHornLockType(EMachineHornType InHornType, ELockType InLockType) {
}

void UMachineCustomizeUtilityLibrary::SetCurrentGadgetPlateIdUseId(EGadgetPlateId plateId) {
}

FUserMachineCustomizeData UMachineCustomizeUtilityLibrary::SetAllMachineColorsByMode(const FUserMachineCustomizeData& InMachineCustomizeData) {
    return FUserMachineCustomizeData{};
}

FUserMachineCustomizeData UMachineCustomizeUtilityLibrary::SetAllMachineColorsAsPreset(EMachineColorPresetId InMachineColorPresetId, const FUserMachineCustomizeData& InMachineCustomizeData) {
    return FUserMachineCustomizeData{};
}

FUserMachineCustomizeData UMachineCustomizeUtilityLibrary::SetAllMachineColorsAsDefault(EMachineId InMachineID, const FUserMachineCustomizeData& InMachineCustomizeData) {
    return FUserMachineCustomizeData{};
}

bool UMachineCustomizeUtilityLibrary::NewMachineStickerExists() {
    return false;
}

bool UMachineCustomizeUtilityLibrary::NewMachineRandomElementExists() {
    return false;
}

bool UMachineCustomizeUtilityLibrary::NewMachinePartsExists(ECarStatusType InMachineType) {
    return false;
}

bool UMachineCustomizeUtilityLibrary::NewMachineHornExists() {
    return false;
}

bool UMachineCustomizeUtilityLibrary::NewMachineColorPresetExists() {
    return false;
}

bool UMachineCustomizeUtilityLibrary::NewMachineAuraExists() {
    return false;
}

bool UMachineCustomizeUtilityLibrary::NewGadgetExists() {
    return false;
}

bool UMachineCustomizeUtilityLibrary::MachineCustomizeDataEquals(const FUserMachineCustomizeData& InData0, const FUserMachineCustomizeData& InData1) {
    return false;
}

void UMachineCustomizeUtilityLibrary::LockGadgetAll() {
}

void UMachineCustomizeUtilityLibrary::LockGadget(const EGadgetId InGadgetId) {
}

void UMachineCustomizeUtilityLibrary::LoadTirePartsById(EMachineId InMachineID, FMachinePartsUIData& OutTirePartsUIData) {
}

void UMachineCustomizeUtilityLibrary::LoadRearPartsById(EMachineId InMachineID, FMachinePartsUIData& OutRearPartsUIData) {
}

void UMachineCustomizeUtilityLibrary::LoadFrontPartsById(EMachineId InMachineID, FMachinePartsUIData& OutFrontPartsUIData) {
}

bool UMachineCustomizeUtilityLibrary::IsValidMachineCustomizeData(EMachineId InMachineID) {
    return false;
}

bool UMachineCustomizeUtilityLibrary::IsStickerChanged(const TArray<FUserStickerData>& InPrevStickerDataList, const TArray<FUserStickerData>& InCurrentStickerDataList) {
    return false;
}

bool UMachineCustomizeUtilityLibrary::IsPossibleMachineCustomizeByAssemblyMachineParts() {
    return false;
}

bool UMachineCustomizeUtilityLibrary::IsMaxLevelGadgetPlateId(const EGadgetPlateId InPlateId) {
    return false;
}

bool UMachineCustomizeUtilityLibrary::IsMachineNew(EMachineId InMachineID) {
    return false;
}

bool UMachineCustomizeUtilityLibrary::IsMachineIdOfCarStatusTypeId(EMachineId InMachineID, ECarStatusType InCarStatusType) {
    return false;
}

bool UMachineCustomizeUtilityLibrary::IsGadgetKit(const EGadgetCategory InGadgetCategory) {
    return false;
}

bool UMachineCustomizeUtilityLibrary::IsAttachableGadgetId(const FGadgetPlateUIData& InGadgetPresetData, const EGadgetId& InGadgetId, const int32 InSlotIndex) {
    return false;
}

void UMachineCustomizeUtilityLibrary::IntegrityCheckMachineAssemblyDataGadgetList() {
}

void UMachineCustomizeUtilityLibrary::InitMachineAssemblyDataGadgetPlatePreset() {
}

void UMachineCustomizeUtilityLibrary::InitMachineAssemblyDataGadgetList() {
}

void UMachineCustomizeUtilityLibrary::InitMachineAssemblyData() {
}

void UMachineCustomizeUtilityLibrary::IncrementSelectedGadgetPresetId(int32 InPlayerIndex) {
}

bool UMachineCustomizeUtilityLibrary::HasEnoughGadgetFragments() {
    return false;
}

bool UMachineCustomizeUtilityLibrary::HasAnyGadgets() {
    return false;
}

void UMachineCustomizeUtilityLibrary::GiveSticker(int32 InStickerId) {
}

void UMachineCustomizeUtilityLibrary::GiveGadget(const EGadgetId InGadgetId) {
}

void UMachineCustomizeUtilityLibrary::GetWirelessLobbyGadgetIds(const int32 InPlayerIndex, TArray<EGadgetId>& OutGadgetIds) {
}

void UMachineCustomizeUtilityLibrary::GetVisibleGadgetIdsToGadgetPlate(TArray<EGadgetId>& OutGadgetIds) {
}

void UMachineCustomizeUtilityLibrary::GetVisibleGadgetIdsToGadgetCustomWindow(TArray<EGadgetId>& OutGadgetIds) {
}

int32 UMachineCustomizeUtilityLibrary::GetUsedCustomMachineNum() {
    return 0;
}

void UMachineCustomizeUtilityLibrary::GetStickerUIDataList(TArray<FStickerUIData>& OutStickerUIDataList) {
}

void UMachineCustomizeUtilityLibrary::GetStickerUIData(int32 InStickerId, FStickerUIData& OutStickerUIData) {
}

float UMachineCustomizeUtilityLibrary::GetStickerBaseOutsideSize() {
    return 0.0f;
}

float UMachineCustomizeUtilityLibrary::GetStickerBaseInsideSize() {
    return 0.0f;
}

float UMachineCustomizeUtilityLibrary::GetStickerBaseInitSize() {
    return 0.0f;
}

void UMachineCustomizeUtilityLibrary::GetSelectedGadgetPlateUIData(int32 InPlayerIndex, FGadgetPlateUIData& outGadgetPlateUIData) {
}

void UMachineCustomizeUtilityLibrary::GetSelectedGadgetIds(int32 InPlayerIndex, TArray<EGadgetId>& OutGadgetIds) {
}

int32 UMachineCustomizeUtilityLibrary::GetSelectableMachineIndex(ECarStatusType InMachineType, EMachineId InMachineID, bool bInIncludeBasicMachines, bool bInIncludeUnusedCustomMachines, bool bInIncludeSimpleCustomMachines, int32 InPlayerIndex) {
    return 0;
}

void UMachineCustomizeUtilityLibrary::GetSelectableMachineIds(ECarStatusType InMachineType, bool bInIncludeBasicMachines, bool bInIncludeUnusedCustomMachines, bool bInIncludeSimpleCustomMachines, int32 InPlayerIndex, TArray<EMachineId>& OutMachineIds) {
}

void UMachineCustomizeUtilityLibrary::GetSelectableMachineColorPresets(TArray<FMachineColorPresetUIData>& OutPresets) {
}

int32 UMachineCustomizeUtilityLibrary::GetRequiredGadgetFragmentNum() {
    return 0;
}

EGadgetPlateId UMachineCustomizeUtilityLibrary::GetRentalGadgetPlateId() {
    return EGadgetPlateId::Rank0;
}

int32 UMachineCustomizeUtilityLibrary::GetRemainingRaceNumToGadgetPlate(int32 InSlotIndex) {
    return 0;
}

UTexture2D* UMachineCustomizeUtilityLibrary::GetRearStickerUVTexture(EMachineId MachineId) {
    return NULL;
}

FBox2D UMachineCustomizeUtilityLibrary::GetRearStickerMoveRange(EMachineId MachineId) {
    return FBox2D{};
}

FVector UMachineCustomizeUtilityLibrary::GetRearStickerInitialLocation(EMachineId MachineId) {
    return FVector{};
}

TArray<FExtraStickerData> UMachineCustomizeUtilityLibrary::GetRearExtraStickerData(EMachineId MachineId) {
    return TArray<FExtraStickerData>();
}

void UMachineCustomizeUtilityLibrary::GetPlaceableGadgetIds(EGadgetPlateId InPlateId, int32 InSlotIndex, TArray<EGadgetId>& OutGadgetIds) {
}

EGadgetPlateId UMachineCustomizeUtilityLibrary::GetNormalGadgetPlateMaxId() {
    return EGadgetPlateId::Rank0;
}

int32 UMachineCustomizeUtilityLibrary::GetNextGadgetPlateRaceNum() {
    return 0;
}

int32 UMachineCustomizeUtilityLibrary::GetNextGadgetPlateIdRaceCount(EGadgetPlateId InEGadgetPlateId, int32 InRaceCount, UDataTable* GadgetPlateDataTable) {
    return 0;
}

EGadgetPlateId UMachineCustomizeUtilityLibrary::GetNextGadgetPlateId(const EGadgetPlateId InPlateId) {
    return EGadgetPlateId::Rank0;
}

int32 UMachineCustomizeUtilityLibrary::GetMaxGadgetPresetNum() {
    return 0;
}

int32 UMachineCustomizeUtilityLibrary::GetMaxGadgetPresetIndex() {
    return 0;
}

int32 UMachineCustomizeUtilityLibrary::GetMaxGadgetNum() {
    return 0;
}

void UMachineCustomizeUtilityLibrary::GetMachineTypeNameByMachineId(EMachineId InMachineID, FText& OutName) {
}

void UMachineCustomizeUtilityLibrary::GetMachineTypeName(ECarStatusType InMachineType, FText& OutName) {
}

void UMachineCustomizeUtilityLibrary::GetMachineSurfaceSelectDataList(TArray<FMachineSurfaceSelectData>& OutMachineSurfaceSelectDataList) {
}

void UMachineCustomizeUtilityLibrary::GetMachineSurfaceNameById(int32 InMachineSurfaceId, FText& OutMachineSurfaceName) {
}

void UMachineCustomizeUtilityLibrary::GetMachinePartsStickerUIDataList(EMachineId InMachineID, EMachinePartsType InMachinePartsType, TArray<FStickerUIData>& OutStickerUIDataList) {
}

void UMachineCustomizeUtilityLibrary::GetMachinePartsDataById(EMachineId InMachineID, FMachinePartsData& OutMachinePartsData) {
}

void UMachineCustomizeUtilityLibrary::GetMachineNameById(EMachineId InMachineID, FText& OutMachineName) {
}

void UMachineCustomizeUtilityLibrary::GetMachineName(EMachineId InFrontPartsId, EMachineId InRearPartsId, FText& OutMachineName) {
}

void UMachineCustomizeUtilityLibrary::GetMachineIdsCarStatusTypeEqualList(const TArray<EMachineId>& InMachineIds, ECarStatusType InCarStatusType, TArray<EMachineId>& OutMachineIds) {
}

void UMachineCustomizeUtilityLibrary::GetMachineGlowSelectDataList(TArray<FMachineGlowSelectData>& OutMachineGlowSelectDataList) {
}

void UMachineCustomizeUtilityLibrary::GetMachineGlowNameById(int32 InMachineGlowId, FText& OutMachineGlowName) {
}

void UMachineCustomizeUtilityLibrary::GetMachineGlowById(int32 InMachineGlowId, FLinearColor& OutMachineGlow) {
}

void UMachineCustomizeUtilityLibrary::GetMachineCustomizeTabNewFlags(ECarStatusType InMachineType, TArray<bool>& bTabNewStates) {
}

void UMachineCustomizeUtilityLibrary::GetMachineCustomizeDataDebugStr(const FUserMachineCustomizeData& InMachineCustomizeData, FString& OutDebugStr) {
}

void UMachineCustomizeUtilityLibrary::GetMachineCustomizeDataById(EMachineId InMachineID, FUserMachineCustomizeData& OutUserMachineCustomizeData) {
}

void UMachineCustomizeUtilityLibrary::GetMachineColorSelectDataList(TArray<FMachineColorSelectData>& OutMachineColorSelectDataList) {
}

void UMachineCustomizeUtilityLibrary::GetMachineColorNameById(int32 InMachineColorId, FText& OutMachineColorName) {
}

void UMachineCustomizeUtilityLibrary::GetMachineColorById(int32 InMachineColorId, FLinearColor& OutMachineColor) {
}

void UMachineCustomizeUtilityLibrary::GetMachineColorAreaSettingUIData(const FUserMachineCustomizeData& InCustomizeData, const FMachineColorAreaTextUIData& InTextData, FMachineColorAreaSettingUIData& OutUIData) {
}

bool UMachineCustomizeUtilityLibrary::GetHornDataForID(EMachineHornType InHornID, FHornData& OutHornData) {
    return false;
}

bool UMachineCustomizeUtilityLibrary::GetHornData(const FText& InName, FHornData& OutHornData) {
    return false;
}

void UMachineCustomizeUtilityLibrary::GetGadgetUIDataList2Layout(TArray<FGadgetUIData2>& OutDataList) {
}

void UMachineCustomizeUtilityLibrary::GetGadgetUIDataList2(TArray<FGadgetUIData2>& OutGadgetUIDataList) {
}

void UMachineCustomizeUtilityLibrary::GetGadgetUIDataList(TArray<FGadgetUIData>& OutGadgetUIDataList) {
}

void UMachineCustomizeUtilityLibrary::GetGadgetUIData2(EGadgetId InGadgetId, FGadgetUIData2& OutGadgetUIData) {
}

void UMachineCustomizeUtilityLibrary::GetGadgetUIData(EGadgetId InGadgetId, FGadgetUIData& OutGadgetUIData) {
}

int32 UMachineCustomizeUtilityLibrary::GetGadgetSlotStateLocked() {
    return 0;
}

int32 UMachineCustomizeUtilityLibrary::GetGadgetSlotStateFilled() {
    return 0;
}

int32 UMachineCustomizeUtilityLibrary::GetGadgetSelectWindowSizeY() {
    return 0;
}

int32 UMachineCustomizeUtilityLibrary::GetGadgetSelectWindowSizeX() {
    return 0;
}

bool UMachineCustomizeUtilityLibrary::GetGadgetSaveData(const EGadgetId InGadgetId, FUserItemProperty& OutGadgetSaveData) {
    return false;
}

void UMachineCustomizeUtilityLibrary::GetGadgetPlateUIData(int32 InPlayerIndex, int32 InGadgetPresetIndex, FGadgetPlateUIData& outGadgetPlateUIData) {
}

int32 UMachineCustomizeUtilityLibrary::GetGadgetPlateSizeY() {
    return 0;
}

int32 UMachineCustomizeUtilityLibrary::GetGadgetPlateSizeX() {
    return 0;
}

EGadgetPlateId UMachineCustomizeUtilityLibrary::GetGadgetPlateIdFromTotalRaceCount() {
    return EGadgetPlateId::Rank0;
}

EGadgetPlateId UMachineCustomizeUtilityLibrary::GetGadgetPlateId(const int32 InTotalRaceCount) {
    return EGadgetPlateId::Rank0;
}

int32 UMachineCustomizeUtilityLibrary::GetGadgetPlateGaugeBaseValue(const EGadgetPlateId InPlateId, int32 InRaceCount) {
    return 0;
}

void UMachineCustomizeUtilityLibrary::GetGadgetPlateDataList(TArray<FGadgetPlateData>& OutGadgetPlateDataList) {
}

void UMachineCustomizeUtilityLibrary::GetGadgetPlateData(EGadgetPlateId InGadgetPlateId, FGadgetPlateData& OutGadgetPlateData) {
}

int32 UMachineCustomizeUtilityLibrary::GetGadgetNum(EGadgetId InGadgetId) {
    return 0;
}

EGadgetPlateFromState UMachineCustomizeUtilityLibrary::GetGadgetFromState() {
    return EGadgetPlateFromState::NONE;
}

int32 UMachineCustomizeUtilityLibrary::GetGadgetFragmentNum() {
    return 0;
}

void UMachineCustomizeUtilityLibrary::GetGadgetDataList(TArray<FGadgetData>& OutGadgetDataList) {
}

bool UMachineCustomizeUtilityLibrary::GetGadgetData(const EGadgetId InGadgetId, FGadgetData& OutGadgetData) {
    return false;
}

void UMachineCustomizeUtilityLibrary::GetGadgetCustomCategoryData(EGadgetCategory InCategory, FGadgetCustomCategoryColor& OutCategoryData) {
}

int32 UMachineCustomizeUtilityLibrary::GetFullDesignStickerSurfaceId() {
    return 0;
}

int32 UMachineCustomizeUtilityLibrary::GetFullDesignStickerColorId() {
    return 0;
}

UTexture2D* UMachineCustomizeUtilityLibrary::GetFrontStickerUVTexture(EMachineId MachineId) {
    return NULL;
}

FBox2D UMachineCustomizeUtilityLibrary::GetFrontStickerMoveRange(EMachineId MachineId) {
    return FBox2D{};
}

FVector UMachineCustomizeUtilityLibrary::GetFrontStickerInitialLocation(EMachineId MachineId) {
    return FVector{};
}

TArray<FExtraStickerData> UMachineCustomizeUtilityLibrary::GetFrontExtraStickerData(EMachineId MachineId) {
    return TArray<FExtraStickerData>();
}

void UMachineCustomizeUtilityLibrary::GetEnableMachineIds(TArray<EMachineId>& OutMachineIds) {
}

void UMachineCustomizeUtilityLibrary::GetEnableColorPresetIgnoreGroupRaceIds(TArray<EMachineColorPresetId>& OutColorPresetIds) {
}

void UMachineCustomizeUtilityLibrary::GetEnableColorPresetIds(TArray<EMachineColorPresetId>& OutColorPresetIds) {
}

int32 UMachineCustomizeUtilityLibrary::GetDefaultStickerSurfaceId() {
    return 0;
}

int32 UMachineCustomizeUtilityLibrary::GetDefaultStickerColorId() {
    return 0;
}

void UMachineCustomizeUtilityLibrary::GetDefaultMachineCustomizeData(ECarStatusType InMachineType, FUserMachineCustomizeData& OutCustomizeData) {
}

void UMachineCustomizeUtilityLibrary::GetDefaultGadgetSlotStates(EGadgetPlateId InPlateId, TArray<int32>& OutSlotStates) {
}

void UMachineCustomizeUtilityLibrary::GetDebugGadgetPlateUIData(const TArray<EGadgetId>& InGadgetIds, FGadgetPlateUIData& OutPlateUIData) {
}

bool UMachineCustomizeUtilityLibrary::GetCustomMachineHornNew(EMachineHornType InHornType) {
    return false;
}

ELockType UMachineCustomizeUtilityLibrary::GetCustomMachineHornLockType(EMachineHornType InHornType) {
    return ELockType::None;
}

ECarStatusType UMachineCustomizeUtilityLibrary::GetCarStatusType(EMachineId InMachineID) {
    return ECarStatusType::CarStatusSpeed;
}

void UMachineCustomizeUtilityLibrary::GetBasicMachineIds(TArray<EMachineId>& OutMachineIds) {
}

TSoftObjectPtr<UTexture2D> UMachineCustomizeUtilityLibrary::GetBasicMachineIconTextureById(EMachineId InMachineID, bool bIsBig) {
    return NULL;
}

bool UMachineCustomizeUtilityLibrary::GetAuraDataForID(EMachineAuraId InAuraID, FAuraData& OutAuraData) {
    return false;
}

bool UMachineCustomizeUtilityLibrary::GetAuraData(const FText& InName, FAuraData& OutAuraData) {
    return false;
}

void UMachineCustomizeUtilityLibrary::GetAttachGadgetToPlateMockup(int32 InPlayerIndex, EGadgetId InGadgetId, int32 InSlotIndex, int32& OutAttachableSlotIndex, FGadgetPlateUIData& OutResult) {
}

int32 UMachineCustomizeUtilityLibrary::GetAttachableGadgetSlotIndex(EGadgetId InGadgetId, int32 InSlotIndex) {
    return 0;
}

void UMachineCustomizeUtilityLibrary::GetAttachableGadgetIds(int32 InSlotIndex, TArray<EGadgetId>& OutGadgetIds) {
}

int32 UMachineCustomizeUtilityLibrary::GetAssemblyMachinePartsNum(ECarStatusType InCarStatusType, EMachinePartsType InMachinePartsType) {
    return 0;
}

int32 UMachineCustomizeUtilityLibrary::GetAllPartsAcquiredCount(ECarStatusType InStatusType) {
    return 0;
}

bool UMachineCustomizeUtilityLibrary::GadgetPlateUIDataEquals(const FGadgetPlateUIData& InData0, const FGadgetPlateUIData& InData1) {
    return false;
}

bool UMachineCustomizeUtilityLibrary::DisableStickerNewFlags() {
    return false;
}

bool UMachineCustomizeUtilityLibrary::DisablePartsListNewFlagByType(ECarStatusType InMachineType) {
    return false;
}

bool UMachineCustomizeUtilityLibrary::DisableMachineColorPresetNewFlags() {
    return false;
}

void UMachineCustomizeUtilityLibrary::DisableDisplayedGadgetNewFlags() {
}

void UMachineCustomizeUtilityLibrary::DisableCompleteMachineNewFlags() {
}

void UMachineCustomizeUtilityLibrary::DecrementSelectedGadgetPresetId(int32 InPlayerIndex) {
}

bool UMachineCustomizeUtilityLibrary::DebugOverwriteMachineColorDataTableRow(UDataTable* DataTable, const FName& RowName, const FMachineColorParam& RowData) {
    return false;
}

void UMachineCustomizeUtilityLibrary::Debug_StoreAllSticker() {
}

void UMachineCustomizeUtilityLibrary::Debug_StoreAllMachineParts() {
}

void UMachineCustomizeUtilityLibrary::Debug_StoreAllMachineAssembly() {
}

void UMachineCustomizeUtilityLibrary::Debug_StoreAllHorn() {
}

void UMachineCustomizeUtilityLibrary::Debug_StoreAllAura() {
}

void UMachineCustomizeUtilityLibrary::Debug_FillInMachineCustomizeData() {
}

void UMachineCustomizeUtilityLibrary::ConvertUserGadgetPresetDataToSlotStates(const FUserGadgetPresetData& InUserGadgetPresetData, TArray<int32>& OutSlotStates) {
}

void UMachineCustomizeUtilityLibrary::ConvertGadgetSlotStatesToPlateUIData(const TArray<int32>& InSlotStates, FGadgetPlateUIData& OutPlateUIData) {
}

void UMachineCustomizeUtilityLibrary::ConvertGadgetSlotStatesToIds(const TArray<int32>& InSlotStates, TArray<EGadgetId>& OutGadgetIds) {
}

int32 UMachineCustomizeUtilityLibrary::ConvertGadgetSlotLocationToIndex(int32 InSlotLocationX, int32 InSlotLocationY) {
    return 0;
}

void UMachineCustomizeUtilityLibrary::ConvertGadgetSlotIndexToLocation(int32 InSlotIndex, int32& OutSlotLocationX, int32& OutSlotLocationY) {
}

void UMachineCustomizeUtilityLibrary::ConvertGadgetPlateUIDataToSlotStates(const FGadgetPlateUIData& InPlateUIData, TArray<int32>& OutSlotStates) {
}

void UMachineCustomizeUtilityLibrary::ConvertGadgetPlateUIDataToIds(const FGadgetPlateUIData& InPlateUIData, TArray<EGadgetId>& OutGadgetIds) {
}

bool UMachineCustomizeUtilityLibrary::CheckTirePartsComplete(ECarStatusType InStatusType) {
    return false;
}

bool UMachineCustomizeUtilityLibrary::CheckRearPartsComplete(ECarStatusType InStatusType) {
    return false;
}

int32 UMachineCustomizeUtilityLibrary::CheckPartsCompleteAll() {
    return 0;
}

bool UMachineCustomizeUtilityLibrary::CheckPartsComplete(ECarStatusType InStatusType) {
    return false;
}

bool UMachineCustomizeUtilityLibrary::CheckFrontPartsComplete(ECarStatusType InStatusType) {
    return false;
}

int32 UMachineCustomizeUtilityLibrary::CheckCourseIconStickerCompleteAll() {
    return 0;
}

bool UMachineCustomizeUtilityLibrary::CanUseGadgetFromSaveData(const EGadgetId InGadgetId) {
    return false;
}

int32 UMachineCustomizeUtilityLibrary::AttachGadgetToPlate(int32 InPlayerIndex, EGadgetId InGadgetId, int32 InSlotIndex) {
    return 0;
}

void UMachineCustomizeUtilityLibrary::AddTirePartsById(EMachineId InMachineID) {
}

void UMachineCustomizeUtilityLibrary::AddRearPartsById(EMachineId InMachineID) {
}

void UMachineCustomizeUtilityLibrary::AddMachineParts(EMachineId InMachineID, EMachinePartsType InMachinePartsType) {
}

void UMachineCustomizeUtilityLibrary::AddFrontPartsById(EMachineId InMachineID) {
}


