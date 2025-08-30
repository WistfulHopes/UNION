#include "OptionSequenceBase.h"

UOptionSequenceBase::UOptionSequenceBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TopOptionWidget = NULL;
    this->BaseCloseConfirmPopup = NULL;
    this->BaseRevertConfirmPopup = NULL;
}

void UOptionSequenceBase::RequestRevert() {
}

void UOptionSequenceBase::OnRevertConfirmDecision(UUnionUIButtonBase* Button, int32 panelIdx, int32 buttonIdx) {
}

void UOptionSequenceBase::OnCloseConfirmDecision(UUnionUIButtonBase* Button, int32 panelIdx, int32 buttonIdx) {
}


