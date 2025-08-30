#pragma once
#include "CoreMinimal.h"
#include "ESteamInputDeviceType.generated.h"

UENUM(BlueprintType)
enum class ESteamInputDeviceType : uint8 {
    Unkown,
    SteamController,
    XBox360Controller,
    XBoxOneController,
    GenericGamepad,
    PS4Controller,
    AppleMFiController,
    AndroidController,
    SwitchJoyConPair,
    SwitchJoyConSingle,
    SwitchProController,
    MobileTouch,
    PS3Controller,
    PS5Controller,
};

