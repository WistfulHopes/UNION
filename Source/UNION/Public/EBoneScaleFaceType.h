#pragma once
#include "CoreMinimal.h"
#include "EBoneScaleFaceType.generated.h"

UENUM(BlueprintType)
enum class EBoneScaleFaceType : uint8 {
    Normal,
    Fight,
    Laugh,
    Anger,
    Sad,
    Surprise,
    Damage,
    Num,
};

