#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ColliderParam.h"
#include "BoundingItemBoxColliderParam.generated.h"

USTRUCT(BlueprintType)
struct FBoundingItemBoxColliderParam : public FColliderParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Extents;
    
    UNIONRUN_API FBoundingItemBoxColliderParam();
};

