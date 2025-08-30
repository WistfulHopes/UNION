#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UnionCombineDescendantBoundsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONSYSTEM_API UUnionCombineDescendantBoundsComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UUnionCombineDescendantBoundsComponent(const FObjectInitializer& ObjectInitializer);

};

