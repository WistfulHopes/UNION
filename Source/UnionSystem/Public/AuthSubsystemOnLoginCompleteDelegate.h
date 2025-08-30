#pragma once
#include "CoreMinimal.h"
#include "AuthSubsystemOnLoginCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FAuthSubsystemOnLoginComplete, int32, LocalUserNum, bool, bWasSuccessful, const FString&, ErrorMessage);

