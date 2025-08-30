#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/TimelineComponent.h"
#include "Components/SlateWrapperTypes.h"
#include "HierarchicalStateMachine.h"
#include "CreateOrConnectLobbyResult.h"
#include "EBlockPlayerErrorCode.h"
#include "EGameMatchmakingCompleteStatus.h"
#include "EStageId.h"
#include "LobbyId.h"
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
#include "PendingDestroyRacer.h"
#include "PendingRefreshPlayerParamData.h"
#include "Templates/SubclassOf.h"
#include "LobbySequenceBase2.generated.h"

class ACameraActor;
class ALobbyFinishDirectingManager;
class ALobbyTravelRingManager;
class AMenuCameraManager;
class AMenuRacerLobby;
class AOnlineSequence;
class AUnionCrossPlayResolveWindowManager;
class UAnotherStageLotteryWheel;
class UCharaMachineSelectStateBase;
class UCommonLobbyContext;
class UCommonLobbyMemberContext;
class UCommonMenuButtonBase;
class UCommonMenuFooterMenu;
class UCommonMenuHeaderMenu;
class UCommonMenuSubMenu;
class UCommonMessageBar;
class UCorseLotteryWheelBase;
class UCurveFloat;
class UEmoteWheelState;
class UFont;
class UFriendListState;
class UGadgetCustomize2State;
class UGarageState;
class ULobbyAnnounceInfo;
class ULobbyCourseSelectSceneBase;
class ULobbyEntryCheckState;
class ULobbyPlayerListState;
class ULobbySceneBase;
class ULobbySequenceP2PConnection;
class UMatchmakingRequestContext;
class UMenuInputRecieveObject;
class UMenuRacerParameterDataAsset;
class UNetLobbyControlComponent;
class UNoticePopupState;
class UObject;
class UOnlinePlayerNameButton;
class UOnlineTimer;
class UPlayerProfileState;
class USoundAtomCue;
class UTimelineComponent;
class UUnionUIButtonBase;
class UUnionUIPopupWindowBase;

UCLASS(Blueprintable)
class UNION_API ALobbySequenceBase2 : public AHierarchicalStateMachine, public IMenuSequenceUIInterface, public ILobbySequenceBaseInterface {
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
    TArray<int32> PlayerPositionControlTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuRacerParameterDataAsset* MenuRacerParameterDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageId> CourseMainID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageId> VisibleCourseMainId;
    
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
    UCommonMessageBar* MessageBarScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonMessageBar> MessageBarClassPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOnlinePlayerNameButton* FocusedPlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLobbySearchCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULobbyEntryCheckState* EntryCheckStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCharaMachineSelectStateBase> CharaMachineSelectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharaMachineSelectStateBase* CharaMachineSelectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGadgetCustomize2State> CustomizeGadgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGadgetCustomize2State* CustomizeGadgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEmoteWheelState> EmoteWheelClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEmoteWheelState* EmoteWheelComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULobbyPlayerListState> LobbyPlayerListClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULobbyPlayerListState* LobbyPlayerListComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPlayerProfileState> PlayerProfileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerProfileState* PlayerProfileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGarageState> GarageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGarageState* GarageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFriendListState> FriendListClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFriendListState* FriendListComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNoticePopupState> NoticePopupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNoticePopupState* NoticePopupComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNetLobbyControlComponent* NetLobbyControlComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULobbySequenceP2PConnection* P2PConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuInputRecieveObject* MenuInputReceiveObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuInputRecieveObject* MenuButtonInputReceiveObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFont* FontObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableInputPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMenuCameraManager> CameraManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMenuCameraManager* CameraManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* CameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCorseLotteryWheelBase* CorseLotteryWheel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageId> CorseLotteryResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnotherStageLotteryWheel* AnotherStageLotteryWheel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnotherStageLotteryResult> AnotherStageLotteryResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALobbyTravelRingManager> LobbyTravelRingManagerClass;
    
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
    bool bLobbyFinishedFadeComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsStartFadeOnInitialize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInitializedLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCompleteMatchmaking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsReceivedLobbyHostData;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCallLobbyDeleteFromComponent;
    
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
    USoundAtomCue* MatchingConpleteQue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* MatchingWaitLoopCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundHandle MatchingWaitLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* MatchingCancelBtnCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LobbySearchCancelTimeLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTimelineComponent> LongPutCancelTimeLineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* LongPutCancelTimeLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETimelineDirection::Type> TimelineDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HostCancelWindowText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ClientCancelWindowText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AUnionCrossPlayResolveWindowManager> CrossPlayResolveUIManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUnionCrossPlayResolveWindowManager* m_CrossPlayResolveUIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* PopupWindow;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPendingRefreshPlayerParamData> PendingRefreshPlayerParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPendingDestroyRacer> PendingDestroyRacer;
    
public:
    ALobbySequenceBase2(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void WatchShortLobbyIdExpiry(const float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdatePlayerName();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateLobbyRacers(bool IsAlreadySetupRacerOnly);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UnLoadTopMenuSubLevel();
    
    UFUNCTION(BlueprintCallable)
    void UnLoadLobbySubLevel();
    
    UFUNCTION(BlueprintCallable)
    void UnBindSubMenu();
    
public:
    UFUNCTION(BlueprintCallable)
    void UnBindPrivateLobbyEvent(UCommonLobbyContext* LobbyContext);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UnBindPlayerProfile();
    
    UFUNCTION(BlueprintCallable)
    void UnBindPlayerName();
    
    UFUNCTION(BlueprintCallable)
    void UnBindMenuInputReceive();
    
    UFUNCTION(BlueprintCallable)
    void SyncCurrentCharaMachine();
    
    UFUNCTION(BlueprintCallable)
    void StateInputInitWaitingInTheLobby();
    
    UFUNCTION(BlueprintCallable)
    void StateInputInitSelectGameMode();
    
    UFUNCTION(BlueprintCallable)
    void StateInputInitReturnedFromRaceToLobby();
    
    UFUNCTION(BlueprintCallable)
    void StateInputInitLobbySearch();
    
    UFUNCTION(BlueprintCallable)
    void StateInputInitControl();
    
    UFUNCTION(BlueprintCallable)
    void StateInputInitCheckMembers();
    
    UFUNCTION(BlueprintCallable)
    void StateInputInit();
    
    UFUNCTION(BlueprintCallable)
    void StartTimer(ELobbyTimerType InELobbyTimerType);
    
    UFUNCTION(BlueprintCallable)
    void StartLongPutCancelTimeLine();
    
    UFUNCTION(BlueprintCallable)
    void StartFadeOnInitialize();
    
    UFUNCTION(BlueprintCallable)
    void ShowStageName();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMatchmaking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVisibilityValidPlayerName(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVisibilityValidOwnIcon(ESlateVisibility InVisibility);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetVisibilitySubMenu(ESlateVisibility InVisibility);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetupPrivateLobby();
    
    UFUNCTION(BlueprintCallable)
    void SetupPrimaryLobby();
    
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
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineActivity();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNextLobbySubMenuState(UCommonMenuButtonBase* InButton);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNextLobbySequenceState(ELobbySequenceState InState, ELobbySequenceState PrevState);
    
    UFUNCTION(BlueprintCallable)
    void SetMenuDirectionKeyEnable(const bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyType(EMatchingLobbyType Type);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetLobbySequenceType(ELobbySequenceState InNextState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLobbyRacerParam(AMenuRacerLobby* InMenuRacerLobby, int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLobbyRacer(int32 InPlayerLobbyIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyPlayerCount(int32 InPlayerCount);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInitializedLobby(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHiddenInGameMenuRacers(bool bNewHidden, bool bIsLobbySearchForceBack);
    
    UFUNCTION(BlueprintCallable)
    void SetHiddenAlreadySetupMenuRacers(bool bNewHidden, bool bIsLobbySearchForceBack);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFooterHoldGaugeValue(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCourseSelectSetting(EStageId InSelectedCourseId, TArray<FAnotherStageLotteryResult>& LotteryResults);
    
    UFUNCTION(BlueprintCallable)
    void SetAloneLobbyWatchingFlag(bool bWatching);
    
    UFUNCTION(BlueprintCallable)
    void SendHorn();
    
    UFUNCTION(BlueprintCallable)
    void ResetLongPutCancelTimeLine();
    
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
    
public:
    UFUNCTION(BlueprintCallable)
    void QuitLobby();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlaySelectCourseResult();
    
    UFUNCTION(BlueprintCallable)
    void PlayLobbyBgm();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool OwnPlayerIsHost();
    
    UFUNCTION(BlueprintCallable)
    void OverrideResultData();
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateStateWaitSquadP2PConnectComplete(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateWaitP2PConnection(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateWaitingInTheLobby(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateSubLevelCheck(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateSubFairPoint(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateStateSquadInRaceCheck(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateSelectCourseWait(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateSelectCourseResult(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateSelectCourse(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateReturnedFromRaceToLobby(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateStateQuitLobbyWindow(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateStateQuitLobbyEndWindow(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateLobbySearchComplete(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateLobbySearch(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateLobbyInit(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateLobbyFinished(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateFixPlayerData(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateErrorWindow(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateStateCheckMembersWaiting(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateCheckMembers(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateCheckLobbyHost(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateBackToPrevSequence(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateLongPutCancelTimeLine(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void OnUnFocusSelectCourse(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnUnFocusPlayerName(UUnionUIButtonBase* InButton, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTimeOutLobby();
    
    UFUNCTION(BlueprintCallable)
    void OnSyncLobbyComplete(bool bSuccessful, const FLobbyOperationResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnSubFairPointComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartSelectCourseResultEventCallback();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartMatchmakingForMember(UCommonLobbyContext* LobbyContext);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartMatchmaking(UCommonLobbyContext* LobbyContext);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpecialPressedLobby(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void OnShowPopupPlayerProfile(int32 InBtnType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShowLevelSequenceSelectCourseResultUI();
    
    UFUNCTION(BlueprintCallable)
    void OnSendNicePlayerProfile(int32 SendPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSelectedStampEmoteWheel(int32 StampIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRightShoulderPressedLobby(UObject* Object);
    
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
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMessageBarSceneOutAnimFinish();
    
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
    UFUNCTION(BlueprintCallable)
    void OnLobbyFinishFadeFinished(EUnionUIFadeDirection InFadeDirection);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyBackFadeFinished(EUnionUIFadeDirection InFadeDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLeftStickPressedLobby(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void OnKickPlayerProfileResult(bool bSuccessful, const FLobbyOperationResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnKickPlayerProfile(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnInitStateWaitSquadP2PConnectComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateWaitP2PConnection();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateWaitingInTheLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateSubLevelCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateSubFairPoint();
    
    UFUNCTION(BlueprintCallable)
    void OnInitStateSquadInRaceCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateShowTipsWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateShowFestaFixedRuleInfoWindow();
    
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
    
    UFUNCTION(BlueprintCallable)
    void OnInitStateQuitLobbyWindow();
    
    UFUNCTION(BlueprintCallable)
    void OnInitStateQuitLobbyEndWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateNotificationWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateLobbySearchComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateLobbySearch();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateLobbyPlayerList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateLobbyInit();
    
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
    
    UFUNCTION(BlueprintCallable)
    void OnInitStateCheckMembersWaiting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateCheckMembers();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateCheckLobbyHost();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateBackToPrevSequence();
    
    UFUNCTION(BlueprintCallable)
    void OnGotoGarageFadeFinished(EUnionUIFadeDirection InFadeDirection);
    
    UFUNCTION(BlueprintCallable)
    void OnGotoCustomizeGadgetFadeFinished(EUnionUIFadeDirection InFadeDirection);
    
    UFUNCTION(BlueprintCallable)
    void OnGotoCharaMachineFadeFinished(EUnionUIFadeDirection InFadeDirection);
    
    UFUNCTION(BlueprintCallable)
    void OnFriendRequestPlayerProfileResult(bool bSuccessful, int32 ErrorCode);
    
    UFUNCTION(BlueprintCallable)
    void OnFriendRequestPlayerProfile(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnFriendRequestMsgBarPlayerProfileEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnFocusSelectCourse(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusPlayerName(UUnionUIButtonBase* InButton, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedUnLoadTopMenuSubLevelCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedUnLoadLobbySubLevelCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedLongPutCancelTimeLine();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedLoadTopMenuSubLevelCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedLoadLobbySubLevelCallback();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinishedLevelSequenceSelectCourseResult();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinishedLevelSequenceLobby();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeFinishedOnInitialize(EUnionUIFadeDirection InFadeDirection);
    
    UFUNCTION(BlueprintCallable)
    void OnFadeCompleteOnLobbyFinished(EUnionUIFadeDirection InFadeDirection);
    
    UFUNCTION(BlueprintCallable)
    void OnFaceTopPressedLobbyPlayerList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFaceTopPressedLobby(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFaceLeftPressedLobby(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void OnExitStateWaitSquadP2PConnectComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateWaitP2PConnection();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateWaitingInTheLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateSubLevelCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateSubFairPoint();
    
    UFUNCTION(BlueprintCallable)
    void OnExitStateSquadInRaceCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateShowFestaFixedRuleInfoWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateSelectCourseWait();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateSelectCourseResult();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateSelectCourse();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateReturnedFromRaceToLobby();
    
    UFUNCTION(BlueprintCallable)
    void OnExitStateQuitLobbyWindow();
    
    UFUNCTION(BlueprintCallable)
    void OnExitStateQuitLobbyEndWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateLobbySearchComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateLobbySearch();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateLobbyInit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateLobbyFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateFixPlayerData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateErrorWindow();
    
    UFUNCTION(BlueprintCallable)
    void OnExitStateCheckMembersWaiting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateCheckMembers();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateCheckLobbyHost();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateBackToPrevSequence();
    
    UFUNCTION(BlueprintCallable)
    void OnExitPopupWindow(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitFriendList(EMenuSequenceSubState State);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitEmoteWheel(EMenuSequenceSubState State);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnErrorFromNetLobbyControl(int32 ErrorCode, EAppNetErrorCode ErrorCodeEnum, const FString& ErrorMessage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDisconnectPlayerProfileErrorWindow();
    
    UFUNCTION(BlueprintCallable)
    void OnDecisionSelectCourse(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnDecisionPlayerName(UUnionUIButtonBase* InButton, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDecisionCharaMachine();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDecideWaitingInTheLobby(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnDecideSubMenu(UUnionUIButtonBase* InButton, int32 PanelIndex, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDecideReturnedFromRaceToLobby(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDecideLobbySearch(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCompleteMatchmaking(EGameMatchmakingCompleteStatus Status, const FCreateOrConnectLobbyResult& Result);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnComebackMember(bool AllMembersInputFinished);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChangedWaitTimerEmoteWheel(bool IsWaiting);
    
    UFUNCTION(BlueprintCallable)
    void OnChangedPlayerProfile(int32 NextPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCancelWaitingInTheLobby(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelSelectCourse(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCancelReturnedFromRaceToLobby(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelPlayerName(UUnionUIButtonBase* InButton, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelLongPutCancelTimeLine(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCancelLobbySearch(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelGarage(EMenuSequenceSubState State);
    
    UFUNCTION(BlueprintCallable)
    void OnBlockPlayerProfileResult(EBlockPlayerErrorCode ErrorCode, const FString& ProductUserId);
    
    UFUNCTION(BlueprintCallable)
    void OnBlockPlayerProfile(const FString& UserId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBackSequence();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBackPlayerProfile(EMenuSequenceSubState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBackPlayerName(EMenuSequenceSubState InState);
    
    UFUNCTION(BlueprintCallable)
    void OnBackNoticePopup(EMenuSequenceSubState State);
    
    UFUNCTION(BlueprintCallable)
    void OnBackLobbySubMenuFadeFinished(EUnionUIFadeDirection InFadeDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBackKeyReleasedLobby(UObject* Object);
    
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
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAcceptKeyPressedLobby(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void MatchingUserSetting();
    
    UFUNCTION(BlueprintCallable)
    FLobbyInitData MakeLobbyHostData();
    
    UFUNCTION(BlueprintCallable)
    void LoadTopMenuSubLevel();
    
    UFUNCTION(BlueprintCallable)
    void LoadLobbySubLevel();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidPlayerData(const FLobbyPlayerData& PlayerData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidPlayer(int32 InPlayerIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsSubMenuStateUseFade(const ELobbySequenceState InState);
    
    UFUNCTION(BlueprintCallable)
    bool IsSubMenuState(const ELobbySequenceState InState);
    
    UFUNCTION(BlueprintCallable)
    bool IsShortLobbyIdExpired(const double ExpirationTimeSec);
    
    UFUNCTION(BlueprintCallable)
    bool IsInitSyncCurrentCharaMachine();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFriendMatchLobbyType() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableSubStateTime(ELobbyTimerType InTimerType) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCom(int32 InPlayerLobbyIndex, bool& OutIsValidLobbyContext, bool& OutIsValidMemberContext);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitRaceSetting();
    
    UFUNCTION(BlueprintCallable)
    void InitializeTransformLobbyRacers();
    
    UFUNCTION(BlueprintCallable)
    void InitializeTimer();
    
    UFUNCTION(BlueprintCallable)
    void InitializeSubMenu();
    
    UFUNCTION(BlueprintCallable)
    void InitializeSubLevelObjects();
    
    UFUNCTION(BlueprintCallable)
    void InitializeRaceResult();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeOwnMenuRacer(bool bIsWaitingToReturnTheRace);
    
protected:
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
    void GoNextStateRuleSetting();
    
    UFUNCTION(BlueprintCallable)
    void GoNextStatePlayerProfile(int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void GoNextStateLobbyPlayerList();
    
    UFUNCTION(BlueprintCallable)
    void GoNextStateEmoteWheel();
    
    UFUNCTION(BlueprintCallable)
    void GoNextStateAfterInitialize();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOnlineTimer* GetTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTimeCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSubLevelNameOfWireless() const;
    
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
    void GetPlayerSelectedCourseIds(TArray<EStageId>& OutPlayerSelectedCourseIds, TArray<int32>& OutPlayerSelectedCourseIndexs);
    
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
    ULobbySceneBase* GetMainUIScene();
    
    UFUNCTION(BlueprintCallable)
    EMatchingLobbyType GetLobbyType();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetLobbySubLevelName(EMatchingLobbyType InType) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AMenuRacerLobby*> GetLobbyRacers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMenuRacerLobby* GetLobbyRacer(int32 InIndex);
    
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
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetEnterLobbyId(FLobbyId& OutLobbyId);
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetEnableInputPlayer();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDeltaTime() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDebugLobbyTimeCountStop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELobbySequenceState GetCurrentLobbyState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMenuCameraManager* GetCameraManager();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELobbySequenceState GetBackState() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FinalizeLobbyContext() const;
    
    UFUNCTION(BlueprintCallable)
    void DeleteOnlineActivity();
    
private:
    UFUNCTION(BlueprintCallable)
    void DebugShowCrown();
    
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
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreateDisableGadgetMessageBar();
    
    UFUNCTION(BlueprintCallable)
    void CreateCourseSelectUIScene();
    
    UFUNCTION(BlueprintCallable)
    void CreateCameraManager();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEnableUpdateForLobbyRacer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEnableForceBackState(ELobbySequenceState InState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckAndCrownSpawnOrDespawn(const int32 InRacerIndex);
    
    UFUNCTION(BlueprintCallable)
    void ChangeTimerFinished();
    
    UFUNCTION(BlueprintCallable)
    void ChangeHeaderParam(ELobbySequenceState InState);
    
    UFUNCTION(BlueprintCallable)
    void ChangeFooterParam(ELobbySequenceState InState);
    
    UFUNCTION(BlueprintCallable)
    void CancelLongPutCancelTimeLine();
    
    UFUNCTION(BlueprintCallable)
    void CallOnBackEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    bool CallForceBackFunction();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CalcDecideCourse(int32& OutSelectedPlayerIndex, EStageId& OutSelectedCourseId);
    
    UFUNCTION(BlueprintCallable)
    void BindSubMenu();
    
public:
    UFUNCTION(BlueprintCallable)
    void BindPrivateLobbyEvent(UCommonLobbyContext* LobbyContext);
    
    UFUNCTION(BlueprintCallable)
    void BindPrimaryLobbyEvent(UCommonLobbyContext* LobbyContext);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BindPlayerProfile();
    
    UFUNCTION(BlueprintCallable)
    void BindPlayerName();
    
    UFUNCTION(BlueprintCallable)
    void BindMenuInputReceive();
    
    UFUNCTION(BlueprintCallable)
    void BeforePlayerProfileSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeforeGarageSetting();
    
    UFUNCTION(BlueprintCallable)
    void BeforeEmoteWheelSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeforeCharaMachineSetting();
    
    UFUNCTION(BlueprintCallable)
    void BackStateFromPlayerList();
    
public:
    UFUNCTION(BlueprintCallable)
    bool AlreadyStartedPreloadMainCourse();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AfterGarageSetting(bool InIsTimeUp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AfterEmoteWheelSetting(bool InIsTimeUp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AfterCharaMachineSetting(bool InIsTimeUp);
    

    // Fix for true pure virtual functions not being implemented
};

