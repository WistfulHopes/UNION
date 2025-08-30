#pragma once
#include "CoreMinimal.h"
#include "InviteWindowResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInviteWindowResultDelegate, bool, ResultIsYes);

