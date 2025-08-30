#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InputProcessInterface.generated.h"

UINTERFACE(Blueprintable)
class UNIONSYSTEM_API UInputProcessInterface : public UInterface {
    GENERATED_BODY()
};

class UNIONSYSTEM_API IInputProcessInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SilentFocus();
    
};

