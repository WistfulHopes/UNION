#pragma once
#include "CoreMinimal.h"
#include "ERaceEndMenuUserReportPopupType.generated.h"

UENUM(BlueprintType)
enum class ERaceEndMenuUserReportPopupType : uint8 {
    Invalid,
    Completed,
    Restricted,
};

