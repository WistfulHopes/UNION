#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "FlagFileManager.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UFlagFileManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UFlagFileManager();

};

