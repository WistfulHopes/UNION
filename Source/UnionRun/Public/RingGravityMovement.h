#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RingGravityMovement.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONRUN_API URingGravityMovement : public UActorComponent {
    GENERATED_BODY()
public:
    URingGravityMovement(const FObjectInitializer& ObjectInitializer);

};

