#pragma once
#include "CoreMinimal.h"
#include "EOptionCategory.generated.h"

UENUM(BlueprintType)
enum class EOptionCategory : uint8 {
    RaceTop,
    ControlTop,
    ControlUI,
    ControlRace,
    CustomTop,
    CustomAction,
    CustomPrimary,
    CustomSecondary,
    CustomGamePad,
    LanguageTop,
    GraphicTop,
    BrightnessTop,
    AudioTop,
    OnlineTop,
};

