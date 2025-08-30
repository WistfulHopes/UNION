#pragma once
#include "CoreMinimal.h"
#include "ELanguage.generated.h"

UENUM(BlueprintType)
enum class ELanguage : uint8 {
    Ja,
    En,
    Fr,
    It,
    De,
    Es,
    EsUS,
    Ru,
    Pl,
    Pt,
    Ko,
    ZhHans,
    ZhHant,
    Th,
    Num,
    Invalid = 255,
};

