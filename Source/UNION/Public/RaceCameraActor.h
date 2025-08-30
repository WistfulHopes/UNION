#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ECarStatusType.h"
#include "EDriverId.h"
#include "EResultCameraProductionType.h"
#include "EViewSplitId.h"
#include "ERaceCameraMode.h"
#include "EReplayCameraState.h"
#include "EResultCameraState.h"
#include "ERivalCameraState.h"
#include "ResultCameraParam.h"
#include "RaceCameraActor.generated.h"

class APlayerController;
class AVehicleInRacePawn;
class UCameraComponent;
class UResultCameraDataAsset;
class URivalCameraDataAsset;
class USceneComponent;
class USpringArmComponent;

UCLASS(Blueprintable)
class UNION_API ARaceCameraActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* RaceCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* RaceSpringArmComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerControllerRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EViewSplitId ViewSplitId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LookActorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* CameraComponentRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVehicleInRacePawn* VehicleInRacePawnRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledRaceCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceCameraMode RaceCameraMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarStatusType CurrentCarStatusType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverId CurrentDriverID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PauseViewTargetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PauseCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResultCameraDataAsset* DataAssetResultCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EResultCameraState ResultCameraState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResultCurrentPlayIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EResultCameraProductionType CurrentProductionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResultNextPlayIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EResultCameraProductionType ResultNextPlayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EResultCameraProductionType ResultFixedPlayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResultCameraParam ResultCameraParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalCameraDataAsset* DataAssetRivalCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalCameraState RivalCameraState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResultCameraParam RivalCameraParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReplayCameraState ReplayCameraState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastUpdateProdCameraOffset;
    
    ARaceCameraActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SwitchViewSplitID(const EViewSplitId SetViewSplitId);
    
    UFUNCTION(BlueprintCallable)
    void SwitchDriverID(const EDriverId SetDriverId);
    
    UFUNCTION(BlueprintCallable)
    void SwitchCarStatusType(const ECarStatusType SetType);
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void StartRivalViewCamera(APlayerController* SetPlayerController, const EViewSplitId SetViewSplitId, AActor* SetLookActor, UCameraComponent* SetCameraComponent);
    
    UFUNCTION(BlueprintCallable)
    void StartResultCamera(APlayerController* SetPlayerController, const EViewSplitId SetViewSplitId, AActor* SetLookActor, UCameraComponent* SetCameraComponent);
    
    UFUNCTION(BlueprintCallable)
    void StartReplayCamera(APlayerController* SetPlayerController, const EViewSplitId SetViewSplitId, AActor* SetLookActor, UCameraComponent* SetCameraComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetResultFixedCameraMode(const EResultCameraProductionType SetProdType);
    
    UFUNCTION(BlueprintCallable)
    void SetPauseEnabled(const bool SetEnabled);
    
    UFUNCTION(BlueprintCallable)
    void ReStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPause() const;
    
    UFUNCTION(BlueprintCallable)
    void Finished();
    
    UFUNCTION(BlueprintCallable)
    void EnabledRaceCamera(const bool SetEnabled);
    
};

