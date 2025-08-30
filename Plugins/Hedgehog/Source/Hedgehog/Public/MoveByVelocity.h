#pragma once
#include "CoreMinimal.h"
#include "MoveController.h"
#include "MoveByVelocity.generated.h"

UCLASS(Blueprintable)
class HEDGEHOG_API UMoveByVelocity : public UMoveController {
    GENERATED_BODY()
public:
    UMoveByVelocity();

};

