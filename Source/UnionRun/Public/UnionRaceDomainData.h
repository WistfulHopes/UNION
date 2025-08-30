#pragma once
#include "CoreMinimal.h"
#include "UnionRaceDomainInfo.h"
#include "UnionRaceStageData.h"
#include "UnionRaceDomainData.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FUnionRaceDomainData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionRaceDomainInfo DomainInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionRaceStageData StageData;
    
    FUnionRaceDomainData();
};

