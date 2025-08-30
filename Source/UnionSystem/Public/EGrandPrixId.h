#pragma once
#include "CoreMinimal.h"
#include "EGrandPrixId.generated.h"

UENUM(BlueprintType)
enum class EGrandPrixId : uint8 {
    InValid,
    Purple_01,
    Yellow_02,
    Red_03,
    Blue_04,
    Cyan_05,
    White_06,
    Green_07,
    SegaGP_01,
    SegaGP_02,
    SegaGP_03,
    Collabo_01,
    Collabo_02,
    Collabo_03,
    AnotherWorld,
    Num,
    FirstGP = Purple_01,
    FinalGP = Green_07,
    OpenFinalGPTargetNum = Green_07,
    FinalExtraGP = SegaGP_01,
    FirstCollaboGP = Collabo_01,
    FinalCollaboGP = Collabo_02,
};

