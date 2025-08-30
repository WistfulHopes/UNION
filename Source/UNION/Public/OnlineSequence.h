#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "EGameModeId.h"
#include "OnBackEventDelegate.h"
#include "EMatchingLobbyType.h"
#include "EOnlineSequenceState.h"
#include "MenuSequenceUIInterface.h"
#include "OnlineSequence.generated.h"

class AMenuSequence;
class ULobbyHolderBase;
class UMatchingSequenceStateMatching;
class UMenuSequenceSubStateBase;
class UUnionUIButtonBase;
class UUnionUIPopupWindowBase;

UCLASS(Blueprintable)
class UNION_API AOnlineSequence : public AHierarchicalStateMachine, public IMenuSequenceUIInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSquadLobbyFinishedDelegate, EMatchingLobbyType, NextLobbyType);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBackEvent OnBackEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBackEvent OnBackToTitleEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSquadLobbyFinishedDelegate OnSquadLobbyFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBackEvent OnOnlineLobbyBackedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBackEvent OnOnlineLobbyFinishedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuSequenceSubStateBase* OnlineLobbyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMatchingSequenceStateMatching* SquadMatchingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULobbyHolderBase* SquadMatchingComponent2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMenuSequence* MenuSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOnlineSequenceState PrevSequenceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMatchingLobbyType CurrentLobbyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ErrorPFTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ErrorPFMessage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* PFInvitationErrorPopup;
    
public:
    AOnlineSequence(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetNextRaceCycle();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNextOnlineSequenceState(EOnlineSequenceState InState, EOnlineSequenceState PrevState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSetNextOnlineLobby(EMatchingLobbyType InNextLobbyType);
    
    UFUNCTION(BlueprintCallable)
    void OnPFInvitationJoinCallback(bool IsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOnlineLobbyFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOnlineLobbyBacked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateOnlineTop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateLogin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateExit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateCheckPFInvitation();
    
    UFUNCTION(BlueprintCallable)
    void OnClosePFInvitationErrorPopup(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBackToTitleSequenceEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnBackSequenceEvent();
    
    UFUNCTION(BlueprintCallable)
    EGameModeId GetRaceCycleGameModeId();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOnlineSequenceState GetCurrentOnlineState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMatchingLobbyType GetCurrentLobbyType();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CheckRaceCycleFlag();
    

    // Fix for true pure virtual functions not being implemented
};

