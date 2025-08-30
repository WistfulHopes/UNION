#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EMachineAnimState.h"
#include "EMachineAnimationMontageAssetId.h"
#include "RacerAnimInstance.h"
#include "UnionRacerAnimSync.h"
#include "SimpleMachineAnimInstance.generated.h"

class ASimpleNPCSkeletalActor;
class IUnionRacerAnimSyncChild;
class UUnionRacerAnimSyncChild;
class UMachineAnimDataAsset;
class UMachineAnimParameterDataAsset;
class UUnionRacerStatusObject;

UCLASS(Blueprintable, NonTransient)
class UNION_API USimpleMachineAnimInstance : public URacerAnimInstance, public IUnionRacerAnimSync {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SteeringLR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyGd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyGr;
    
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
    bool IsEnableWheelPosUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableWheelRotUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> HitMonsterTruckTire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> WheelPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRotator> WheelRot;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASimpleNPCSkeletalActor* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionRacerStatusObject* UnionRacerStatusObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMachineAnimDataAsset* MachineAnimDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMachineAnimParameterDataAsset* MachineAnimParameterDataAsset;
    
public:
    USimpleMachineAnimInstance();

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
    float GetBoatSyncAnimTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMachineAnimState GetAnimState() const;
    

    // Fix for true pure virtual functions not being implemented
};

