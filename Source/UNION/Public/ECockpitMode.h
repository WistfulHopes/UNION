#pragma once
#include "CoreMinimal.h"
#include "ECockpitMode.generated.h"

UENUM(BlueprintType)
enum class ECockpitMode : uint8 {
    None,
    Race,
    Menu,
    Lobby,
};

