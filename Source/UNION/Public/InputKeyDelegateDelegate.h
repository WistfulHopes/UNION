#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "InputKeyDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInputKeyDelegate, FKey, PressedKey);

