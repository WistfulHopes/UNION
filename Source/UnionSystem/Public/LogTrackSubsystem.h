#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LogTrackSubsystem.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API ULogTrackSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    ULogTrackSubsystem();

};

