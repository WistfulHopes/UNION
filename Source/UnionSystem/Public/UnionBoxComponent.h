#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "UnionBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONSYSTEM_API UUnionBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UUnionBoxComponent(const FObjectInitializer& ObjectInitializer);

};

