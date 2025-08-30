#pragma once
#include "CoreMinimal.h"
#include "ECoursePathCurveType.generated.h"

UENUM()
enum class ECoursePathCurveType : int8 {
    Linear,
    Sin,
    Parabola,
    FixWidth,
};

