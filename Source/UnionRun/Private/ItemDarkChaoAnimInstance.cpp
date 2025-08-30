#include "ItemDarkChaoAnimInstance.h"

UItemDarkChaoAnimInstance::UItemDarkChaoAnimInstance() {
    this->bIsIdle = false;
    this->bIsSteal = false;
    this->bIsGift = false;
    this->bIsUse = false;
    this->bIsThrow = false;
    this->bIsThrowHit = false;
    this->bIsThrowMissFall = false;
    this->bIsThrowMissBound = false;
    this->ThrowAnimController = 0.00f;
}

void UItemDarkChaoAnimInstance::SetThrowAnimController(float NewValue) {
}

void UItemDarkChaoAnimInstance::SetIsUse(bool flag) {
}

void UItemDarkChaoAnimInstance::SetIsThrowMissFall(bool flag) {
}

void UItemDarkChaoAnimInstance::SetIsThrowMissBound(bool flag) {
}

void UItemDarkChaoAnimInstance::SetIsThrowHit(bool flag) {
}

void UItemDarkChaoAnimInstance::SetIsThrow(bool flag) {
}

void UItemDarkChaoAnimInstance::SetIsSteal(bool flag) {
}

void UItemDarkChaoAnimInstance::SetIsIdle(bool flag) {
}

void UItemDarkChaoAnimInstance::SetIsGift(bool flag) {
}

float UItemDarkChaoAnimInstance::GetThrowAnimController() {
    return 0.0f;
}

bool UItemDarkChaoAnimInstance::GetIsUse() {
    return false;
}

bool UItemDarkChaoAnimInstance::GetIsThrowMissFall() {
    return false;
}

bool UItemDarkChaoAnimInstance::GetIsThrowMissBound() {
    return false;
}

bool UItemDarkChaoAnimInstance::GetIsThrowHit() {
    return false;
}

bool UItemDarkChaoAnimInstance::GetIsThrow() {
    return false;
}

bool UItemDarkChaoAnimInstance::GetIsSteal() {
    return false;
}

bool UItemDarkChaoAnimInstance::GetIsIdle() {
    return false;
}

bool UItemDarkChaoAnimInstance::GetIsGift() {
    return false;
}


