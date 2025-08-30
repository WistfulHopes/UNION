#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "OnBackEventDelegate.h"
#include "EMatchingLobbyType.h"
#include "MenuSequenceUIInterface.h"
#include "MatchingSequence.generated.h"

class UMatchingSequenceStateMatching;

UCLASS(Blueprintable)
class UNION_API AMatchingSequence : public AHierarchicalStateMachine, public IMenuSequenceUIInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLobbySequenceDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbySequenceDelegate TimeOutLobby;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBackEvent OnBackEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMatchingLobbyType LobbyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMatchingSequenceStateMatching* MatchingComponent;
    
public:
    AMatchingSequence(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateExit();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBackSequenceEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMatchingLobbyType GetLobbyType();
    

    // Fix for true pure virtual functions not being implemented
};

