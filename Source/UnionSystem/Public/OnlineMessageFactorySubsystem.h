#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OnlineMessageFactorySubsystem.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UOnlineMessageFactorySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UOnlineMessageFactorySubsystem();

};

