#include "GimmickTriggerMotionVAT.h"
#include "UnionVATMeshComponent.h"

AGimmickTriggerMotionVAT::AGimmickTriggerMotionVAT(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUnionVATMeshComponent>(TEXT("VATMesh"));
    this->_VATMeshComponent = (UUnionVATMeshComponent*)RootComponent;
    this->_bUseNoTriggerState = false;
    this->_bUseEndState = false;
    this->_bIsPlaying = true;
    this->_PrevPosition = -1.00f;
    this->_TriggerMotionState = ETriggerMotionState::NoTrigger;
    this->_PrevTriggerMotionState = ETriggerMotionState::NoTrigger;
}

void AGimmickTriggerMotionVAT::UpdateState() {
}

void AGimmickTriggerMotionVAT::OnVATSequence(UUnionVATMeshComponent* VATMeshComponent, const FUnionVATSequenceInfo& SequenceInfo) {
}


