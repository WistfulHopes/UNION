#include "LobbyFestaSequence2.h"
#include "FestaLobbyControlComponent.h"

ALobbyFestaSequence2::ALobbyFestaSequence2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyPlayerData.AddDefaulted(12);
    this->PlayerPositionControlTable.AddDefaulted(12);
    this->NetLobbyControlComponentClass = UFestaLobbyControlComponent::StaticClass();
    this->FestaTeamDirectUIScene = NULL;
    this->MyTeamId = 0;
    this->FestaRuleInfoWidget = NULL;
    this->RuleExplanationLoopCue = NULL;
    this->FestaGadgetRentalInfoUIScene = NULL;
    this->FestaFixedRuleInfoWidget = NULL;
    this->LobbySearchTime = 0.00f;
    this->LobbySearchCancelLimitTime = 20.00f;
    this->EnableTeamColor = false;
}

void ALobbyFestaSequence2::SetupFestRaceSettings() {
}

void ALobbyFestaSequence2::OnSyncFestaRule(bool bSuccessful, const FFestaFestaTopResponse& Result) {
}

void ALobbyFestaSequence2::OnFestaRuleInfoWidgetAnimFinished() {
}

void ALobbyFestaSequence2::OnFestaRentalGadgetWindowAnimFinished() {
}

void ALobbyFestaSequence2::OnBackKeyReleasedReturnedFromRaceToLobbyEvent(UObject* InObject) {
}

void ALobbyFestaSequence2::FixedRuleInfoWidgetClose() {
}

void ALobbyFestaSequence2::ChangeTeamColorPlate() {
}

void ALobbyFestaSequence2::ChangeTeamColorCar() {
}


