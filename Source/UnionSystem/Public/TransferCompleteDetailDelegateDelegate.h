#pragma once
#include "CoreMinimal.h"
#include "TransferCompleteDetailDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FTransferCompleteDetailDelegate, int32, ResCode, int32, ContentLength, float, ElapsedTime, bool, Error);

