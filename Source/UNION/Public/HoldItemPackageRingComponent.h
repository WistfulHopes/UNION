#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HoldItemPackageRingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UHoldItemPackageRingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UHoldItemPackageRingComponent(const FObjectInitializer& ObjectInitializer);

};

