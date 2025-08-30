#pragma once
#include "CoreMinimal.h"
#include "ETitleSequenceState.generated.h"

UENUM(BlueprintType)
enum class ETitleSequenceState : uint8 {
    CheckPlatformPrivilege,
    CreateAndLoadSaveData,
    Warning,
    Agreement,
    Logos,
    Strap,
    AutoSaveInformation,
    ConvertSaveDataForUpgradePS5,
    ConvertSaveDataForDemo,
    DetachUnavailableContent,
    FinishedAdvertiseLogoFlow,
    Movie,
    TitleTop,
    Store,
    License,
    LogIn,
    Exit,
    GameQuit,
};

