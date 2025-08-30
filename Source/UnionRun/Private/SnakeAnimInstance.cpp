#include "SnakeAnimInstance.h"

USnakeAnimInstance::USnakeAnimInstance() {
    this->bIsIdle = false;
    this->bIsAttack = false;
    this->bIsDamage = false;
}

void USnakeAnimInstance::SetIsIdle(bool flag) {
}

void USnakeAnimInstance::SetIsDamage(bool flag) {
}

void USnakeAnimInstance::SetIsAttack(bool flag) {
}

bool USnakeAnimInstance::GetIsIdle() {
    return false;
}

bool USnakeAnimInstance::GetIsDamage() {
    return false;
}

bool USnakeAnimInstance::GetIsAttack() {
    return false;
}


