#pragma once
#include "CoreMinimal.h"
#include "EColliderColliShapeType.generated.h"

UENUM(BlueprintType)
enum class EColliderColliShapeType : uint8 {
    Box,
    Triangle,
    Sphere,
    Capsule,
    Cylinder,
    Num,
};

