#pragma once
#include "CoreMinimal.h"
#include "ERaceEndMenuUserReportTypeId.generated.h"

UENUM(BlueprintType)
enum class ERaceEndMenuUserReportTypeId : uint8 {
    Invalid,
    InappropriatePlayerMame,
    IntentionalDisconnection,
    AFK,
    MaliciousUseOfBugs,
    AbnormalSpeedOrRank,
    AbnormalItemUse,
    OtherCheatsOrMods,
    Num,
};

