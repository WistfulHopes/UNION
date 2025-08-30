#pragma once
#include "CoreMinimal.h"
#include "EUnionNavMarkerType.generated.h"

UENUM(BlueprintType)
enum class EUnionNavMarkerType : uint8 {
    None,
    StartLine_Vehicle,
    LapGate,
    StartingGrid,
    TravelRing_Notice,
    TravelRing_Entrance,
    TravelRing_Exit,
    TravelRing_PP_Start,
    TravelRing_PP_End,
    Another_Confirm_Start,
    Another_Confirm_End,
    CheckPoint,
    RespotPoint,
    RemainDistance_1000,
    RemainDistance_500,
    RemainDistance_300,
    RemainDistance_100,
    FootcutPoint,
    FootcutPoint_Final,
    FootcutPoint_MainAnother,
    Max,
};

