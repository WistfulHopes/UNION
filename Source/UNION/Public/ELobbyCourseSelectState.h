#pragma once
#include "CoreMinimal.h"
#include "ELobbyCourseSelectState.generated.h"

UENUM(BlueprintType)
enum class ELobbyCourseSelectState : uint8 {
    Idle,
    CourseSelect_Host = 30,
    CourseSelect_Guest,
    CourseSelect_Vote,
    CourseSelect_Wait,
    CourseSelect_Random,
    Exit,
};

