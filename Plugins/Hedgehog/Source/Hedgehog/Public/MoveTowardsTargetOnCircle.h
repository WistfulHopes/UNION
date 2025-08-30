#pragma once
#include "CoreMinimal.h"
#include "MoveController.h"
#include "MoveTowardsTargetOnCircle.generated.h"

UCLASS(Blueprintable)
class HEDGEHOG_API UMoveTowardsTargetOnCircle : public UMoveController {
    GENERATED_BODY()
public:
    UMoveTowardsTargetOnCircle();

};

