#pragma once
#include "CoreMinimal.h"
#include "TransferCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FTransferCompleteDelegate, int32, ResCode, bool, Error);

