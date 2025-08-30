#pragma once
#include "CoreMinimal.h"
#include "AuthSubsystemOnEnsureNsaIdTokenCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FAuthSubsystemOnEnsureNsaIdTokenComplete, bool, bWasSuccessful, const FString&, ErrorMessage);

