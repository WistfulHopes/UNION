#pragma once
#include "CoreMinimal.h"
#include "ECommendationCategory.h"
#include "EResultRewardType.h"
#include "ResultRewardItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FResultRewardItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EResultRewardType ResultRewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumDonpaTicket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommendationCategory CommendationCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescriptionText;
    
    UNIONSYSTEM_API FResultRewardItemInfo();
};

