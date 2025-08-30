#pragma once
#include "CoreMinimal.h"
#include "UnionCameraFocusOnTarget.h"
#include "UnionCameraWarpRing.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API AUnionCameraWarpRing : public AUnionCameraFocusOnTarget {
    GENERATED_BODY()
public:
    AUnionCameraWarpRing(const FObjectInitializer& ObjectInitializer);

};

