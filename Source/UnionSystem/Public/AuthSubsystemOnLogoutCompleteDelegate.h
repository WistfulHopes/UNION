#pragma once
#include "CoreMinimal.h"
#include "AuthSubsystemOnLogoutCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FAuthSubsystemOnLogoutComplete, int32, LocalUserNum, bool, bWasSuccessful);

