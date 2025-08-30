#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Common_UserSearchData.h"
#include "LobbyOperationResult.h"
#include "LobbySubsystemOnLobbyOperationCompleteDelegate.h"
#include "OnlineErrorBP.h"
#include "EUnionUIFadeDirection.h"
#include "ELobbySequenceState.h"
#include "EMatchingLobbyType.h"
#include "EMenuSequenceSubState.h"
#include "EOnlineGameMode.h"
#include "EPrivateMatchPlayType.h"
#include "ESquadMemberContextReadyCheckType.h"
#include "LobbySequenceBase2.h"
#include "LobbySquadSequenceInterface.h"
#include "LobbySquadSequence2.generated.h"

class AActor;
class UCommonMenuHeaderMenu;
class UFriendMatchMenu;
class UHintPopupWindow;
class ULobbyContextBase;
class UMenuRacerParameterDataAsset;
class UMenuSequenceSubStateBase;
class UNiagaraComponent;
class UNiagaraSystem;
class UObject;
class UOnlineReadySceneBase;
class UOnlineScene;
class USoundAtomCue;
class USquadContext;
class USquadLobbyControlComponent;
class USquadMemberContext;
class UUnionUIButtonBase;

UCLASS(Blueprintable)
class UNION_API ALobbySquadSequence2 : public ALobbySequenceBase2, public ILobbySquadSequenceInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOnlineScene* GameModeUIScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOnlineReadySceneBase* ReadyUIScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintPopupWindow* TipsUIScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuSequenceSubStateBase* OptionStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SquadPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MainCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbySequenceState ReturnToState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMatchingLobbyType SelectedLobbyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuRacerParameterDataAsset* FestaMenuRacerParameterDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* SquadEmit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* SquadSelectEmit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> SquadSelectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCancelInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WaitingRavelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> PopUpTitleList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> PopUpMessageList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> PopUpButtonList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ClientRavelDecidedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChangeCrossPlaySettingPopUpText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFriendMatchMenu* FriendMatchMenuComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbySubsystemOnLobbyOperationComplete LobbyReadyDecideSyncDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbySubsystemOnLobbyOperationComplete LobbyReadyCancelSyncDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbySubsystemOnLobbyOperationComplete LobbyChangeStateSyncDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* CancelQue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* LobbyMatchingCompleteQue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* NGQue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOnlineScene> SelectGameModeUISoftClassPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOnlineReadySceneBase> ReadyUISoftClassPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHintPopupWindow> TipsUISoftClassPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMenuSequenceSubStateBase> OptionStatePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFriendMatchMenu> FriendMatchMenuPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> SquadPositionObjectClassPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> SquadPositionEmitPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> SquadPositionSelectEmitPtr;
    
public:
    ALobbySquadSequence2(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void WaitGotoLobbyBeforeFadein();
    
    UFUNCTION(BlueprintCallable)
    void UnBindGameModeUIScene();
    
    UFUNCTION(BlueprintCallable)
    void SyncOwnReadyCheck(ESquadMemberContextReadyCheckType ReadyCheckType, FLobbySubsystemOnLobbyOperationComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void SyncOnlineGameMode(EOnlineGameMode OnlineGameMode, FLobbySubsystemOnLobbyOperationComplete OnComplete);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnSquadPosition(const TArray<FTransform>& InTransforms);
    
    UFUNCTION(BlueprintCallable)
    void SetChangedReadyHeaderAndFooter(bool bInIsCheckedReady);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnlineWidgets(UCommonMenuHeaderMenu* InHeader);
    
public:
    UFUNCTION(BlueprintCallable)
    void RefreshTransformRacersParam();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateWaitingComeBackLobby(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateTransitionToFriendLobbyAlone(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateStateSquadPopupWindow(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateStateShowTipsWindow(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateStateSelectGameMode(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateLobbyRuleSetting(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateStateCheckMembersWaitTallying(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateCheckJoinLobby(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnTipsWindow_CloseEndEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnSyncInviteFriendMatchGameModeEvent(bool bSuccessful, const FLobbyOperationResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnSyncDecideSquadGameModeEvent(bool bSuccessful, const FLobbyOperationResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnSearchLobbyIdComplete(bool bSuccessful, bool bIsLobbyExist, const FCommon_UserSearchData& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReceiveMemberUpdateAtCheckMembersEvent(USquadContext* LobbyContext, USquadMemberContext* MemberContext);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReceiveMemberMemberEvent(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReadyButtonDecideEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnPlatformCrossPlayResolveComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyOperationCompleteSimple(bool bSuccessful, const FLobbyOperationResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyInvitationRejectComplete(bool bWasSuccessful, const FLobbyOperationResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnlineGameModeCancelEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnInviteConfilmWindowOutEvent(bool bIsOut);
    
    UFUNCTION(BlueprintCallable)
    void OnInviteConfilmWindowInEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateWaitingComeBackLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateTransitionToFriendLobbyAlone();
    
    UFUNCTION(BlueprintCallable)
    void OnInitStateSquadPopupWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateLobbyRuleSetting();
    
    UFUNCTION(BlueprintCallable)
    void OnInitStateCheckMembersWaitTallying();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateCheckJoinLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGotoLobbyBeforeEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedFade_SelectGameMode(EUnionUIFadeDirection FadeDirection);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedFade_GotoLobby(EUnionUIFadeDirection FadeDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateWaitingComeBackLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateTransitionToFriendLobbyAlone();
    
    UFUNCTION(BlueprintCallable)
    void OnExitStateSquadPopupWindow();
    
    UFUNCTION(BlueprintCallable)
    void OnExitStateShowTipsWindow();
    
    UFUNCTION(BlueprintCallable)
    void OnExitStateSelectGameMode();
    
    UFUNCTION(BlueprintCallable)
    void OnExitStateOptionSquad(EMenuSequenceSubState State);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateLobbyRuleSetting();
    
    UFUNCTION(BlueprintCallable)
    void OnExitStateCheckMembersWaitTallying();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateCheckJoinLobby();
    
    UFUNCTION(BlueprintCallable)
    void OnDecideRemovedClientPopUpEvent(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnDecideLobbyPopUpEvent(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnDecideEventPopUpEvent(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnDecideCheckedMember_DelegateEvent(bool bSuccessful, const FLobbyOperationResult& InResult);
    
    UFUNCTION(BlueprintCallable)
    void OnCreateSquadLobbyEvent(ULobbyContextBase* LobbyContext, const FOnlineErrorBP& Error);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteSyncMovePublicLobbyState(bool bSuccessful, const FLobbyOperationResult& InResult);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteJoinSquad(bool bSuccessful, const FLobbyOperationResult& InResult);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeLobbyMemberState_DelegateEvent(bool bSuccessful, const FLobbyOperationResult& InResult);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelWaitingComeBackLobby(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelCheckedMemberWaiting_DelegateEvent(bool bSuccessful, const FLobbyOperationResult& InResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCancelCheckedMemberWaiting(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnAllCheckedMember_DelegateEvent(bool bSuccessful, const FLobbyOperationResult& InResult);
    
    UFUNCTION(BlueprintCallable)
    void LoadFinishAfterCharaMatchingLevelEvent();
    
    UFUNCTION(BlueprintCallable)
    void KickToAllClientMember(ULobbyContextBase* InContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJoiningLobby() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAloneSquadLobby();
    
    UFUNCTION(BlueprintCallable)
    void InitiSquadLobbySetupAfterFadeOut();
    
    UFUNCTION(BlueprintCallable)
    USquadLobbyControlComponent* GetSquadLobbyControlComponent() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMatchingLobbyType GetSelectedOnlineGameModeLobbyType() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FriendRuleFixedEvent(EPrivateMatchPlayType InPlayType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FriendMatchMenuFinishOutAnimEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FriendMatchMenuEnterLobbyDecisionEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FriendMatchMenuCancelEvent();
    
    UFUNCTION(BlueprintCallable)
    void DoneReadyCheckEvent();
    
    UFUNCTION(BlueprintCallable)
    void DisconnectGuest(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DestroySquadPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckMembersWaitingCancelEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckMemberCancelEvent();
    
    UFUNCTION(BlueprintCallable)
    bool CheckCanCancelMatchmaking(FString& InReason);
    

    // Fix for true pure virtual functions not being implemented
};

