#pragma once
#include "CoreMinimal.h"
#include "EOptionAudioCell.generated.h"

UENUM(BlueprintType)
enum class EOptionAudioCell : uint8 {
    Master,
    BGM,
    SE,
    Voice,
};

