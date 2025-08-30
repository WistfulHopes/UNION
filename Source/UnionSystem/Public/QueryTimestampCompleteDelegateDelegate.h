#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QueryTimestampCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FQueryTimestampCompleteDelegate, FDateTime, Timestamp, bool, Error);

