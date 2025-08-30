#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "LobbyOperationResult.h"
#include "LobbySubsystemOnLobbyOperationCompleteDelegate.h"
#include "OnlineErrorBP.h"
#include "ECommonRaceMenuContentId.h"
#include "ERaceEndMenuSequenceExitCode.h"
#include "ERaceEndMenuSequenceState.h"
#include "ESquadLobbyMatchContinuation.h"
#include "RaceEndMenuSequence.generated.h"

class UCommonMenuFooterMenu;
class UCommonMessageBar;
class UCommonRaceMenuContentsInfo;
class UDataTable;
class ULobbyContextBase;
class ULobbyMemberContextBase;
class UMenuInputRecieveObject;
class UObject;
class URaceEndMenuSceneWidgetBase;
class URaceEndMenuUserReportComponent;
class USquadContext;
class UUnionUIButtonBase;

UCLASS(Abstract, Blueprintable)
class UNION_API ARaceEndMenuSequence : public AHierarchicalStateMachine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EndMenuContentTable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USquadContext* SquadLobbyContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisConnectedHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESquadLobbyMatchContinuation SelectOwnConfilm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonMessageBar* MessageBarSceneObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MessageBarText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WaitingSquadMemberPopupText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> ClientPopupText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HostTimeupSquadMemberPopupText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ClientTimeupSquadMemberPopupText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULobbyMemberContextBase*> NoAnswerMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MAX_HOST_TIMER;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MAX_HOST_POPUP_TIMER;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MAX_CLIENT_TIMER;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URaceEndMenuSceneWidgetBase* EndMenuScene;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* _FooterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonMenuFooterMenu* _Footer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMenuInputRecieveObject* _InputReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<URaceEndMenuUserReportComponent> _UserReportComponentSoftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URaceEndMenuUserReportComponent* _UserReportComponent;
    
public:
    ARaceEndMenuSequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TickCheckSquadContinuation(float DeltaSeconds, ESquadLobbyMatchContinuation& MatchContinuation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SquadStopTimeCount(bool bEnableCount);
    
    UFUNCTION(BlueprintCallable)
    bool SquadEndMenuHostTimer();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetNextEndMenuState(ERaceEndMenuSequenceState InState);
    
    UFUNCTION(BlueprintCallable)
    void SetEndMenuExitCode(ERaceEndMenuSequenceExitCode InValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDecided(bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReshowEndMenu();
    
    UFUNCTION(BlueprintCallable)
    void RemoveSquadClient(bool bSuccessful, const FLobbyOperationResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void ReceivedSquadMemberUpdateFromComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateWaiting(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateUserReport(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateShowPopup(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateSelect(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateQuitPublicLobby(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateCheckLobbyInvite(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadLobbyDelete(ULobbyContextBase* LobbyContext);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRecevCheckSquadContinuation(bool bSuccessful, const FLobbyOperationResult& Result);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnReceiveSquadRemoveComplete_HostDisConnected(ULobbyContextBase* LobbyContext, const FOnlineErrorBP& Error);
    
    UFUNCTION(BlueprintCallable)
    void OnReceiveSquadRemoveComplete(ULobbyContextBase* LobbyContext, const FOnlineErrorBP& Error);
    
    UFUNCTION(BlueprintCallable)
    void OnReceiveSquadDisconnectMember(ULobbyContextBase* LobbyContext, ULobbyMemberContextBase* MemberContext, bool bWasKicked);
    
    UFUNCTION(BlueprintCallable)
    void OnPopupDecideSyncSelectMenu(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPopupDecideSquadLobbyWaitingPlayer(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPopupDecidebackToTopMenu(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateWaiting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateUserReport();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateShowPopup();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateQuitPublicLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateExit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateCheckLobbyInvite();
    
    UFUNCTION(BlueprintCallable)
    void OnHostTimeupEvent();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFaceButtonTopPressed(UObject* Object);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateWaiting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateUserReport();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateShowPopup();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateQuitPublicLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateGotoTopMennu();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateGotoSquadLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateGotoMatchingLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateCheckLobbyInvite();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDecided() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void InitCheckSquadContinuation(ECommonRaceMenuContentId SelectedRaceMenu, FLobbySubsystemOnLobbyOperationComplete OnComplete, bool& bIsJoinedSquad, bool& bIsSquadHost);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideEndMenu();
    
    UFUNCTION(BlueprintCallable)
    void GotoSelectedEndMenuToSquad(ESquadLobbyMatchContinuation InHostStatus, bool bInIsOwnerHost);
    
    UFUNCTION(BlueprintCallable)
    UCommonRaceMenuContentsInfo* GenerateEndMenuContentsInfo();
    
    UFUNCTION(BlueprintCallable)
    UCommonRaceMenuContentsInfo* GenerateEndMenuContentsAfterCeremonyInfo();
    
};

