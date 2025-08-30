#include "OptionScene.h"

UOptionScene::UOptionScene() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->Window_In = NULL;
    this->Window_Loop = NULL;
    this->Window_Out = NULL;
    this->MainState = EOptionSequenceMainState::Idle;
}

void UOptionScene::SetupOption_Implementation() {
}




void UOptionScene::InitializeSelectMainOption_Implementation(const TArray<ECommonMenuButtonType>& BeltButtonTypeArr) {
}

void UOptionScene::InitializeOption_Implementation() {
}


