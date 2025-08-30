#include "UnionUISceneCaptureManager.h"

UUnionUISceneCaptureManager::UUnionUISceneCaptureManager() {
}

void UUnionUISceneCaptureManager::UnRegisterCaptureCameraActor(const int32& PlayerControllerIndex) {
}

void UUnionUISceneCaptureManager::RegisterCaptureTargetActor(const int32& PlayerControllerIndex, AActor* CaptureActor) {
}

void UUnionUISceneCaptureManager::RegisterCaptureCameraActor(const int32& PlayerControllerIndex, AUnionUICapture2DActor* CaptureActor) {
}

TArray<AActor*> UUnionUISceneCaptureManager::GetCaptureTargetActor() {
    return TArray<AActor*>();
}

AUnionUICapture2DActor* UUnionUISceneCaptureManager::GetCaptureCameraActorByPlayerControllerIndex(const int32& PlayerControllerIndex) {
    return NULL;
}

TArray<AUnionUICapture2DActor*> UUnionUISceneCaptureManager::GetCaptureCameraActor() {
    return TArray<AUnionUICapture2DActor*>();
}


