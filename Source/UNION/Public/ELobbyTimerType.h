#pragma once
#include "CoreMinimal.h"
#include "ELobbyTimerType.generated.h"

UENUM(BlueprintType)
enum class ELobbyTimerType : uint8 {
    None,
    WaitingMembers,
    LobbySearch,
    LobbySearchComplete,
    WaitingInTheLobby,
    WaitingInTheLobbyTimerEnd,
    GroupSetting,
    SelectCourse,
    TimerFinished,
    SquadLobby,
    WaitingHostDecideRule,
    Num,
};

