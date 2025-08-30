#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LatentActionManager.h"
#include "Components/SlateWrapperTypes.h"
#include "HierarchicalStateMachine.h"
#include "CreateOrConnectLobbyResult.h"
#include "EErrorLevel.h"
#include "EGameMatchmakingCompleteStatus.h"
#include "EPopupWindowButtonType.h"
#include "EPopupWindowType.h"
#include "EStageId.h"
#include "LobbyInitData.h"
#include "LobbyOperationResult.h"
#include "SoundHandle.h"
#include "UnionPlatformEventInfo.h"
#include "EUnionUIFadeDirection.h"
#include "AnotherStageLotteryResult.h"
#include "EAppNetErrorCode.h"
#include "ECommonLobbyMemberState.h"
#include "ELobbySequenceState.h"
#include "ELobbyTimerType.h"
#include "EMatchingLobbyType.h"
#include "EMenuSequenceSubState.h"
#include "LobbyPlayerData.h"
#include "LobbySequenceBaseInterface.h"
#include "MenuSequenceUIInterface.h"
#include "Templates/SubclassOf.h"
#include "LobbySequenceBase.generated.h"

class ACameraActor;
class ALobbyFinishDirectingManager;
class ALobbyTravelRingManager;
class AMenuCameraManager;
class AMenuRacerLobby;
class AOnlineSequence;
class UAnotherStageLotteryWheel;
class UCharaMachineSelectStateBase;
class UCommonLobbyContext;
class UCommonLobbyMemberContext;
class UCommonMenuButtonBase;
class UCommonMenuFooterMenu;
class UCommonMenuHeaderMenu;
class UCommonMenuSubMenu;
class UCurveFloat;
class UEmoteWheelState;
class UGadgetCustomize2State;
class UGarageState;
class ULobbyAnnounceInfo;
class ULobbyCourseSelectSceneBase;
class ULobbyPlayerListState;
class ULobbySceneBase;
class ULobbySequenceP2PConnection;
class UMatchmakingRequestContext;
class UMenuInputRecieveObject;
class UNetLobbyControlComponent;
class UObject;
class UOnlinePlayerNameButton;
class UOnlineTimer;
class UPlayerProfileState;
class USoundAtomCue;
class UTimelineComponent;
class UUnionUIButtonBase;
class UUnionUIFade;
class UUnionUISceneBase;

UCLASS(Blueprintable)
class UNION_API ALobbySequenceBase : public AHierarchicalStateMachine, public IMenuSequenceUIInterface, public ILobbySequenceBaseInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVoteSelectCourseDelegate, int32, PlayerIndex, int32, RingIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSelectCourseFinishedDelegate, int32, InCourseIndex, int32, InPlayerIndex, const TArray<FAnotherStageLotteryResult>&, InLotteryResults);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMatchingSequenceTwoIndexDelegate, int32, Index1, int32, Index2);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMatchingSequenceOneIndexDelegate, int32, Index);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMatchingSequenceDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMakeLobbyHostDataDelegate, FLobbyInitData, Data);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchingSequenceDelegate OnGadgetCustmizeFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMakeLobbyHostDataDelegate OnMakeLobbyHostDataEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoteSelectCourseDelegate OnVoteSelectCourseEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectCourseFinishedDelegate OnHostDecisionSelectCourseEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchingSequenceDelegate OnStartSelectCourseResultEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchingSequenceDelegate OnDebugTimeCountForceEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchingSequenceDelegate OnDebugCrownVisibleForceChange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMatchingLobbyType LobbyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOnlineSequence* OnlineSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbySequenceState PrevSequenceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbySequenceState PrevFadeSequenceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLobbyPlayerData> LobbyPlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> FakeLobbyPlayerIndexList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageId> CourseMainID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageId> VisibleCourseMainId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ULobbySceneBase> MainUISceneClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ULobbySceneBase> MainUISceneRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULobbySceneBase* MainUIScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonMenuSubMenu> SubMenuUIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonMenuSubMenu* SubMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableSubMenuInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ULobbyCourseSelectSceneBase> SelectCourseUIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULobbyCourseSelectSceneBase* CourseSelectUIScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ULobbyAnnounceInfo> LobbyAnnounceInfoUIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULobbyAnnounceInfo* LobbyAnnounceInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOnlinePlayerNameButton* FocusedPlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SentIndexList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLobbySearchCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharaMachineSelectStateBase* CharaMachineSelectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGadgetCustomize2State* CustomizeGadgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEmoteWheelState* EmoteWheelComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULobbyPlayerListState* LobbyPlayerListComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerProfileState* PlayerProfileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNetLobbyControlComponent* NetLobbyControlComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGarageState* GarageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULobbySequenceP2PConnection* P2PConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuInputRecieveObject* MenuInputReceiveObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMenuCameraManager> CameraManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMenuCameraManager* CameraManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* CameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnotherStageLotteryWheel* AnotherStageLotteryWheel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALobbyTravelRingManager* LobbyTravelRingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALobbyFinishDirectingManager* LobbyFinishedDirectingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LobbyHostPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OwnPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CourseResultSelectedPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId CourseResultSelectedCourseId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlreadyReceiveDecidedCourse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlaySelectCourseResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> TransformMenuRacers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanExitState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInitializedLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsReceivedLobbyHostData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OtherLobbyMembersReceivedHostData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOwnConnected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RaceCycleFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseStateSelectCourse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishedSelectCourseResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLobbySearching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsVisibleMatchingNow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCallForceBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIFade* UIFadeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNetLobbyControlComponent> NetLobbyControlComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULobbySequenceP2PConnection> P2PConnectionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbyTimerType LobbyTimerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELobbyTimerType, int32> LobbyTimerStartTimeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ALobbyTravelRingManager> LobbyTravelRingManagerPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* MatchingConpleteQue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* MatchingWaitLoopCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundHandle MatchingWaitLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LobbySearchCancelTimeLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* LongPutCancelTimeLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTimelineComponent> LongPutCancelTimeLineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSendStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSendHorn;
    
public:
    ALobbySequenceBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdatePlayerName();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateMenuRacers();
    
protected:
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void UnLoadSubLevels(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void UnBindSubMenu();
    
    UFUNCTION(BlueprintCallable)
    void UnBindPlayerProfile();
    
    UFUNCTION(BlueprintCallable)
    void UnBindPlayerName();
    
    UFUNCTION(BlueprintCallable)
    void UnBindMenuInputReceive();
    
    UFUNCTION(BlueprintCallable)
    void StartTimer(ELobbyTimerType InELobbyTimerType);
    
    UFUNCTION(BlueprintCallable)
    void StartFadeOnInitialize();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMatchmaking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVisibilityValidPlayerName(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVisibilityValidOwnIcon(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetupLobby();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupCourseSelect();
    
    UFUNCTION(BlueprintCallable)
    void SetUpConvertPlayerIndexList();
    
    UFUNCTION(BlueprintCallable)
    void SetUpCameraManager();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTimeCount(int32 InTimeCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayerName(int32 InPlayerLobbyIndex, bool bInIsCom);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNextLobbySubMenuState(UCommonMenuButtonBase* InButton);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNextLobbySequenceState(ELobbySequenceState InState, ELobbySequenceState PrevState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMenuRacerParam(AMenuRacerLobby* InMenuRacerLobby, int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMenuRacer(int32 InPlayerLobbyIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyType(EMatchingLobbyType Type);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetLobbySequenceType(ELobbySequenceState InNextState);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetLobbyPlayerCount(int32 InPlayerCount);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInitializedLobby(bool bNewValue);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFooterHoldGaugeVaue(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCourseSelectSetting(EStageId InSelectedCourseId, TArray<FAnotherStageLotteryResult>& LotteryResults);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSelectCourseWidget();
    
    UFUNCTION(BlueprintCallable)
    void RemoveLobbyWidget();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshPlayerParam(const FLobbyPlayerData& InPlayerData, bool InIsOwnPlayer, ECommonLobbyMemberState InLobbyState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RecvStamp(UCommonLobbyMemberContext* InMemberContext, int32 InStampIndex);
    
    UFUNCTION(BlueprintCallable)
    void RecvSelectCourse(UCommonLobbyMemberContext* InMemberContext, int32 courseId);
    
    UFUNCTION(BlueprintCallable)
    void RecvLike(UCommonLobbyMemberContext* InSendMemberContext, UCommonLobbyMemberContext* InRecvMemberContext);
    
    UFUNCTION(BlueprintCallable)
    void RecvHorn(UCommonLobbyMemberContext* InMemberContext);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveStamp(int32 InSendPlayerLobbyIndex, int32 InStampIndex);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveLobbyInitData(UCommonLobbyContext* InLobbyContext, const FLobbyInitData& InData);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveLike(int32 InSendPlayerLobbyIndex, int32 InReceivePlayerLobbyIndex);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveHorn(int32 InSendPlayerLobbyIndex);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveDecidedCourse(int32 InDecidedCourseId, int32 InDecidedPlayerOnlineIndex);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveChangedLikesCount(int32 InSendPlayerLobbyIndex, int32 OnNewLikesCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlaySelectCourseResult();
    
    UFUNCTION(BlueprintCallable)
    void PlayLobbyBgm();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool OwnPlayerIsHost();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateTimeLineLobbySearch(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateWaitP2PConnection(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateWaitingInTheLobby(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateSelectCourseWait(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateSelectCourseResult(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateSelectCourse(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateLobbySearchComplete(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateLobbySearch(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateLobbyFinished(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateFixPlayerData(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateErrorWindow(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateCheckLobbyHost(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUnFocusWaitingInTheLobby(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnUnFocusSelectCourse(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnUnFocusPlayerName(UUnionUIButtonBase* InButton, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTimeOutLobby();
    
    UFUNCTION(BlueprintCallable)
    void OnSyncLobbyComplete(bool bSuccessful, const FLobbyOperationResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartTimeLineLobbySearch();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartSelectCourseResultEventCallback();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartMatchmakingForMember(UCommonLobbyContext* LobbyContext);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartMatchmaking(UCommonLobbyContext* LobbyContext);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShowLevelSequenceSelectCourseResultUI();
    
    UFUNCTION(BlueprintCallable)
    void OnSendNicePlayerProfile(int32 SendPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSelectedStampEmoteWheel(int32 StampIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRightShoulderWaitingInTheLobby(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRightShoulderReturnedFromRaceToLobby(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRightShoulderPressedLobby(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRightShoulderLobbySearch(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnReportPlayerProfile(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayReverseLevelSequenceLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayLevelSequenceLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnPlayerNameButtonDecideEvent(bool bIsSuccsess);
    
    UFUNCTION(BlueprintCallable)
    void OnPlatformEvent(const FUnionPlatformEventInfo& EventInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLogoutComplete(int32 LocalUserNum, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbySystemPreRaceFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLobbyMemberDisconnect(const FLobbyPlayerData& InPlayerData, bool InIsOwnPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLobbyMemberConnect(const FLobbyPlayerData& InPlayerData, bool InIsOwnPlayer);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLeftStickPressedLobby();
    
    UFUNCTION(BlueprintCallable)
    void OnKickPlayerProfileResult(bool bSuccessful, const FLobbyOperationResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnKickPlayerProfile(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateWaitP2PConnection();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateWaitingInTheLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateShowTipsWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateSelectGameMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateSelectCourseWait();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateSelectCourseResult();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateSelectCourse();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateReturnedFromRaceToLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateNotificationWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateLobbySearchComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateLobbySearch();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateLobbyRuleSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateLobbyPlayerList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateLobbyFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateFixPlayerData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateFestaTeamDirecting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateFestaRuleWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateFestaRentalGadgetWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateExit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateErrorWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateCheckMembers();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateCheckLobbyHost();
    
    UFUNCTION(BlueprintCallable)
    void OnFocusSelectCourse(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusPlayerName(UUnionUIButtonBase* InButton, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinishedTimeLineReturnedFromRaceToLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinishedTimeLineLobbySearch();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinishedLevelSequenceSelectCourseResult();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinishedLevelSequenceLobby();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeFinishedOnInitialize(EUnionUIFadeDirection InFadeDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFaceTopPressedWaitingInTheLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFaceTopPressedLobbySearch();
    
    UFUNCTION(BlueprintCallable)
    void OnFaceTopPressedLobbyPlayerList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFaceTopPressedLobby(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFaceLeftPressedWaitingInTheLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFaceLeftPressedLobbySearch();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFaceLeftPressedLobby(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateWaitP2PConnection();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateWaitingInTheLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateSelectCourseWait();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateSelectCourseResult();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateSelectCourse();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateReturnedFromRaceToLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateLobbySearchComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateLobbySearch();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateLobbyFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateFixPlayerData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateErrorWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateCheckLobbyHost();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitFriendListl(EMenuSequenceSubState State);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitEmoteWheel(EMenuSequenceSubState State);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnErrorFromNetLobbyControl(int32 ErrorCode, EAppNetErrorCode ErrorCodeEnum, const FString& ErrorMessage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDecisionSelectCourse(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnDecisionPlayerName(UUnionUIButtonBase* InButton, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDecisionCharaMachine();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDecideWaitingInTheLobby(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDecideReturnedFromRaceToLobby(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDecideLobbySearch(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCompleteMatchmaking(EGameMatchmakingCompleteStatus Status, const FCreateOrConnectLobbyResult& Result);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnComebackMember(bool AllMembersInputFinished);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChangedWaitTimerEmoteWheel(bool IsWaiting);
    
    UFUNCTION(BlueprintCallable)
    void OnChangedPlayerProfile(int32 NextPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCancelWaitingInTheLobby(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCancelTimeLineLobbySearch(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelSelectCourse(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCancelReturnedFromRaceToLobby(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelPlayerName(UUnionUIButtonBase* InButton, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCancelLobbySearch(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelGarage(EMenuSequenceSubState State);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBackSequence(EErrorLevel ErrorLevel);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBackPlayerProfile(EMenuSequenceSubState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBackKeyPressedLobby(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBackCustomizeGadget(EMenuSequenceSubState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBackCharaMachine(EMenuSequenceSubState InState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAddMemberInitComplete();
    
protected:
    UFUNCTION(BlueprintCallable)
    FLobbyInitData MakeLobbyHostData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidPlayerData(FLobbyPlayerData PlayerData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidPlayer(int32 InPlayerIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsSubMenuState(const ELobbySequenceState InState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCom(int32 InPlayerLobbyIndex, bool& OutIsValidLobbyContext, bool& OutIsValidMemberContext);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeTransformMenuRacers();
    
    UFUNCTION(BlueprintCallable)
    void InitializeTimer();
    
    UFUNCTION(BlueprintCallable)
    void InitializeSubMenu();
    
    UFUNCTION(BlueprintCallable)
    void InitializeSubLevelObjects();
    
    UFUNCTION(BlueprintCallable)
    void InitializeMenuRacers();
    
    UFUNCTION(BlueprintCallable)
    void InitializeMainUIScene();
    
    UFUNCTION(BlueprintCallable)
    void InitializeLobbyTravelRingManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeCourseSelectUIScene();
    
    UFUNCTION(BlueprintCallable)
    void InitializeCameraManager();
    
    UFUNCTION(BlueprintCallable)
    void GoNextStateAfterInitialize();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOnlineTimer* GetTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTimeCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSubLevelNameOfSquad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSubLevelNameOfRankMatch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSubLevelNameOfLegend() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSubLevelNameOfFriend() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSubLevelNameOfFesta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSubLevelName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStartTimeCount();
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetPlayerSelectedCourseIds(TArray<EStageId>& OutPlayerSelectedCourseIds);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetPlayerDisplayName(int32 InPlayerLobbyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlayableCourseMainList(TArray<EStageId>& OutPlayableCourseMainList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULobbySequenceP2PConnection* GetP2PConnection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNetLobbyControlComponent* GetNetLobbyControlComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AMenuRacerLobby*> GetMenuRacers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMenuRacerLobby* GetMenuRacer(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULobbySceneBase* GetMainUIScene();
    
    UFUNCTION(BlueprintCallable)
    EMatchingLobbyType GetLobbyType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UCommonLobbyContext* GetLobbyContext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULobbyAnnounceInfo* GetLobbyAnnounceInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInitializedLobby() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonMenuHeaderMenu* GetHeaderMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonMenuFooterMenu* GetFooterMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDebugLobbyTimeCountStop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELobbySequenceState GetCurrentLobbyState();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetConvertPlayerLobbyIndex(int32 InIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMenuCameraManager* GetCameraManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FinalizeLobbyContext() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DebugForceTimeOut();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UMatchmakingRequestContext* CreateMatchmakingContext(int32 LocalUserNum) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CreateMainUIScene();
    
    UFUNCTION(BlueprintCallable)
    void CreateLobbyTravelRingManager();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UCommonLobbyContext* CreateLobbyContextByMatchmakingResult(int32 LocalUserNum, const FCreateOrConnectLobbyResult& MatchmakingResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UCommonLobbyContext* CreateLobbyContext(int32 LocalUserNum) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CreateLobbyAnnounceInfo();
    
    UFUNCTION(BlueprintCallable)
    UUnionUISceneBase* CreateErrorWindow(EPopupWindowType WindowType, EPopupWindowButtonType ButtonType, bool bAttension, FText Title, FText Message);
    
    UFUNCTION(BlueprintCallable)
    void CreateCourseSelectUIScene();
    
    UFUNCTION(BlueprintCallable)
    void CreateCameraManager();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEnableUpdateForMenuRacer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEnableForceBackState(ELobbySequenceState InState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckAndCrownSpawnOrDespawn(const int32 InRacerIndex);
    
    UFUNCTION(BlueprintCallable)
    void ChangeHeaderParam(ELobbySequenceState InState);
    
    UFUNCTION(BlueprintCallable)
    void ChangeFooterParam(ELobbySequenceState InState);
    
public:
    UFUNCTION(BlueprintCallable)
    bool CallForceBackFunction();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CalcDecideCourse(int32& OutSelectedPlayerIndex, EStageId& OutSelectedCourseId);
    
    UFUNCTION(BlueprintCallable)
    void BindSubMenu();
    
    UFUNCTION(BlueprintCallable)
    void BindPlayerProfile();
    
    UFUNCTION(BlueprintCallable)
    void BindPlayerName();
    
    UFUNCTION(BlueprintCallable)
    void BindMenuInputReceive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeforeGarageSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeforeCharaMachineSetting();
    
    UFUNCTION(BlueprintCallable)
    void BackStateFromPlayerList();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void BackSequenceStreamLevels(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AfterPlayerProfileSetting(bool InIsTimeUp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AfterGarageSetting(bool InIsTimeUp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AfterEmoteWheelSetting(bool InIsTimeUp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AfterCharaMachineSetting(bool InIsTimeUp);
    

    // Fix for true pure virtual functions not being implemented
};

