#include "SequenceParameterActor.h"

ASequenceParameterActor::ASequenceParameterActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSequenceVisibility_ = true;
    this->bSequenceEvent_ = false;
    this->bSequenceMainFloorVisibility_ = false;
    this->bSequenceFloorFrontVisibility_ = false;
    this->bSequenceFloorBackVisibility_ = false;
    this->bSequenceAccelFloorVisibility_ = false;
}

void ASequenceParameterActor::SetSequenceVisibility_(bool bVisibility) {
}

void ASequenceParameterActor::SetSequenceTransform_(FTransform Transform) {
}

void ASequenceParameterActor::SetSequenceMainFloorVisibility_(bool bVisibility) {
}

void ASequenceParameterActor::SetSequenceFloorFrontVisibility_(bool bVisibility) {
}

void ASequenceParameterActor::SetSequenceFloorBackVisibility_(bool bVisibility) {
}

void ASequenceParameterActor::SetSequenceEvent_(bool bEvent) {
}

void ASequenceParameterActor::SetSequenceAccelFloorVisibility_(bool bVisibility) {
}


