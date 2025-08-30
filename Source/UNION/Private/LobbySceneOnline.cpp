#include "LobbySceneOnline.h"

ULobbySceneOnline::ULobbySceneOnline() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->PlayerNameButton = NULL;
    this->StageName = NULL;
    this->DmyIcon = NULL;
}

void ULobbySceneOnline::SetVisibilitySelectCourseResultEvent_Implementation(ESlateVisibility InVisibility, bool HiddenPlayer) {
}



