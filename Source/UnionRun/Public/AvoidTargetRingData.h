#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EItemId.h"
#include "AvoidTargetRingData.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FAvoidTargetRingData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemId ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAvoidEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllowAvoidAttackCarSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidAttackMoveDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidAttackMoveTime;
    
    FAvoidTargetRingData();
};

