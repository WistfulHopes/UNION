#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TimeTrialRankRatioTableData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FTimeTrialRankRatioTableData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RankTimeRetio;
    
    FTimeTrialRankRatioTableData();
};

