#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EAppControllerInputType.h"
#include "DeviceChangeInterface.generated.h"

UINTERFACE(Blueprintable)
class UNIONSYSTEM_API UDeviceChangeInterface : public UInterface {
    GENERATED_BODY()
};

class UNIONSYSTEM_API IDeviceChangeInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeKeyboardLayoutIF(uint8 InNewKeyboardLayout, uint8 InNewKeytopPattern);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeInputTypeIF(EAppControllerInputType InNewControllerInputType);
    
};

