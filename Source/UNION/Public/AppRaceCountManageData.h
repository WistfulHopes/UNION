#pragma once
#include "CoreMinimal.h"
#include "AppRaceCountManageData.generated.h"

USTRUCT(BlueprintType)
struct FAppRaceCountManageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentRaceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRaceCount;
    
    UNION_API FAppRaceCountManageData();
};

