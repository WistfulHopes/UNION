#include "TopMenuSequence.h"

ATopMenuSequence::ATopMenuSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharaMachineSelectComponentClass = NULL;
    this->CharaMachineSelectComponent = NULL;
    this->GarageComponentClass = NULL;
    this->GarageComponent = NULL;
    this->NoticePopupStateComponent = NULL;
    this->UISceneClass = NULL;
    this->UIScene = NULL;
    this->CommonMenuSubMenuClass = NULL;
    this->PrevSequenceState = ETopMenuSequenceState::Idle;
    this->SelectedPlayMode = ETopMenuPlayMode::None;
    this->SelectedGameMode = ETopMenuGameMode::None;
    this->MenuInputReceiveObject = NULL;
    this->MenuButtonInputReceiveObject = NULL;
    this->DefaultMenuRacerParameterDataAsset = NULL;
    this->FestaMenuRacerParameterDataAsset = NULL;
    this->RuleVisibility = ESlateVisibility::Visible;
    this->FullGameStorePopup = NULL;
    this->ErrorPopupWindow = NULL;
}

void ATopMenuSequence::XboxControllerAssignEndDelicate() {
}

void ATopMenuSequence::XboxAddUserEndDelicate() {
}

void ATopMenuSequence::UnBindMenuInputReceive_Implementation() {
}

void ATopMenuSequence::SetUpHeaderTopMenu() {
}

void ATopMenuSequence::SetNextTopMenuSequenceState_Implementation(ETopMenuSequenceState InState, ETopMenuSequenceState PrevState) {
}

void ATopMenuSequence::SetNewsUIVisibility(ESlateVisibility Visibility) {
}

bool ATopMenuSequence::SelectPlayerNumApplet(int32 PlayerCount) {
    return false;
}

void ATopMenuSequence::PreloadAssets() {
}


void ATopMenuSequence::OnPlatformEvent(const FUnionPlatformEventInfo& EventInfo) {
}


void ATopMenuSequence::OnInitStateTopMenuTop_Implementation() {
}

void ATopMenuSequence::OnInitStateTipsWindow_Implementation() {
}

void ATopMenuSequence::OnInitStateStore_Implementation() {
}

void ATopMenuSequence::OnInitStateSelectPlayMode_Implementation() {
}

void ATopMenuSequence::OnInitStateSelectPlayerNum_Implementation() {
}

void ATopMenuSequence::OnInitStateSelectGameMode_Implementation() {
}

void ATopMenuSequence::OnInitStateIdle_Implementation() {
}

void ATopMenuSequence::OnInitStateExit_Implementation() {
}



void ATopMenuSequence::OnExitStateTipsWindow_Implementation() {
}

void ATopMenuSequence::OnExitStateSelectPlayMode_Implementation() {
}

void ATopMenuSequence::OnExitStateSelectPlayerNum_Implementation() {
}

void ATopMenuSequence::OnExitStateSelectGameMode_Implementation() {
}

void ATopMenuSequence::OnErrorPopupWindowClose_Implementation(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex) {
}

bool ATopMenuSequence::IsEnableNews() {
    return false;
}

void ATopMenuSequence::InitializeTransformMenuRacers() {
}


UCommonMenuHeaderMenu* ATopMenuSequence::GetHeaderMenu() {
    return NULL;
}

ETopMenuSequenceState ATopMenuSequence::GetCurrentTopMenuState() {
    return ETopMenuSequenceState::Idle;
}

void ATopMenuSequence::DecisionStoreEvent_Implementation(bool IsAccept) {
}

TArray<AMenuRacerBase*> ATopMenuSequence::CreateMenuRacers_Implementation() {
    return TArray<AMenuRacerBase*>();
}

bool ATopMenuSequence::CreateLoggedinErrorPopupWindow(const FText& InErrorTitle, const FText& InErrorMessage) {
    return false;
}

bool ATopMenuSequence::CheckLoggedinForDisplayNews() {
    return false;
}

void ATopMenuSequence::BindMenuInputReceive_Implementation() {
}


