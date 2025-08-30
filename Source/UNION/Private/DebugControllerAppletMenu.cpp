#include "DebugControllerAppletMenu.h"

UDebugControllerAppletMenu::UDebugControllerAppletMenu() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
}




FString UDebugControllerAppletMenu::GetPlayerName(int32 SlotIndex) const {
    return TEXT("");
}

FString UDebugControllerAppletMenu::GetHelpMessages(int32 SlotIndex) const {
    return TEXT("");
}

FString UDebugControllerAppletMenu::GetHeaderMessage() const {
    return TEXT("");
}


