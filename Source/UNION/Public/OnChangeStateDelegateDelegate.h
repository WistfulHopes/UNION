#pragma once
#include "CoreMinimal.h"
#include "EMenuSequenceSubState.h"
#include "OnChangeStateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeStateDelegate, EMenuSequenceSubState, State);

