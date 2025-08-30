#pragma once
#include "CoreMinimal.h"
#include "EUnionUIButtonEventState.generated.h"

UENUM(BlueprintType)
enum class EUnionUIButtonEventState : uint8 {
    Focus,
    UnFocus,
    Decision_Down,
    Decision_Up,
    Cancel_Down,
    Cancel_Up,
    NavigationLeftKey_Down,
    NavigationLeftKey_Up,
    NavigationRightKey_Down,
    NavigationRightKey_Up,
    NavigationUpKey_Down,
    NavigationUpKey_Up,
    NavigationDownKey_Down,
    NavigationDownKey_Up,
};

