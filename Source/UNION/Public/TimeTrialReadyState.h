#pragma once
#include "CoreMinimal.h"
#include "EMenuSequenceSubState.h"
#include "MenuSequenceSubStateBase.h"
#include "TimeTrialReadyState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UTimeTrialReadyState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuSequenceSubState BackMenuState;
    
public:
    UTimeTrialReadyState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetBackMenuState(const EMenuSequenceSubState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMenuSequenceSubState GetBackMenuState() const;
    
};

