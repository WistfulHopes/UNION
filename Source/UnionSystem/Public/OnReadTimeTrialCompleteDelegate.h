#pragma once
#include "CoreMinimal.h"
#include "RankingDataTimeTrialList.h"
#include "OnReadTimeTrialCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnReadTimeTrialComplete, bool, bWasSuccessful, const FRankingDataTimeTrialList&, RankDataList);

