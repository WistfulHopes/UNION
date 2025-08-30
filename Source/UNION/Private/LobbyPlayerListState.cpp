#include "LobbyPlayerListState.h"
#include "EMenuSequenceSubState.h"

ULobbyPlayerListState::ULobbyPlayerListState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("LobbyPlayerList");
    this->DefaultMenuState = EMenuSequenceSubState::LobbyPlayerList;
    this->PlayerNameButtonsPanel = NULL;
    this->BaseScene = NULL;
    this->PlayerNameButtonCanvasPanel = NULL;
    this->WidgetForBack = NULL;
    this->IsSquadMode = false;
    this->IsInitialized = false;
}

void ULobbyPlayerListState::UnFocusPlayerName_Implementation() {
}

void ULobbyPlayerListState::SetVisibilityPlayerName_Implementation(int32 InButtonIndex, ESlateVisibility InVisibility, ESlateVisibility InPlatformIconVisibility) {
}

void ULobbyPlayerListState::SetVisibilityOwnerIcon_Implementation(ESlateVisibility InVisibility) {
}

void ULobbyPlayerListState::SetVisibilityAllPlayerName_Implementation(ESlateVisibility InVisibility, ESlateVisibility InPlatformIconVisibility) {
}

void ULobbyPlayerListState::Setup_Implementation(UUnionUISceneBase* InBaseScene, UCanvasPanel* InCanvasPanel, bool InIsSquadMode) {
}

void ULobbyPlayerListState::SetPlayerNameViewportPosition_Implementation(int32 InRacerIndex, FVector InTargetLocation, FVector2D InOffset) {
}

void ULobbyPlayerListState::SetPlayerName_Implementation(int32 InPlayerIndex, FPlayerNameContext InContext) {
}

void ULobbyPlayerListState::SetNavigationPlayerName_Implementation() {
}

void ULobbyPlayerListState::RemovePlayerName_Implementation() {
}

void ULobbyPlayerListState::OnInitialize_Implementation(const int32 InPlayerNameMaxCount) {
}

UUnionUIButtonsPanel* ULobbyPlayerListState::GetPlayerNameButtonsPanel() {
    return NULL;
}

UOnlinePlayerNameButton* ULobbyPlayerListState::GetOwnPlayerNameButton() {
    return NULL;
}

UUnionUIButtonBase* ULobbyPlayerListState::FocusPrevPlayerName(bool bIsSquad) {
    return NULL;
}

UUnionUIButtonBase* ULobbyPlayerListState::FocusPlayerName_Implementation() {
    return NULL;
}

UOnlinePlayerNameButton* ULobbyPlayerListState::CreatePlayerName_Implementation() {
    return NULL;
}

void ULobbyPlayerListState::ClearPlayerNameButtonsPanel_Implementation() {
}


