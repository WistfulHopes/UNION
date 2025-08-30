#pragma once
#include "CoreMinimal.h"
#include "EMariaDevelopLogCategory.h"
#include "MariaDevelopLogCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(bool, FMariaDevelopLogCallback, EMariaDevelopLogCategory, Category, const FString&, Message);

