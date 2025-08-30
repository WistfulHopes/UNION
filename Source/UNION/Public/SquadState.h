#pragma once
#include "CoreMinimal.h"
#include "MenuSequenceSubStateBase.h"
#include "SquadState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API USquadState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    USquadState(const FObjectInitializer& ObjectInitializer);

};

