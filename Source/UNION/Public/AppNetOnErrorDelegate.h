#pragma once
#include "CoreMinimal.h"
#include "EAppNetErrorCode.h"
#include "AppNetOnErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAppNetOnError, int32, ErrorCode, EAppNetErrorCode, ErrorCodeEnum, const FString&, ErrorMessage);

