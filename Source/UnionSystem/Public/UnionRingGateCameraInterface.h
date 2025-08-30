#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UnionRingGateCameraInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class UNIONSYSTEM_API UUnionRingGateCameraInterface : public UInterface {
    GENERATED_BODY()
};

class UNIONSYSTEM_API IUnionRingGateCameraInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveRingGateShowActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveRingGateHiddenActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddRingGateShowActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddRingGateHiddenActor(AActor* Actor);
    
};

