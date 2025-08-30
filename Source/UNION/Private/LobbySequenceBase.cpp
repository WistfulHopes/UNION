#include "LobbySequenceBase.h"
#include "LobbySequenceP2PConnectionEOS.h"

ALobbySequenceBase::ALobbySequenceBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyType = EMatchingLobbyType::None;
    this->OnlineSequence = NULL;
    this->PrevSequenceState = ELobbySequenceState::Idle;
    this->PrevFadeSequenceState = ELobbySequenceState::Idle;
    this->LobbyPlayerData.AddDefaulted(12);
    this->FakeLobbyPlayerIndexList.AddDefaulted(12);
    this->MainUIScene = NULL;
    this->SubMenu = NULL;
    this->EnableSubMenuInput = true;
    this->CourseSelectUIScene = NULL;
    this->LobbyAnnounceInfo = NULL;
    this->FocusedPlayerName = NULL;
    this->bIsLobbySearchCancel = false;
    this->CharaMachineSelectComponent = NULL;
    this->CustomizeGadgetComponent = NULL;
    this->EmoteWheelComponent = NULL;
    this->LobbyPlayerListComponent = NULL;
    this->PlayerProfileComponent = NULL;
    this->NetLobbyControlComponent = NULL;
    this->GarageComponent = NULL;
    this->P2PConnection = NULL;
    this->MenuInputReceiveObject = NULL;
    this->CameraManager = NULL;
    this->CameraActor = NULL;
    this->AnotherStageLotteryWheel = NULL;
    this->LobbyTravelRingManager = NULL;
    this->LobbyFinishedDirectingManager = NULL;
    this->LobbyHostPlayerIndex = 0;
    this->OwnPlayerIndex = 0;
    this->CourseResultSelectedPlayerIndex = 0;
    this->CourseResultSelectedCourseId = EStageId::MainBegin;
    this->AlreadyReceiveDecidedCourse = false;
    this->IsPlaySelectCourseResult = false;
    this->CanExitState = false;
    this->IsInitializedLobby = false;
    this->IsReceivedLobbyHostData = false;
    this->OtherLobbyMembersReceivedHostData = false;
    this->IsOwnConnected = false;
    this->RaceCycleFlag = false;
    this->UseStateSelectCourse = false;
    this->IsFinishedSelectCourseResult = false;
    this->IsLobbySearching = false;
    this->IsVisibleMatchingNow = false;
    this->IsCallForceBack = false;
    this->UIFadeWidget = NULL;
    this->NetLobbyControlComponentClass = NULL;
    this->P2PConnectionClass = ULobbySequenceP2PConnectionEOS::StaticClass();
    this->LobbyTimerType = ELobbyTimerType::None;
    this->MatchingConpleteQue = NULL;
    this->MatchingWaitLoopCue = NULL;
    this->LobbySearchCancelTimeLine = NULL;
    this->LongPutCancelTimeLine = NULL;
    this->LongPutCancelTimeLineClass = NULL;
    this->bIsSendStamp = false;
    this->bIsSendHorn = false;
}

void ALobbySequenceBase::UpdatePlayerName_Implementation() {
}

void ALobbySequenceBase::UpdateMenuRacers() {
}

void ALobbySequenceBase::UnLoadSubLevels(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void ALobbySequenceBase::UnBindSubMenu() {
}

void ALobbySequenceBase::UnBindPlayerProfile() {
}

void ALobbySequenceBase::UnBindPlayerName() {
}

void ALobbySequenceBase::UnBindMenuInputReceive() {
}

void ALobbySequenceBase::StartTimer(ELobbyTimerType InELobbyTimerType) {
}

void ALobbySequenceBase::StartFadeOnInitialize() {
}

bool ALobbySequenceBase::ShouldMatchmaking() const {
    return false;
}

void ALobbySequenceBase::SetVisibilityValidPlayerName_Implementation(ESlateVisibility InVisibility) {
}

void ALobbySequenceBase::SetVisibilityValidOwnIcon_Implementation(ESlateVisibility InVisibility) {
}

void ALobbySequenceBase::SetupLobby() {
}

void ALobbySequenceBase::SetupCourseSelect() {
}

void ALobbySequenceBase::SetUpConvertPlayerIndexList() {
}

void ALobbySequenceBase::SetUpCameraManager() {
}

void ALobbySequenceBase::SetTimeCount(int32 InTimeCount) {
}

void ALobbySequenceBase::SetPlayerName_Implementation(int32 InPlayerLobbyIndex, bool bInIsCom) {
}

void ALobbySequenceBase::SetNextLobbySubMenuState_Implementation(UCommonMenuButtonBase* InButton) {
}

void ALobbySequenceBase::SetNextLobbySequenceState_Implementation(ELobbySequenceState InState, ELobbySequenceState PrevState) {
}

void ALobbySequenceBase::SetMenuRacerParam_Implementation(AMenuRacerLobby* InMenuRacerLobby, int32 InIndex) {
}

void ALobbySequenceBase::SetMenuRacer_Implementation(int32 InPlayerLobbyIndex) {
}

void ALobbySequenceBase::SetLobbyType(EMatchingLobbyType Type) {
}

void ALobbySequenceBase::SetLobbySequenceType(ELobbySequenceState InNextState) {
}

void ALobbySequenceBase::SetLobbyPlayerCount(int32 InPlayerCount) {
}

void ALobbySequenceBase::SetIsInitializedLobby(bool bNewValue) {
}

void ALobbySequenceBase::SetFooterHoldGaugeVaue_Implementation(float InValue) {
}

void ALobbySequenceBase::SetCourseSelectSetting_Implementation(EStageId InSelectedCourseId, TArray<FAnotherStageLotteryResult>& LotteryResults) {
}

void ALobbySequenceBase::RemoveSelectCourseWidget() {
}

void ALobbySequenceBase::RemoveLobbyWidget() {
}

void ALobbySequenceBase::RefreshPlayerParam_Implementation(const FLobbyPlayerData& InPlayerData, bool InIsOwnPlayer, ECommonLobbyMemberState InLobbyState) {
}

void ALobbySequenceBase::RecvStamp(UCommonLobbyMemberContext* InMemberContext, int32 InStampIndex) {
}

void ALobbySequenceBase::RecvSelectCourse(UCommonLobbyMemberContext* InMemberContext, int32 courseId) {
}

void ALobbySequenceBase::RecvLike(UCommonLobbyMemberContext* InSendMemberContext, UCommonLobbyMemberContext* InRecvMemberContext) {
}

void ALobbySequenceBase::RecvHorn(UCommonLobbyMemberContext* InMemberContext) {
}

void ALobbySequenceBase::ReceiveStamp(int32 InSendPlayerLobbyIndex, int32 InStampIndex) {
}

void ALobbySequenceBase::ReceiveLobbyInitData(UCommonLobbyContext* InLobbyContext, const FLobbyInitData& InData) {
}

void ALobbySequenceBase::ReceiveLike(int32 InSendPlayerLobbyIndex, int32 InReceivePlayerLobbyIndex) {
}

void ALobbySequenceBase::ReceiveHorn(int32 InSendPlayerLobbyIndex) {
}

void ALobbySequenceBase::ReceiveDecidedCourse(int32 InDecidedCourseId, int32 InDecidedPlayerOnlineIndex) {
}

void ALobbySequenceBase::ReceiveChangedLikesCount(int32 InSendPlayerLobbyIndex, int32 OnNewLikesCount) {
}

void ALobbySequenceBase::PlaySelectCourseResult_Implementation() {
}

void ALobbySequenceBase::PlayLobbyBgm() {
}

bool ALobbySequenceBase::OwnPlayerIsHost() {
    return false;
}

void ALobbySequenceBase::OnUpdateTimeLineLobbySearch_Implementation(float InValue) {
}

void ALobbySequenceBase::OnUpdateStateWaitP2PConnection_Implementation(float InDeltaTime) {
}

void ALobbySequenceBase::OnUpdateStateWaitingInTheLobby_Implementation(float InDeltaTime) {
}

void ALobbySequenceBase::OnUpdateStateSelectCourseWait_Implementation(float InDeltaTime) {
}

void ALobbySequenceBase::OnUpdateStateSelectCourseResult_Implementation(float InDeltaTime) {
}

void ALobbySequenceBase::OnUpdateStateSelectCourse_Implementation(float InDeltaTime) {
}

void ALobbySequenceBase::OnUpdateStateLobbySearchComplete_Implementation(float InDeltaTime) {
}

void ALobbySequenceBase::OnUpdateStateLobbySearch_Implementation(float InDeltaTime) {
}

void ALobbySequenceBase::OnUpdateStateLobbyFinished_Implementation(float InDeltaTime) {
}

void ALobbySequenceBase::OnUpdateStateFixPlayerData_Implementation(float InDeltaTime) {
}

void ALobbySequenceBase::OnUpdateStateErrorWindow_Implementation(float InDeltaTime) {
}

void ALobbySequenceBase::OnUpdateStateCheckLobbyHost_Implementation(float InDeltaTime) {
}

void ALobbySequenceBase::OnUnFocusWaitingInTheLobby_Implementation(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySequenceBase::OnUnFocusSelectCourse(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySequenceBase::OnUnFocusPlayerName(UUnionUIButtonBase* InButton, int32 InButtonIndex) {
}

void ALobbySequenceBase::OnTimeOutLobby_Implementation() {
}

void ALobbySequenceBase::OnSyncLobbyComplete(bool bSuccessful, const FLobbyOperationResult& Result) {
}

void ALobbySequenceBase::OnStartTimeLineLobbySearch_Implementation() {
}

void ALobbySequenceBase::OnStartSelectCourseResultEventCallback_Implementation() {
}

void ALobbySequenceBase::OnStartMatchmakingForMember_Implementation(UCommonLobbyContext* LobbyContext) {
}

void ALobbySequenceBase::OnStartMatchmaking_Implementation(UCommonLobbyContext* LobbyContext) {
}

void ALobbySequenceBase::OnShowLevelSequenceSelectCourseResultUI_Implementation() {
}

void ALobbySequenceBase::OnSendNicePlayerProfile(int32 SendPlayerIndex) {
}

void ALobbySequenceBase::OnSelectedStampEmoteWheel_Implementation(int32 StampIndex) {
}

void ALobbySequenceBase::OnRightShoulderWaitingInTheLobby_Implementation(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySequenceBase::OnRightShoulderReturnedFromRaceToLobby_Implementation(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySequenceBase::OnRightShoulderPressedLobby_Implementation(UObject* Object) {
}

void ALobbySequenceBase::OnRightShoulderLobbySearch_Implementation(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySequenceBase::OnReportPlayerProfile(int32 PlayerIndex) {
}

void ALobbySequenceBase::OnPlayReverseLevelSequenceLobby_Implementation() {
}

void ALobbySequenceBase::OnPlayLevelSequenceLobby_Implementation() {
}

bool ALobbySequenceBase::OnPlayerNameButtonDecideEvent_Implementation(bool bIsSuccsess) {
    return false;
}

void ALobbySequenceBase::OnPlatformEvent(const FUnionPlatformEventInfo& EventInfo) {
}

void ALobbySequenceBase::OnLogoutComplete(int32 LocalUserNum, bool bWasSuccessful) {
}

void ALobbySequenceBase::OnLobbySystemPreRaceFinished() {
}

void ALobbySequenceBase::OnLobbyMemberDisconnect_Implementation(const FLobbyPlayerData& InPlayerData, bool InIsOwnPlayer) {
}

void ALobbySequenceBase::OnLobbyMemberConnect_Implementation(const FLobbyPlayerData& InPlayerData, bool InIsOwnPlayer) {
}

void ALobbySequenceBase::OnLeftStickPressedLobby_Implementation() {
}

void ALobbySequenceBase::OnKickPlayerProfileResult(bool bSuccessful, const FLobbyOperationResult& Result) {
}

void ALobbySequenceBase::OnKickPlayerProfile(int32 PlayerIndex) {
}

void ALobbySequenceBase::OnInitStateWaitP2PConnection_Implementation() {
}

void ALobbySequenceBase::OnInitStateWaitingInTheLobby_Implementation() {
}

void ALobbySequenceBase::OnInitStateShowTipsWindow_Implementation() {
}

void ALobbySequenceBase::OnInitStateSelectGameMode_Implementation() {
}

void ALobbySequenceBase::OnInitStateSelectCourseWait_Implementation() {
}

void ALobbySequenceBase::OnInitStateSelectCourseResult_Implementation() {
}

void ALobbySequenceBase::OnInitStateSelectCourse_Implementation() {
}

void ALobbySequenceBase::OnInitStateReturnedFromRaceToLobby_Implementation() {
}

void ALobbySequenceBase::OnInitStateNotificationWindow_Implementation() {
}

void ALobbySequenceBase::OnInitStateLobbySearchComplete_Implementation() {
}

void ALobbySequenceBase::OnInitStateLobbySearch_Implementation() {
}

void ALobbySequenceBase::OnInitStateLobbyRuleSetting_Implementation() {
}

void ALobbySequenceBase::OnInitStateLobbyPlayerList_Implementation() {
}

void ALobbySequenceBase::OnInitStateLobbyFinished_Implementation() {
}

void ALobbySequenceBase::OnInitStateIdle_Implementation() {
}

void ALobbySequenceBase::OnInitStateFixPlayerData_Implementation() {
}

void ALobbySequenceBase::OnInitStateFestaTeamDirecting_Implementation() {
}

void ALobbySequenceBase::OnInitStateFestaRuleWindow_Implementation() {
}

void ALobbySequenceBase::OnInitStateFestaRentalGadgetWindow_Implementation() {
}

void ALobbySequenceBase::OnInitStateExit_Implementation() {
}

void ALobbySequenceBase::OnInitStateErrorWindow_Implementation() {
}

void ALobbySequenceBase::OnInitStateCheckMembers_Implementation() {
}

void ALobbySequenceBase::OnInitStateCheckLobbyHost_Implementation() {
}

void ALobbySequenceBase::OnFocusSelectCourse(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySequenceBase::OnFocusPlayerName(UUnionUIButtonBase* InButton, int32 InButtonIndex) {
}

void ALobbySequenceBase::OnFinishedTimeLineReturnedFromRaceToLobby_Implementation() {
}

void ALobbySequenceBase::OnFinishedTimeLineLobbySearch_Implementation() {
}

void ALobbySequenceBase::OnFinishedLevelSequenceSelectCourseResult_Implementation() {
}

void ALobbySequenceBase::OnFinishedLevelSequenceLobby_Implementation() {
}

void ALobbySequenceBase::OnFadeFinishedOnInitialize(EUnionUIFadeDirection InFadeDirection) {
}

void ALobbySequenceBase::OnFaceTopPressedWaitingInTheLobby_Implementation() {
}

void ALobbySequenceBase::OnFaceTopPressedLobbySearch_Implementation() {
}

void ALobbySequenceBase::OnFaceTopPressedLobbyPlayerList() {
}

void ALobbySequenceBase::OnFaceTopPressedLobby_Implementation(UObject* Object) {
}

void ALobbySequenceBase::OnFaceLeftPressedWaitingInTheLobby_Implementation() {
}

void ALobbySequenceBase::OnFaceLeftPressedLobbySearch_Implementation() {
}

void ALobbySequenceBase::OnFaceLeftPressedLobby_Implementation(UObject* Object) {
}

void ALobbySequenceBase::OnExitStateWaitP2PConnection_Implementation() {
}

void ALobbySequenceBase::OnExitStateWaitingInTheLobby_Implementation() {
}

void ALobbySequenceBase::OnExitStateSelectCourseWait_Implementation() {
}

void ALobbySequenceBase::OnExitStateSelectCourseResult_Implementation() {
}

void ALobbySequenceBase::OnExitStateSelectCourse_Implementation() {
}

void ALobbySequenceBase::OnExitStateReturnedFromRaceToLobby_Implementation() {
}

void ALobbySequenceBase::OnExitStateLobbySearchComplete_Implementation() {
}

void ALobbySequenceBase::OnExitStateLobbySearch_Implementation() {
}

void ALobbySequenceBase::OnExitStateLobbyFinished_Implementation() {
}

void ALobbySequenceBase::OnExitStateFixPlayerData_Implementation() {
}

void ALobbySequenceBase::OnExitStateErrorWindow_Implementation() {
}

void ALobbySequenceBase::OnExitStateCheckLobbyHost_Implementation() {
}

void ALobbySequenceBase::OnExitFriendListl_Implementation(EMenuSequenceSubState State) {
}

void ALobbySequenceBase::OnExitEmoteWheel_Implementation(EMenuSequenceSubState State) {
}

void ALobbySequenceBase::OnErrorFromNetLobbyControl_Implementation(int32 ErrorCode, EAppNetErrorCode ErrorCodeEnum, const FString& ErrorMessage) {
}

void ALobbySequenceBase::OnDecisionSelectCourse(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySequenceBase::OnDecisionPlayerName(UUnionUIButtonBase* InButton, int32 InButtonIndex) {
}

void ALobbySequenceBase::OnDecisionCharaMachine_Implementation() {
}

void ALobbySequenceBase::OnDecideWaitingInTheLobby_Implementation(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySequenceBase::OnDecideReturnedFromRaceToLobby_Implementation(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySequenceBase::OnDecideLobbySearch_Implementation(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySequenceBase::OnCompleteMatchmaking_Implementation(EGameMatchmakingCompleteStatus Status, const FCreateOrConnectLobbyResult& Result) {
}

void ALobbySequenceBase::OnComebackMember_Implementation(bool AllMembersInputFinished) {
}

void ALobbySequenceBase::OnChangedWaitTimerEmoteWheel_Implementation(bool IsWaiting) {
}

void ALobbySequenceBase::OnChangedPlayerProfile(int32 NextPlayerIndex) {
}

void ALobbySequenceBase::OnCancelWaitingInTheLobby_Implementation(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySequenceBase::OnCancelTimeLineLobbySearch_Implementation(UObject* Object) {
}

void ALobbySequenceBase::OnCancelSelectCourse(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySequenceBase::OnCancelReturnedFromRaceToLobby_Implementation(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySequenceBase::OnCancelPlayerName(UUnionUIButtonBase* InButton, int32 InButtonIndex) {
}

void ALobbySequenceBase::OnCancelLobbySearch_Implementation(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALobbySequenceBase::OnCancelGarage(EMenuSequenceSubState State) {
}

void ALobbySequenceBase::OnBackSequence_Implementation(EErrorLevel ErrorLevel) {
}

void ALobbySequenceBase::OnBackPlayerProfile_Implementation(EMenuSequenceSubState InState) {
}

void ALobbySequenceBase::OnBackKeyPressedLobby_Implementation(UObject* Object) {
}

void ALobbySequenceBase::OnBackCustomizeGadget_Implementation(EMenuSequenceSubState InState) {
}

void ALobbySequenceBase::OnBackCharaMachine_Implementation(EMenuSequenceSubState InState) {
}

void ALobbySequenceBase::OnAddMemberInitComplete_Implementation() {
}

FLobbyInitData ALobbySequenceBase::MakeLobbyHostData() {
    return FLobbyInitData{};
}

bool ALobbySequenceBase::IsValidPlayerData(FLobbyPlayerData PlayerData) {
    return false;
}

bool ALobbySequenceBase::IsValidPlayer(int32 InPlayerIndex) {
    return false;
}

bool ALobbySequenceBase::IsSubMenuState(const ELobbySequenceState InState) {
    return false;
}

bool ALobbySequenceBase::IsCom(int32 InPlayerLobbyIndex, bool& OutIsValidLobbyContext, bool& OutIsValidMemberContext) {
    return false;
}

void ALobbySequenceBase::InitializeTransformMenuRacers() {
}

void ALobbySequenceBase::InitializeTimer() {
}

void ALobbySequenceBase::InitializeSubMenu() {
}

void ALobbySequenceBase::InitializeSubLevelObjects() {
}

void ALobbySequenceBase::InitializeMenuRacers() {
}

void ALobbySequenceBase::InitializeMainUIScene() {
}

void ALobbySequenceBase::InitializeLobbyTravelRingManager() {
}

void ALobbySequenceBase::InitializeCourseSelectUIScene_Implementation() {
}

void ALobbySequenceBase::InitializeCameraManager() {
}

void ALobbySequenceBase::GoNextStateAfterInitialize() {
}

UOnlineTimer* ALobbySequenceBase::GetTimer() {
    return NULL;
}

int32 ALobbySequenceBase::GetTimeCount() {
    return 0;
}

FName ALobbySequenceBase::GetSubLevelNameOfSquad() const {
    return NAME_None;
}

FName ALobbySequenceBase::GetSubLevelNameOfRankMatch() const {
    return NAME_None;
}

FName ALobbySequenceBase::GetSubLevelNameOfLegend() const {
    return NAME_None;
}

FName ALobbySequenceBase::GetSubLevelNameOfFriend() const {
    return NAME_None;
}

FName ALobbySequenceBase::GetSubLevelNameOfFesta() const {
    return NAME_None;
}

FName ALobbySequenceBase::GetSubLevelName() const {
    return NAME_None;
}

int32 ALobbySequenceBase::GetStartTimeCount() {
    return 0;
}

void ALobbySequenceBase::GetPlayerSelectedCourseIds(TArray<EStageId>& OutPlayerSelectedCourseIds) {
}

void ALobbySequenceBase::GetPlayerDisplayName_Implementation(int32 InPlayerLobbyIndex) {
}

void ALobbySequenceBase::GetPlayableCourseMainList(TArray<EStageId>& OutPlayableCourseMainList) {
}

ULobbySequenceP2PConnection* ALobbySequenceBase::GetP2PConnection() const {
    return NULL;
}

UNetLobbyControlComponent* ALobbySequenceBase::GetNetLobbyControlComponent() const {
    return NULL;
}

TArray<AMenuRacerLobby*> ALobbySequenceBase::GetMenuRacers() {
    return TArray<AMenuRacerLobby*>();
}

AMenuRacerLobby* ALobbySequenceBase::GetMenuRacer(int32 InIndex) {
    return NULL;
}

ULobbySceneBase* ALobbySequenceBase::GetMainUIScene() {
    return NULL;
}

EMatchingLobbyType ALobbySequenceBase::GetLobbyType() {
    return EMatchingLobbyType::None;
}

UCommonLobbyContext* ALobbySequenceBase::GetLobbyContext() const {
    return NULL;
}

ULobbyAnnounceInfo* ALobbySequenceBase::GetLobbyAnnounceInfo() {
    return NULL;
}

bool ALobbySequenceBase::GetIsInitializedLobby() const {
    return false;
}

UCommonMenuHeaderMenu* ALobbySequenceBase::GetHeaderMenu() {
    return NULL;
}

UCommonMenuFooterMenu* ALobbySequenceBase::GetFooterMenu() {
    return NULL;
}

bool ALobbySequenceBase::GetDebugLobbyTimeCountStop() {
    return false;
}

ELobbySequenceState ALobbySequenceBase::GetCurrentLobbyState() {
    return ELobbySequenceState::Idle;
}

int32 ALobbySequenceBase::GetConvertPlayerLobbyIndex(int32 InIndex) {
    return 0;
}

AMenuCameraManager* ALobbySequenceBase::GetCameraManager() {
    return NULL;
}

void ALobbySequenceBase::FinalizeLobbyContext() const {
}

void ALobbySequenceBase::DebugForceTimeOut() {
}

UMatchmakingRequestContext* ALobbySequenceBase::CreateMatchmakingContext(int32 LocalUserNum) const {
    return NULL;
}

void ALobbySequenceBase::CreateMainUIScene() {
}

void ALobbySequenceBase::CreateLobbyTravelRingManager() {
}

UCommonLobbyContext* ALobbySequenceBase::CreateLobbyContextByMatchmakingResult(int32 LocalUserNum, const FCreateOrConnectLobbyResult& MatchmakingResult) const {
    return NULL;
}

UCommonLobbyContext* ALobbySequenceBase::CreateLobbyContext(int32 LocalUserNum) const {
    return NULL;
}

void ALobbySequenceBase::CreateLobbyAnnounceInfo() {
}

UUnionUISceneBase* ALobbySequenceBase::CreateErrorWindow(EPopupWindowType WindowType, EPopupWindowButtonType ButtonType, bool bAttension, FText Title, FText Message) {
    return NULL;
}

void ALobbySequenceBase::CreateCourseSelectUIScene() {
}

void ALobbySequenceBase::CreateCameraManager() {
}

bool ALobbySequenceBase::CheckEnableUpdateForMenuRacer() {
    return false;
}

bool ALobbySequenceBase::CheckEnableForceBackState(ELobbySequenceState InState) {
    return false;
}

void ALobbySequenceBase::CheckAndCrownSpawnOrDespawn(const int32 InRacerIndex) {
}

void ALobbySequenceBase::ChangeHeaderParam(ELobbySequenceState InState) {
}

void ALobbySequenceBase::ChangeFooterParam(ELobbySequenceState InState) {
}

bool ALobbySequenceBase::CallForceBackFunction() {
    return false;
}

void ALobbySequenceBase::CalcDecideCourse(int32& OutSelectedPlayerIndex, EStageId& OutSelectedCourseId) {
}

void ALobbySequenceBase::BindSubMenu() {
}

void ALobbySequenceBase::BindPlayerProfile() {
}

void ALobbySequenceBase::BindPlayerName() {
}

void ALobbySequenceBase::BindMenuInputReceive() {
}

void ALobbySequenceBase::BeforeGarageSetting_Implementation() {
}

void ALobbySequenceBase::BeforeCharaMachineSetting_Implementation() {
}

void ALobbySequenceBase::BackStateFromPlayerList() {
}

void ALobbySequenceBase::BackSequenceStreamLevels(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void ALobbySequenceBase::AfterPlayerProfileSetting_Implementation(bool InIsTimeUp) {
}

void ALobbySequenceBase::AfterGarageSetting_Implementation(bool InIsTimeUp) {
}

void ALobbySequenceBase::AfterEmoteWheelSetting_Implementation(bool InIsTimeUp) {
}

void ALobbySequenceBase::AfterCharaMachineSetting_Implementation(bool InIsTimeUp) {
}


