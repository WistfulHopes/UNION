#pragma once
#include "CoreMinimal.h"
#include "EInputMappingOptions.generated.h"

UENUM(BlueprintType)
enum class EInputMappingOptions : uint8 {
    None,
    Keyboard,
    OnlyDebug,
};

