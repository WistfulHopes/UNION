#include "NoticePopupState.h"
#include "EMenuSequenceSubState.h"

UNoticePopupState::UNoticePopupState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("NoticePopup");
    this->DefaultMenuState = EMenuSequenceSubState::NoticePopup;
    this->IsViewEmergencyInfo = false;
    this->IsViewDLC = false;
    this->DLCBGTexture = NULL;
    this->IsViewFesta = false;
    this->FestaEventID = 0;
    this->FestaBGTexture = NULL;
    this->IsViewCollaboInfo = false;
    this->CollaboBGTexture = NULL;
    this->IsViewRegendCompeInfo = false;
    this->LegendCompeID = 0;
    this->LegendCompeBGTexture = NULL;
    this->IsViewWorldMatchInfo = false;
    this->IsViewBonusInfo = false;
    this->LobbyReturnState = ELobbySequenceState::Idle;
}

void UNoticePopupState::SetTopMenuReturnState(ETopMenuSequenceState ReturnState) {
}

void UNoticePopupState::SetOnlineReturnState(EOnlineSequenceState ReturnState) {
}

void UNoticePopupState::SetLobbyReturnState(ELobbySequenceState ReturnState) {
}

void UNoticePopupState::SendCheckFestaRewardRequest(FFestaCheckFestaRewardRequest Request) {
}

void UNoticePopupState::OnReceiveCheckFestaReward_Implementation(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void UNoticePopupState::OnQueryReadPlatformFriend_Implementation(bool bWasSuccessful) {
}

bool UNoticePopupState::IsReturnStatePreNotice() const {
    return false;
}




