#pragma once
#include "CoreMinimal.h"
#include "ESceneDriverAnimationMode.generated.h"

UENUM(BlueprintType)
enum class ESceneDriverAnimationMode : uint8 {
    AnimationBlueprint,
    AnimationSingleNode,
};

