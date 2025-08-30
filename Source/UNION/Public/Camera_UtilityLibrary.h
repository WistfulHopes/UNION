#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Camera_UtilityLibrary.generated.h"

class UCameraComponent;

UCLASS(Blueprintable)
class UNION_API UCamera_UtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCamera_UtilityLibrary();

    UFUNCTION(BlueprintCallable)
    static bool WorldToProjectScreenWithCameraComponent(UCameraComponent* CameraComponent, FVector2D ViewRect, FVector WorldPos, FVector2D& OutScreenPos);
    
    UFUNCTION(BlueprintCallable)
    static bool DeProjectScreenToWorldWithCameraComponent(UCameraComponent* CameraComponent, FVector2D ViewRect, const FVector2D& ScreenPos, FVector& WorldPos, FVector& WorldDirection);
    
};

