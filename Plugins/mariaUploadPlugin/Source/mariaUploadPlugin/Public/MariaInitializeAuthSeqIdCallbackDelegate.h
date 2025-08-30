#pragma once
#include "CoreMinimal.h"
#include "MariaInitializeAuthSeqIdCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FMariaInitializeAuthSeqIdCallback, const FString&, AccountID);

