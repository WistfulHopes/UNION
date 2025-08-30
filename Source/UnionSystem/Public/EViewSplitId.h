#pragma once
#include "CoreMinimal.h"
#include "EViewSplitId.generated.h"

UENUM(BlueprintType)
enum class EViewSplitId : uint8 {
    None,
    Split1_1P,
    Split2_Left_1P,
    Split2_Right_2P,
    Split4_UpLeft_1P,
    Split4_UpRight_2P,
    Split4_DownLeft_3P,
    Split4_DownRight_4P,
};

