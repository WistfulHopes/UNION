#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingSubscribeErrorType.generated.h"

UENUM(BlueprintType)
enum class EMatchmakingSubscribeErrorType : uint8 {
    None,
    EntryRequirement,
    PlatformSetting,
    Ban,
    Dishonor,
    ROMVersion,
    MasterDataVersion,
    EventClosed,
};

