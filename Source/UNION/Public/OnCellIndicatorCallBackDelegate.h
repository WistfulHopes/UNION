#pragma once
#include "CoreMinimal.h"
#include "OnCellIndicatorCallBackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnCellIndicatorCallBack, uint8, kind, uint8, Val);

