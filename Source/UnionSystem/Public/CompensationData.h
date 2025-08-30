#pragma once
#include "CoreMinimal.h"
#include "CompensationData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FCompensationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> CompensationIdArray;
    
    FCompensationData();
};

