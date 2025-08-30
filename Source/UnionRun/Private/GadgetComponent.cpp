#include "GadgetComponent.h"

UGadgetComponent::UGadgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RacerIndex = -1;
    this->bUpdate = true;
    this->bDebugDraw = false;
    this->m_ringObject = NULL;
}


