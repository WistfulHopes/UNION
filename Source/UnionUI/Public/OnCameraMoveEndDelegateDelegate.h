#pragma once
#include "CoreMinimal.h"
#include "ELobbyCameraMoveType.h"
#include "OnCameraMoveEndDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCameraMoveEndDelegate, ELobbyCameraMoveType, MoveType);

