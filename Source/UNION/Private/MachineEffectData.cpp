#include "MachineEffectData.h"

FMachineEffectData::FMachineEffectData() {
    this->Asset = NULL;
    this->IsLoop = false;
    this->IsEnableGroup = false;
    this->IsEnableAfterGoal = false;
    this->IsUpdateTransform = false;
    this->AttachmentRule = EAttachmentRule::KeepRelative;
    this->VisibleType = EMachineEffectVisibleType::LocalPlayerOnly;
}

