#include "UnionSplineMoveComponent.h"

UUnionSplineMoveComponent::UUnionSplineMoveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MoveDistance = 0.00f;
    this->bReverse = false;
    this->bPause = false;
    this->Spline = NULL;
    this->bReverseRot = false;
    this->KeyMoveSpeed = 10.00f;
    this->bForceMove = false;
}

void UUnionSplineMoveComponent::SetSpline(UUnionSplineComponent* NewSpline) {
}

void UUnionSplineMoveComponent::SetMoveDistance(float NewDistance) {
}

void UUnionSplineMoveComponent::SetLoopType(ESplineMoveLoopType LoopType) {
}

void UUnionSplineMoveComponent::MoveUpdate(float DeltaTime, bool IsTransform) {
}

void UUnionSplineMoveComponent::MoveReset(bool NewForceMove) {
}

bool UUnionSplineMoveComponent::IsValidSpline() {
    return false;
}

bool UUnionSplineMoveComponent::IsStartWait(float DeltaTime) {
    return false;
}

bool UUnionSplineMoveComponent::IsOverSplineMoveRate(float checkRate) {
    return false;
}

bool UUnionSplineMoveComponent::IsArrived() {
    return false;
}

void UUnionSplineMoveComponent::ForceReverse(bool RotReverse) {
}

void UUnionSplineMoveComponent::ForceMove() {
}

void UUnionSplineMoveComponent::AddMoveDistance(float AddDistance) {
}


