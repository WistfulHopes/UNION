#pragma once
#include "CoreMinimal.h"
#include "EItemThrowType.generated.h"

UENUM(BlueprintType)
enum class EItemThrowType : uint8 {
    Front,
    Front_Back,
    Back,
    Back_Front,
    Myself,
    Num,
};

