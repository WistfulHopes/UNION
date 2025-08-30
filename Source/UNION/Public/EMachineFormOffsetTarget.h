#pragma once
#include "CoreMinimal.h"
#include "EMachineFormOffsetTarget.generated.h"

UENUM()
enum class EMachineFormOffsetTarget : int32 {
    Root,
    RingRoot,
    ChildActor,
};

