#pragma once
#include "CoreMinimal.h"
#include "MenuSequenceSubStateBase.h"
#include "GarageMenuTopState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UGarageMenuTopState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UGarageMenuTopState(const FObjectInitializer& ObjectInitializer);

};

