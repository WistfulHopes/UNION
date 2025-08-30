#pragma once
#include "CoreMinimal.h"
#include "UnionRaceAppInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FUnionRaceAppInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPausing;
    
    FUnionRaceAppInfo();
};

