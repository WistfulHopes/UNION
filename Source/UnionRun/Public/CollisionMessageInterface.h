#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HitTriggerInfo.h"
#include "CollisionMessageInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UCollisionMessageInterface : public UInterface {
    GENERATED_BODY()
};

class ICollisionMessageInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyTriggerConflict(const FHitTriggerInfo& Info);
    
};

