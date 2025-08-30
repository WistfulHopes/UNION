#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "UnionCapsuleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONSYSTEM_API UUnionCapsuleComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UUnionCapsuleComponent(const FObjectInitializer& ObjectInitializer);

};

