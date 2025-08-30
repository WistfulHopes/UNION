#include "MenuLobbyTravelRingActor.h"

AMenuLobbyTravelRingActor::AMenuLobbyTravelRingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RingStaticMesh = NULL;
    this->MaterialRing = NULL;
    this->MaterialCenter = NULL;
    this->DecidedStageId = EStageId::MainBegin;
    this->DecidedRingIndex = 0;
    this->RandomStageId = EStageId::MainBegin;
    this->CourseSelectingType = ERaceSettingCourseSelecting::VoteSelect;
}

void AMenuLobbyTravelRingActor::UpdateScale(float InDeltaSeconds) {
}


void AMenuLobbyTravelRingActor::SetScale(float InScale) {
}

void AMenuLobbyTravelRingActor::SetRingCenterMipLevel(int32 InMipLevel) {
}

void AMenuLobbyTravelRingActor::SetRandomStageId(EStageId InRandomStageId) {
}


void AMenuLobbyTravelRingActor::SetPlayersSelectedStageIds(TArray<EStageId> InStageIds, TArray<int32> InRingIndexs) {
}

void AMenuLobbyTravelRingActor::SetMaterialCourseResult() {
}

void AMenuLobbyTravelRingActor::SetMaterialCenterEmissivePower(float InEmissivePower) {
}

void AMenuLobbyTravelRingActor::SetIsSelect_Implementation(bool InIsSelect) {
}

void AMenuLobbyTravelRingActor::SetIsDecide_Implementation(bool InIsDecide) {
}

void AMenuLobbyTravelRingActor::SetFixDecidedStageId(EStageId InStageId, int32 InRingIndex) {
}

void AMenuLobbyTravelRingActor::SetCourseId_Implementation(EStageId InCourseId) {
}

void AMenuLobbyTravelRingActor::OnInitialize_Implementation(int32 InRingIndex, EStageId InCourseId) {
}

int32 AMenuLobbyTravelRingActor::GetRingIndex() {
    return 0;
}

bool AMenuLobbyTravelRingActor::GetIsSelect() {
    return false;
}

bool AMenuLobbyTravelRingActor::GetIsDecide() {
    return false;
}

EStageId AMenuLobbyTravelRingActor::GetCourseId() {
    return EStageId::MainBegin;
}


