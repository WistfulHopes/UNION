#include "HoverMachineEffectAssetData.h"

FHoverMachineEffectAssetData::FHoverMachineEffectAssetData() {
    this->EffectType = EHoverMachineEffectType::NS_Car_Muffler_Start_ChargeLoop;
    this->IsLoop = false;
    this->VisibleType = EMachineEffectVisibleType::LocalPlayerOnly;
}

