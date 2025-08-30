#pragma once
#include "CoreMinimal.h"
#include "EPlatformStoreType.generated.h"

UENUM(BlueprintType)
enum class EPlatformStoreType : uint8 {
    PlayStationStore,
    XboxStore,
    SwitchStore,
    SteamStore,
    EpicStore,
};

