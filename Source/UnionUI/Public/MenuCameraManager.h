#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"
#include "OnCameraMoveEndDelegateDelegate.h"
#include "MenuCameraManager.generated.h"

UCLASS(Blueprintable)
class UNIONUI_API AMenuCameraManager : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMenuCameraManagerDelegate);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraManualFocusDistance;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCameraMoveEndDelegate OnCameraMoveEndEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMenuCameraManagerDelegate OnPlayLevelSequence;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMenuCameraManagerDelegate OnPlayReverseLevelSequence;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMenuCameraManagerDelegate OnFinishedLevelSequence;
    
    AMenuCameraManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUpCameraFOV(float InFOV);
    
    UFUNCTION(BlueprintCallable)
    void SetManualFocusDistance(float InManualDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetLookAtRacerCameraPos(FVector OffsetPos, FVector OffsetLookAtPos);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraParam(AActor* Camera, TEnumAsByte<EEasingFunc::Type> InEasingFunc);
    
    UFUNCTION(BlueprintCallable)
    void ForceResetCameraMove();
    
    UFUNCTION(BlueprintCallable)
    void CameraZoomOut(float Time);
    
    UFUNCTION(BlueprintCallable)
    void CameraZoomIn(AActor* Target, float Time);
    
    UFUNCTION(BlueprintCallable)
    void CameraMoveToTransform(FTransform TargetTransform, float Time);
    
    UFUNCTION(BlueprintCallable)
    void CameraCharaSlide(AActor* Target, float Time);
    
};

