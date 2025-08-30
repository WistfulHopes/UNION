#pragma once
#include "CoreMinimal.h"
#include "MenuSequenceSubStateBase.h"
#include "RankMatchMenuRankingState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URankMatchMenuRankingState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    URankMatchMenuRankingState(const FObjectInitializer& ObjectInitializer);

};

