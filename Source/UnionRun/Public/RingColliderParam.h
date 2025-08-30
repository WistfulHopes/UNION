#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ColliderParam.h"
#include "RingColliderParam.generated.h"

USTRUCT(BlueprintType)
struct FRingColliderParam : public FColliderParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Extents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PackageRingRadius;
    
    UNIONRUN_API FRingColliderParam();
};

