#pragma once
#include "CoreMinimal.h"
#include "EGadgetCategory.generated.h"

UENUM(BlueprintType)
enum class EGadgetCategory : uint8 {
    Item,
    Run,
    Ring,
    Various,
    StarterKit,
    MachineTypeKit,
    CharacterTypeKit,
    AdvancedKit,
    ItemEnhanceAndAdd,
    ItemBoxControll,
    Support,
    Status,
    Technique,
    RingAbility,
};

