#pragma once
#include "CoreMinimal.h"
#include "EAppSupportedPlatform.h"
#include "CommonMenuHeaderNiceDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCommonMenuHeaderNiceDelegate, FText, SendUserName, EAppSupportedPlatform, SendUserPlatform);

