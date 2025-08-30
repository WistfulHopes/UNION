#pragma once
#include "CoreMinimal.h"
#include "ECharaSelectControlState.generated.h"

UENUM(BlueprintType)
enum class ECharaSelectControlState : uint8 {
    CharacterSelect,
    SkinSelect,
    Selected,
};

