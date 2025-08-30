#pragma once
#include "CoreMinimal.h"
#include "MenuSequenceSubStateBase.h"
#include "GarageState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UGarageState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UGarageState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMessageBarVisible(bool bInIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MatchingTimeOut(float InTimeOutTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsSelectedCustomizeDataChanged() const;
    
};

