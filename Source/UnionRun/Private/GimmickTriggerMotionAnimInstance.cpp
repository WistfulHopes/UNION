#include "GimmickTriggerMotionAnimInstance.h"

UGimmickTriggerMotionAnimInstance::UGimmickTriggerMotionAnimInstance() {
    this->_bIsPlayOneShot = false;
    this->_bIsPlayIdle = false;
    this->_OwningGimmickActor = NULL;
}

void UGimmickTriggerMotionAnimInstance::NativeUpdateAnimation(float DeltaSeconds) {
}

void UGimmickTriggerMotionAnimInstance::NativeBeginPlay() {
}


