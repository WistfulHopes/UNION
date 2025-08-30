#pragma once
#include "CoreMinimal.h"
#include "AppRacePermanentData.generated.h"

USTRUCT(BlueprintType)
struct FAppRacePermanentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<int32> RatePointList;
    
    UNION_API FAppRacePermanentData();
};

