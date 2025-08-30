#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "NetworkMeasurementSubsystem.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UNetworkMeasurementSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UNetworkMeasurementSubsystem();

};

