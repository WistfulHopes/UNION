#include "LobbyTravelRingManager.h"

ALobbyTravelRingManager::ALobbyTravelRingManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CourseSelectingType = ERaceSettingCourseSelecting::VoteSelect;
    this->OwnSelectedRingIndex = 0;
    this->OwnDecidedRingIndex = 0;
    this->LobbyDecidedDriverId = EDriverId::Sonic;
    this->LobbyDecidedRingIndex = 0;
    this->LobbyDecidedCourseId = EStageId::MainBegin;
}

void ALobbyTravelRingManager::SetSelectedStageIds(const TArray<EStageId> InStageIds, const TArray<int32> InRingIndexs) {
}

void ALobbyTravelRingManager::SetLobbyDecidedCourseId(EStageId InStageId) {
}

void ALobbyTravelRingManager::SelectRing(int32 InRingIndex) {
}

void ALobbyTravelRingManager::PlaySequencerSelectOnceRingLobbyFinished_Implementation() {
}

void ALobbyTravelRingManager::PlaySequencerSelectCourseResult_Implementation() {
}

void ALobbyTravelRingManager::PlaySequencerLobbyFinished_Implementation() {
}

void ALobbyTravelRingManager::OnSetup_Implementation(EMatchingLobbyType InGameMode) {
}

void ALobbyTravelRingManager::OnInitialize_Implementation() {
}

void ALobbyTravelRingManager::InitializeSelectCourseResult(EDriverId InDriverId, const FString& InPlayerName, int32 InSelectedRingIndex, EStageId InLobbyDecidedCourseId) {
}

void ALobbyTravelRingManager::HiddenInGameTravelRings(bool bNewHidden) {
}

void ALobbyTravelRingManager::DestroyTravelRings() {
}

void ALobbyTravelRingManager::DecideRing(int32 InRingIndex) {
}

void ALobbyTravelRingManager::CreateTravelRings(const TArray<EStageId>& InCourseId, bool bIsFirstSetAtRandom) {
}

void ALobbyTravelRingManager::CreateTravelRing(const EStageId& InCourseId, ERaceSettingCourseSelecting InCourseSelectingType, bool bIsFirstSetAtRandom) {
}


