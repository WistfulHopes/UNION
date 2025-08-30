#pragma once
#include "CoreMinimal.h"
#include "RankingDataRankMatchList.h"
#include "OnReadRankMatchCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnReadRankMatchComplete, bool, bWasSuccessful, const FRankingDataRankMatchList&, RankDataList);

