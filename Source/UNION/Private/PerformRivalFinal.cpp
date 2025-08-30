#include "PerformRivalFinal.h"
#include "AtomComponent.h"

APerformRivalFinal::APerformRivalFinal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AtomComponent = CreateDefaultSubobject<UAtomComponent>(TEXT("AtomComponent"));
    this->RivalLevelWidget = NULL;
}

void APerformRivalFinal::PlayRivalVoice(const EDriverId RivalDriverId, const EPerformRivalOutcome RivalOutcome, bool UseRivalSkin, FOnVoiceFinishedPerformRivalFinalDelegate OnVoiceFinished) const {
}

EPerformRivalInteractionType APerformRivalFinal::GetRivalInteractionType(const EDriverId PlayerDriverId, const EDriverId RivalDriverId, const EPerformRivalOutcome Outcome) const {
    return EPerformRivalInteractionType::Taunt;
}

EPerformRivalOutcome APerformRivalFinal::GetCurrentRivalOutcome(const int32 RivalRacerIndex) {
    return EPerformRivalOutcome::RivalLose;
}


