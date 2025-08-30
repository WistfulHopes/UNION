#include "LobbySequenceBase2.h"
#include "LobbyEntryCheckState.h"
#include "LobbySequenceP2PConnectionEOS.h"

ALobbySequenceBase2::ALobbySequenceBase2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyType = EMatchingLobbyType::None;
    this->OnlineSequence = NULL;
    this->PrevSequenceState = ELobbySequenceState::Idle;
    this->PrevFadeSequenceState = ELobbySequenceState::Idle;
    this->LobbyPlayerData.AddDefaulted(12);
    this->PlayerPositionControlTable.AddDefaulted(12);
    this->MenuRacerParameterDataAsset = NULL;
    this->MainUIScene = NULL;
    this->SubMenu = NULL;
    this->EnableSubMenuInput = true;
    this->CourseSelectUIScene = NULL;
    this->LobbyAnnounceInfo = NULL;
    this->MessageBarScene = NULL;
    this->FocusedPlayerName = NULL;
    this->bIsLobbySearchCancel = false;
    this->EntryCheckStateComponent = CreateDefaultSubobject<ULobbyEntryCheckState>(TEXT("EntryCheckState"));
    this->CharaMachineSelectClass = NULL;
    this->CharaMachineSelectComponent = NULL;
    this->CustomizeGadgetClass = NULL;
    this->CustomizeGadgetComponent = NULL;
    this->EmoteWheelClass = NULL;
    this->EmoteWheelComponent = NULL;
    this->LobbyPlayerListClass = NULL;
    this->LobbyPlayerListComponent = NULL;
    this->PlayerProfileClass = NULL;
    this->PlayerProfileComponent = NULL;
    this->GarageClass = NULL;
    this->GarageComponent = NULL;
    this->FriendListClass = NULL;
    this->FriendListComponent = NULL;
    this->NoticePopupClass = NULL;
    this->NoticePopupComponent = NULL;
    this->NetLobbyControlComponent = NULL;
    this->P2PConnection = NULL;
    this->MenuInputReceiveObject = NULL;
    this->MenuButtonInputReceiveObject = NULL;
    this->FontObject = NULL;
    this->EnableInputPlayer = false;
    this->CameraManagerClass = NULL;
    this->CameraManager = NULL;
    this->CameraActor = NULL;
    this->CorseLotteryWheel = NULL;
    this->AnotherStageLotteryWheel = NULL;
    this->LobbyTravelRingManagerClass = NULL;
    this->LobbyTravelRingManager = NULL;
    this->LobbyFinishedDirectingManager = NULL;
    this->LobbyHostPlayerIndex = 0;
    this->OwnPlayerIndex = 0;
    this->CourseResultSelectedPlayerIndex = 0;
    this->CourseResultSelectedCourseId = EStageId::MainBegin;
    this->AlreadyReceiveDecidedCourse = false;
    this->IsPlaySelectCourseResult = false;
    this->CanExitState = false;
    this->bLobbyFinishedFadeComplete = false;
    this->IsStartFadeOnInitialize = false;
    this->IsInitializedLobby = false;
    this->IsCompleteMatchmaking = false;
    this->IsReceivedLobbyHostData = false;
    this->IsOwnConnected = false;
    this->RaceCycleFlag = false;
    this->UseStateSelectCourse = false;
    this->IsFinishedSelectCourseResult = false;
    this->IsLobbySearching = false;
    this->IsVisibleMatchingNow = false;
    this->IsCallForceBack = false;
    this->IsCallLobbyDeleteFromComponent = false;
    this->NetLobbyControlComponentClass = NULL;
    this->P2PConnectionClass = ULobbySequenceP2PConnectionEOS::StaticClass();
    this->LobbyTimerType = ELobbyTimerType::None;
    this->MatchingConpleteQue = NULL;
    this->MatchingWaitLoopCue = NULL;
    this->MatchingCancelBtnCue = NULL;
    this->LobbySearchCancelTimeLine = NULL;
    this->LongPutCancelTimeLineClass = NULL;
    this->LongPutCancelTimeLine = NULL;
    this->TimelineDirection = ETimelineDirection::Forward;
    this->CrossPlayResolveUIManagerClass = NULL;
    this->m_CrossPlayResolveUIManager = NULL;
    this->PopupWindow = NULL;
}

void ALobbySequenceBase2::WatchShortLobbyIdExpiry(const float DeltaTime) {
}

void ALobbySequenceBase2::UpdatePlayerName_Implementation() {
}

void ALobbySequenceBase2::UpdateLobbyRacers(bool IsAlreadySetupRacerOnly) {
}

void ALobbySequenceBase2::UnLoadTopMenuSubLevel() {
}

void ALobbySequenceBase2::UnLoadLobbySubLevel() {
}

void ALobbySequenceBase2::UnBindSubMenu() {
}

void ALobbySequenceBase2::UnBindPrivateLobbyEvent(UCommonLobbyContext* LobbyContext) {
}

void ALobbySequenceBase2::UnBindPlayerProfile() {
}

void ALobbySequenceBase2::UnBindPlayerName() {
}

void ALobbySequenceBase2::UnBindMenuInputReceive() {
}

void ALobbySequenceBase2::SyncCurrentCharaMachine() {
}

void ALobbySequenceBase2::StateInputInitWaitingInTheLobby() {
}

void ALobbySequenceBase2::StateInputInitSelectGameMode() {
}

void ALobbySequenceBase2::StateInputInitReturnedFromRaceToLobby() {
}

void ALobbySequenceBase2::StateInputInitLobbySearch() {
}

void ALobbySequenceBase2::StateInputInitControl() {
}

void ALobbySequenceBase2::StateInputInitCheckMembers() {
}

void ALobbySequenceBase2::StateInputInit() {
}

void ALobbySequenceBase2::StartTimer(ELobbyTimerType InELobbyTimerType) {
}

void ALobbySequenceBase2::StartLongPutCancelTimeLine() {
}

void ALobbySequenceBase2::StartFadeOnInitialize() {
}

void ALobbySequenceBase2::ShowStageName() {
}

bool ALobbySequenceBase2::ShouldMatchmaking() const {
    return false;
}

void ALobbySequenceBase2::SetVisibilityValidPlayerName_Implementation(ESlateVisibility InVisibility) {
}

void ALobbySequenceBase2::SetVisibilityValidOwnIcon_Implementation(ESlateVisibility InVisibility) {
}

void ALobbySequenceBase2::SetVisibilitySubMenu(ESlateVisibility InVisibility) {
}

void ALobbySequenceBase2::SetupPrivateLobby() {
}

void ALobbySequenceBase2::SetupPrimaryLobby() {
}

void ALobbySequenceBase2::SetupCourseSelect() {
}

void ALobbySequenceBase2::SetUpConvertPlayerIndexList() {
}

void ALobbySequenceBase2::SetUpCameraManager() {
}

void ALobbySequenceBase2::SetTimeCount(int32 InTimeCount) {
}

void ALobbySequenceBase2::SetPlayerName_Implementation(int32 InPlayerLobbyIndex, bool bInIsCom) {
}

void ALobbySequenceBase2::SetOnlineActivity() {
}

void ALobbySequenceBase2::SetNextLobbySubMenuState_Implementation(UCommonMenuButtonBase* InButton) {
}

void ALobbySequenceBase2::SetNextLobbySequenceState_Implementation(ELobbySequenceState InState, ELobbySequenceState PrevState) {
}

void ALobbySequenceBase2::SetMenuDirectionKeyEnable(const bool Enable) {
}

void ALobbySequenceBase2::SetLobbyType(EMatchingLobbyType Type) {
}

void ALobbySequenceBase2::SetLobbySequenceType(ELobbySequenceState InNextState) {
}

void ALobbySequenceBase2::SetLobbyRacerParam_Implementation(AMenuRacerLobby* InMenuRacerLobby, int32 InIndex) {
}

void ALobbySequenceBase2::SetLobbyRacer_Implementation(int32 InPlayerLobbyIndex) {
}

void ALobbySequenceBase2::SetLobbyPlayerCount(int32 InPlayerCount) {
}

void ALobbySequenceBase2::SetIsInitializedLobby(bool bNewValue) {
}

void ALobbySequenceBase2::SetHiddenInGameMenuRacers(bool bNewHidden, bool bIsLobbySearchForceBack) {
}

void ALobbySequenceBase2::SetHiddenAlreadySetupMenuRacers(bool bNewHidden, bool bIsLobbySearchForceBack) {
}

void ALobbySequenceBase2::SetFooterHoldGaugeValue_Implementation(float InValue) {
}

void ALobbySequenceBase2::SetCourseSelectSetting_Implementation(EStageId InSelectedCourseId, TArray<FAnotherStageLotteryResult>& LotteryResults) {
}

void ALobbySequenceBase2::SetAloneLobbyWatchingFlag(bool bWatching) {
}

void ALobbySequenceBase2::SendHorn() {
}

void ALobbySequenceBase2::ResetLongPutCancelTimeLine() {
}

void ALobbySequenceBase2::RemoveSelectCourseWidget() {
}

void ALobbySequenceBase2::RemoveLobbyWidget() {
}

void ALobbySequenceBase2::RefreshPlayerParam_Implementation(const FLobbyPlayerData& InPlayerData, bool InIsOwnPlayer, ECommonLobbyMemberState InLobbyState) {
}

void ALobbySequenceBase2::RecvStamp(UCommonLobbyMemberContext* InMemberContext, int32 InStampIndex) {
}

void ALobbySequenceBase2::RecvSelectCourse(UCommonLobbyMemberContext* InMemberContext, int32 courseId) {
}

void ALobbySequenceBase2::RecvLike(UCommonLobbyMemberContext* InSendMemberContext, UCommonLobbyMemberContext* InRecvMemberContext) {
}

void ALobbySequenceBase2::RecvHorn(UCommonLobbyMemberContext* InMemberContext) {
}

void ALobbySequenceBase2::ReceiveStamp(int32 InSendPlayerLobbyIndex, int32 InStampIndex) {
}

void ALobbySequenceBase2::ReceiveLobbyInitData(UCommonLobbyContext* InLobbyContext, const FLobbyInitData& InData) {
}

void ALobbySequenceBase2::ReceiveLike(int32 InSendPlayerLobbyIndex, int32 InReceivePlayerLobbyIndex) {
}

void ALobbySequenceBase2::ReceiveHorn(int32 InSendPlayerLobbyIndex) {
}

void ALobbySequenceBase2::ReceiveDecidedCourse(int32 InDecidedCourseId, int32 InDecidedPlayerOnlineIndex) {
}

void ALobbySequenceBase2::ReceiveChangedLikesCount(int32 InSendPlayerLobbyIndex, int32 OnNewLikesCount) {
}

void ALobbySequenceBase2::QuitLobby() {
}

void ALobbySequenceBase2::PlaySelectCourseResult_Implementation() {
}

void ALobbySequenceBase2::PlayLobbyBgm() {
}

bool ALobbySequenceBase2::OwnPlayerIsHost() {
    return false;
}

void ALobbySequenceBase2::OverrideResultData() {
}

void ALobbySequenceBase2::OnUpdateStateWaitSquadP2PConnectComplete(float InDeltaTime) {
}

void ALobbySequenceBase2::OnUpdateStateWaitP2PConnection_Implementation(float InDeltaTime) {
}

void ALobbySequenceBase2::OnUpdateStateWaitingInTheLobby_Implementation(float InDeltaTime) {
}

void ALobbySequenceBase2::OnUpdateStateSubLevelCheck_Implementation(float InDeltaTime) {
}

void ALobbySequenceBase2::OnUpdateStateSubFairPoint_Implementation(float InDeltaTime) {
}

void ALobbySequenceBase2::OnUpdateStateSquadInRaceCheck(float InDeltaTime) {
}

void ALobbySequenceBase2::OnUpdateStateSelectCourseWait_Implementation(float InDeltaTime) {
}

void ALobbySequenceBase2::OnUpdateStateSelectCourseResult_Implementation(float InDeltaTime) {
}

void ALobbySequenceBase2::OnUpdateStateSelectCourse_Implementation(float InDeltaTime) {
}

void ALobbySequenceBase2::OnUpdateStateReturnedFromRaceToLobby_Implementation(float InDeltaTime) {
}

void ALobbySequenceBase2::OnUpdateStateQuitLobbyWindow(float InDeltaTime) {
}

void ALobbySequenceBase2::OnUpdateStateQuitLobbyEndWindow(float InDeltaTime) {
}

void ALobbySequenceBase2::OnUpdateStateLobbySearchComplete_Implementation(float InDeltaTime) {
}

void ALobbySequenceBase2::OnUpdateStateLobbySearch_Implementation(float InDeltaTime) {
}

void ALobbySequenceBase2::OnUpdateStateLobbyInit_Implementation(float InDeltaTime) {
}

void ALobbySequenceBase2::OnUpdateStateLobbyFinished_Implementation(float InDeltaTime) {
}

void ALobbySequenceBase2::OnUpdateStateFixPlayerData_Implementation(float InDeltaTime) {
}

void ALobbySequenceBase2::OnUpdateStateErrorWindow_Implementation(float InDeltaTime) {
}

void ALobbySequenceBase2::OnUpdateStateCheckMembersWaiting(float InDeltaTime) {
}

void ALobbySequenceBase2::OnUpdateStateCheckMembers_Implementation(float InDeltaTime) {
}

void ALobbySequenceBase2::OnUpdateStateCheckLobbyHost_Implementation(float InDeltaTime) {
}

void ALobbySequenceBase2::OnUpdateStateBackToPrevSequence_Implementation(float InDeltaTime) {
}

void ALobbySequenceBase2::OnUpdateLongPutCancelTimeLine(float InValue) {
}

void ALobbySequenceBase2::OnUnFocusSelectCourse(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySequenceBase2::OnUnFocusPlayerName(UUnionUIButtonBase* InButton, int32 InButtonIndex) {
}

void ALobbySequenceBase2::OnTimeOutLobby_Implementation() {
}

void ALobbySequenceBase2::OnSyncLobbyComplete(bool bSuccessful, const FLobbyOperationResult& Result) {
}

void ALobbySequenceBase2::OnSubFairPointComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void ALobbySequenceBase2::OnStartSelectCourseResultEventCallback_Implementation() {
}

void ALobbySequenceBase2::OnStartMatchmakingForMember_Implementation(UCommonLobbyContext* LobbyContext) {
}

void ALobbySequenceBase2::OnStartMatchmaking_Implementation(UCommonLobbyContext* LobbyContext) {
}

void ALobbySequenceBase2::OnSpecialPressedLobby_Implementation(UObject* Object) {
}

void ALobbySequenceBase2::OnShowPopupPlayerProfile(int32 InBtnType) {
}

void ALobbySequenceBase2::OnShowLevelSequenceSelectCourseResultUI_Implementation() {
}

void ALobbySequenceBase2::OnSendNicePlayerProfile(int32 SendPlayerIndex) {
}

void ALobbySequenceBase2::OnSelectedStampEmoteWheel_Implementation(int32 StampIndex) {
}

void ALobbySequenceBase2::OnRightShoulderPressedLobby_Implementation(UObject* Object) {
}

void ALobbySequenceBase2::OnReportPlayerProfile(int32 PlayerIndex) {
}

void ALobbySequenceBase2::OnPlayReverseLevelSequenceLobby_Implementation() {
}

void ALobbySequenceBase2::OnPlayLevelSequenceLobby_Implementation() {
}

bool ALobbySequenceBase2::OnPlayerNameButtonDecideEvent_Implementation(bool bIsSuccsess) {
    return false;
}

void ALobbySequenceBase2::OnPlatformEvent(const FUnionPlatformEventInfo& EventInfo) {
}

void ALobbySequenceBase2::OnMessageBarSceneOutAnimFinish() {
}

void ALobbySequenceBase2::OnLogoutComplete(int32 LocalUserNum, bool bWasSuccessful) {
}

void ALobbySequenceBase2::OnLobbySystemPreRaceFinished() {
}

void ALobbySequenceBase2::OnLobbyMemberDisconnect_Implementation(const FLobbyPlayerData& InPlayerData, bool InIsOwnPlayer) {
}

void ALobbySequenceBase2::OnLobbyMemberConnect_Implementation(const FLobbyPlayerData& InPlayerData, bool InIsOwnPlayer) {
}

void ALobbySequenceBase2::OnLobbyFinishFadeFinished(EUnionUIFadeDirection InFadeDirection) {
}

void ALobbySequenceBase2::OnLobbyBackFadeFinished(EUnionUIFadeDirection InFadeDirection) {
}

void ALobbySequenceBase2::OnLeftStickPressedLobby_Implementation(UObject* Object) {
}

void ALobbySequenceBase2::OnKickPlayerProfileResult(bool bSuccessful, const FLobbyOperationResult& Result) {
}

void ALobbySequenceBase2::OnKickPlayerProfile(int32 PlayerIndex) {
}

void ALobbySequenceBase2::OnInitStateWaitSquadP2PConnectComplete() {
}

void ALobbySequenceBase2::OnInitStateWaitP2PConnection_Implementation() {
}

void ALobbySequenceBase2::OnInitStateWaitingInTheLobby_Implementation() {
}

void ALobbySequenceBase2::OnInitStateSubLevelCheck_Implementation() {
}

void ALobbySequenceBase2::OnInitStateSubFairPoint_Implementation() {
}

void ALobbySequenceBase2::OnInitStateSquadInRaceCheck() {
}

void ALobbySequenceBase2::OnInitStateShowTipsWindow_Implementation() {
}

void ALobbySequenceBase2::OnInitStateShowFestaFixedRuleInfoWindow_Implementation() {
}

void ALobbySequenceBase2::OnInitStateSelectGameMode_Implementation() {
}

void ALobbySequenceBase2::OnInitStateSelectCourseWait_Implementation() {
}

void ALobbySequenceBase2::OnInitStateSelectCourseResult_Implementation() {
}

void ALobbySequenceBase2::OnInitStateSelectCourse_Implementation() {
}

void ALobbySequenceBase2::OnInitStateReturnedFromRaceToLobby_Implementation() {
}

void ALobbySequenceBase2::OnInitStateQuitLobbyWindow() {
}

void ALobbySequenceBase2::OnInitStateQuitLobbyEndWindow() {
}

void ALobbySequenceBase2::OnInitStateNotificationWindow_Implementation() {
}

void ALobbySequenceBase2::OnInitStateLobbySearchComplete_Implementation() {
}

void ALobbySequenceBase2::OnInitStateLobbySearch_Implementation() {
}

void ALobbySequenceBase2::OnInitStateLobbyPlayerList_Implementation() {
}

void ALobbySequenceBase2::OnInitStateLobbyInit_Implementation() {
}

void ALobbySequenceBase2::OnInitStateLobbyFinished_Implementation() {
}

void ALobbySequenceBase2::OnInitStateIdle_Implementation() {
}

void ALobbySequenceBase2::OnInitStateFixPlayerData_Implementation() {
}

void ALobbySequenceBase2::OnInitStateFestaTeamDirecting_Implementation() {
}

void ALobbySequenceBase2::OnInitStateFestaRuleWindow_Implementation() {
}

void ALobbySequenceBase2::OnInitStateFestaRentalGadgetWindow_Implementation() {
}

void ALobbySequenceBase2::OnInitStateExit_Implementation() {
}

void ALobbySequenceBase2::OnInitStateErrorWindow_Implementation() {
}

void ALobbySequenceBase2::OnInitStateCheckMembersWaiting() {
}

void ALobbySequenceBase2::OnInitStateCheckMembers_Implementation() {
}

void ALobbySequenceBase2::OnInitStateCheckLobbyHost_Implementation() {
}

void ALobbySequenceBase2::OnInitStateBackToPrevSequence_Implementation() {
}

void ALobbySequenceBase2::OnGotoGarageFadeFinished(EUnionUIFadeDirection InFadeDirection) {
}

void ALobbySequenceBase2::OnGotoCustomizeGadgetFadeFinished(EUnionUIFadeDirection InFadeDirection) {
}

void ALobbySequenceBase2::OnGotoCharaMachineFadeFinished(EUnionUIFadeDirection InFadeDirection) {
}

void ALobbySequenceBase2::OnFriendRequestPlayerProfileResult(bool bSuccessful, int32 ErrorCode) {
}

void ALobbySequenceBase2::OnFriendRequestPlayerProfile(int32 PlayerIndex) {
}

void ALobbySequenceBase2::OnFriendRequestMsgBarPlayerProfileEvent() {
}

void ALobbySequenceBase2::OnFocusSelectCourse(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySequenceBase2::OnFocusPlayerName(UUnionUIButtonBase* InButton, int32 InButtonIndex) {
}

void ALobbySequenceBase2::OnFinishedUnLoadTopMenuSubLevelCallback() {
}

void ALobbySequenceBase2::OnFinishedUnLoadLobbySubLevelCallback() {
}

void ALobbySequenceBase2::OnFinishedLongPutCancelTimeLine() {
}

void ALobbySequenceBase2::OnFinishedLoadTopMenuSubLevelCallback() {
}

void ALobbySequenceBase2::OnFinishedLoadLobbySubLevelCallback() {
}

void ALobbySequenceBase2::OnFinishedLevelSequenceSelectCourseResult_Implementation() {
}

void ALobbySequenceBase2::OnFinishedLevelSequenceLobby_Implementation() {
}

void ALobbySequenceBase2::OnFadeFinishedOnInitialize(EUnionUIFadeDirection InFadeDirection) {
}

void ALobbySequenceBase2::OnFadeCompleteOnLobbyFinished(EUnionUIFadeDirection InFadeDirection) {
}

void ALobbySequenceBase2::OnFaceTopPressedLobbyPlayerList() {
}

void ALobbySequenceBase2::OnFaceTopPressedLobby_Implementation(UObject* Object) {
}

void ALobbySequenceBase2::OnFaceLeftPressedLobby_Implementation(UObject* Object) {
}

void ALobbySequenceBase2::OnExitStateWaitSquadP2PConnectComplete() {
}

void ALobbySequenceBase2::OnExitStateWaitP2PConnection_Implementation() {
}

void ALobbySequenceBase2::OnExitStateWaitingInTheLobby_Implementation() {
}

void ALobbySequenceBase2::OnExitStateSubLevelCheck_Implementation() {
}

void ALobbySequenceBase2::OnExitStateSubFairPoint_Implementation() {
}

void ALobbySequenceBase2::OnExitStateSquadInRaceCheck() {
}

void ALobbySequenceBase2::OnExitStateShowFestaFixedRuleInfoWindow_Implementation() {
}

void ALobbySequenceBase2::OnExitStateSelectCourseWait_Implementation() {
}

void ALobbySequenceBase2::OnExitStateSelectCourseResult_Implementation() {
}

void ALobbySequenceBase2::OnExitStateSelectCourse_Implementation() {
}

void ALobbySequenceBase2::OnExitStateReturnedFromRaceToLobby_Implementation() {
}

void ALobbySequenceBase2::OnExitStateQuitLobbyWindow() {
}

void ALobbySequenceBase2::OnExitStateQuitLobbyEndWindow() {
}

void ALobbySequenceBase2::OnExitStateLobbySearchComplete_Implementation() {
}

void ALobbySequenceBase2::OnExitStateLobbySearch_Implementation() {
}

void ALobbySequenceBase2::OnExitStateLobbyInit_Implementation() {
}

void ALobbySequenceBase2::OnExitStateLobbyFinished_Implementation() {
}

void ALobbySequenceBase2::OnExitStateFixPlayerData_Implementation() {
}

void ALobbySequenceBase2::OnExitStateErrorWindow_Implementation() {
}

void ALobbySequenceBase2::OnExitStateCheckMembersWaiting() {
}

void ALobbySequenceBase2::OnExitStateCheckMembers_Implementation() {
}

void ALobbySequenceBase2::OnExitStateCheckLobbyHost_Implementation() {
}

void ALobbySequenceBase2::OnExitStateBackToPrevSequence_Implementation() {
}

void ALobbySequenceBase2::OnExitPopupWindow(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySequenceBase2::OnExitFriendList_Implementation(EMenuSequenceSubState State) {
}

void ALobbySequenceBase2::OnExitEmoteWheel_Implementation(EMenuSequenceSubState State) {
}

void ALobbySequenceBase2::OnErrorFromNetLobbyControl_Implementation(int32 ErrorCode, EAppNetErrorCode ErrorCodeEnum, const FString& ErrorMessage) {
}

void ALobbySequenceBase2::OnDisconnectPlayerProfileErrorWindow() {
}

void ALobbySequenceBase2::OnDecisionSelectCourse(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySequenceBase2::OnDecisionPlayerName(UUnionUIButtonBase* InButton, int32 InButtonIndex) {
}

void ALobbySequenceBase2::OnDecisionCharaMachine_Implementation() {
}

void ALobbySequenceBase2::OnDecideWaitingInTheLobby_Implementation(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySequenceBase2::OnDecideSubMenu(UUnionUIButtonBase* InButton, int32 PanelIndex, int32 ButtonIndex) {
}

void ALobbySequenceBase2::OnDecideReturnedFromRaceToLobby_Implementation(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySequenceBase2::OnDecideLobbySearch_Implementation(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySequenceBase2::OnCompleteMatchmaking_Implementation(EGameMatchmakingCompleteStatus Status, const FCreateOrConnectLobbyResult& Result) {
}

void ALobbySequenceBase2::OnComebackMember(bool AllMembersInputFinished) {
}

void ALobbySequenceBase2::OnChangedWaitTimerEmoteWheel_Implementation(bool IsWaiting) {
}

void ALobbySequenceBase2::OnChangedPlayerProfile(int32 NextPlayerIndex) {
}

void ALobbySequenceBase2::OnCancelWaitingInTheLobby_Implementation(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySequenceBase2::OnCancelSelectCourse(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySequenceBase2::OnCancelReturnedFromRaceToLobby_Implementation(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySequenceBase2::OnCancelPlayerName(UUnionUIButtonBase* InButton, int32 InButtonIndex) {
}

void ALobbySequenceBase2::OnCancelLongPutCancelTimeLine(UObject* Object) {
}

void ALobbySequenceBase2::OnCancelLobbySearch_Implementation(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySequenceBase2::OnCancelGarage(EMenuSequenceSubState State) {
}

void ALobbySequenceBase2::OnBlockPlayerProfileResult(EBlockPlayerErrorCode ErrorCode, const FString& ProductUserId) {
}

void ALobbySequenceBase2::OnBlockPlayerProfile(const FString& UserId) {
}

void ALobbySequenceBase2::OnBackSequence_Implementation() {
}

void ALobbySequenceBase2::OnBackPlayerProfile_Implementation(EMenuSequenceSubState InState) {
}

void ALobbySequenceBase2::OnBackPlayerName_Implementation(EMenuSequenceSubState InState) {
}

void ALobbySequenceBase2::OnBackNoticePopup(EMenuSequenceSubState State) {
}

void ALobbySequenceBase2::OnBackLobbySubMenuFadeFinished(EUnionUIFadeDirection InFadeDirection) {
}

void ALobbySequenceBase2::OnBackKeyReleasedLobby_Implementation(UObject* Object) {
}

void ALobbySequenceBase2::OnBackKeyPressedLobby_Implementation(UObject* Object) {
}

void ALobbySequenceBase2::OnBackCustomizeGadget_Implementation(EMenuSequenceSubState InState) {
}

void ALobbySequenceBase2::OnBackCharaMachine_Implementation(EMenuSequenceSubState InState) {
}

void ALobbySequenceBase2::OnAddMemberInitComplete_Implementation() {
}

void ALobbySequenceBase2::OnAcceptKeyPressedLobby_Implementation(UObject* Object) {
}

void ALobbySequenceBase2::MatchingUserSetting() {
}

FLobbyInitData ALobbySequenceBase2::MakeLobbyHostData() {
    return FLobbyInitData{};
}

void ALobbySequenceBase2::LoadTopMenuSubLevel() {
}

void ALobbySequenceBase2::LoadLobbySubLevel() {
}

bool ALobbySequenceBase2::IsValidPlayerData(const FLobbyPlayerData& PlayerData) {
    return false;
}

bool ALobbySequenceBase2::IsValidPlayer(int32 InPlayerIndex) {
    return false;
}

bool ALobbySequenceBase2::IsSubMenuStateUseFade(const ELobbySequenceState InState) {
    return false;
}

bool ALobbySequenceBase2::IsSubMenuState(const ELobbySequenceState InState) {
    return false;
}

bool ALobbySequenceBase2::IsShortLobbyIdExpired(const double ExpirationTimeSec) {
    return false;
}

bool ALobbySequenceBase2::IsInitSyncCurrentCharaMachine() {
    return false;
}

bool ALobbySequenceBase2::IsFriendMatchLobbyType() const {
    return false;
}

bool ALobbySequenceBase2::IsEnableSubStateTime(ELobbyTimerType InTimerType) const {
    return false;
}

bool ALobbySequenceBase2::IsCom(int32 InPlayerLobbyIndex, bool& OutIsValidLobbyContext, bool& OutIsValidMemberContext) {
    return false;
}

void ALobbySequenceBase2::InitRaceSetting() {
}

void ALobbySequenceBase2::InitializeTransformLobbyRacers() {
}

void ALobbySequenceBase2::InitializeTimer() {
}

void ALobbySequenceBase2::InitializeSubMenu() {
}

void ALobbySequenceBase2::InitializeSubLevelObjects() {
}

void ALobbySequenceBase2::InitializeRaceResult() {
}

void ALobbySequenceBase2::InitializeOwnMenuRacer(bool bIsWaitingToReturnTheRace) {
}

void ALobbySequenceBase2::InitializeMenuRacers() {
}

void ALobbySequenceBase2::InitializeMainUIScene() {
}

void ALobbySequenceBase2::InitializeLobbyTravelRingManager() {
}

void ALobbySequenceBase2::InitializeCourseSelectUIScene_Implementation() {
}

void ALobbySequenceBase2::InitializeCameraManager() {
}

void ALobbySequenceBase2::GoNextStateRuleSetting() {
}

void ALobbySequenceBase2::GoNextStatePlayerProfile(int32 InButtonIndex) {
}

void ALobbySequenceBase2::GoNextStateLobbyPlayerList() {
}

void ALobbySequenceBase2::GoNextStateEmoteWheel() {
}

void ALobbySequenceBase2::GoNextStateAfterInitialize() {
}

UOnlineTimer* ALobbySequenceBase2::GetTimer() {
    return NULL;
}

int32 ALobbySequenceBase2::GetTimeCount() {
    return 0;
}

FName ALobbySequenceBase2::GetSubLevelNameOfWireless() const {
    return NAME_None;
}

FName ALobbySequenceBase2::GetSubLevelNameOfSquad() const {
    return NAME_None;
}

FName ALobbySequenceBase2::GetSubLevelNameOfRankMatch() const {
    return NAME_None;
}

FName ALobbySequenceBase2::GetSubLevelNameOfLegend() const {
    return NAME_None;
}

FName ALobbySequenceBase2::GetSubLevelNameOfFriend() const {
    return NAME_None;
}

FName ALobbySequenceBase2::GetSubLevelNameOfFesta() const {
    return NAME_None;
}

FName ALobbySequenceBase2::GetSubLevelName() const {
    return NAME_None;
}

int32 ALobbySequenceBase2::GetStartTimeCount() {
    return 0;
}

void ALobbySequenceBase2::GetPlayerSelectedCourseIds(TArray<EStageId>& OutPlayerSelectedCourseIds, TArray<int32>& OutPlayerSelectedCourseIndexs) {
}

void ALobbySequenceBase2::GetPlayerDisplayName_Implementation(int32 InPlayerLobbyIndex) {
}

void ALobbySequenceBase2::GetPlayableCourseMainList(TArray<EStageId>& OutPlayableCourseMainList) {
}

ULobbySequenceP2PConnection* ALobbySequenceBase2::GetP2PConnection() const {
    return NULL;
}

UNetLobbyControlComponent* ALobbySequenceBase2::GetNetLobbyControlComponent() const {
    return NULL;
}

ULobbySceneBase* ALobbySequenceBase2::GetMainUIScene() {
    return NULL;
}

EMatchingLobbyType ALobbySequenceBase2::GetLobbyType() {
    return EMatchingLobbyType::None;
}

FName ALobbySequenceBase2::GetLobbySubLevelName(EMatchingLobbyType InType) const {
    return NAME_None;
}

TArray<AMenuRacerLobby*> ALobbySequenceBase2::GetLobbyRacers() {
    return TArray<AMenuRacerLobby*>();
}

AMenuRacerLobby* ALobbySequenceBase2::GetLobbyRacer(int32 InIndex) {
    return NULL;
}

UCommonLobbyContext* ALobbySequenceBase2::GetLobbyContext() const {
    return NULL;
}

ULobbyAnnounceInfo* ALobbySequenceBase2::GetLobbyAnnounceInfo() {
    return NULL;
}

bool ALobbySequenceBase2::GetIsInitializedLobby() const {
    return false;
}

UCommonMenuHeaderMenu* ALobbySequenceBase2::GetHeaderMenu() {
    return NULL;
}

UCommonMenuFooterMenu* ALobbySequenceBase2::GetFooterMenu() {
    return NULL;
}

void ALobbySequenceBase2::GetEnterLobbyId(FLobbyId& OutLobbyId) {
}

bool ALobbySequenceBase2::GetEnableInputPlayer() {
    return false;
}

float ALobbySequenceBase2::GetDeltaTime() const {
    return 0.0f;
}

bool ALobbySequenceBase2::GetDebugLobbyTimeCountStop() {
    return false;
}

ELobbySequenceState ALobbySequenceBase2::GetCurrentLobbyState() {
    return ELobbySequenceState::Idle;
}

AMenuCameraManager* ALobbySequenceBase2::GetCameraManager() {
    return NULL;
}

ELobbySequenceState ALobbySequenceBase2::GetBackState() const {
    return ELobbySequenceState::Idle;
}

void ALobbySequenceBase2::FinalizeLobbyContext() const {
}

void ALobbySequenceBase2::DeleteOnlineActivity() {
}

void ALobbySequenceBase2::DebugShowCrown() {
}

void ALobbySequenceBase2::DebugForceTimeOut() {
}

UMatchmakingRequestContext* ALobbySequenceBase2::CreateMatchmakingContext(int32 LocalUserNum) const {
    return NULL;
}

void ALobbySequenceBase2::CreateMainUIScene() {
}

void ALobbySequenceBase2::CreateLobbyTravelRingManager() {
}

UCommonLobbyContext* ALobbySequenceBase2::CreateLobbyContextByMatchmakingResult(int32 LocalUserNum, const FCreateOrConnectLobbyResult& MatchmakingResult) const {
    return NULL;
}

UCommonLobbyContext* ALobbySequenceBase2::CreateLobbyContext(int32 LocalUserNum) const {
    return NULL;
}

void ALobbySequenceBase2::CreateLobbyAnnounceInfo() {
}

void ALobbySequenceBase2::CreateDisableGadgetMessageBar_Implementation() {
}

void ALobbySequenceBase2::CreateCourseSelectUIScene() {
}

void ALobbySequenceBase2::CreateCameraManager() {
}

bool ALobbySequenceBase2::CheckEnableUpdateForLobbyRacer() {
    return false;
}

bool ALobbySequenceBase2::CheckEnableForceBackState(ELobbySequenceState InState) {
    return false;
}

void ALobbySequenceBase2::CheckAndCrownSpawnOrDespawn(const int32 InRacerIndex) {
}

void ALobbySequenceBase2::ChangeTimerFinished() {
}

void ALobbySequenceBase2::ChangeHeaderParam(ELobbySequenceState InState) {
}

void ALobbySequenceBase2::ChangeFooterParam(ELobbySequenceState InState) {
}

void ALobbySequenceBase2::CancelLongPutCancelTimeLine() {
}

void ALobbySequenceBase2::CallOnBackEvent() {
}

bool ALobbySequenceBase2::CallForceBackFunction() {
    return false;
}

void ALobbySequenceBase2::CalcDecideCourse(int32& OutSelectedPlayerIndex, EStageId& OutSelectedCourseId) {
}

void ALobbySequenceBase2::BindSubMenu() {
}

void ALobbySequenceBase2::BindPrivateLobbyEvent(UCommonLobbyContext* LobbyContext) {
}

void ALobbySequenceBase2::BindPrimaryLobbyEvent(UCommonLobbyContext* LobbyContext) {
}

void ALobbySequenceBase2::BindPlayerProfile() {
}

void ALobbySequenceBase2::BindPlayerName() {
}

void ALobbySequenceBase2::BindMenuInputReceive() {
}

void ALobbySequenceBase2::BeforePlayerProfileSetting() {
}

void ALobbySequenceBase2::BeforeGarageSetting_Implementation() {
}

void ALobbySequenceBase2::BeforeEmoteWheelSetting() {
}

void ALobbySequenceBase2::BeforeCharaMachineSetting_Implementation() {
}

void ALobbySequenceBase2::BackStateFromPlayerList() {
}

bool ALobbySequenceBase2::AlreadyStartedPreloadMainCourse() {
    return false;
}

void ALobbySequenceBase2::AfterGarageSetting_Implementation(bool InIsTimeUp) {
}

void ALobbySequenceBase2::AfterEmoteWheelSetting_Implementation(bool InIsTimeUp) {
}

void ALobbySequenceBase2::AfterCharaMachineSetting_Implementation(bool InIsTimeUp) {
}


