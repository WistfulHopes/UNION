#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "GarageCameraMovementArmData.generated.h"

USTRUCT(BlueprintType)
struct FGarageCameraMovementArmData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Radius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double HorizontalAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double VerticalAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Pivot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotationOffset;
    
    UNION_API FGarageCameraMovementArmData();
};

