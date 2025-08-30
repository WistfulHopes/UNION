#pragma once
#include "CoreMinimal.h"
#include "CreateOrConnectLobbyResult.h"
#include "EStageId.h"
#include "EFriendMatchLobbyJoinResult.h"
#include "ELobbySequenceState.h"
#include "EMenuSequenceSubState.h"
#include "LobbySequenceBase2.h"
#include "Templates/SubclassOf.h"
#include "LobbyFriendMatchSequence2.generated.h"

class APrivateMatchCheckMembersUI;
class UCustomMatchLobbyContext;
class UCustomMatchLobbyControlComponent;
class UFriendMatchMenu;
class ULobbyCourseSelect;
class ULobbyJoinInfo;
class UMenuInputRecieveObject;
class UMenuRacerParameterDataAsset;
class UPrivateMatchRuleSettingComponent;
class UPrivateMatchSelectGroupComponent;
class USoundAtomCue;
class UUnionUIButtonBase;
class UUserWidget;

UCLASS(Blueprintable)
class UNION_API ALobbyFriendMatchSequence2 : public ALobbySequenceBase2 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPrivateMatchRuleSettingComponent> PrivateMatchRuleSettingComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrivateMatchRuleSettingComponent* PrivateMatchRuleSettingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPrivateMatchSelectGroupComponent> PrivateMatchSelectGroupComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrivateMatchSelectGroupComponent* PrivateMatchSelectGroupComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULobbyCourseSelect> LobbyCourseSelectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULobbyCourseSelect* LobbyCourseSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFriendMatchMenu> FriendMatchMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFriendMatchMenu* FriendMatchMenuComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APrivateMatchCheckMembersUI> PrivateMatchCheckMembersUIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APrivateMatchCheckMembersUI* PrivateMatchCheckMembersUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* CloseLobbyInvitationWindowWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuRacerParameterDataAsset* FriendMatchRivalChallengeMenuRacerParameterDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HostQuitWindowText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ClientQuitWindowText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HostFixMemberWindowText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> PopUpWindowButtonTextList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* PressedSpecialBtnCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRaceCycleFinalRace;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULobbyJoinInfo* CashLobbyJoinInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuInputRecieveObject* CancelInputReceiveObject;
    
public:
    ALobbyFriendMatchSequence2(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StateInputInitWaitingJoinMembersAloneHost();
    
    UFUNCTION(BlueprintCallable)
    void StateInputInitWaitingJoinMembers();
    
    UFUNCTION(BlueprintCallable)
    void StateInputInitTryToEnterLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartGroupSetting();
    
    UFUNCTION(BlueprintCallable)
    void SetNextStateWaitingJoinMembers();
    
    UFUNCTION(BlueprintCallable)
    void SendRuleSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SendHostGroupSetting(const TArray<int32>& InGroupIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void SelectCourseOnDecideCallback(EStageId& StageId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RecieveHostGroupSetting();
    
    UFUNCTION(BlueprintCallable)
    bool ReceiveRuleSetting(bool& OutUsingPreset, bool SetRaceCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateTimeLineTryToEnterLobby(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateStateWaitingReceiveLobbyInitData(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateStateWaitingJoinMembersAloneHost(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateStateWaitingJoinMembers(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateStateWaitingInTheLobbyTimerEnd(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateStateWaitForHostLobbyId(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateStateTryToEnterLobby(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateStateCloseLobbyInvitationWindow(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateStateChangeP2PRaceCycle(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnInitStateWaitingReceiveLobbyInitData();
    
    UFUNCTION(BlueprintCallable)
    void OnInitStateWaitingJoinMembersAloneHost();
    
    UFUNCTION(BlueprintCallable)
    void OnInitStateWaitingJoinMembers();
    
    UFUNCTION(BlueprintCallable)
    void OnInitStateWaitingInTheLobbyTimerEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnInitStateWaitForHostLobbyId();
    
    UFUNCTION(BlueprintCallable)
    void OnInitStateTryToEnterLobby();
    
    UFUNCTION(BlueprintCallable)
    void OnInitStateCloseLobbyInvitationWindow();
    
    UFUNCTION(BlueprintCallable)
    void OnInitStatChangeP2PRaceCycle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinishedTimeLineTryToEnterLobby();
    
    UFUNCTION(BlueprintCallable)
    void OnExitStateWaitingReceiveLobbyInitData();
    
    UFUNCTION(BlueprintCallable)
    void OnExitStateWaitingJoinMembersAloneHost();
    
    UFUNCTION(BlueprintCallable)
    void OnExitStateWaitingJoinMembers();
    
    UFUNCTION(BlueprintCallable)
    void OnExitStateWaitingInTheLobbyTimerEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnExitStateWaitForHostLobbyId();
    
    UFUNCTION(BlueprintCallable)
    void OnExitStateTryToEnterLobby();
    
    UFUNCTION(BlueprintCallable)
    void OnExitStateCloseLobbyInvitationWindow();
    
    UFUNCTION(BlueprintCallable)
    void OnExitStateChangeP2PRaceCycle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDecideReadyButton(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDecideQuitLobbyWindow(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDecideCloseLobbyInvitationWindow(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDecideCheckMembers(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCheckInvitationComplete(bool Enable, const FCreateOrConnectLobbyResult& ConnectResult, EFriendMatchLobbyJoinResult JoinResult);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelWaitingJoinMembersAloneHost(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelWaitingJoinMembers(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCancelTryToEnterLobby(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCancelCheckMembers(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBackRuleSetting(EMenuSequenceSubState InState);
    
    UFUNCTION(BlueprintCallable)
    void LoadingDisplayHideFinished();
    
    UFUNCTION(BlueprintCallable)
    void KickNotReadyMembers();
    
    UFUNCTION(BlueprintCallable)
    void GoNextStateSelectCourse();
    
    UFUNCTION(BlueprintCallable)
    int32 GetReadyMemberCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCustomMatchLobbyControlComponent* GetFriendMatchLobbyControlComponent() const;
    
    UFUNCTION(BlueprintCallable)
    UCustomMatchLobbyContext* GetFriendMatchLobbyContext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FixedHostGroupSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishGroupSetting(EMenuSequenceSubState InState);
    
    UFUNCTION(BlueprintCallable)
    void FailedCreateLobby();
    
    UFUNCTION(BlueprintCallable)
    bool EnableStateWaitingJoinMembers() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void DisconnectPlayer(int32 InDisconnectPlayerIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    ELobbySequenceState CheckNextStateWaitingJoinMembers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeforeSelectCourseSetting();
    
};

