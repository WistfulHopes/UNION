#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Camera/PlayerCameraManager.h"
#include "CameraMessageInterface.h"
#include "EDomainNumber.h"
#include "EUnionCameraPriority.h"
#include "UnionCameraBase.generated.h"

class UCameraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AUnionCameraBase : public AActor, public ICameraMessageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRacerCameraDomainNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRacerCameraFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnionCameraPriority Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewTargetTransitionParams StartBlendSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewTargetTransitionParams EndBlendSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RacerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EDomainNumber DomainNumber;
    
    AUnionCameraBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool RequestStartCamera();
    
    UFUNCTION(BlueprintCallable)
    bool RequestEndCamera();
    
    UFUNCTION(BlueprintCallable)
    bool IsInBlending();
    
    UFUNCTION(BlueprintCallable)
    bool IsCurrentViewTarget();
    

    // Fix for true pure virtual functions not being implemented
};

