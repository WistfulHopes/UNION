#include "FriendListMainWidget.h"

UFriendListMainWidget::UFriendListMainWidget() {
    this->CommonPlayerIconId = -1;
    this->CommonPlayerIconBgColorId = 2;
    this->DefaultPlayerIconBgColorId = 0;
    this->DebugListDisplay = false;
    this->ListJumpCnt = 4;
    this->CrossPlayResolveUIManagerClass = NULL;
    this->m_CrossPlayResolveUIManager = NULL;
    this->LoadDataAsset = NULL;
    this->LoadPlayerIconDataTable = NULL;
    this->LoadPlayerIconBgColorDataTable = NULL;
    this->WaitWindow = NULL;
    this->InvitationWarningWindow = NULL;
    this->ErrorPopupWindow = NULL;
    this->OfflineAnnounceWindow = NULL;
    this->CheckGotoOnlineSequenceWindow = NULL;
}






void UFriendListMainWidget::UpdateCategoryNewIcon() {
}


void UFriendListMainWidget::StartRacerInfoDisplay(const FFriendListPlayerInfo& InListPlayerInfo) {
}

void UFriendListMainWidget::StartPlayerIconListSelect() {
}

void UFriendListMainWidget::StartFairPlayPointDisplay() {
}


void UFriendListMainWidget::Setup(int32 InLocalUserNumber, EFriendListCategory InInitialCategory, int32 InZOrder, bool bInLobbySequence, bool bInLobbyInvitationSendEnable, bool bInLobbyInvitationAcceptEnable) {
}

void UFriendListMainWidget::SetOnlineSettingByType(EFriendListOnlineSettingType InOnlineSettingType, bool bInValue) {
}

void UFriendListMainWidget::SetNextCategory(EFriendListCategory InCategory) {
}




void UFriendListMainWidget::SetInputEnable(bool bInEnable) {
}

void UFriendListMainWidget::SetDisplayEnd(bool bInEnable) {
}

void UFriendListMainWidget::SetCurrentCategory(EFriendListCategory InCategory) {
}



void UFriendListMainWidget::ResetPopupWindowCloseEvent() {
}

void UFriendListMainWidget::RequestUserSearch(const FString& TargetDisplayCode) {
}

void UFriendListMainWidget::RequestRecentPlayerList() {
}

EPFProfileShowResult UFriendListMainWidget::RequestPFProfileDisplay(const FString& InPlatformUserId) {
    return EPFProfileShowResult::None;
}

bool UFriendListMainWidget::RequestOnlineSettingSave(EFriendListCategory InNextCategory) {
    return false;
}

void UFriendListMainWidget::RequestLobbyInvitationReject(const FLobbyId& InTargetLobbyId) {
}

bool UFriendListMainWidget::RequestLobbyInvitationByPlatform(const FUniqueNetIdRepl TargetUserPlatformId) {
    return false;
}

void UFriendListMainWidget::RequestLobbyInvitationAccept(const FLobbyId& InTargetLobbyId) {
}

bool UFriendListMainWidget::RequestLobbyInvitation(const FString& InTargetUserId, const FString& InTargetProductUserId, const FString& InTargetPlatformUserId, ECrossplayPlatform InTargetCrossplayPlatform) {
    return false;
}

void UFriendListMainWidget::RequestLobbyIdSearch(const FString& InTargetShortLobbyId) {
}

void UFriendListMainWidget::RequestLobbyIdGet() {
}

void UFriendListMainWidget::RequestJoinLobbyByLobbyIdSearch(const FLobbyId& InTargetLobbyId) {
}

void UFriendListMainWidget::RequestFriendReject(const FString& InTargetId) {
}

void UFriendListMainWidget::RequestFriendCancel(const FString& InTargetId) {
}

void UFriendListMainWidget::RequestFriendApplyCancel(const FString& InTargetId) {
}

void UFriendListMainWidget::RequestFriendApplyBySearchData(const TArray<FCommon_UserSearchData>& InUserSearchData) {
}

bool UFriendListMainWidget::RequestFriendApply(const FString& InTargetUserId, const FString& InTargetProductUserId, const bool bInTargetAcceptApply) {
    return false;
}

void UFriendListMainWidget::RequestFriendAccept(const FString& InTargetId) {
}

void UFriendListMainWidget::RequestBlockPlayerRemove(const FString& InTargetProductUserId) {
}

void UFriendListMainWidget::RequestBlockPlayerList() {
}

void UFriendListMainWidget::RequestBlockPlayerAdd(const FString& InTargetProductUserId) {
}





void UFriendListMainWidget::OnUserSearchComplete(bool bWasSuccessful, const TArray<FCommon_UserSearchData>& SearchDatas, EResponseCodeAbstract ResCodeAbstract) {
}



void UFriendListMainWidget::OnRequestOnlineSettingComplete() {
}

void UFriendListMainWidget::OnRequestLobbyIdGetEnd(bool bInSuccess) {
}

void UFriendListMainWidget::OnRecentPlayerStatsComplete(bool bWasSuccessful, const TArray<FCommon_UserSearchData>& SearchDatas, EResponseCodeAbstract ResCodeAbstract) {
}

void UFriendListMainWidget::OnPFFriendSearchComplete(bool bWasSuccessful, const TArray<FCommon_UserSearchData>& SearchDatas, EResponseCodeAbstract ResCodeAbstract) {
}

void UFriendListMainWidget::OnPFFriendReadComplete(bool bWasSuccessful) {
}

void UFriendListMainWidget::OnOpenInOfflineSequence() {
}

void UFriendListMainWidget::OnLobbyInvitationRejectComplete(bool bWasSuccessful, const FLobbyOperationResult& Result) {
}

void UFriendListMainWidget::OnLobbyInvitationPlayerInfoComplete(bool bWasSuccessful, const TArray<FCommon_UserSearchData>& SearchDatas, EResponseCodeAbstract ResCodeAbstract) {
}

void UFriendListMainWidget::OnLobbyInvitationPlayerCheckPFFriendComplete(bool InShowPlayerInfo, bool bSuccessGetUserSearch) {
}

void UFriendListMainWidget::OnLobbyInvitationPlayerCheckPFFriend(bool bSuccessGetUserSearch) {
}

void UFriendListMainWidget::OnLobbyInvitationInfoComplete(bool bWasSuccessful, int32 ErrorCode) {
}

void UFriendListMainWidget::OnLobbyInvitationComplete(bool bSuccessful, const FLobbyOperationResult& Result) {
}

void UFriendListMainWidget::OnLobbyInvitationByPlatformComplete(bool bSuccessful, int32 LocalUserNum) {
}

void UFriendListMainWidget::OnLobbyIdUserSearchComplete(bool bWasSuccessful, const TArray<FCommon_UserSearchData>& SearchDatas, EResponseCodeAbstract ResCodeAbstract) {
}


void UFriendListMainWidget::OnLobbyIdSearchComplete(bool bInSuccessful, const TArray<FLobbyId>& InLobbyId, const FString& InOwnerUserId, ELobbyType InLobbyType) {
}


void UFriendListMainWidget::OnGetFriendListComplete(bool bWasSuccessful, const FFriendGetFriendListResponse& list) {
}

void UFriendListMainWidget::OnFriendRejectComplete(bool bWasSuccessful, int32 ErrorCode) {
}


void UFriendListMainWidget::OnFriendListCommandComplete(EFriendListCommandType InCommandType, bool bWasSuccessful, int32 ErrorCode) {
}

void UFriendListMainWidget::OnFriendCancelComplete(bool bWasSuccessful, int32 ErrorCode) {
}

void UFriendListMainWidget::OnFriendApplyFromSearchComplete(bool bWasSuccessful, int32 ErrorCode) {
}

void UFriendListMainWidget::OnFriendApplyComplete(bool bWasSuccessful, int32 ErrorCode) {
}

void UFriendListMainWidget::OnFriendApplyCancelComplete(bool bWasSuccessful, int32 ErrorCode) {
}

void UFriendListMainWidget::OnFriendAcceptComplete(bool bWasSuccessful, int32 ErrorCode) {
}

void UFriendListMainWidget::OnExternalIdMappingsComplete(bool bWasSuccessful, const TArray<FString>& ExternalIds, const TArray<FString>& ConvertedIds) {
}


void UFriendListMainWidget::OnErrorPopupWindowClose(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex) {
}

void UFriendListMainWidget::OnDestroyOfflineAnnounceWindow(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex) {
}

void UFriendListMainWidget::OnDestroyInvitationWarningWindow(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex) {
}

void UFriendListMainWidget::OnDestroyCheckGotoOnlineSequenceWindow(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex) {
}

void UFriendListMainWidget::OnBlockPlayerSearchComplete(bool bWasSuccessful, const TArray<FCommon_UserSearchData>& SearchDatas, EResponseCodeAbstract ResCodeAbstract) {
}

void UFriendListMainWidget::OnBlockPlayerRemoveDataSaveComplete(ESaveDataStatus Status) {
}

void UFriendListMainWidget::OnBlockPlayerAddDataSaveComplete(ESaveDataStatus Status) {
}

void UFriendListMainWidget::OnBlockPlayerAddComplete(EBlockPlayerErrorCode ErrorCode, const FString& ProductUserId) {
}

int32 UFriendListMainWidget::GetZOrder() {
    return 0;
}

bool UFriendListMainWidget::GetSubMenuWidgetData(EFriendListType InListType, FFriendListSubMenuWidgetData& OutSubMenuWidgetData, TArray<FText>& OutSubMenuText) {
    return false;
}

bool UFriendListMainWidget::GetSubMenuText(EFriendListCommandType InCommandType, FText& OutSubMenuText) {
    return false;
}

bool UFriendListMainWidget::GetShowErrorWindow() {
    return false;
}

bool UFriendListMainWidget::GetResultWidgetData(EFriendListCommandType InCommandType, FFriendListResultWidgetData& OutResultWidgetData) {
    return false;
}

EFriendListCategory UFriendListMainWidget::GetParentCategory(EFriendListCategory InCategory) {
    return EFriendListCategory::PFFriendList;
}

UOptionConfigSaveGame* UFriendListMainWidget::GetOptionConfigData() const {
    return NULL;
}

bool UFriendListMainWidget::GetOnlineSettingData(EFriendListType InFriendListType, TArray<FFriendListOnlineSettingData>& OutOnlineSettingData) {
    return false;
}

bool UFriendListMainWidget::GetOnlineSettingByType(EFriendListOnlineSettingType InOnlineSettingType) {
    return false;
}

EFriendListCategory UFriendListMainWidget::GetNextMoveCategory(bool bInPlus) {
    return EFriendListCategory::PFFriendList;
}

EFriendListCategory UFriendListMainWidget::GetNextCategory() {
    return EFriendListCategory::PFFriendList;
}

bool UFriendListMainWidget::GetLobbyInvitationSendEnable() {
    return false;
}

ULobbyJoinInfo* UFriendListMainWidget::GetLobbyInvitationInfoByLobbyId(const FLobbyId& InTargetLobbyId) {
    return NULL;
}

bool UFriendListMainWidget::GetLobbyInvitationAcceptEnable() {
    return false;
}

void UFriendListMainWidget::GetListPlayerInfoBySearchData(const FCommon_UserSearchData& InSearchData, const EFriendListType InListType, FFriendListPlayerInfo& OutListPlayerInfo) {
}

void UFriendListMainWidget::GetListPlayerInfoByLobyInvitationInfo(const ULobbyJoinInfo* InLobbyInfo, FFriendListPlayerInfo& OutListPlayerInfo) {
}

bool UFriendListMainWidget::GetJoinedLobbyId(TArray<FLobbyId>& OutLobbyId) {
    return false;
}

bool UFriendListMainWidget::GetInputEnable() {
    return false;
}

bool UFriendListMainWidget::GetInLobbySequence() {
    return false;
}

bool UFriendListMainWidget::GetExecutionRequest() {
    return false;
}

bool UFriendListMainWidget::GetErrorMessageDataByCommandResult(EFriendListCommandType InCommandType, int32 InResCode, FText& OutErrorMessageData) {
    return false;
}

bool UFriendListMainWidget::GetErrorMessageData(EFriendListErrorType InErrorMessageType, FText& OutErrorMessageData) {
    return false;
}

bool UFriendListMainWidget::GetDisplayEnd() {
    return false;
}

EFriendListCategory UFriendListMainWidget::GetCurrentCategory() {
    return EFriendListCategory::PFFriendList;
}

bool UFriendListMainWidget::GetContentsWidgetData(EFriendListCategory InCategory, FFriendListContentsWidgetData& OutContentsWidgetData) {
    return false;
}

bool UFriendListMainWidget::GetConfirmWidgetData(EFriendListCommandType InCommandType, FFriendListConfirmWidgetData& OutConfirmWidgetData) {
    return false;
}

bool UFriendListMainWidget::EndPlayerIconListSelect(int32 InSelectId, bool bInCancel) {
    return false;
}

void UFriendListMainWidget::DestroyWaitWindow() {
}


void UFriendListMainWidget::CreateWaitWindow() {
}

void UFriendListMainWidget::CreateStartDisplayErrorPopupWindow() {
}

void UFriendListMainWidget::CreateOfflineAnnounceWindow() {
}

void UFriendListMainWidget::CreateInvitationWarningWindow() {
}

void UFriendListMainWidget::CreateErrorPopupWindow(const FText& InErrorTitle, const FText& InErrorMessage, bool bInDisplayEnd) {
}

void UFriendListMainWidget::CreateCheckGotoOnlineSequenceWindow() {
}


bool UFriendListMainWidget::CheckValidLobbyInvitationExist() {
    return false;
}

bool UFriendListMainWidget::CheckSubCommandSelect(EFriendListCommandType InCommandType, const FFriendListPlayerInfo& InListPlayerInfo) {
    return false;
}

bool UFriendListMainWidget::CheckRequestLobbyId() {
    return false;
}

bool UFriendListMainWidget::CheckPlayerListDisplay(const FFriendListPlayerInfo& InTargetPlayerInfo) {
    return false;
}

bool UFriendListMainWidget::CheckPFProfileEnable(ECrossplayPlatform InTargetPlatform) {
    return false;
}

bool UFriendListMainWidget::CheckLoginComplete() {
    return false;
}

bool UFriendListMainWidget::CheckLobbyJoinAttention() {
    return false;
}

bool UFriendListMainWidget::CheckLobbyInvitation(const FString& InTargetProductUserId, EFriendListErrorType& OutErrorType) {
    return false;
}

bool UFriendListMainWidget::CheckGetCurrentLobbyId() {
    return false;
}


void UFriendListMainWidget::ChangeCategory(EFriendListCategory InCategory, bool bInUpdateCheckData) {
}


