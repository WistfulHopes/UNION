#include "UnionRaceUIResultPanel.h"

UUnionRaceUIResultPanel::UUnionRaceUIResultPanel() : UUserWidget(FObjectInitializer::Get()) {
    this->ResultAnimationMoving = false;
    this->RacersRef = NULL;
}

bool UUnionRaceUIResultPanel::UpdateTotalRank() {
    return false;
}

void UUnionRaceUIResultPanel::SetResultMode() {
}

void UUnionRaceUIResultPanel::SetRankIndex(int32 RacerIndex, int32 RaceRankIndex) {
}

void UUnionRaceUIResultPanel::SetRacersRef(UUnionRacers* InRacers) {
}

void UUnionRaceUIResultPanel::SetRacerName(int32 RacerIndex, const FText& RacerName) {
}

void UUnionRaceUIResultPanel::SetRacerCount(int32 RacerCount) {
}

void UUnionRaceUIResultPanel::SetPlayerIndex(int32 RacerIndex, int32 PlayerIndex) {
}

void UUnionRaceUIResultPanel::SetLoadingMode() {
}

void UUnionRaceUIResultPanel::SetEarnPointValue(int32 RacerIndex, int32 EarnPoint) {
}

void UUnionRaceUIResultPanel::SetCharacterId(int32 RacerIndex, EDriverId CharaId) {
}

void UUnionRaceUIResultPanel::SetArrowIndex(int32 RacerIndex, int32 ArrowIndex) {
}

void UUnionRaceUIResultPanel::PlayTotalPoint_Loop_After2nd(int32 RacerIndex) {
}

void UUnionRaceUIResultPanel::PlayPlayerEffect(int32 RacerIndex) {
}

void UUnionRaceUIResultPanel::PlayGetAnimation(int32 RacerIndex) {
}

void UUnionRaceUIResultPanel::InitializeTotalPoints() {
}

void UUnionRaceUIResultPanel::InitializeResultData(bool bIsTotalDisp) {
}

void UUnionRaceUIResultPanel::InitializeRaceResult(bool bIsRankMatch, bool bIsRaceCountOne) {
}

FMCEventBonusData UUnionRaceUIResultPanel::InitializeBonusPoints(FMCEventData EventData) {
    return FMCEventBonusData{};
}

TArray<UUnionRaceUIResultLine*> UUnionRaceUIResultPanel::GetRankIndexLine() {
    return TArray<UUnionRaceUIResultLine*>();
}

void UUnionRaceUIResultPanel::CloseBonusPoints() {
}

void UUnionRaceUIResultPanel::ApplyWaitingAddPoint(int32 RacerIndex) {
}


