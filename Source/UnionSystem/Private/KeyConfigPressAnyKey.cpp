#include "KeyConfigPressAnyKey.h"

UKeyConfigPressAnyKey::UKeyConfigPressAnyKey() : UUserWidget(FObjectInitializer::Get()) {
}

void UKeyConfigPressAnyKey::SetIsGamepadKey(const bool bInIsGamepadKey) {
}

void UKeyConfigPressAnyKey::SetCurrentKey(const FKey& Key) {
}

bool UKeyConfigPressAnyKey::IsGamepadKey() const {
    return false;
}

FKey UKeyConfigPressAnyKey::GetCurrentKey() const {
    return FKey{};
}

void UKeyConfigPressAnyKey::Cancel() {
}

void UKeyConfigPressAnyKey::AssignKey(const FKey& NewKey) {
}


