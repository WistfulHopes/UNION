#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "ERaceErrorHandlingState.h"
#include "QuitLobbyDelegateDelegate.h"
#include "RaceErrorHandlingSequence.generated.h"

UCLASS(Blueprintable)
class UNION_API ARaceErrorHandlingSequence : public AHierarchicalStateMachine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuitLobbyDelegate QuitLobbyFinishedDelegate;
    
    ARaceErrorHandlingSequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNextSequenceState(ERaceErrorHandlingState InState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void QuitLobbyFinishedCallback();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateHandling(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateQuitLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateHandling();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateExit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateEOSLogout();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateAddFairPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateHandling();
    
    UFUNCTION(BlueprintCallable)
    void FinishedAddFairPoint(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
};

