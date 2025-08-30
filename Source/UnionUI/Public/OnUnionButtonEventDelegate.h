#pragma once
#include "CoreMinimal.h"
#include "OnUnionButtonEventDelegate.generated.h"

class UUnionUIButtonBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnionButtonEvent, UUnionUIButtonBase*, Button);

