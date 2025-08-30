#include "OptimizedMeshEffectComponent.h"

UOptimizedMeshEffectComponent::UOptimizedMeshEffectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OptimizedMeshEffect = NULL;
    this->StaticMesh = NULL;
    this->bManualUpdate = true;
}

void UOptimizedMeshEffectComponent::StopEffect() {
}

void UOptimizedMeshEffectComponent::StartEffect() {
}

void UOptimizedMeshEffectComponent::SetVectorParameterValue(FName ParameterName, const FVector& Value) {
}

void UOptimizedMeshEffectComponent::SetScalarParameterValue(FName ParameterName, float Value) {
}


