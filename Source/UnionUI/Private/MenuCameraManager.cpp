#include "MenuCameraManager.h"

AMenuCameraManager::AMenuCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraActor = NULL;
    this->CameraFOV = 0.00f;
    this->CameraManualFocusDistance = 0.00f;
}

void AMenuCameraManager::SetUpCameraFOV(float InFOV) {
}

void AMenuCameraManager::SetManualFocusDistance(float InManualDistance) {
}

void AMenuCameraManager::SetLookAtRacerCameraPos(FVector OffsetPos, FVector OffsetLookAtPos) {
}

void AMenuCameraManager::SetCameraParam(AActor* Camera, TEnumAsByte<EEasingFunc::Type> InEasingFunc) {
}

void AMenuCameraManager::ForceResetCameraMove() {
}

void AMenuCameraManager::CameraZoomOut(float Time) {
}

void AMenuCameraManager::CameraZoomIn(AActor* Target, float Time) {
}

void AMenuCameraManager::CameraMoveToTransform(FTransform TargetTransform, float Time) {
}

void AMenuCameraManager::CameraCharaSlide(AActor* Target, float Time) {
}


