#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "MachineCustomizeStickerSelectState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UMachineCustomizeStickerSelectState : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
    UMachineCustomizeStickerSelectState(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActiveAuraEffect(bool IsActive);
    
};

