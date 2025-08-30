#include "Hint_Sub.h"

UHint_Sub::UHint_Sub() : UUserWidget(FObjectInitializer::Get()) {
    this->WBP_Tutorial_Controller_Wrapper = NULL;
}

void UHint_Sub::SetupControllerUI(EHintId InHintId, bool bIsKeyboard) {
}

void UHint_Sub::SetControllerUIIndex(int32 InIndex) {
}

bool UHint_Sub::IsValidControllerUI() const {
    return false;
}

bool UHint_Sub::IsKeyboard() const {
    return false;
}

PFControllerTypeUseHint UHint_Sub::GetPlatformControllerType() const {
    return PFControllerTypeUseHint::None;
}


