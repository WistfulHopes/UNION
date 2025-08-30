#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TeamBoostSecondData.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FTeamBoostSecondData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFromTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostSeconds;
    
    FTeamBoostSecondData();
};

