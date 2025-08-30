#include "OptimizedMeshEffect.h"

UOptimizedMeshEffect::UOptimizedMeshEffect() {
    this->StaticMesh = NULL;
    this->OwnerActor = NULL;
}

void UOptimizedMeshEffect::Stop() {
}

void UOptimizedMeshEffect::Start() {
}

bool UOptimizedMeshEffect::IsAlive() const {
    return false;
}


