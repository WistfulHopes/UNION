#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "MachineCustomizeStickerApplyState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UMachineCustomizeStickerApplyState : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
    UMachineCustomizeStickerApplyState(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActiveAuraEffect(bool IsActive);
    
};

