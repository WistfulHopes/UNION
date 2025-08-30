#pragma once
#include "CoreMinimal.h"
#include "ButtonAnimFinishedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FButtonAnimFinishedEvent, bool, Aborted);

