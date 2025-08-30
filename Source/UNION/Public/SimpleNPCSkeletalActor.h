#pragma once
#include "CoreMinimal.h"
#include "ECarStatusType.h"
#include "EDriverSize.h"
#include "EMachineId.h"
#include "DriverAnimator.h"
#include "EMachineAnimationMontageAssetId.h"
#include "VehicleBaseActor.h"
#include "SimpleNPCSkeletalActor.generated.h"

class UDataTable;
class UMachineSurfaceEffectComponent;
class UMaterialInterface;
class USkeletalMesh;
class UTireMark;
class UUnionSkeletalMeshComponent;

UCLASS(Blueprintable)
class UNION_API ASimpleNPCSkeletalActor : public AVehicleBaseActor, public IDriverAnimator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionSkeletalMeshComponent* MachineMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> MachineSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* TireMarkMaterialInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMachineSurfaceEffectComponent*> MachineSurfaceEffectComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachineSurfaceEffectComponent* BodyCutSurfaceEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTireMark*> TireMarkComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SimpleNpcDataTable;
    
    ASimpleNPCSkeletalActor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SetupTireMarkEffect();
    
    UFUNCTION(BlueprintCallable)
    void SetupSurfaceEffect();
    
    UFUNCTION(BlueprintCallable)
    void SetupPresetColor(const EMachineId MachineId);
    
    UFUNCTION(BlueprintCallable)
    void SetupEngineSound(const EMachineId MachineId);
    
    UFUNCTION(BlueprintCallable)
    void SetupEffectData(const EMachineId MachineId);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMachineMesh(ECarStatusType InCarStatusType, EDriverSize InDriverSize, bool bIsEnabledAnimation);
    
    UFUNCTION(BlueprintCallable)
    void MontageStop(EMachineAnimationMontageAssetId AssetId, float InBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void MontagePlay(EMachineAnimationMontageAssetId AssetId, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void MontageJumpToSection(FName SectionName);
    

    // Fix for true pure virtual functions not being implemented
};

