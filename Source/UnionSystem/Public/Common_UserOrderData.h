#pragma once
#include "CoreMinimal.h"
#include "Common_UserOrderData.generated.h"

USTRUCT(BlueprintType)
struct FCommon_UserOrderData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 order;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UNIONSYSTEM_API FCommon_UserOrderData();
};

