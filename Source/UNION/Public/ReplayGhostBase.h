#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "AttackedInfo.h"
#include "EVehicleMaterialAnimationType.h"
#include "EVehicleSpecialStatusType.h"
#include "EVehicleType.h"
#include "EItemId.h"
#include "EItemThrowDirection.h"
#include "Templates/SubclassOf.h"
#include "ReplayGhostBase.generated.h"

class AVehicleRearPartsActor;
class UAnimSequence;
class UMachineEffectComponent;
class UMachineEngineSoundComponent;
class UMachineMaterialComponent;
class UMachineMaterialParameterDataAsset;
class UMachineSoundComponent;
class UMachineSurfaceEffectComponent;
class URacerMaterialParameterDataAsset;
class USceneComponent;
class USoundAtomCue;
class UStaticMeshComponent;
class UUnionSkeletalMeshComponent;

UCLASS(Blueprintable)
class UNION_API AReplayGhostBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachineSoundComponent* MachineSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachineEngineSoundComponent* MachineEngineSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachineEffectComponent* MachineEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachineSurfaceEffectComponent* MachineSurfaceEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachineMaterialComponent* MachineMaterialComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVehicleRearPartsActor> VehicleRearPartsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URacerMaterialParameterDataAsset* RacerMaterialParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMachineMaterialParameterDataAsset* MachineMaterialParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInViewer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionSkeletalMeshComponent* DriverSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DriverStaticMeshComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* FrontEngineSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* RearEngineSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVehicleRearPartsActor* VehicleRearPartsActor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimSequenceAssets[4];
    
public:
    AReplayGhostBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void VehicleModelEventSpecialStatus(const int32& EventId, const EVehicleSpecialStatusType& Value);
    
    UFUNCTION(BlueprintCallable)
    void VehicleModelEventItemId(const int32& EventId, const EItemId& Value, const int32& IntValue, const EItemThrowDirection& ThrowType, const bool bGadgetLuckyItem);
    
    UFUNCTION(BlueprintCallable)
    void VehicleModelEventInt(const int32& EventId, const int32& Value);
    
    UFUNCTION(BlueprintCallable)
    void VehicleModelEventAttackedInfo(const int32& EventId, const FAttackedInfo& Value);
    
    UFUNCTION(BlueprintCallable)
    void TurnOnEngine();
    
    UFUNCTION(BlueprintCallable)
    void TurnOffEngine();
    
    UFUNCTION(BlueprintCallable)
    void StopMaterialAnimation(EVehicleMaterialAnimationType MaterialAnimationType, bool bReset);
    
    UFUNCTION(BlueprintCallable)
    void SetVectorParameterValue(FName ParameterName, FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetScalarParameterValue(FName ParameterName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetForceDisableWheelPosUpdate(const bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDriftIntensity(int32 ChargeLevel, float Intensity);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageIntensity(float Intensity);
    
    UFUNCTION(BlueprintCallable)
    void ResetSpecialStatus();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseAllEffect();
    
    UFUNCTION(BlueprintCallable)
    void PlayMaterialAnimation(EVehicleMaterialAnimationType MaterialAnimationType, float StartTime, bool bAutoDeactive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInRace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInDriving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInBodyCut() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoverboard() const;
    
    UFUNCTION(BlueprintCallable)
    void EndAnimation();
    
    UFUNCTION(BlueprintCallable)
    void DamageOn();
    
    UFUNCTION(BlueprintCallable)
    void DamageOff();
    
    UFUNCTION(BlueprintCallable)
    void ChangeVehicleType(EVehicleType NewVehicleType);
    
    UFUNCTION(BlueprintCallable)
    void BeginAnimation();
    
};

