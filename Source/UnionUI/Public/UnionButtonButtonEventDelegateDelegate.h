#pragma once
#include "CoreMinimal.h"
#include "UnionButtonButtonEventDelegateDelegate.generated.h"

class UUnionUIButtonBaseCore;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUnionButtonButtonEventDelegate, UUnionUIButtonBaseCore*, Button);

