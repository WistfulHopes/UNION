#pragma once
#include "CoreMinimal.h"
#include "RankingDataFestaPointList.h"
#include "OnReadFestaPointCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnReadFestaPointComplete, bool, bWasSuccessful, const FRankingDataFestaPointList&, RankDataList);

