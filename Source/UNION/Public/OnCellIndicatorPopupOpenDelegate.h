#pragma once
#include "CoreMinimal.h"
#include "OnCellIndicatorPopupDecisionDelegate.h"
#include "OnCellIndicatorPopupOpenDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnCellIndicatorPopupOpen, FOnCellIndicatorPopupDecision, Callback);

