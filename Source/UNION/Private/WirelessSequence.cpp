#include "WirelessSequence.h"
#include "WirelessLobbyControlComponent.h"
#include "WirelessSequenceStateToOffline.h"
#include "WirelessSequenceStateToOnline.h"

AWirelessSequence::AWirelessSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MenuInputReceiveObject = NULL;
    this->PrevSequenceState = EWirelessSequenceState::Idle;
    this->LobbyType = EMatchingLobbyType::None;
    this->MatchingComponent = NULL;
    this->UISceneClass = NULL;
    this->UIScene = NULL;
    this->FriendMatchMenuClass = NULL;
    this->FriendMatchMenuComponent = NULL;
    this->MenuSequence = NULL;
    this->WirelessSequenceStateToOnlineComponent = CreateDefaultSubobject<UWirelessSequenceStateToOnline>(TEXT("StateToOnline"));
    this->WirelessSequenceStateToOfflineComponent = CreateDefaultSubobject<UWirelessSequenceStateToOffline>(TEXT("StateToOffline"));
    this->WirelessLobbyControlComponent = CreateDefaultSubobject<UWirelessLobbyControlComponent>(TEXT("WirelessLobbyControlComponent"));
    this->WirelessLobbyControlComponentClass = UWirelessLobbyControlComponent::StaticClass();
    this->CurrentLobbyType = EMatchingLobbyType::None;
    this->SearchLobbyLoopCue = NULL;
    this->DefaultMatchmakeKey = 0;
    this->PopupWindow = NULL;
    this->DummyWidget = NULL;
}

void AWirelessSequence::UpdateLobbyListByLobbySessions(const TArray<ULobbyJoinInfo*>& LobbySessions) {
}

void AWirelessSequence::UnBindMenuInputReceive() {
}

void AWirelessSequence::UnBindMenuButtonsPanel() {
}

void AWirelessSequence::UnBindFoundLobbyButtonsPanel() {
}

void AWirelessSequence::SetNextWirelessSequenceState_Implementation(EWirelessSequenceState InState, EWirelessSequenceState PrevState) {
}

void AWirelessSequence::SearchWirelessLobbyInternal() {
}

void AWirelessSequence::OnWirelessLobbyFinished_Implementation() {
}

void AWirelessSequence::OnWirelessLobbyBackedFadeFinishedEvent_Implementation(EUnionUIFadeDirection FadeDirection) {
}

void AWirelessSequence::OnWirelessLobbyBacked_Implementation() {
}

void AWirelessSequence::OnUpdateStateErrorWindow_Implementation(float InDeltaTime) {
}

void AWirelessSequence::OnUpdateSearchLobbyStart_Implementation(float DeltaTime) {
}

void AWirelessSequence::OnUpdateSearchLobbyInProgress_Implementation(float DeltaTime) {
}

void AWirelessSequence::OnUpdateSearchLobbyComplete_Implementation(float DeltaTime) {
}

void AWirelessSequence::OnUpdatePreSearch_Implementation(float DeltaTime) {
}

void AWirelessSequence::OnUpdateEntryLobbyStart_Implementation(float DeltaTime) {
}

void AWirelessSequence::OnUpdateEntryLobbySetup_Implementation(float DeltaTime) {
}

void AWirelessSequence::OnUpdateEntryLobbyInProgress_Implementation(float DeltaTime) {
}

void AWirelessSequence::OnUpdateEntryLobbyComplete_Implementation(float DeltaTime) {
}

void AWirelessSequence::OnUpdateCreateLobbyStart_Implementation(float DeltaTime) {
}

void AWirelessSequence::OnUpdateCreateLobbySetting_Implementation(float DeltaTime) {
}

void AWirelessSequence::OnUpdateCreateLobbyInProgress_Implementation(float DeltaTime) {
}

void AWirelessSequence::OnUpdateCreateLobbyComplete_Implementation(float DeltaTime) {
}

void AWirelessSequence::OnUpdateBackToPrevSequence_Implementation(float DeltaTime) {
}

void AWirelessSequence::OnSearchWirelessSession(UWirelessLobbyContext* LobbyContext, bool bSuccessful, const TArray<ULobbyJoinInfo*>& LobbySessions) {
}

void AWirelessSequence::OnLobbyBackFadeFinished(EUnionUIFadeDirection FadeDirection) {
}

void AWirelessSequence::OnInitStateWirelessTop_Implementation() {
}

void AWirelessSequence::OnInitStateIdle_Implementation() {
}

void AWirelessSequence::OnInitStateExit_Implementation() {
}

void AWirelessSequence::OnInitStateErrorWindow_Implementation() {
}

void AWirelessSequence::OnInitSearchLobbyStart_Implementation() {
}

void AWirelessSequence::OnInitSearchLobbyInProgress_Implementation() {
}

void AWirelessSequence::OnInitSearchLobbyComplete_Implementation() {
}

void AWirelessSequence::OnInitPreSearch_Implementation() {
}

void AWirelessSequence::OnInitEntryLobbyStart_Implementation() {
}

void AWirelessSequence::OnInitEntryLobbySetup_Implementation() {
}

void AWirelessSequence::OnInitEntryLobbyInProgress_Implementation() {
}

void AWirelessSequence::OnInitEntryLobbyComplete_Implementation() {
}

void AWirelessSequence::OnInitCreateLobbyStart_Implementation() {
}

void AWirelessSequence::OnInitCreateLobbySetting_Implementation() {
}

void AWirelessSequence::OnInitCreateLobbyInProgress_Implementation() {
}

void AWirelessSequence::OnInitCreateLobbyComplete_Implementation() {
}

void AWirelessSequence::OnInitBackToPrevSequence_Implementation() {
}

void AWirelessSequence::OnFinishedFade_GotoLobby(EUnionUIFadeDirection FadeDirection) {
}

void AWirelessSequence::OnFaceButtonTopPressed_Implementation(UObject* Object) {
}

void AWirelessSequence::OnExitStateErrorWindow_Implementation() {
}

void AWirelessSequence::OnExitSearchLobbyStart_Implementation() {
}

void AWirelessSequence::OnExitSearchLobbyInProgress_Implementation() {
}

void AWirelessSequence::OnExitSearchLobbyComplete_Implementation() {
}

void AWirelessSequence::OnExitPreSearch_Implementation() {
}

void AWirelessSequence::OnExitEntryLobbyStart_Implementation() {
}

void AWirelessSequence::OnExitEntryLobbySetup_Implementation() {
}

void AWirelessSequence::OnExitEntryLobbyInProgress_Implementation() {
}

void AWirelessSequence::OnExitEntryLobbyComplete_Implementation() {
}

void AWirelessSequence::OnExitCreateLobbyStart_Implementation() {
}

void AWirelessSequence::OnExitCreateLobbySetting_Implementation() {
}

void AWirelessSequence::OnExitCreateLobbyInProgress_Implementation() {
}

void AWirelessSequence::OnExitCreateLobbyComplete_Implementation() {
}

void AWirelessSequence::OnExitBackToPrevSequence_Implementation() {
}

void AWirelessSequence::OnEntryWirelessSession(UWirelessLobbyContext* LobbyContext, const FOnlineErrorBP& Error) {
}

void AWirelessSequence::OnDecisionRuleFixedButton_Implementation(EPrivateMatchPlayType InPlayType) {
}

void AWirelessSequence::OnDecisionLobbyCreate_Implementation(UUnionUIButtonBase* Button, int32 ButtonIndex) {
}

void AWirelessSequence::OnDecisionFoundLobby_Implementation(UUnionUIButtonBase* Button, int32 ButtonIndex) {
}

void AWirelessSequence::OnDecisionEntryLobbyPopupWindow_Implementation(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void AWirelessSequence::OnCompleteInitializeWirelessMode(UWirelessLobbyContext* WirelessLobbyContext, const FOnlineErrorBP& Error) {
}

void AWirelessSequence::OnCancelRuleFixedButton_Implementation() {
}

void AWirelessSequence::OnCancelMenu_Implementation(UUnionUIButtonBase* Button, int32 ButtonIndex) {
}

void AWirelessSequence::OnBackWirelessTopSequenceEvent() {
}

void AWirelessSequence::OnBackToTitleSequenceEvent() {
}

void AWirelessSequence::OnBackSequenceEvent() {
}

UWirelessLobbyContext* AWirelessSequence::GetWirelessLobbyContext() const {
    return NULL;
}

EMatchingLobbyType AWirelessSequence::GetLobbyType() const {
    return EMatchingLobbyType::None;
}

ULobbyJoinInfo* AWirelessSequence::GetFoundLobbySessionByIndex(int32 Index) {
    return NULL;
}

EWirelessSequenceState AWirelessSequence::GetCurrentWirelessSequenceState() const {
    return EWirelessSequenceState::Idle;
}

EMatchingLobbyType AWirelessSequence::GetCurrentLobbyType() {
    return EMatchingLobbyType::None;
}

void AWirelessSequence::EntryWirelessLobbyInternal(int32 LobbyIndex) {
}

void AWirelessSequence::BindMenuInputReceive() {
}

void AWirelessSequence::BindMenuButtonsPanel() {
}

void AWirelessSequence::BindFoundLobbyButtonsPanel() {
}


