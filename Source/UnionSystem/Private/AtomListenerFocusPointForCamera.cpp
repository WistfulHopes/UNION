#include "AtomListenerFocusPointForCamera.h"

UAtomListenerFocusPointForCamera::UAtomListenerFocusPointForCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->DistanceFocusLevel = 1.00f;
    this->DirectionFocusLevel = 0.00f;
    this->Camera = NULL;
}

void UAtomListenerFocusPointForCamera::SetCamera(UCameraComponent* NewCamera) {
}

void UAtomListenerFocusPointForCamera::OnCameraActivated() {
}


