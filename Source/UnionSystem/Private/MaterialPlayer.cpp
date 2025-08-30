#include "MaterialPlayer.h"

UMaterialPlayer::UMaterialPlayer() {
    this->Priority = 0;
    this->PlaySpeed = 1.00f;
    this->bResetMaterialWhenDestroyed = false;
}

void UMaterialPlayer::Update(float DeltaTime) {
}

void UMaterialPlayer::StopAndReset() {
}

void UMaterialPlayer::Stop() {
}

void UMaterialPlayer::SetPause(bool bPause) {
}

void UMaterialPlayer::SetCurrentTime(float CurrentTime) {
}

void UMaterialPlayer::PlayWithStartTime(float StartTime) {
}

void UMaterialPlayer::Play() {
}

void UMaterialPlayer::OverrideMaterialVectorParameter(FName ParameterName, FVector Value) {
}

void UMaterialPlayer::OverrideMaterialParameter(FName ParameterName, float Value) {
}

void UMaterialPlayer::OverrideMaterialColorParameter(FName ParameterName, FLinearColor Color) {
}

bool UMaterialPlayer::IsPlaying() const {
    return false;
}

bool UMaterialPlayer::IsActive() const {
    return false;
}

float UMaterialPlayer::GetCurrentTimeRatio() {
    return 0.0f;
}

float UMaterialPlayer::GetCurrentTime() {
    return 0.0f;
}


