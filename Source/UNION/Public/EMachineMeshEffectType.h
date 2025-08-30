#pragma once
#include "CoreMinimal.h"
#include "EMachineMeshEffectType.generated.h"

UENUM(BlueprintType)
enum class EMachineMeshEffectType : uint8 {
    NS_Car_Muffler_ChargeLoop,
    NS_Car_Muffler_ChargeBurst,
    NS_Car_Muffler_BoostBurstLoop,
    NS_Car_Muffler_BoostBurstLoop_1s,
    NS_FX_Car_GetRing01,
    NS_FX_Car_GetRing01_SpeedUp,
    NS_FX_Car_GetRing_Boost01,
    NS_FX_Car_GetRing_Boost01_RingMax,
    Num,
};

