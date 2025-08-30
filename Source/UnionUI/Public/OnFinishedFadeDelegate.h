#pragma once
#include "CoreMinimal.h"
#include "EUnionUIFadeDirection.h"
#include "OnFinishedFadeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFinishedFade, EUnionUIFadeDirection, FadeDirection);

