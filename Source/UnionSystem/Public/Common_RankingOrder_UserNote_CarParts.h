#pragma once
#include "CoreMinimal.h"
#include "Common_RankingOrder_UserNote_CarParts.generated.h"

USTRUCT(BlueprintType)
struct FCommon_RankingOrder_UserNote_CarParts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 frontId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rearId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 tireId;
    
    UNIONSYSTEM_API FCommon_RankingOrder_UserNote_CarParts();
};

