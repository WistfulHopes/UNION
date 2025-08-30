#pragma once
#include "CoreMinimal.h"
#include "CompleteDialogEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCompleteDialogEvent, bool, IsAccept);

