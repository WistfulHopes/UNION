#include "RacerReactionManager.h"

URacerReactionManager::URacerReactionManager() {
    this->RaceHUD = NULL;
    this->RacerReactionInfoDataAsset = NULL;
    this->RacerReactionTextDataAsset = NULL;
    this->AtomComponent = NULL;
    this->AtomComponentList[0] = NULL;
    this->AtomComponentList[1] = NULL;
    this->AtomComponentList[2] = NULL;
    this->AtomComponentRacerList[0] = NULL;
    this->AtomComponentRacerList[1] = NULL;
    this->AtomComponentRacerList[2] = NULL;
    this->AtomComponentRacerList[3] = NULL;
    this->AtomComponentRacerList[4] = NULL;
    this->AtomComponentRacerList[5] = NULL;
    this->AtomComponentRacerList[6] = NULL;
    this->AtomComponentRacerList[7] = NULL;
    this->AtomComponentRacerList[8] = NULL;
    this->AtomComponentRacerList[9] = NULL;
    this->AtomComponentRacerList[10] = NULL;
    this->AtomComponentRacerList[11] = NULL;
}

void URacerReactionManager::SoundPlayIrregularInfoDod(const FRacerReactionVoice& ReactionVoice, int32 RacerIndex, float MinimumCoolTime, float Duration) {
}

void URacerReactionManager::ForcePlayVoice(const FRacerReactionVoice& ReactionVoice, int32 RacerIndex, float MinimumCoolTime) {
}


