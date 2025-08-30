#pragma once
#include "CoreMinimal.h"
#include "Common_RankingOrder_UserNote.h"
#include "Common_RankingOrder.generated.h"

USTRUCT(BlueprintType)
struct FCommon_RankingOrder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString order;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_RankingOrder_UserNote userNote;
    
    UNIONSYSTEM_API FCommon_RankingOrder();
};

