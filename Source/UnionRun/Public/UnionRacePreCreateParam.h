#pragma once
#include "CoreMinimal.h"
#include "EGrandPrixId.h"
#include "ERaceType.h"
#include "UnionRaceDomainData.h"
#include "UnionRaceRedStarRingParam.h"
#include "UnionRacePreCreateParam.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FUnionRacePreCreateParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceType RaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGrandPrixId GrandPrixId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionRaceRedStarRingParam RedStarRingParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnionRaceDomainData> DomainDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BackgroundLevelNameList;
    
    FUnionRacePreCreateParam();
};

