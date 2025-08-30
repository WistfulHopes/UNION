#include "HonorTitleSequence.h"
#include "EMenuSequenceSubState.h"

UHonorTitleSequence::UHonorTitleSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("SetHonor");
    this->DefaultMenuState = EMenuSequenceSubState::SetHonor;
    this->HonorTitleSettingWidget = NULL;
}


