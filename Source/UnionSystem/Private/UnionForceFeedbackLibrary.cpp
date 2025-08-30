#include "UnionForceFeedbackLibrary.h"

UUnionForceFeedbackLibrary::UUnionForceFeedbackLibrary() {
}

void UUnionForceFeedbackLibrary::StopPresetForceFeedback(int32 PlayerIndex, EPresetForceFeedbackType ForceFeedbackType) {
}

void UUnionForceFeedbackLibrary::StopForceFeedbackByTag(int32 PlayerIndex, const FName& Tag) {
}

void UUnionForceFeedbackLibrary::StopForceFeedback(int32 PlayerIndex, UForceFeedbackEffect* ForceFeedbackEffect) {
}

void UUnionForceFeedbackLibrary::StopAllForceFeedback(int32 PlayerIndex) {
}

void UUnionForceFeedbackLibrary::SetLevel(int32 PlayerIndex, EForceFeedbackLevel Level) {
}

void UUnionForceFeedbackLibrary::PlayPresetForceFeedbackWithParam(int32 PlayerIndex, EPresetForceFeedbackType ForceFeedbackType, int32 GroupId, float PlayIgnoreTime) {
}

void UUnionForceFeedbackLibrary::PlayPresetForceFeedback(int32 PlayerIndex, EPresetForceFeedbackType ForceFeedbackType) {
}

void UUnionForceFeedbackLibrary::PlayForceFeedback(int32 PlayerIndex, UForceFeedbackEffect* ForceFeedbackEffect, bool bLooping, const FName& Tag) {
}

bool UUnionForceFeedbackLibrary::IsPlayingPresetForceFeedback(int32 PlayerIndex, EPresetForceFeedbackType ForceFeedbackType) {
    return false;
}


