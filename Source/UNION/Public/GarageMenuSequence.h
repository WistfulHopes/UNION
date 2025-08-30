#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HierarchicalStateMachine.h"
#include "MenuSequenceUIInterface.h"
#include "GarageMenuSequence.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class UNION_API AGarageMenuSequence : public AHierarchicalStateMachine, public IMenuSequenceUIInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStickAxisDelegate, FVector, InAxisVal);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGarageBackEvent, bool, bIsSelectedCustomizeDataChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGarageBackEvent OnBackEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStickAxisDelegate OnRightStickAxis;
    
    AGarageMenuSequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterPlayerController();
    
    UFUNCTION(BlueprintCallable)
    void RegisterPlayerController(APlayerController* InPlayerController);
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayerController_OnRightStickAxis(FVector InAxisVal);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateExit();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MatchingTimeOut(float InTimeOutTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Exit();
    

    // Fix for true pure virtual functions not being implemented
};

