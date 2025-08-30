#pragma once
#include "CoreMinimal.h"
#include "MoveController.h"
#include "RotateByVelocity.generated.h"

UCLASS(Blueprintable)
class HEDGEHOG_API URotateByVelocity : public UMoveController {
    GENERATED_BODY()
public:
    URotateByVelocity();

};

