#pragma once
#include "CoreMinimal.h"
#include "FestaRacerResultInfo.h"
#include "FestaTeamResultInfo.h"
#include "FestaResultInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FFestaResultInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFestaTeamResultInfo> TeamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFestaRacerResultInfo> RacerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DetailText;
    
    FFestaResultInfo();
};

