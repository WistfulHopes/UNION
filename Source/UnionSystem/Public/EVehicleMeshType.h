#pragma once
#include "CoreMinimal.h"
#include "EVehicleMeshType.generated.h"

UENUM(BlueprintType)
enum class EVehicleMeshType : uint8 {
    Default,
    Simple,
    Optimization,
    SkeletalMeshAll,
    StaticMeshAll,
};

