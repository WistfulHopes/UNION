#pragma once
#include "CoreMinimal.h"
#include "ERewardType.h"
#include "ContentItem.generated.h"

USTRUCT(BlueprintType)
struct FContentItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERewardType itemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemId;
    
    UNIONSYSTEM_API FContentItem();
};

