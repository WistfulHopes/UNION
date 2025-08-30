#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DriverAnimInstance.h"
#include "EMachineAnimationMontageAssetId.h"
#include "UnionRacerAnimSync.h"
#include "MonsterTruckAnimInstance.generated.h"

class AMonsterTruckInRaceActor;
class IUnionRacerAnimSyncChild;
class UUnionRacerAnimSyncChild;
class UMachineAnimDataAsset;
class UUnionRacerStatusObject;

UCLASS(Blueprintable, NonTransient)
class UNION_API UMonsterTruckAnimInstance : public UDriverAnimInstance, public IUnionRacerAnimSync {
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
    AMonsterTruckInRaceActor* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionRacerStatusObject* UnionRacerStatusObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMachineAnimDataAsset* MachineAnimDataAsset;
    
public:
    UMonsterTruckAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetAnimSyncChild(TScriptInterface<IUnionRacerAnimSyncChild> Child);
    
    UFUNCTION(BlueprintCallable)
    void MontageStop(EMachineAnimationMontageAssetId AssetId, float InBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void MontagePlay(EMachineAnimationMontageAssetId AssetId, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void MontageJumpToSection(EMachineAnimationMontageAssetId AssetId, FName SectionName);
    

    // Fix for true pure virtual functions not being implemented
};

