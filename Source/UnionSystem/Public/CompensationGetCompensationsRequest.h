#pragma once
#include "CoreMinimal.h"
#include "CompensationGetCompensationsRequest.generated.h"

USTRUCT(BlueprintType)
struct FCompensationGetCompensationsRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> receivedCompensationIds;
    
    UNIONSYSTEM_API FCompensationGetCompensationsRequest();
};

