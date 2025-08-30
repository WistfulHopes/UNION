#pragma once
#include "CoreMinimal.h"
#include "EBtnGuidePlatFormController.generated.h"

UENUM(BlueprintType)
enum class EBtnGuidePlatFormController : uint8 {
    BtnGuide_PC,
    BtnGuide_PS,
    BtnGuide_XBOX,
    BtnGuide_NX,
    BtnGuide_NXSingle,
};

