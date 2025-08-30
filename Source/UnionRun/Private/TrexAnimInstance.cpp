#include "TrexAnimInstance.h"

UTrexAnimInstance::UTrexAnimInstance() {
    this->bIsMove = false;
    this->bIsTurn = false;
    this->bIsDamage = false;
    this->bIsAttack = false;
    this->bIsTurnEnd = false;
}

void UTrexAnimInstance::SetIsTurnEnd(bool flag) {
}

void UTrexAnimInstance::SetIsTurn(bool flag) {
}

void UTrexAnimInstance::SetIsMove(bool flag) {
}

void UTrexAnimInstance::SetIsDamage(bool flag) {
}

void UTrexAnimInstance::SetIsAttack(bool flag) {
}

bool UTrexAnimInstance::GetIsTurnEnd() {
    return false;
}

bool UTrexAnimInstance::GetIsTurn() {
    return false;
}

bool UTrexAnimInstance::GetIsMove() {
    return false;
}

bool UTrexAnimInstance::GetIsDamage() {
    return false;
}

bool UTrexAnimInstance::GetIsAttack() {
    return false;
}


