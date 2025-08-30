#pragma once
#include "CoreMinimal.h"
#include "ERacerReactionVoiceType.generated.h"

UENUM(BlueprintType)
enum class ERacerReactionVoiceType : uint8 {
    None,
    RandomVoice,
    ChrVoice,
    LinkVoice,
    RivalVoice,
    Num,
};

