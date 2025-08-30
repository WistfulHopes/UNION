#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "ChallengeAndTitleSequenceDelegateDelegate.h"
#include "EChallengeAndHonorTitleSequenceState.h"
#include "MenuSequenceUIInterface.h"
#include "ChallengeAndTitleSequence.generated.h"

UCLASS(Blueprintable)
class UNION_API AChallengeAndTitleSequence : public AHierarchicalStateMachine, public IMenuSequenceUIInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengeAndTitleSequenceDelegate OnReturnToOptionTop;
    
    AChallengeAndTitleSequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNextChallengeAndHonorState(EChallengeAndHonorTitleSequenceState InState, EChallengeAndHonorTitleSequenceState PrevState);
    

    // Fix for true pure virtual functions not being implemented
};

