#pragma once
#include "CoreMinimal.h"
#include "MenuSequenceSubStateBase.h"
#include "RankMatchMenuMatchingState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URankMatchMenuMatchingState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    URankMatchMenuMatchingState(const FObjectInitializer& ObjectInitializer);

};

