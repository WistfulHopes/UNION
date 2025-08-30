#pragma once
#include "CoreMinimal.h"
#include "HttpReceivedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FHttpReceivedDelegate, const FString&, ApiName, const FString&, RequestData, const FString&, ResponseData, bool, Error);

