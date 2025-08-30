#pragma once
#include "CoreMinimal.h"
#include "MoveController.h"
#include "RotateTowardsTarget.generated.h"

UCLASS(Blueprintable)
class HEDGEHOG_API URotateTowardsTarget : public UMoveController {
    GENERATED_BODY()
public:
    URotateTowardsTarget();

};

