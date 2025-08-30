#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "RacerReactionChrData.h"
#include "RacerReactionChrDataList.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FRacerReactionChrDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverId DriverId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRacerReactionChrData> DataList;
    
    FRacerReactionChrDataList();
};

