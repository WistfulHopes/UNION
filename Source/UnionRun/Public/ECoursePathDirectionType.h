#pragma once
#include "CoreMinimal.h"
#include "ECoursePathDirectionType.generated.h"

UENUM()
enum class ECoursePathDirectionType : int8 {
    Left,
    Right,
    Up,
    Down,
    Hybrid,
};

