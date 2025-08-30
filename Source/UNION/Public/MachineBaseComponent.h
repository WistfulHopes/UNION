#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MachineBaseComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UMachineBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMachineBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Update(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetupGhost();
    
    UFUNCTION(BlueprintCallable)
    void Setup();
    
};

