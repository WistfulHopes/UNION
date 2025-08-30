#pragma once
#include "CoreMinimal.h"
#include "OnCellIndicatorPopupDecisionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnCellIndicatorPopupDecision, bool, isApply);

