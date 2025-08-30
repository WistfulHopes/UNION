#pragma once
#include "CoreMinimal.h"
#include "StateMachineUpdateStateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FStateMachineUpdateStateDelegate, float, DeltaTime);

