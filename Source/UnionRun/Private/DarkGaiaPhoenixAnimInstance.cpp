#include "DarkGaiaPhoenixAnimInstance.h"

UDarkGaiaPhoenixAnimInstance::UDarkGaiaPhoenixAnimInstance() {
    this->bIsPhase1Attack = false;
    this->bIsPhase2Move = false;
    this->bIsPhase3Move = false;
    this->bIsPhase3Attack = false;
    this->bIsPhase3Mirror = false;
}

void UDarkGaiaPhoenixAnimInstance::SetIsPhase3Move(bool flag) {
}

void UDarkGaiaPhoenixAnimInstance::SetIsPhase3Mirror(bool flag) {
}

void UDarkGaiaPhoenixAnimInstance::SetIsPhase3Attack(bool flag) {
}

void UDarkGaiaPhoenixAnimInstance::SetIsPhase2Move(bool flag) {
}

void UDarkGaiaPhoenixAnimInstance::SetIsPhase1Attack(bool flag) {
}

bool UDarkGaiaPhoenixAnimInstance::GetIsPhase3Move() {
    return false;
}

bool UDarkGaiaPhoenixAnimInstance::GetIsPhase3Mirror() {
    return false;
}

bool UDarkGaiaPhoenixAnimInstance::GetIsPhase3Attack() {
    return false;
}

bool UDarkGaiaPhoenixAnimInstance::GetIsPhase2Move() {
    return false;
}

bool UDarkGaiaPhoenixAnimInstance::GetIsPhase1Attack() {
    return false;
}


