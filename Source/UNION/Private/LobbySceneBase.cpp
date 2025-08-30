#include "LobbySceneBase.h"

ULobbySceneBase::ULobbySceneBase() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->Window_In = NULL;
    this->Window_Loop = NULL;
    this->Window_Out = NULL;
    this->MainCanvasPanel = NULL;
}




void ULobbySceneBase::InitializeLobby_Implementation() {
}

UCanvasPanel* ULobbySceneBase::GetMainCanvasPanel() {
    return NULL;
}


