#include "UnionAssetPreloaderSubsystem.h"

UUnionAssetPreloaderSubsystem::UUnionAssetPreloaderSubsystem() {
    this->BootPreloadAssetList.AddDefaulted(4);
}

void UUnionAssetPreloaderSubsystem::UnloadStageAssets2() {
}

void UUnionAssetPreloaderSubsystem::UnloadStageAssets() {
}

int32 UUnionAssetPreloaderSubsystem::UnloadNotSelectedMachinePartsAssets() {
    return 0;
}

int32 UUnionAssetPreloaderSubsystem::UnloadNotSelectedMachineEffectAssets() {
    return 0;
}

int32 UUnionAssetPreloaderSubsystem::UnloadNotSelectedDriverAssets() {
    return 0;
}

void UUnionAssetPreloaderSubsystem::UnloadBootAssets() {
}

void UUnionAssetPreloaderSubsystem::UnloadAnStageAssets2(const EStageId& StageId) {
}

void UUnionAssetPreloaderSubsystem::SetTextureStreamingEnabled(bool bEnabled) {
}

bool UUnionAssetPreloaderSubsystem::PreloadStageAssets2(const TArray<EStageId>& StageIds, bool bIsGatherLoad) {
    return false;
}

void UUnionAssetPreloaderSubsystem::PreLoadStageAssets() {
}

void UUnionAssetPreloaderSubsystem::PreloadBootAssets() {
}

bool UUnionAssetPreloaderSubsystem::IsEnableUnloadDriverCuesheets() const {
    return false;
}

bool UUnionAssetPreloaderSubsystem::IsEnableMenuPreloadAsset() const {
    return false;
}

bool UUnionAssetPreloaderSubsystem::IsEnableBootPreloadAsset() const {
    return false;
}

bool UUnionAssetPreloaderSubsystem::AddPreloadStageAssets2(const EStageId& StageId) {
    return false;
}


