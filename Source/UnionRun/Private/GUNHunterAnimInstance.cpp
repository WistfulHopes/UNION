#include "GUNHunterAnimInstance.h"

UGUNHunterAnimInstance::UGUNHunterAnimInstance() {
    this->IsAttackCharge = false;
    this->IsDead = false;
    this->IsDownAttack = false;
}

void UGUNHunterAnimInstance::SetIsDead(bool flag) {
}

void UGUNHunterAnimInstance::SetIsAttackCharge(bool isChange) {
}

void UGUNHunterAnimInstance::OnStartShootEnd() {
}

bool UGUNHunterAnimInstance::IsStartMotion(EGUNHunterStartType Motion) const {
    return false;
}

bool UGUNHunterAnimInstance::IsShootState(EGUNHunterShootState State, bool isDown) const {
    return false;
}


