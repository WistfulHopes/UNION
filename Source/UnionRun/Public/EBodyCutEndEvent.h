#pragma once
#include "CoreMinimal.h"
#include "EBodyCutEndEvent.generated.h"

UENUM(BlueprintType)
enum class EBodyCutEndEvent : uint8 {
    PlayEffect,
    Finished,
};

