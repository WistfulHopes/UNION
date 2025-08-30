#pragma once
#include "CoreMinimal.h"
#include "ESequenceMainType.generated.h"

UENUM(BlueprintType)
enum class ESequenceMainType : uint8 {
    None,
    Advertise,
    LoadSaveData,
    TitleMovie,
    Title,
    GhostData,
    NetworkLogin_Title,
    TopMenu,
    PlayLogUpload,
    NetworkLogin_TopMenu,
    SelectOfflinePlay,
    Grandprix,
    Racepark,
    Timetrial,
    SelectOnlinePlay,
    Lobby_Fest,
    Lobby_FriendMatch,
    Lobby_LegendCompe,
    Lobby_RankMatch,
    Lobby_Squad,
    Lobby_Wireless,
    ConectP2P,
    ConsecutiveBattleMenu,
    OnlineRaceEndMenu,
    Race,
    SendRaceStart,
    SendRaceEnd,
    RaceError,
    Result,
    Ending,
    NetworkLogin_TimeTrial,
    Max_Num,
};

