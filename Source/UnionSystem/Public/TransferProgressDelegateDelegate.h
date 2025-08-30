#pragma once
#include "CoreMinimal.h"
#include "TransferProgressDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FTransferProgressDelegate, int32, Length, float, Rate);

