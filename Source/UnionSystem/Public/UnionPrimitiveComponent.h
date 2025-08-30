#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "UnionPrimitiveComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONSYSTEM_API UUnionPrimitiveComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UUnionPrimitiveComponent(const FObjectInitializer& ObjectInitializer);

};

