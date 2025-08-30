#pragma once
#include "CoreMinimal.h"
#include "ERewardType.generated.h"

UENUM(BlueprintType)
enum class ERewardType : uint8 {
    GadgetFragment,
    FrontParts,
    RearParts,
    TireParts,
    FixedGadget,
    Character,
    CharacterSkin,
    Title,
    Sticker,
    Horn,
    Aura,
    ChanceItem,
    DonpaTicket,
    Machine,
    GadgetPlate,
    StageCourse,
    BgmAlbum,
    BgmTrack,
    Num,
    None,
};

