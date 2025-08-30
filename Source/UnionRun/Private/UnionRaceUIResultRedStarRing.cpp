#include "UnionRaceUIResultRedStarRing.h"

UUnionRaceUIResultRedStarRing::UUnionRaceUIResultRedStarRing() : UUserWidget(FObjectInitializer::Get()) {
    this->RedStarRingUIType = ERedStarRingUIType::Race;
    this->LastPlayingAnim = NULL;
    this->IsPickUp = false;
}

void UUnionRaceUIResultRedStarRing::ResetRing_Implementation() {
}

void UUnionRaceUIResultRedStarRing::PickUpRing_Implementation() {
}

void UUnionRaceUIResultRedStarRing::InitRing_Implementation(bool bPickUp) {
}


