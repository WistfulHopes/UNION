#pragma once
#include "CoreMinimal.h"
#include "LobbyOperationResult.h"
#include "LobbySubsystemOnLobbyOperationCompleteDelegate.h"
#include "OnlineErrorBP.h"
#include "EUnionUIFadeDirection.h"
#include "ELobbySequenceState.h"
#include "EMatchingLobbyType.h"
#include "EMenuSequenceSubState.h"
#include "EOnlineGameMode.h"
#include "EPrivateMatchPlayType.h"
#include "LobbySequenceBase.h"
#include "LobbySquadSequenceInterface.h"
#include "LobbySquadSequence.generated.h"

class AActor;
class UCommonMenuHeaderMenu;
class UCommonMessageBar;
class UFriendListState;
class UFriendMatchMenu;
class UHintPopupWindow;
class ULobbyContextBase;
class UMenuSequenceSubStateBase;
class UNiagaraSystem;
class UOnlineReadySceneBase;
class UOnlineScene;
class USoundAtomCue;
class USquadContext;
class USquadMemberContext;
class UUnionUIButtonBase;
class UUnionUIPopupWindowBase;

UCLASS(Blueprintable)
class UNION_API ALobbySquadSequence : public ALobbySequenceBase, public ILobbySquadSequenceInterface {
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
    UCommonMessageBar* MessageBarScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SquadPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MainCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbySequenceState ReturnToState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMatchingLobbyType SelectedLobbyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* SquadEmit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCheckReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCancelInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanOwnCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> PopUpTitleList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> PopUpMessageList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> PopUpButtonList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMenuSequenceSubStateBase> OptionStatePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuSequenceSubStateBase* OptionStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFriendMatchMenu> FriendMatchMenuPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFriendMatchMenu* FriendMatchMenuComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFriendListState* FriendListComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFriendListState> FriendLsitPtr;
    
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
    TSoftClassPtr<UOnlineScene> SelectGameModeUISoftClassPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOnlineReadySceneBase> ReadyUISoftClassPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHintPopupWindow> TipsUISoftClassPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonMessageBar> MessageBarClassPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> SquadPositionObjectClassPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> SquadPositionEmitPtr;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* PopupWindow;
    
public:
    ALobbySquadSequence(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void WaitGotoLobbyBeforeFadein();
    
    UFUNCTION(BlueprintCallable)
    void SyncOwnReadyCheck(bool bReadyCheckOk, FLobbySubsystemOnLobbyOperationComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void SyncOnlineGameMode(EOnlineGameMode OnlineGameMode, FLobbySubsystemOnLobbyOperationComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnlineWidgets(UCommonMenuHeaderMenu* InHeader);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateWaitingComeBackLobby(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateCheckMembers(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnTipsWindow_CloseEndEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnSyncDecideSquadGameModeEvent(bool bSuccessful, const FLobbyOperationResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnSideMenuButtonDecide(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnReceiveMemberUpdateAtCheckMembersEvent(USquadContext* LobbyContext, USquadMemberContext* MemberContext);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReadyButtonDecideEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyOperationCompleteSimple(bool bSuccessful, const FLobbyOperationResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnlineGameModeCancelEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnInviteConfilmWindowOutEvent(bool bIsOut);
    
    UFUNCTION(BlueprintCallable)
    void OnInviteConfilmWindowInEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateWaitingComeBackLobby();
    
    UFUNCTION(BlueprintCallable)
    void OnInitStateOptionSquad();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateCheckJoinLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGameModeButtonDecideEvent(UUnionUIButtonBase* Button);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedFade_SelectGameMode(EUnionUIFadeDirection FadeDirection);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedFade_GotoLobby(EUnionUIFadeDirection FadeDirection);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedFade_GotoGarage(EUnionUIFadeDirection FadeDirection);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedFade_GotoCharaMachineSelect(EUnionUIFadeDirection FadeDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateWaitingComeBackLobby();
    
    UFUNCTION(BlueprintCallable)
    void OnExitStateOptionSquad(EMenuSequenceSubState State);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateCheckJoinLobby();
    
    UFUNCTION(BlueprintCallable)
    void OnDecideLobbyPopUpEvent(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnDecideCheckedMember_DelegateEvent(bool bSuccessful, const FLobbyOperationResult& InResult);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteSyncMovePublicLobbyState(bool bSuccessful, const FLobbyOperationResult& InResult);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteSyncComebackSquadLobbyState(bool bSuccessful, const FLobbyOperationResult& InResult);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnChangeLobbyMemberState_DelegateEvent(bool bSuccessful, const FLobbyOperationResult& InResult);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelCheckedMember_DelegateEvent(bool bSuccessful, const FLobbyOperationResult& InResult);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelCheckedMember(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void LoadFinishAfterCharaMatchingLevelEvent();
    
    UFUNCTION(BlueprintCallable)
    void KickToAllClientMember(ULobbyContextBase* InContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJoiningLobby() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAloneSquadLobby();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMatchingLobbyType GetSelectedOnlineGameModeLobbyType() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FriendRuleFixedEvent(EPrivateMatchPlayType InPlayType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FriendMatchMenuEnterLobbyDecisionEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FriendMatchMenuCompleteAnimFinishedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FriendMatchMenuCancelEvent();
    
    UFUNCTION(BlueprintCallable)
    void DoneReadyCheckEvent();
    
    UFUNCTION(BlueprintCallable)
    void DisconnectGuest(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void DecidedSquadGameMode(EOnlineGameMode InSelectGameMode);
    
    UFUNCTION(BlueprintCallable)
    void CreateSquadLobbyEvent(ULobbyContextBase* LobbyContext, const FOnlineErrorBP& Error);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckMemberCancelEvent();
    

    // Fix for true pure virtual functions not being implemented
};

