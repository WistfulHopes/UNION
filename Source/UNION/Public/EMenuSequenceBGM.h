#pragma once
#include "CoreMinimal.h"
#include "EMenuSequenceBGM.generated.h"

UENUM(BlueprintType)
enum class EMenuSequenceBGM : uint8 {
    None,
    BGM_TITLE_01,
    BGM_TITLE_02,
    BGM_TOP_MENU,
    BGM_PARTYRACE_01,
    BGM_PARTYRACE_02,
    BGM_LOBBY_01,
    BGM_LOBBY_02,
    BGM_GARAGE_01,
    BGM_GRANDPRIX_01,
    BGM_GRANDPRIX_02,
    BGM_GRANDPRIX_03,
    BGM_GRANDPRIX_04,
    BGM_StagePreview,
    BGM_TIMETRIAL_01,
    BGM_LOBBY_FESTA,
    BGM_LEGENDCOMPE_01,
    BGM_LOBBY_FRIEND,
    BGM_ENDING_01,
    BGM_ENDING_02,
    BGM_FRIENDSHIP_01,
};

