#pragma once
#include "CoreMinimal.h"
#include "MoveController.h"
#include "MoveTowardsPlane.generated.h"

UCLASS(Blueprintable)
class HEDGEHOG_API UMoveTowardsPlane : public UMoveController {
    GENERATED_BODY()
public:
    UMoveTowardsPlane();

};

