#include "RaceCeremonySequenceStateMainScene.h"
#include "ERaceCeremonySequenceState.h"

URaceCeremonySequenceStateMainScene::URaceCeremonySequenceStateMainScene(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("Ceremony");
    this->DefaultMenuState = ERaceCeremonySequenceState::Ceremony;
    this->RootActor = NULL;
    this->InputKeyHandler = NULL;
    this->bRivalChampion = false;
    this->ChampionRivalType = ERivalType::None;
    this->RivalLevel = 0;
    this->ChampionPlayerInLocalMultiplayer = -1;
}

void URaceCeremonySequenceStateMainScene::SaveRewardItemData(const FRewardAchievementData& AchievementData) {
}


