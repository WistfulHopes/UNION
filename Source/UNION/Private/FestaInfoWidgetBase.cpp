#include "FestaInfoWidgetBase.h"

UFestaInfoWidgetBase::UFestaInfoWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->InfomationType = EEventInfomationType::None;
    this->WBP_StatusInfo_Sub_Point_Reward = NULL;
    this->WBP_EventEndInfo_Sub_Details = NULL;
    this->WBP_StatusInfo_Sub_Ranking = NULL;
    this->WBP_StatusInfo_Sub_Ranking_Friend = NULL;
    this->WBP_StatusInfo_Sub_Honor = NULL;
    this->WBP_StatusInfo_Sub_RaceRule = NULL;
    this->WBP_StasusInfo_Sub_RaceRuleDetail = NULL;
    this->WBP_StatusInfo_PlayerDetail = NULL;
    this->CrossPlayResolveUIManagerClass = NULL;
    this->m_CrossPlayResolveUIManager = NULL;
    this->CurrentArrayIndex = 0;
    this->SelectRuleIndex = 0;
    this->EnableInput = false;
    this->EnableInputRankingPage = false;
    this->EnableInputPlatformSwitch = false;
    this->IsRankingAllPlatform = true;
}

void UFestaInfoWidgetBase::StartUpKeyPress() {
}

void UFestaInfoWidgetBase::StartRightShoulderPress() {
}

void UFestaInfoWidgetBase::StartRightKeyPress() {
}

void UFestaInfoWidgetBase::StartLeftShoulderPress() {
}

void UFestaInfoWidgetBase::StartLeftKeyPress() {
}

void UFestaInfoWidgetBase::StartDownKeyPress() {
}

void UFestaInfoWidgetBase::SetupWorldRanking_Implementation() {
}


void UFestaInfoWidgetBase::SetupShedule_Implementation(FDateTime StartTime, FDateTime endTime) {
}

void UFestaInfoWidgetBase::SetupRuleInfomation_Implementation(EGroupRaceRule DefaultRule, const TArray<FFestaRuleInfomation>& RuleDataArray) {
}

void UFestaInfoWidgetBase::SetupRankingClac_Implementation() {
}

void UFestaInfoWidgetBase::SetupPointResult_Implementation(int32 Point, const TArray<FFestaPointRewardUIData>& InPointRewardData, UTexture2D* TextureBG) {
}

void UFestaInfoWidgetBase::SetupOtherResult_Implementation(const TArray<FFestaStreakRewardUIData>& InStreakRewardData, const TArray<FFestaRankingRewardUIData>& InRankingRewardData) {
}

void UFestaInfoWidgetBase::SetupFriendRanking_Implementation() {
}

void UFestaInfoWidgetBase::SetupFinalResult_Implementation(int32 Ranking, int32 Point, UTexture2D* TextureBG) {
}

void UFestaInfoWidgetBase::SetTitleText(FText RuleTitle, FText PointRewardTitle, FText WorldRankingTitle, FText FriendRankingTitle, FText OtherTitle, FText FinalResultTitle) {
}

void UFestaInfoWidgetBase::SetPrevPage() {
}

void UFestaInfoWidgetBase::SetNextPage() {
}

void UFestaInfoWidgetBase::SetInfomationType(EEventInfomationType InInfomationType) {
}


void UFestaInfoWidgetBase::SelectWorldRanking() {
}

void UFestaInfoWidgetBase::SelectPrevRule_Implementation() {
}


void UFestaInfoWidgetBase::SelectNextRule_Implementation() {
}

void UFestaInfoWidgetBase::SelectFriendRanking() {
}

void UFestaInfoWidgetBase::ReleaseUpKey() {
}

void UFestaInfoWidgetBase::ReleaseRightShoulder() {
}

void UFestaInfoWidgetBase::ReleaseRightKey() {
}

void UFestaInfoWidgetBase::ReleaseLeftShoulder() {
}

void UFestaInfoWidgetBase::ReleaseLeftKey() {
}

void UFestaInfoWidgetBase::ReleaseDownKey() {
}

void UFestaInfoWidgetBase::ReleaseAllInputLoop() {
}

void UFestaInfoWidgetBase::Open_Implementation() {
}

void UFestaInfoWidgetBase::OnPlatformCrossPlayResolveComplete() {
}

void UFestaInfoWidgetBase::OnPFFriendReadComplete(bool bWasSuccessful) {
}

void UFestaInfoWidgetBase::OnCompleteMakePlatformPuidList(bool bWasSuccessful, const TArray<FString>& ExternalIds, const TArray<FString>& ConvertedIds) {
}

bool UFestaInfoWidgetBase::IsUpKeyPressLoop() const {
    return false;
}

bool UFestaInfoWidgetBase::IsRightShoulderPressLoop() const {
    return false;
}

bool UFestaInfoWidgetBase::IsRightKeyPressLoop() const {
    return false;
}

bool UFestaInfoWidgetBase::IsLeftShoulderPressLoop() const {
    return false;
}

bool UFestaInfoWidgetBase::IsLeftKeyPressLoop() const {
    return false;
}

bool UFestaInfoWidgetBase::IsEnablePlatformSwitch() {
    return false;
}

bool UFestaInfoWidgetBase::IsDownKeyPressLoop() const {
    return false;
}

bool UFestaInfoWidgetBase::IsDispPFButton(const FString& TagetServerPFCode) {
    return false;
}

int32 UFestaInfoWidgetBase::GetTabIndex() {
    return 0;
}

void UFestaInfoWidgetBase::GetOpenUserNoteTargetData(FString& outPlatformUserID, FString& ServerPFCode) {
}

EEventInfoWidgetPageCategory UFestaInfoWidgetBase::GetCurrentPage() {
    return EEventInfoWidgetPageCategory::PointReward;
}

FString UFestaInfoWidgetBase::FormatDateTime(const FDateTime& DateTime, const FString& Format) {
    return TEXT("");
}

void UFestaInfoWidgetBase::DisplayRankingUserNote() {
}

void UFestaInfoWidgetBase::DisplayPFProfile(const FString& PlatformUserId) {
}

void UFestaInfoWidgetBase::Close_Implementation() {
}

void UFestaInfoWidgetBase::ClearRequestWaitTimer() {
}

bool UFestaInfoWidgetBase::CanEnablePlatformSwitch() {
    return false;
}


