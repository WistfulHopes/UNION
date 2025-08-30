#pragma once
#include "CoreMinimal.h"
#include "EMenuSequenceSubState.h"
#include "MenuSequenceSubStateBase.h"
#include "MatchingStateBase.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UMatchingStateBase : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuSequenceSubState StartState;
    
    UMatchingStateBase(const FObjectInitializer& ObjectInitializer);

};

