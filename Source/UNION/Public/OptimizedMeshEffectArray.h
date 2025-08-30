#pragma once
#include "CoreMinimal.h"
#include "OptimizedMeshEffectGroup.h"
#include "OptimizedMeshEffectArray.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FOptimizedMeshEffectArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptimizedMeshEffectGroup> Groups;
    
    FOptimizedMeshEffectArray();
};

