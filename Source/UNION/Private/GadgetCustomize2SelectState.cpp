#include "GadgetCustomize2SelectState.h"

UGadgetCustomize2SelectState::UGadgetCustomize2SelectState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentFestaRule = EGroupRaceRule::None;
}






void UGadgetCustomize2SelectState::SetupGadgetPlateWindow(const int32 InPlayerIndex) {
}

void UGadgetCustomize2SelectState::SetupFestaSpecialRule_Implementation() {
}

void UGadgetCustomize2SelectState::SetFocusCustomWindowFlag(const int32 InPlayerIndex, const bool IsFocus) {
}

void UGadgetCustomize2SelectState::ResizeFocusCustomWindowFlags(const int32 InPlayerNum) {
}

bool UGadgetCustomize2SelectState::IsFocusCustomWindowFlag(const int32 InPlayerIndex) {
    return false;
}


