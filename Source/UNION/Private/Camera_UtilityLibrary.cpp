#include "Camera_UtilityLibrary.h"

UCamera_UtilityLibrary::UCamera_UtilityLibrary() {
}

bool UCamera_UtilityLibrary::WorldToProjectScreenWithCameraComponent(UCameraComponent* CameraComponent, FVector2D ViewRect, FVector WorldPos, FVector2D& OutScreenPos) {
    return false;
}

bool UCamera_UtilityLibrary::DeProjectScreenToWorldWithCameraComponent(UCameraComponent* CameraComponent, FVector2D ViewRect, const FVector2D& ScreenPos, FVector& WorldPos, FVector& WorldDirection) {
    return false;
}


