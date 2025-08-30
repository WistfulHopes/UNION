#pragma once
#include "CoreMinimal.h"
#include "EUIZOrderType.generated.h"

UENUM(BlueprintType)
enum class EUIZOrderType : uint8 {
    Default,
    PartyRacePreset,
    CustomizeRule,
    RivalSelect,
    SelectClass,
    OffScreenIcon,
    ControlGuide,
    RaceSpecificHUD,
    RadarMap,
    Ranking,
    Evaluation,
    RoundDisplay,
    Info,
    ScreenSplitLine,
    ScoreDisplay,
    ResultSet,
    Timer,
    PauseMenu,
    MenuShortcut,
    ControlsWindow,
    HowToPlayWindow,
    ChatStampWindow,
    FooterMenu,
    GenericWindow,
    ForcedProgressTimer,
    NotificationDisplay,
    LobbyInvitationNotificationDisplay,
    TransitionFade = 100,
    NowLoading,
    GenericWindowError,
    OnlineNetConnectingIcon,
    AutoSaveIcon,
    PlayLogDisplay,
    Development = 250,
    Num,
};

