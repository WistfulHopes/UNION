#pragma once
#include "CoreMinimal.h"
#include "EHoldItemMeshType.generated.h"

UENUM(BlueprintType)
enum class EHoldItemMeshType : uint8 {
    StaticMesh,
    SkeletalMesh,
    VertexAnimationTexture,
    Num,
};

