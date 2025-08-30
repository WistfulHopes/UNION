#include "UnionRaceUIResultLine.h"

UUnionRaceUIResultLine::UUnionRaceUIResultLine() : UUserWidget(FObjectInitializer::Get()) {
    this->RacerNameString = TEXT("Player 1");
    this->RacerRankIndex = 0;
    this->bIsLoadingMode = false;
    this->RacersRef = NULL;
}























