#pragma once
#include "CoreMinimal.h"
#include "EUnionUIControlDir.generated.h"

UENUM(BlueprintType)
enum class EUnionUIControlDir : uint8 {
    None,
    Up,
    Right,
    Down,
    Left,
};

