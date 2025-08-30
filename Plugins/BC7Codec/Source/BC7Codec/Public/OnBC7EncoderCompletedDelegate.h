#pragma once
#include "CoreMinimal.h"
#include "OnBC7EncoderCompletedDelegate.generated.h"

class UTexture2D;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBC7EncoderCompleted, UTexture2D*, Value);

