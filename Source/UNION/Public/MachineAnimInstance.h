#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ERaceInfoStateType.h"
#include "EVehicleSpecialStatusType.h"
#include "EMachineAnimState.h"
#include "EMachineAnimationMontageAssetId.h"
#include "RacerAnimInstance.h"
#include "UnionRacerAnimSync.h"
#include "MachineAnimInstance.generated.h"

class AMachineInRaceActor;
class AVehicleInRacePawn;
class IUnionRacerAnimSyncChild;
class UUnionRacerAnimSyncChild;
class UMachineAnimDataAsset;
class UMachineAnimParameterDataAsset;
class UUnionRacerStatusObject;

UCLASS(Blueprintable, NonTransient)
class UNION_API UMachineAnimInstance : public URacerAnimInstance, public IUnionRacerAnimSync {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UUnionRacerStatusObject> UnionRacerStatusObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SteeringLR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HitFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HitRear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HitLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HitRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInDrift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFloating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrewRotationValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrewRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Brake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableWheelPosUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableWheelRotUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> WheelPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRotator> WheelRot;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVehicleInRacePawn* VehicleInRacePawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMachineInRaceActor* MachineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMachineAnimDataAsset* MachineAnimDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMachineAnimParameterDataAsset* MachineAnimParameterDataAsset;
    
public:
    UMachineAnimInstance();

    UFUNCTION(BlueprintCallable)
    void VehicleModelEventSpecialStatus(const int32& EventId, const EVehicleSpecialStatusType& Value);
    
    UFUNCTION(BlueprintCallable)
    void VehicleModelEventInt(const int32& EventId, const int32& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimSyncChild(TScriptInterface<IUnionRacerAnimSyncChild> Child);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimState(EMachineAnimState AnimState);
    
    UFUNCTION(BlueprintCallable)
    void MontageStop(EMachineAnimationMontageAssetId AssetId, float InBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void MontagePlay(EMachineAnimationMontageAssetId AssetId, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void MontageJumpToSection(EMachineAnimationMontageAssetId AssetId, FName SectionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUpdateState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBoatSyncAnimTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMachineAnimState GetAnimState() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeRaceState(ERaceInfoStateType InNewState);
    

    // Fix for true pure virtual functions not being implemented
};

