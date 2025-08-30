#pragma once
#include "CoreMinimal.h"
#include "ERaceSequenceState.generated.h"

UENUM(BlueprintType)
enum class ERaceSequenceState : uint8 {
    Idle,
    ReadyParam,
    SpawnRacer,
    SendRaceStart,
    LoadAssets,
    SetupAssets,
    CreateRace,
    IntroduceCourse,
    EntryRacer,
    EntryRival,
    PerformRival,
    FeaturedRacer,
    ResultRival,
    Ready,
    Drive,
    PauseMenu,
    Goal,
    SendRaceEnd,
    Result,
    Ceremony,
    EventAfterCeremony,
    JudgeEnding,
    Ending,
    EventAfterEnding,
    EndMenuAfterCeremony,
    EndCreditRoll,
    EndBefore,
    EndMenu,
    GadgetPlateAddRaceCount,
    RivalTeamEliminateResult,
    Termination,
    DriverGetting,
    Save,
    Exit,
};

