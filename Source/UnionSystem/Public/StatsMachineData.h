#pragma once
#include "CoreMinimal.h"
#include "StatsMachineData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FStatsMachineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UsedCount;
    
    FStatsMachineData();
};

