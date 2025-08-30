#include "ForceNextSequenceManagerSubsytem.h"

UForceNextSequenceManagerSubsytem::UForceNextSequenceManagerSubsytem() {
    this->LastFocusedWidget = NULL;
}

void UForceNextSequenceManagerSubsytem::SetProceedingToLobby(bool ProceedingStatus) {
}

void UForceNextSequenceManagerSubsytem::SetPFLobbyInviteAccepted(bool PFLobbyInvite) {
}

void UForceNextSequenceManagerSubsytem::SetNotAvailableLobbyInvite(bool NotAvailable) {
}

void UForceNextSequenceManagerSubsytem::SetLobbyInviteAccepted(bool LobbyInvite) {
}

void UForceNextSequenceManagerSubsytem::SetInRaceLobbyInvited(bool Invited) {
}

void UForceNextSequenceManagerSubsytem::RemovePriorityLobbySequenceType(int32 Priority) {
}

void UForceNextSequenceManagerSubsytem::RemoveCurrentViewportWidget() {
}

void UForceNextSequenceManagerSubsytem::MinusBusyFlagCount() {
}

bool UForceNextSequenceManagerSubsytem::GetReturnToTitleError() const {
    return false;
}

bool UForceNextSequenceManagerSubsytem::GetPFLobbyInviteAccepted() const {
    return false;
}

bool UForceNextSequenceManagerSubsytem::GetNotAvailableLobbyInvite() const {
    return false;
}

bool UForceNextSequenceManagerSubsytem::GetLobbyInviteAccepted() const {
    return false;
}

bool UForceNextSequenceManagerSubsytem::GetIsProceedingToLobby() const {
    return false;
}

bool UForceNextSequenceManagerSubsytem::GetInRaceLobbyInvited() const {
    return false;
}

int32 UForceNextSequenceManagerSubsytem::GetIgnoreInputWidgetCount() const {
    return 0;
}

ELobbySequenceAvailabilityType UForceNextSequenceManagerSubsytem::GetCurrentLobbySequenceType() const {
    return ELobbySequenceAvailabilityType::NormalLobbySequence;
}

int32 UForceNextSequenceManagerSubsytem::GetBusyFlag() const {
    return 0;
}

void UForceNextSequenceManagerSubsytem::AddPriorityLobbySequenceType(int32 Priority, ELobbySequenceAvailabilityType SequenceType) {
}

void UForceNextSequenceManagerSubsytem::AddBusyFlagCount() {
}


