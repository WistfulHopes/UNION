#include "MaterialPlayerComponent.h"

UMaterialPlayerComponent::UMaterialPlayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bManualUpdate = true;
}

void UMaterialPlayerComponent::StopAndReset(int32 Index) {
}

void UMaterialPlayerComponent::StopAll(bool bReset) {
}

void UMaterialPlayerComponent::Stop(int32 Index) {
}

void UMaterialPlayerComponent::SetCurrentTime(int32 Index, float CurrentTime) {
}

void UMaterialPlayerComponent::PlayWithStartTime(int32 Index, float StartTime) {
}

void UMaterialPlayerComponent::Play(int32 Index) {
}

void UMaterialPlayerComponent::OverrideMaterialVectorParameter(int32 Index, FName ParameterName, FVector Value) {
}

void UMaterialPlayerComponent::OverrideMaterialParameter(int32 Index, FName ParameterName, float Value) {
}

void UMaterialPlayerComponent::OverrideMaterialColorParameter(int32 Index, FName ParameterName, FLinearColor Color) {
}

bool UMaterialPlayerComponent::IsValidPlayIndex(int32 Index) const {
    return false;
}

bool UMaterialPlayerComponent::IsPlaying(int32 Index) const {
    return false;
}

float UMaterialPlayerComponent::GetCurrentTimeRatio(int32 Index) {
    return 0.0f;
}

float UMaterialPlayerComponent::GetCurrentTime(int32 Index) {
    return 0.0f;
}

int32 UMaterialPlayerComponent::BindCurvesByInfo(FMatereialPlayerBindInfo& BindInfo) {
    return 0;
}

int32 UMaterialPlayerComponent::BindCurves(UCurveTable* CurveTable, FName TargetTag) {
    return 0;
}


