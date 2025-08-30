#pragma once
#include "CoreMinimal.h"
#include "EVehicleSound.generated.h"

UENUM(BlueprintType)
enum class EVehicleSound : uint8 {
    FrontEngine,
    RearEngine,
    EngineSoundInAir,
    DriftChargeLoop,
    DriftChargeLevel,
    SlipStream,
    Stunt,
    StartDash,
    Dash,
    DashPanel,
    ContactWin,
    ContactLose,
    RoadNoise,
    BoatVib,
    SquealBreak,
    SquealDrift,
    SpinSound,
    Landing,
    CarToBoat,
    CarToPlane,
    BoatToCar,
    BoatToPlane,
    PlaneToCar,
    PlaneToBoat,
    HitTrackWall,
    GatePassTransform,
    GatePassShortcut,
    WhiteWispBoost,
    BalloonBounce,
    DropRing,
    HitHomingPunch,
    PassedShortcutRing,
};

