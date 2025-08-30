#pragma once
#include "CoreMinimal.h"
#include "EWirelessSequenceState.generated.h"

UENUM(BlueprintType)
enum class EWirelessSequenceState : uint8 {
    Idle,
    Matching = 19,
    WirelessTop = 72,
    SearchLobby,
    CreateLobby,
    ReadyCheck,
    ToOffline,
    ToOnline,
    PreSearch,
    CreateLobby_Setting,
    CreateLobby_Start,
    CreateLobby_InProgress,
    CreateLobby_Complete,
    SearchLobby_Start,
    SearchLobby_InProgress,
    SearchLobby_Complete,
    EntryLobby_Setup,
    EntryLobby_Start,
    EntryLobby_InProgress,
    EntryLobby_Complete,
    BackToPrevSequence,
    ErrorWindow,
    Exit,
};

