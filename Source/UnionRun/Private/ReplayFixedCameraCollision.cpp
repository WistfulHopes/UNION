#include "ReplayFixedCameraCollision.h"

AReplayFixedCameraCollision::AReplayFixedCameraCollision(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StartCameraClass = NULL;
    this->DefaultSceneRoot = NULL;
    this->StaticBodyComponent = NULL;
    this->StartCameraObject = NULL;
}

void AReplayFixedCameraCollision::SetCameraData(FVector NewBoxSize) {
}

void AReplayFixedCameraCollision::OnCollisionBaseHit(const FCollisionHitInfo& Info) {
}

void AReplayFixedCameraCollision::CreateCameraObject() {
}


