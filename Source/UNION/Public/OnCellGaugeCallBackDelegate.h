#pragma once
#include "CoreMinimal.h"
#include "OnCellGaugeCallBackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnCellGaugeCallBack, uint8, kind, float, Ratio);

