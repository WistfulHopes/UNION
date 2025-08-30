#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NetworkComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONRUN_API UNetworkComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UNetworkComponent(const FObjectInitializer& ObjectInitializer);

};

