#pragma once
#include "CoreMinimal.h"
#include "MenuSequenceSubStateBase.h"
#include "GarageMenuCustomizeGadgetState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UGarageMenuCustomizeGadgetState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UGarageMenuCustomizeGadgetState(const FObjectInitializer& ObjectInitializer);

};

