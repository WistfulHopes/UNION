#pragma once
#include "CoreMinimal.h"
#include "AtomListenerFocusPointForCamera.h"
#include "AppListenerFocusPoint.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONSYSTEM_API UAppListenerFocusPoint : public UAtomListenerFocusPointForCamera {
    GENERATED_BODY()
public:
    UAppListenerFocusPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetupComponent(int32 PlayerIndex, int32 NumLocalPlayers);
    
};

