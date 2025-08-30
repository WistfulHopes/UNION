#pragma once
#include "CoreMinimal.h"
#include "MCEventBonusData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FMCEventBonusData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> list;
    
    FMCEventBonusData();
};

