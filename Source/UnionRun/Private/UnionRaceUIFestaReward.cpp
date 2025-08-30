#include "UnionRaceUIFestaReward.h"

UUnionRaceUIFestaReward::UUnionRaceUIFestaReward() : UUserWidget(FObjectInitializer::Get()) {
    this->EventCamera = NULL;
    this->EventCamera2 = NULL;
    this->Player_TeamIndex = 0;
    this->MachineOffsetY = 0.00f;
    this->MachineAddY = 0.00f;
}

ACameraActor* UUnionRaceUIFestaReward::SetupViewBg(const FVector InCameraLocation, const FRotator CameraRotation, bool bIsLightSpawn) {
    return NULL;
}

void UUnionRaceUIFestaReward::SetupCameraPlayerZoom() {
}

void UUnionRaceUIFestaReward::GetUpdatePoint(const TArray<FFestaPointRewardUIData>& RewardDataArray, int32 StartIconCount, int32 NowPoint, int32 Add, float& OutIconWindowX, float& OutGagePosi, int32& OutGetRewardIndex) {
}

void UUnionRaceUIFestaReward::GetRacerContributionList(int32 InPlayerRacerIndex, TArray<FFestaRacerContribution>& OutFestaRacerContribution) {
}

EMachineId UUnionRaceUIFestaReward::GetEMachineId(int32 Index) {
    return EMachineId::SPD_01;
}

void UUnionRaceUIFestaReward::DestroyFestaResultData() {
}


