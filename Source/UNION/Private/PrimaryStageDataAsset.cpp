#include "PrimaryStageDataAsset.h"

UPrimaryStageDataAsset::UPrimaryStageDataAsset() {
    this->StageId = EStageId::UnKnown;
    this->GoalJingleSelectorName = TEXT("Normal");
}

FStageTravelRingData UPrimaryStageDataAsset::GetTravelRingData() const {
    return FStageTravelRingData{};
}

FStageDynamicData UPrimaryStageDataAsset::GetFinalLapData() const {
    return FStageDynamicData{};
}

FStageDynamicData UPrimaryStageDataAsset::GetDefaultBasicLapData() const {
    return FStageDynamicData{};
}

void UPrimaryStageDataAsset::GetBackgroundLevels(TArray<TSoftObjectPtr<UWorld>>& OutBackgroundLevels) const {
}

void UPrimaryStageDataAsset::AutoSet() {
}


