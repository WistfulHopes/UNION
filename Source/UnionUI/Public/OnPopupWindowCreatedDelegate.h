#pragma once
#include "CoreMinimal.h"
#include "EPopupWindowType.h"
#include "OnPopupWindowCreatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPopupWindowCreated, EPopupWindowType, CreatedWindowType);

