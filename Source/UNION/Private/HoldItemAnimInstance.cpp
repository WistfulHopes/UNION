#include "HoldItemAnimInstance.h"

UHoldItemAnimInstance::UHoldItemAnimInstance() {
    this->bDestroyAtEndAnimation = true;
    this->RemainingUses = 0;
}

bool UHoldItemAnimInstance::IsUsed() const {
    return false;
}


