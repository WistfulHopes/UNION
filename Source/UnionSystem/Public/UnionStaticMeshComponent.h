#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "UnionStaticMeshComponent.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONSYSTEM_API UUnionStaticMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UUnionStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetMaterialAll();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotChangedMaterial(int32 MaterialID) const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeMaterial(int32 MaterialID, bool bChange, UMaterialInterface* InMaterial);
    
};

