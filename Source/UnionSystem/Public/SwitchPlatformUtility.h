#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SwitchPlatformUtility.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API USwitchPlatformUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USwitchPlatformUtility();

    UFUNCTION(BlueprintCallable)
    static void SetCPUBoostModeEnabled(bool bEnable);
    
};

