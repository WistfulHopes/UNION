#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DroneRelativeTrasformInfo.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FDroneRelativeTrasformInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InOutDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InOutAngle;
    
    FDroneRelativeTrasformInfo();
};

