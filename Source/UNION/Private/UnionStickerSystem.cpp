#include "UnionStickerSystem.h"

UUnionStickerSystem::UUnionStickerSystem() {
    this->CameraZoomSoundCue1 = NULL;
    this->CameraZoomSoundCue2 = NULL;
    this->CameraZoomSoundCue3 = NULL;
    this->bCanZoom = false;
}

void UUnionStickerSystem::Setup(const FUnionStickerSystemData& InSystemData) {
}

void UUnionStickerSystem::InputReceiver_OnRightStickButtonPressed(UObject* Object) {
}

void UUnionStickerSystem::InputReceiver_OnRightStickAxis(UObject* Object, FVector2D Value) {
}

void UUnionStickerSystem::Finalize() {
}


