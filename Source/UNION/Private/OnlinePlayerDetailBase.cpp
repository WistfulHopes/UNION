#include "OnlinePlayerDetailBase.h"

UOnlinePlayerDetailBase::UOnlinePlayerDetailBase() {
    this->bIsSendNice = false;
    this->bIsBlock = false;
    this->bIsMoveLock = false;
    this->bIsOwnerProfile = false;
    this->bIsNPCProfile = false;
    this->LobbyType = EMatchingLobbyType::None;
    this->bIsOwnerHost = false;
    this->BlockWindow = NULL;
    this->bIsAloneProfile = false;
    this->CMN_PlayerDetailScene = NULL;
    this->LeftArrow = NULL;
    this->RightArrow = NULL;
    this->bIsOverRomVer10100 = false;
}

void UOnlinePlayerDetailBase::SetVisibleArrows(ESlateVisibility InVisible) {
}

void UOnlinePlayerDetailBase::SetPlayerDetailData_Implementation(FLobbyPlayerData InPlayerData, EBlockPlayerState InBlockType, bool bInIsOwn, bool bInIsSendNice, bool bInIsNPC, int32 InNiceCount, const FString& InProductUserId, bool bInIsOwnHost, EMatchingLobbyType InLobbyType, const FString& InPlatformId, const FString& InPlatform, bool bInIsEnableBlockWindowButton) {
}


void UOnlinePlayerDetailBase::OnPlayerProfileFocusEndEvent_Implementation() {
}

void UOnlinePlayerDetailBase::OnPlayDetailOutAnimEvent_Implementation() {
}

void UOnlinePlayerDetailBase::OnPlayDetailInAnimEvent_Implementation() {
}

void UOnlinePlayerDetailBase::OnInitialize() {
}

void UOnlinePlayerDetailBase::DecideSubWindowEvent(EPlayerInfoSubWindowBtnType SubWindowType, bool bIsError) {
}

void UOnlinePlayerDetailBase::DecideCheckPopupEvent(EPlayerInfoSubWindowBtnType SubWindowType, bool bIsError) {
}


