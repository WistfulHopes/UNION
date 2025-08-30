#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "MenuLightingLevelInterface.h"
#include "MenuLightingLevel.generated.h"

UCLASS(Blueprintable)
class UNION_API AMenuLightingLevel : public ALevelScriptActor, public IMenuLightingLevelInterface {
    GENERATED_BODY()
public:
    AMenuLightingLevel(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

