#include "GameSettingsScene.h"

UGameSettingsScene::UGameSettingsScene() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->TagButtonPanel = NULL;
    this->Window_In = NULL;
    this->Window_Loop = NULL;
    this->Window_Out = NULL;
    this->MainState = EGameSettingsSequenceState::GameSettingsTop;
}

void UGameSettingsScene::SetupGameSettings_Implementation() {
}




void UGameSettingsScene::InitializeGameSettings_Implementation() {
}


