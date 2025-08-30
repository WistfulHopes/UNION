#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EColliderColliAxes.h"
#include "EColliderColliShapeType.h"
#include "Collider.generated.h"

USTRUCT(BlueprintType)
struct FCollider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EColliderColliShapeType _ColliShapeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector _Extents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _HalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EColliderColliAxes _Axes;
    
    UNIONRUN_API FCollider();
};

