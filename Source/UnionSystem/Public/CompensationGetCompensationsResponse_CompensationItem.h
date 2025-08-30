#pragma once
#include "CoreMinimal.h"
#include "CompensationGetCompensationsResponse_CompensationItem.generated.h"

USTRUCT(BlueprintType)
struct FCompensationGetCompensationsResponse_CompensationItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 itemCategoryId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemCount;
    
    UNIONSYSTEM_API FCompensationGetCompensationsResponse_CompensationItem();
};

