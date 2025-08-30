#include "FriendListOnlineSettingData.h"

FFriendListOnlineSettingData::FFriendListOnlineSettingData() {
    this->SettingType = EFriendListOnlineSettingType::PlayerIcon;
    this->ListType = EFriendListType::PFFriendPlayed;
    this->CommandType = EFriendListCommandType::Request;
    this->bDefaultSetting = false;
    this->bSetting = false;
}

