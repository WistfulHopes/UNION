#include "PreNoticeState.h"
#include "EMenuSequenceSubState.h"

UPreNoticeState::UPreNoticeState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("PreNotice");
    this->DefaultMenuState = EMenuSequenceSubState::PreNotice;
    this->bWaitingCompensationCommunication = false;
    this->WaitingCompensationCommunicationTime = 0.00f;
    this->WaitingCompensationCommunicationWidget = NULL;
    this->CompensationWindow = NULL;
    this->ResultDonpaTicketWindow = NULL;
    this->BeforeCompensationDonpaTicket = 0;
    this->ErrorPopupWindow = NULL;
}

void UPreNoticeState::UpdateSaveDataPeriod_Implementation() {
}

void UPreNoticeState::StartTutorialVideo() {
}

void UPreNoticeState::StartCompensationWindow(bool& OutIsOpenWindow) {
}

void UPreNoticeState::SetOverrideUpperText(const int32 InTextId) {
}

void UPreNoticeState::SetCompensationTitleText(const int32 InTextId) {
}

void UPreNoticeState::SendCheckFestaRewardRequest() {
}

void UPreNoticeState::SendCheckCompensationRequest(bool& OutSendSuccess) {
}

void UPreNoticeState::RemoveWaitingCompensationCommunicationUI() {
}

void UPreNoticeState::OnReceiveCheckFestaReward_Implementation(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void UPreNoticeState::OnReceiveCheckCompensation_Implementation(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void UPreNoticeState::OnInitStateTutorialVideo_Implementation() {
}


void UPreNoticeState::OnExitStateTutorialVideo_Implementation() {
}

void UPreNoticeState::OnErrorPopupWindowClose_Implementation(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex) {
}

bool UPreNoticeState::IsStartNoticeEventEnd() {
    return false;
}

bool UPreNoticeState::IsStartLegendInfomation() {
    return false;
}

bool UPreNoticeState::IsStartGetDLCFreeContent() {
    return false;
}

bool UPreNoticeState::IsStartGetDLCContent() {
    return false;
}

bool UPreNoticeState::IsStartFreecontentInfomation() {
    return false;
}

bool UPreNoticeState::IsStartFestaInfomation() {
    return false;
}

bool UPreNoticeState::IsStartDLCInfomation() {
    return false;
}

bool UPreNoticeState::IsSendFestaEndResult() {
    return false;
}

int32 UPreNoticeState::GetTicketNum() {
    return 0;
}

void UPreNoticeState::GetRewardTitleHonorList(TArray<int32>& RewardTitleHonorList) {
}

int32 UPreNoticeState::GetLastOrder() {
    return 0;
}

void UPreNoticeState::FinishedSaveCompensationSaveData(ESaveDataStatus Status) {
}

void UPreNoticeState::FinishedResultDonpaTicketWindow() {
}

void UPreNoticeState::FinishedCompensation() {
}

void UPreNoticeState::EndTutorialVideo() {
}




bool UPreNoticeState::CreateLoggedinErrorPopupWindow(const FText& InErrorTitle, const FText& InErrorMessage) {
    return false;
}

void UPreNoticeState::CreateCanUseCompensationDataArray(const TArray<FCompensationGetCompensationsResponse_ReceivableCompensationData>& InReceiveData, TArray<FCompensationGetCompensationsResponse_ReceivableCompensationData>& OutCanUseReceiveData, TArray<FRewardGetWindowParamWithTitle>& OutWindowParamData) {
}

bool UPreNoticeState::CheckLoggedin() {
    return false;
}


