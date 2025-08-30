#include "ReplayMoveCameraCollision.h"

AReplayMoveCameraCollision::AReplayMoveCameraCollision(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StartCameraClass = NULL;
    this->DefaultSceneRoot = NULL;
    this->StaticBodyComponent = NULL;
    this->StartCameraObject = NULL;
}

void AReplayMoveCameraCollision::SetCameraData(FVector NewBoxSize) {
}

void AReplayMoveCameraCollision::OnCollisionBaseHit(const FCollisionHitInfo& Info) {
}


