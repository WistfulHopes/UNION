#include "AutoPlaySquadSubsystem.h"

UAutoPlaySquadSubsystem::UAutoPlaySquadSubsystem() {
    this->AutoInputInstance = NULL;
    this->bLobbyInvitationRestartFlag = false;
    this->bSuccessInvitation = false;
    this->bInvitationRunning = false;
    this->OnlineGameMode = EOnlineGameMode::RankMatch;
    this->bAutoPlaySquadEnable = false;
    this->GroupMemberCount = 0;
    this->IsHost = false;
    this->IsGuest = false;
    this->GroupIndex = -1;
    this->IntervalForReady = 10.00f;
    this->ReadyTimer = 0.00f;
    this->IntervalForRetryInvite = 10.00f;
    this->RetryInviteTimer = 0.00f;
    this->bShortRace = false;
}


