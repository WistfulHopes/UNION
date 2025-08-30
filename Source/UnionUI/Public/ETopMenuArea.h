#pragma once
#include "CoreMinimal.h"
#include "ETopMenuArea.generated.h"

UENUM(BlueprintType)
enum class ETopMenuArea : uint8 {
    MainMenu,
    BottomMenu,
    SelectPlayerCountGrandPrix,
    SelectPlayerCountPartyRace,
    SelectPlayerCountOnline,
    SelectPlayerCountGarage,
    Num,
};

