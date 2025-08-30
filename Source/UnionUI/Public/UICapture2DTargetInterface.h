#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UICapture2DTargetInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UUICapture2DTargetInterface : public UInterface {
    GENERATED_BODY()
};

class IUICapture2DTargetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<AActor*> GetCaptureTargetActorArr();
    
};

