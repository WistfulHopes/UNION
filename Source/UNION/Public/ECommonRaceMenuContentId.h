#pragma once
#include "CoreMinimal.h"
#include "ECommonRaceMenuContentId.generated.h"

UENUM(BlueprintType)
enum class ECommonRaceMenuContentId : uint8 {
    Common_ToNextRound,
    Common_ToAwardCeremony,
    Common_ViewReplay,
    Common_ToGarage,
    Common_ToGadget,
    Common_ReturnTopMenu,
    Common_QuitRace,
    Common_ReturnSquadLobby,
    Common_ExitLobby,
    GrandPrix_RetryGrandPrix,
    GrandPrix_RetryRound,
    GrandPrix_ReturnGrandPrixSelect,
    PartyRace_ReturnCourseSelect,
    PartyRace_ReturnPartySelect,
    PartyRace_Continue,
    TimeTrial_RetryRace,
    TimeTrial_ReplayGhost,
    TimeTrial_ReturnCourseSelect,
    RankMatch_ContinueRace,
    Festa_ContinueRace,
    FriendMatch_ContinueRace,
    PrivateMatch_Host_QuitRace,
    PrivateMatch_Guest_QuitRace,
    Pause_Option,
    Pause_ResumeRace,
    Pause_ReturnRuleSetting,
    Pause_ReturnGrandPrixSelect,
    Pause_ResumeGhostView,
    Pause_ReturnTopMenu,
    Num,
};

