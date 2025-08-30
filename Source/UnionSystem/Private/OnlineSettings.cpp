#include "OnlineSettings.h"

FOnlineSettings::FOnlineSettings() {
    this->bShowPlayStatus = false;
    this->bAllowCrossplay = false;
    this->bAllowReceiveFriendRequests = false;
    this->bAllowSearchByPlayerId = false;
    this->bAllowReceiveLobbyInvites = false;
    this->bAllowNotifyLobbyInvitesInRace = false;
}

