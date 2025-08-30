#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "UnionSphereComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONSYSTEM_API UUnionSphereComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UUnionSphereComponent(const FObjectInitializer& ObjectInitializer);

};

