#pragma once
#include "CoreMinimal.h"
#include "OptimizedMeshEffectGroup.generated.h"

class UOptimizedMeshEffect;

USTRUCT(BlueprintType)
struct UNION_API FOptimizedMeshEffectGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOptimizedMeshEffect*> MeshEffects;
    
    FOptimizedMeshEffectGroup();
};

