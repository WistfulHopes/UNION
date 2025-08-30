#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ErrorWatcherActor.generated.h"

UCLASS(Blueprintable)
class UNION_API AErrorWatcherActor : public AActor {
    GENERATED_BODY()
public:
    AErrorWatcherActor(const FObjectInitializer& ObjectInitializer);

};

