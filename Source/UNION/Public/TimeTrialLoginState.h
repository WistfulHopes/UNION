#pragma once
#include "CoreMinimal.h"
#include "EMenuSequenceSubState.h"
#include "MenuSequenceSubStateBase.h"
#include "TimeTrialLoginState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UTimeTrialLoginState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuSequenceSubState NextMenuState;
    
public:
    UTimeTrialLoginState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNextMenuState(const EMenuSequenceSubState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMenuSequenceSubState GetNextMenuState() const;
    
};

