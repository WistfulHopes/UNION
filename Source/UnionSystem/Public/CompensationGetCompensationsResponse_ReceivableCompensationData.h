#pragma once
#include "CoreMinimal.h"
#include "CompensationGetCompensationsResponse_CompensationItem.h"
#include "CompensationGetCompensationsResponse_ReceivableCompensationData.generated.h"

USTRUCT(BlueprintType)
struct FCompensationGetCompensationsResponse_ReceivableCompensationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 compensationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 headerTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 bodyTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCompensationGetCompensationsResponse_CompensationItem> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString receivablePeriodStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString receivablePeriodEndTime;
    
    UNIONSYSTEM_API FCompensationGetCompensationsResponse_ReceivableCompensationData();
};

