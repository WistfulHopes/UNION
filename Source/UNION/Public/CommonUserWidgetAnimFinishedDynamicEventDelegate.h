#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidgetAnimFinishedDynamicEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCommonUserWidgetAnimFinishedDynamicEvent, bool, Aborted);

