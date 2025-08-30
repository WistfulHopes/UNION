#include "MachineUtilityLibrary.h"

UMachineUtilityLibrary::UMachineUtilityLibrary() {
}

void UMachineUtilityLibrary::ShowMaterialSection(USkeletalMeshComponent* MeshComponent, FName MaterialSlotName, bool bShow) {
}

void UMachineUtilityLibrary::SetSurfaceParameter(UMaterialInstanceDynamic* Mid, const FMachineSurfaceParam& Param, int32 AreaNo) {
}

void UMachineUtilityLibrary::SetStickerTexture(UMaterialInstanceDynamic* Mid, UTexture* StickerTexture) {
}

void UMachineUtilityLibrary::SetGlowParameter(UMaterialInstanceDynamic* Mid, const FMachineGlowParam& Param) {
}

void UMachineUtilityLibrary::SetColorParameter(UMaterialInstanceDynamic* Mid, const FMachineColorParam& Param, int32 AreaNo) {
}

bool UMachineUtilityLibrary::IsValidEmissiveTexture(UMaterialInstanceDynamic* Mid) {
    return false;
}

bool UMachineUtilityLibrary::IsRearUnitIndex(uint8 UnitIndex) {
    return false;
}

bool UMachineUtilityLibrary::IsFrontUnitIndex(uint8 UnitIndex) {
    return false;
}

void UMachineUtilityLibrary::GetSidePartsPathByMachineId(EMachineId FrontPartsId, EMachineId RearPartsId, FSoftObjectPath& OutPath) {
}

void UMachineUtilityLibrary::GetSidePartsPath(ECarStatusType InCarStatusType, int32 InFrontPartsNo, int32 InRearPartsNo, FName ExtndName, FSoftObjectPath& OutPath) {
}

void UMachineUtilityLibrary::GetRootPath(FName ExtndName, FString& OutPath) {
}

void UMachineUtilityLibrary::GetPrimaryAssetIdsByRacerIndex(int32 InRacerIndex, TArray<FPrimaryAssetId>& OutPrimaryAssetIds) {
}

void UMachineUtilityLibrary::GetPrimaryAssetIdsByCustomizeData(const FUserMachineCustomizeData& MachineCustomizeData, TArray<FPrimaryAssetId>& OutPrimaryAssetIds) {
}

void UMachineUtilityLibrary::GetMachinePartsData(EMachineId InMachineID, FMachinePartsData& OutMachinePartsData) {
}

void UMachineUtilityLibrary::GetExtndName(const FString& FrontPartsName, const FString& RearPartsName, FString& OutExtndName) {
}

EMachineColorPresetId UMachineUtilityLibrary::GetColorPresetId(EMachineId InMachineID) {
    return EMachineColorPresetId::ColorPreset01;
}

int32 UMachineUtilityLibrary::GetColorAreaNo(EMachineColorArea ColorArea) {
    return 0;
}

void UMachineUtilityLibrary::GetCenterPartsPathByMachineId(EMachineId FrontPartsId, EMachineId RearPartsId, FSoftObjectPath& OutPath) {
}

void UMachineUtilityLibrary::GetCenterPartsPath(int32 InFrontPartsNo, EMachinePartsSize InFrontPartsSize, int32 InRearPartsNo, EMachinePartsSize InRearPartsSize, FName ExtndName, FSoftObjectPath& OutPath) {
}

void UMachineUtilityLibrary::ConvPartsNo(EMachineId MachineId, int32 InFrontPartsNo, int32 InRearPartsNo, int32& OutFrontPartsNo, int32& OutRearPartsNo, bool& bUseCommonSideParts) {
}


