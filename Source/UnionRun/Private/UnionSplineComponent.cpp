#include "UnionSplineComponent.h"

UUnionSplineComponent::UUnionSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_SplineLength = 0.00f;
    this->_SplineType = EUnionSplineType::Center;
    this->_RouteIndex = 0;
    this->_bEnableBranch = true;
    this->_bOverrideBranchStartPath = false;
    this->_BranchStartPath = NULL;
    this->_bOverrideConnectStartPointIndex = false;
    this->_ConnectStartPointIndex = -1;
    this->_bOverrideBranchEndPath = false;
    this->_BranchEndPath = NULL;
    this->_bOverrideConnectEndPointIndex = false;
    this->_ConnectEndPointIndex = -1;
    this->_RemoveBeforeIndex = -1;
    this->_RemoveAfterIndex = -1;
}

void UUnionSplineComponent::UpdateBranchLocation() {
}

void UUnionSplineComponent::RemovePointByPointIndex(int32 RemovePointIndex) {
}

void UUnionSplineComponent::RemovePointByIndex(TArray<int32> RemoveIndex) {
}

void UUnionSplineComponent::RemovePointBeforeIndex() {
}

void UUnionSplineComponent::RemovePointAfterIndex() {
}

void UUnionSplineComponent::PrePointParamUpdate(int32 RouteIndex, int32 StartPointIndex) {
}

void UUnionSplineComponent::PointParamUpdate() {
}

bool UUnionSplineComponent::IsArrived(float Length) const {
    return false;
}

void UUnionSplineComponent::InitSplinePointParam(TArray<FSplinePointParam> SplineParamArray) {
}

EUnionSplineType UUnionSplineComponent::GetSplineType() const {
    return EUnionSplineType::None;
}

bool UUnionSplineComponent::GetSplineParamByIndex(int32 PointIndex, FSplinePointParam& returnParam) {
    return false;
}

bool UUnionSplineComponent::GetSplineParamByArrayIndex(int32 ArrayIndex, FSplinePointParam& returnParam) {
    return false;
}

void UUnionSplineComponent::GetCurrentLocationAndRotation(float Length, bool bLoop, FVector& OutLocation, FVector& OutDirection, FRotator& OutRotation) {
}


