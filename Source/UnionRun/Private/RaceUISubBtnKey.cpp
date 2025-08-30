#include "RaceUISubBtnKey.h"

URaceUISubBtnKey::URaceUISubBtnKey() : UUserWidget(FObjectInitializer::Get()) {
}


int32 URaceUISubBtnKey::GetMouseButtonIndex(FKey InKey) const {
    return 0;
}

FText URaceUISubBtnKey::GetKeyDisplayName(FKey InKey, int32 PlayerControllerIndex) const {
    return FText::GetEmpty();
}


