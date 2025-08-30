#pragma once
#include "CoreMinimal.h"
#include "MariaInitializeAuthSeqUrlCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FMariaInitializeAuthSeqUrlCallback, const FString&, RegistrationURL);

