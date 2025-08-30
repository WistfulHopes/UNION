#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VehicleCreateScheduler.generated.h"

UCLASS(Blueprintable)
class UNION_API AVehicleCreateScheduler : public AActor {
    GENERATED_BODY()
public:
    AVehicleCreateScheduler(const FObjectInitializer& ObjectInitializer);

};

