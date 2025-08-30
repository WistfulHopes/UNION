#pragma once
#include "CoreMinimal.h"
#include "EFooterSubTextType.generated.h"

UENUM(BlueprintType)
enum class EFooterSubTextType : uint8 {
    None,
    SelectCharaMachine,
    SelectPlayer,
    SelectCourse,
    Parameter,
    Random,
    Option,
    SelectClass,
    SelectRival,
    Edit,
    RuleCheck,
    CallMyRule,
    ResetDefault,
    ChangeGroup,
    RankVisible,
    ChangeOnOff,
    AllOn,
    AllOFF,
    ChangeMirror,
    SelectMode,
    GadgetCustomize,
    TitleSetting,
    StickerKeyHelp,
    DetachGadget,
    StickerClear,
    BlockPlayer,
    Horn,
    Challenge,
    JukeboxSetBGMDefault,
    OptionReset,
    UserReport,
    XboxGamerCard,
    PFFriendChangePage,
};

