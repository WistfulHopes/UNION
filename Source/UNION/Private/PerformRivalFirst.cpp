#include "PerformRivalFirst.h"
#include "AtomComponent.h"

APerformRivalFirst::APerformRivalFirst(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AtomComponent = CreateDefaultSubobject<UAtomComponent>(TEXT("AtomComponent"));
    this->RivalLevelWidget = NULL;
}

void APerformRivalFirst::PlayRivalSoloVoice(const EDriverId RivalDriverId, bool UseRivalSkin, FOnVoiceFinishedPerformRivalFirstDelegate OnVoiceFinished) const {
}

void APerformRivalFirst::PlayRivalFirstVoice(const EDriverId PlayerDriverId, const EDriverId RivalDriverId, bool UseRivalSkin, FOnVoiceFinishedPerformRivalFirstDelegate OnVoiceFinished) const {
}

void APerformRivalFirst::PlayPlayerLastVoice(const EDriverId PlayerDriverId, const EDriverId RivalDriverId, bool UseRivalSkin, FOnVoiceFinishedPerformRivalFirstDelegate OnVoiceFinished) const {
}

bool APerformRivalFirst::IsPossibleUniquePerformRival(const EDriverId PlayerDriverId, const EDriverId RivalDriverId) {
    return false;
}

EPerformRivalInteractionType APerformRivalFirst::GetRivalFirstInteractionType(const EDriverId PlayerDriverId, const EDriverId RivalDriverId) const {
    return EPerformRivalInteractionType::Taunt;
}

EPerformRivalInteractionType APerformRivalFirst::GetPlayerLastInteractionType(const EDriverId PlayerDriverId, const EDriverId RivalDriverId) const {
    return EPerformRivalInteractionType::Taunt;
}


