#pragma once
#include "CoreMinimal.h"
#include "ELobbySequencePriorityType.generated.h"

UENUM(BlueprintType)
enum class ELobbySequencePriorityType : uint8 {
    NormalPriority,
    SequencePriority,
    DonpaScenePriority,
    EtceteraScenePriority,
    NoticeScenePriority,
};

