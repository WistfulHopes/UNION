#pragma once
#include "CoreMinimal.h"
#include "MenuSequenceSubStateBase.h"
#include "GarageMenuCustomizeMachineState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UGarageMenuCustomizeMachineState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UGarageMenuCustomizeMachineState(const FObjectInitializer& ObjectInitializer);

};

