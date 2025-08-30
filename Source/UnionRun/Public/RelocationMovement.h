#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RelocationMovement.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONRUN_API URelocationMovement : public UActorComponent {
    GENERATED_BODY()
public:
    URelocationMovement(const FObjectInitializer& ObjectInitializer);

};

