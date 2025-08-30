#pragma once
#include "CoreMinimal.h"
#include "EItemId.h"
#include "EItemStatus.h"
#include "ItemStatusOption.h"
#include "ItemStatusInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FItemStatusInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemId ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemStatusOption Option;
    
    FItemStatusInfo();
};

