#pragma once
#include "CoreMinimal.h"
#include "EDroneShowType.generated.h"

UENUM(BlueprintType)
enum class EDroneShowType : uint8 {
    Invalid,
    Dismiss,
    CurrentLap,
    RemainDistance,
    CautionWrongWay,
};

