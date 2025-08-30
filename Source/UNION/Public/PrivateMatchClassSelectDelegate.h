#pragma once
#include "CoreMinimal.h"
#include "PrivateMatchClassSelectDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPrivateMatchClassSelect, bool, bSelected);

