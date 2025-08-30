#pragma once
#include "CoreMinimal.h"
#include "FestaCheckFestaRewardResponse.generated.h"

USTRUCT(BlueprintType)
struct FFestaCheckFestaRewardResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> degreeIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ticketNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lastOrder;
    
    UNIONSYSTEM_API FFestaCheckFestaRewardResponse();
};

