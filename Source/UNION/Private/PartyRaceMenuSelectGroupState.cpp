#include "PartyRaceMenuSelectGroupState.h"
#include "EMenuSequenceSubState.h"

UPartyRaceMenuSelectGroupState::UPartyRaceMenuSelectGroupState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("SelectGroupPartyRace");
    this->DefaultMenuState = EMenuSequenceSubState::SelectGroupPartyRace;
    this->GroupSelectHUD = NULL;
    this->IsGuest = false;
    this->OnlinePlayerCount = 0;
    this->OwnLobbyIndex = 0;
}

void UPartyRaceMenuSelectGroupState::SetOwnLobbyIndex(int32 InIndex) {
}

void UPartyRaceMenuSelectGroupState::SetOnlinePlayerNum(int32 PlayerCount) {
}

void UPartyRaceMenuSelectGroupState::SetLobbyRacersDriverId(TArray<EDriverId> inArray) {
}

void UPartyRaceMenuSelectGroupState::SetIsGuest(bool Guest) {
}

void UPartyRaceMenuSelectGroupState::ForceFixGroupSettings_Implementation() {
}

void UPartyRaceMenuSelectGroupState::ApplyCurrentGroupSetting() {
}


