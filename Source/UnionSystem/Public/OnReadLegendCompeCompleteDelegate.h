#pragma once
#include "CoreMinimal.h"
#include "RankingDataLegendCompeList.h"
#include "OnReadLegendCompeCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnReadLegendCompeComplete, bool, bWasSuccessful, const FRankingDataLegendCompeList&, RankDataList);

