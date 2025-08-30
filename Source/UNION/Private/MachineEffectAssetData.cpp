#include "MachineEffectAssetData.h"

FMachineEffectAssetData::FMachineEffectAssetData() {
    this->EffectType = EMachineEffectType::NS_Car_Muffler_Start_ChargeLoop;
    this->IsLoop = false;
    this->IsEnableGroup = false;
    this->IsEnableAfterGoal = false;
    this->IsUpdateTransform = false;
    this->AttachmentRule = EAttachmentRule::KeepRelative;
    this->VisibleType = EMachineEffectVisibleType::LocalPlayerOnly;
}

