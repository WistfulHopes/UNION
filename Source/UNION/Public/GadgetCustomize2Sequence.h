#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "EGadgetCustomize2SequenceState.h"
#include "GadgetCustomize2Sequence.generated.h"

UCLASS(Blueprintable)
class UNION_API AGadgetCustomize2Sequence : public AHierarchicalStateMachine {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGadgetCustomizeBackEvent, bool, bIsSelectedPlateDataChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGadgetCustomizeBackEvent OnBackEvent;
    
    AGadgetCustomize2Sequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNextGadgetCustomizeState(EGadgetCustomize2SequenceState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGadgetCustomize2SequenceState GetCurrentGadgetCustomizeState() const;
    
};

