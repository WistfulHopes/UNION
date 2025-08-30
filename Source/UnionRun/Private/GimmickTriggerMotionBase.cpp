#include "GimmickTriggerMotionBase.h"

AGimmickTriggerMotionBase::AGimmickTriggerMotionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_IntervalSec = 1.00f;
    this->_TriggerMotionType = ETriggerMotionType::Idle;
    this->_bIsTriggered = false;
    this->_bIsPlayIdle = false;
    this->_bIsPlayOneShot = false;
    this->_TimeAfterTriggerSec = -1.00f;
}

bool AGimmickTriggerMotionBase::IsTriggered() const {
    return false;
}

bool AGimmickTriggerMotionBase::IsPlayOneShot() const {
    return false;
}

bool AGimmickTriggerMotionBase::IsPlayIdle() const {
    return false;
}

ETriggerMotionType AGimmickTriggerMotionBase::GetTriggerMotionType() const {
    return ETriggerMotionType::Interval;
}

float AGimmickTriggerMotionBase::GetPlayRate(ETriggerMotionState State) const {
    return 0.0f;
}


