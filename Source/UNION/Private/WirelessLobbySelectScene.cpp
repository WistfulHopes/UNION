#include "WirelessLobbySelectScene.h"

UWirelessLobbySelectScene::UWirelessLobbySelectScene() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->DefaultPlayerIconBgColorId = 0;
    this->MenuButtonsPanel = NULL;
    this->FoundLobbyButtonsPanel = NULL;
    this->Window_In = NULL;
    this->Window_Loop = NULL;
    this->Window_Out = NULL;
    this->LoadPlayerIconDataTable = NULL;
    this->LoadPlayerIconBgColorDataTable = NULL;
}

void UWirelessLobbySelectScene::UpdateMemberTodayRecord_Implementation(const TArray<ULobbyMemberContextBase*>& Members) {
}

void UWirelessLobbySelectScene::UpdateMemberList_Implementation(const TArray<ULobbyMemberContextBase*>& NewMembers) {
}

void UWirelessLobbySelectScene::UpdateLobbyListByLobbySessions_Implementation(const TArray<ULobbyJoinInfo*>& LobbySessions) {
}

void UWirelessLobbySelectScene::UpdateLobbyList_Implementation(const TArray<int32>& InLobbies) {
}





void UWirelessLobbySelectScene::OnInitialize_Implementation() {
}

bool UWirelessLobbySelectScene::GetPlayerIconTexture(int32 InIconId, TSoftObjectPtr<UTexture2D>& OutIconTexture) {
    return false;
}

bool UWirelessLobbySelectScene::GetPlayerIconBgColor(const FString& InBgColor, FLinearColor& OutColor) {
    return false;
}

UUnionUIButtonsPanel* UWirelessLobbySelectScene::GetMenuButtonsPanel() const {
    return NULL;
}

UUnionUIButtonsPanel* UWirelessLobbySelectScene::GetFoundLobbyButtonsPanel() const {
    return NULL;
}


