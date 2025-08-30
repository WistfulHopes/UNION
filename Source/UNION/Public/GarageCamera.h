#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GarageCamera.generated.h"

class UCameraComponent;
class UGarageCameraMovementComponent;

UCLASS(Blueprintable)
class UNION_API AGarageCamera : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* CameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGarageCameraMovementComponent* MovementComponent;
    
public:
    AGarageCamera(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGarageCameraMovementComponent* GetMovementComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCameraComponent* GetCameraComponent();
    
};

