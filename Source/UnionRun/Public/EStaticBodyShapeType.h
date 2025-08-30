#pragma once
#include "CoreMinimal.h"
#include "EStaticBodyShapeType.generated.h"

UENUM(BlueprintType)
enum class EStaticBodyShapeType : uint8 {
    StaticBodySphere,
    StaticBodyBox,
    StaticBodyCylinder,
    StaticBodyCapsule,
};

