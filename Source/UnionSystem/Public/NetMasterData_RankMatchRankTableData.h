#pragma once
#include "CoreMinimal.h"
#include "NetMasterData_RankMatchRankTableData.generated.h"

USTRUCT(BlueprintType)
struct FNetMasterData_RankMatchRankTableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rankId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString rankValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rateValue;
    
    UNIONSYSTEM_API FNetMasterData_RankMatchRankTableData();
};

