#pragma once
#include "CoreMinimal.h"
#include "MoveController.h"
#include "MoveTowardsTarget.generated.h"

UCLASS(Blueprintable)
class HEDGEHOG_API UMoveTowardsTarget : public UMoveController {
    GENERATED_BODY()
public:
    UMoveTowardsTarget();

};

