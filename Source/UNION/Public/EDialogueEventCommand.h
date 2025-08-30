#pragma once
#include "CoreMinimal.h"
#include "EDialogueEventCommand.generated.h"

UENUM(BlueprintType)
enum class EDialogueEventCommand : uint8 {
    SetCharacter,
    ClearCharacter,
    StartMotion,
    StartMotion_EndWait,
    StopMotion,
    StartDrawText,
    SetEventBG,
    ClearEventBG,
    StartMenuMode,
    SetImage,
    ClearImage,
    SetRewardGetDisplay,
    SetDisplay,
    PlayDisplayAnim,
    PlayDisplayAnimByName,
    PlayDisplayAnim_EndWait,
    PlayDisplayAnimByName_EndWait,
    SoundPlay,
    SetupFestaEventData,
    InTextWindow,
    OutTextWindow,
};

