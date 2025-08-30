#include "LobbyFestaSequence.h"
#include "FestaLobbyControlComponent.h"

ALobbyFestaSequence::ALobbyFestaSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyPlayerData.AddDefaulted(12);
    this->FakeLobbyPlayerIndexList.AddDefaulted(12);
    this->NetLobbyControlComponentClass = UFestaLobbyControlComponent::StaticClass();
    this->FestaTeamDirectUIScene = NULL;
    this->MyTeamId = 0;
    this->FestaRuleInfoWidget = NULL;
    this->RuleExplanationLoopCue = NULL;
    this->FestaGadgetRentalInfoUIScene = NULL;
    this->LobbySearchTime = 0.00f;
    this->LobbySearchCancelLimitTime = 20.00f;
    this->EnableTeamColor = false;
}

void ALobbyFestaSequence::UnloadFinishTopMenuSubLevelEvent() {
}

void ALobbyFestaSequence::UnloadFestaSubLevelEvent() {
}

void ALobbyFestaSequence::ShowStageName() {
}

void ALobbyFestaSequence::SetupFestRaceSettings() {
}

void ALobbyFestaSequence::OnSyncFestaRule(bool bSuccessful, const FFestaFestaTopResponse& Result) {
}

void ALobbyFestaSequence::OnLobbyFinishFadeFinished(EUnionUIFadeDirection InFadeDirection) {
}

void ALobbyFestaSequence::OnInitializeFestaSublevelEvent() {
}

void ALobbyFestaSequence::OnGotoGarageFadeFinished(EUnionUIFadeDirection InFadeDirection) {
}

void ALobbyFestaSequence::OnGotoCharaMachineFadeFinished(EUnionUIFadeDirection InFadeDirection) {
}

void ALobbyFestaSequence::OnFestaRentalGadgetWindowFinished() {
}

void ALobbyFestaSequence::OnBackKeyReleasedReturnedFromRaceToLobbyEvent(UObject* InObject) {
}

void ALobbyFestaSequence::LoadFinishFestaLevelEvent() {
}

void ALobbyFestaSequence::ChangeTeamColorPlate() {
}

void ALobbyFestaSequence::ChangeTeamColorCar() {
}


