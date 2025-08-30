#include "UnionAtomComponent.h"

UUnionAtomComponent::UUnionAtomComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->bUseRate = false;
    this->StartTime = 0.00f;
    this->StartTimeRate = 0.00f;
    this->bAutoManageAttachment = false;
    this->AutoAttachLocationRule = EAttachmentRule::KeepRelative;
    this->AutoAttachRotationRule = EAttachmentRule::KeepRelative;
    this->AutoAttachScaleRule = EAttachmentRule::KeepRelative;
    this->bForceDisableLoopSoundDistanceCulling = false;
}

void UUnionAtomComponent::StopAndResetDistanceCulling() {
}

bool UUnionAtomComponent::SetPanSplit(ESoundPan Pan) {
    return false;
}

void UUnionAtomComponent::PlayWithAutoAttach(float InStartTime) {
}

void UUnionAtomComponent::OnStatusChangedFunc(EAtomComponentStatus Status, UAtomComponent* AtomComponent) {
}

void UUnionAtomComponent::OnAudioFinishedFunc() {
}


