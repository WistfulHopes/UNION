#include "RaceUISubBtnGuide.h"

URaceUISubBtnGuide::URaceUISubBtnGuide() : UUserWidget(FObjectInitializer::Get()) {
}


bool URaceUISubBtnGuide::IsKeyboard() const {
    return false;
}

FKey URaceUISubBtnGuide::GetUseItemKeyPC(int32 PlayerControllerIndex) const {
    return FKey{};
}

void URaceUISubBtnGuide::GetUseItemKey(int32 PlayerControllerIndex) {
}

FKey URaceUISubBtnGuide::GetReleaseEffectKey(int32 PlayerControllerIndex) const {
    return FKey{};
}

int32 URaceUISubBtnGuide::GetMouseButtonIndex(FKey InKey) const {
    return 0;
}

FText URaceUISubBtnGuide::GetKeyDisplayName(FKey InKey, int32 PlayerControllerIndex) const {
    return FText::GetEmpty();
}

FKey URaceUISubBtnGuide::GetFlightGuideKey(int32 PlayerControllerIndex, bool bSuggestUpInput) const {
    return FKey{};
}

EBtnGuidePlatFormController URaceUISubBtnGuide::GetControllerType(int32 PlayerControllerIndex) {
    return EBtnGuidePlatFormController::BtnGuide_PC;
}


