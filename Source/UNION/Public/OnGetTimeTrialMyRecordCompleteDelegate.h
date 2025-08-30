#pragma once
#include "CoreMinimal.h"
#include "MyRankingAsyncResult.h"
#include "OnGetTimeTrialMyRecordCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGetTimeTrialMyRecordComplete, const FMyRankingAsyncResult&, RankData, bool, bWasSuccessful);

