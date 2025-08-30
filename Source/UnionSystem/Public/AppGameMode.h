#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "AppGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class UNIONSYSTEM_API AAppGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    AAppGameMode(const FObjectInitializer& ObjectInitializer);

};

