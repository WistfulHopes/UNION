#pragma once
#include "CoreMinimal.h"
#include "EMachineAnimationMontageAssetId.generated.h"

UENUM(BlueprintType)
enum class EMachineAnimationMontageAssetId : uint8 {
    None,
    TrickFlipLeft,
    TrickFlipLeftSeatLock,
    TrickFlipRight,
    TrickFlipRightSeatLock,
    TrickFlipFront,
    TrickFlipFrontSeatLock,
    TrickFlipBack,
    TrickFlipBackSeatLock,
    TrickSpinLeft,
    TrickSpinLeftSeatLock,
    TrickSpinRight,
    TrickSpinRightSeatLock,
    TrickCorkscrewLeft,
    TrickCorkscrewLeftSeatLock,
    TrickCorkscrewRight,
    TrickCorkscrewRightSeatLock,
    ScrewDashLeft,
    ScrewDashRight,
    SpinLeft,
    SpinRight,
    Squash,
    AnchorStart,
    AnchorEnd,
    AnotherSelectLeft,
    AnotherSelectRight,
    PlaneSpinLeft,
    PlaneSpinRight,
    MagnetDamageLeft,
    MagnetDamageRight,
    Num,
};

