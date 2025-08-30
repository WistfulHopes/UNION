#pragma once
#include "CoreMinimal.h"
#include "CompensationGetCompensationsResponse_ReceivableCompensationData.h"
#include "CompensationGetCompensationsResponse.generated.h"

USTRUCT(BlueprintType)
struct FCompensationGetCompensationsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCompensationGetCompensationsResponse_ReceivableCompensationData> compensations;
    
    UNIONSYSTEM_API FCompensationGetCompensationsResponse();
};

