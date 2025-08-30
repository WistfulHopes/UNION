#pragma once
#include "CoreMinimal.h"
#include "EUnionUIFadeDirection.h"
#include "OnFinishedFadeSingleDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnFinishedFadeSingle, EUnionUIFadeDirection, FadeDirection);

