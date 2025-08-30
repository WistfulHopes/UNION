#include "AvoidTargetRingData.h"

FAvoidTargetRingData::FAvoidTargetRingData() {
    this->ItemId = EItemId::NonItem;
    this->IsAvoidEnable = false;
    this->AllowAvoidAttackCarSpeed = 0.00f;
    this->AvoidAttackMoveDistance = 0.00f;
    this->AvoidAttackMoveTime = 0.00f;
}

