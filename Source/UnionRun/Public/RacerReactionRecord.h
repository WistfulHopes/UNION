#pragma once
#include "CoreMinimal.h"
#include "RacerReactionTypeParam.h"
#include "RacerReactionRecord.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FRacerReactionRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRacerReactionTypeParam> TypeParam;
    
    FRacerReactionRecord();
};

