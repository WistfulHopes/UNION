#pragma once
#include "CoreMinimal.h"
#include "EGadgetCustomizeSelectMode.h"
#include "MenuSequenceSubStateBase.h"
#include "GadgetCustomize2State.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UGadgetCustomize2State : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UGadgetCustomize2State(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSelectMode(EGadgetCustomizeSelectMode InSelectMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerNum(int32 InPlayerNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMessageBarVisible(bool bInIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MatchingTimeOut(float InTimeOutTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsSelectedPlateDataChanged() const;
    
};

