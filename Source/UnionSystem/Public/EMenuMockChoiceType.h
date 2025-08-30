#pragma once
#include "CoreMinimal.h"
#include "EMenuMockChoiceType.generated.h"

UENUM(BlueprintType)
enum class EMenuMockChoiceType : uint8 {
    TypeBool,
    TypeInt,
    TypeFloat,
    TypeVector,
    TypeDTInt,
    TypeDTFloat,
    TypeText,
    TypeTextArray,
};

