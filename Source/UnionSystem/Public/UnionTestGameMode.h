#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UnionTestGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class UNIONSYSTEM_API AUnionTestGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    AUnionTestGameMode(const FObjectInitializer& ObjectInitializer);

};

