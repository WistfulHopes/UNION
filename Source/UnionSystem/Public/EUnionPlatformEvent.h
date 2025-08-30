#pragma once
#include "CoreMinimal.h"
#include "EUnionPlatformEvent.generated.h"

UENUM(BlueprintType)
enum class EUnionPlatformEvent : uint8 {
    Unknown,
    Suspend,
    Resume,
    Deactivate,
    Reactivated,
    PreInstallation,
    GameIntent,
    DisConnectDevice,
    NonControllerUser,
    DefaultUserLogout,
    Num,
};

