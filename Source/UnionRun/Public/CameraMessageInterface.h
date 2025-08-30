#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Camera/PlayerCameraManager.h"
#include "CameraMessageInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UCameraMessageInterface : public UInterface {
    GENERATED_BODY()
};

class ICameraMessageInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyCameraChanged(int32 PlayerControllerIndex, AActor* PrevCamera, AActor* NewCamera, const FViewTargetTransitionParams& BlendSetting);
    
};

