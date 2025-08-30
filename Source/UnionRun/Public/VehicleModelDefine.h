#pragma once
#include "CoreMinimal.h"
#include "ECarBodyPartType.h"
#include "ECarCustomType.h"
#include "ECarStatusType.h"
#include "EVehicleType.h"
#include "VehicleModelDefine.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FVehicleModelDefine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleType VehicleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarStatusType CarStatusType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarCustomType CarCustomType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECarBodyPartType, int32> CarBodyPartMap;
    
    FVehicleModelDefine();
};

