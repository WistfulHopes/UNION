#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OnlineMessageSubsystem.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UOnlineMessageSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UOnlineMessageSubsystem();

};

