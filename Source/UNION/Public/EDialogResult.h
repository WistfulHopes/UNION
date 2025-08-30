#pragma once
#include "CoreMinimal.h"
#include "EDialogResult.generated.h"

UENUM(BlueprintType)
enum class EDialogResult : uint8 {
    None,
    Yes,
    No,
    OK,
};

