#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UNIONGameMode.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class AUNIONGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    AUNIONGameMode(const FObjectInitializer& ObjectInitializer);

};

