#pragma once
#include "CoreMinimal.h"
#include "OnUIButtonsPanelEventDelegate.generated.h"

class UUnionUIButtonBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUIButtonsPanelEvent, UUnionUIButtonBase*, Button, int32, ButtonIndex);

