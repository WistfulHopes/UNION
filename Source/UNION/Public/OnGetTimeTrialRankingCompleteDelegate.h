#pragma once
#include "CoreMinimal.h"
#include "RankingDataTimeTrialList.h"
#include "OnGetTimeTrialRankingCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGetTimeTrialRankingComplete, const FRankingDataTimeTrialList&, RankDataList, bool, bWasSuccessful);

