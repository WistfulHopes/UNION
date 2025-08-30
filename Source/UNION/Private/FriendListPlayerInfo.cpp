#include "FriendListPlayerInfo.h"

FFriendListPlayerInfo::FFriendListPlayerInfo() {
    this->PlatformType = ECrossplayPlatform::Xbox;
    this->LobbyType = ELobbyType::Invalid;
    this->IconId = 0;
    this->bPlaying = false;
    this->bIsBlock = false;
    this->bIsPFBlock = false;
    this->bCrossPlay = false;
    this->bAcceptFriendApply = false;
    this->bAcceptLobbyInvitation = false;
    this->ListType = EFriendListType::PFFriendPlayed;
}

