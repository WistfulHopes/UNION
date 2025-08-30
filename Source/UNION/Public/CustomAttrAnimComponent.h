#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CustomAttrAnimComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UCustomAttrAnimComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UCustomAttrAnimComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Update();
    
    UFUNCTION(BlueprintCallable)
    void BindMaterialCurve();
    
};

