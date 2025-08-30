#pragma once
#include "CoreMinimal.h"
#include "ETakeRingType.h"
#include "UnionTakeRingInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FUnionTakeRingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TakeRingCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETakeRingType TakeRingFlags;
    
    FUnionTakeRingInfo();
};

