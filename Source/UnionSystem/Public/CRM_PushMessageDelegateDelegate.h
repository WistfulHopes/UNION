#pragma once
#include "CoreMinimal.h"
#include "CRM_PushMessageDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCRM_PushMessageDelegate, const FString&, Message);

