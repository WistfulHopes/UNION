#pragma once
#include "CoreMinimal.h"
#include "EStageId.h"
#include "AnotherStageLotteryParameter.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FAnotherStageLotteryParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId CurrentMainStageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageId> PreviousLotteryMainStageIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageId> PreviousLotteryAnotherStageIds;
    
    FAnotherStageLotteryParameter();
};

