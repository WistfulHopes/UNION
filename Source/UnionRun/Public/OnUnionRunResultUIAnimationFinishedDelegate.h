#pragma once
#include "CoreMinimal.h"
#include "OnUnionRunResultUIAnimationFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnionRunResultUIAnimationFinished, const int32&, FinishedResultStateId);

