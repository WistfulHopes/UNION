#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDriverSize.h"
#include "EMachineColorPresetId.h"
#include "EVehicleMeshType.h"
#include "UserMachineCustomizeData.h"
#include "DriverAnimator.h"
#include "EMachineAnimationMontageAssetId.h"
#include "EMachineColorArea.h"
#include "EMonsterTruckMaterialType.h"
#include "MachineMaterialData.h"
#include "MachineMaterialDataArray.h"
#include "VehicleBaseActor.h"
#include "MonsterTruckInRaceActor.generated.h"

class UDataTable;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class USoundAtomCue;
class UTireMark;
class UUnionSkeletalMeshComponent;
class UUnionStaticMeshComponent;

UCLASS(Blueprintable)
class UNION_API AMonsterTruckInRaceActor : public AVehicleBaseActor, public IDriverAnimator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCue> EngineSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCue> RivalEngineSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionSkeletalMeshComponent* CockpitMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUnionStaticMeshComponent*> UnitCarStaticMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUnionStaticMeshComponent*> UnitBoatStaticMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTireMark*> TireMarkComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* TireMarkMaterialInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TireDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CarShadowDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionStaticMeshComponent* DecalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DecalMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideVehicleMeshType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleMeshType VehicleMeshTypeOverride;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMonsterTruckMaterialType, FMachineMaterialData> CockpitMeshMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMonsterTruckMaterialType, FMachineMaterialData> CockpitSusMeshMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMonsterTruckMaterialType, FMachineMaterialData> BodyMeshMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMonsterTruckMaterialType, FMachineMaterialDataArray> UnitCarMeshMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMonsterTruckMaterialType, FMachineMaterialDataArray> UnitBoatMeshMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMonsterTruckMaterialType, FMachineMaterialDataArray> UnitPlaneMeshMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMonsterTruckMaterialType, FMachineMaterialData> UnitSimplePlaneMeshMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMonsterTruckMaterialType, FMachineMaterialData> UnitSimplePlaneJetMeshMaterials;
    
public:
    AMonsterTruckInRaceActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetVisibleFlightUnitMaterial(const bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetupMaterials();
    
    UFUNCTION(BlueprintCallable)
    void SetupCockpitMesh(const EDriverSize InDriverSize, const bool bEnabledAnimation);
    
    UFUNCTION(BlueprintCallable)
    void SetupAttachments();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTireSurface(EMachineColorArea ColorArea, int32 SurfaceNo);
    
    UFUNCTION(BlueprintCallable)
    void SetTireMarkScale();
    
    UFUNCTION(BlueprintCallable)
    void SetTireGlowColor(int32 GlowNo);
    
    UFUNCTION(BlueprintCallable)
    void SetTireColor(EMachineColorArea ColorArea, int32 ColorNo);
    
    UFUNCTION(BlueprintCallable)
    void SetPresetColor(EMachineColorPresetId ColorPresetId);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomColor(const FUserMachineCustomizeData& MachineCustomizeData);
    
    UFUNCTION(BlueprintCallable)
    void SetCockpitSurface(EMachineColorArea ColorArea, int32 SurfaceNo);
    
    UFUNCTION(BlueprintCallable)
    void SetCockpitColor(EMachineColorArea ColorArea, int32 ColorNo);
    
    UFUNCTION(BlueprintCallable)
    void SetCarShadow();
    
    UFUNCTION(BlueprintCallable)
    void SetBodySurface(EMachineColorArea ColorArea, int32 SurfaceNo);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyGlowColor(int32 GlowNo);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyColor(EMachineColorArea ColorArea, int32 ColorNo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCountDown(bool bIsPlay, const FLinearColor& Color, bool bWithDriver);
    
    UFUNCTION(BlueprintCallable)
    void MontageStop(EMachineAnimationMontageAssetId AssetId, float InBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void MontagePlay(EMachineAnimationMontageAssetId AssetId, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void MontageJumpToSection(EMachineAnimationMontageAssetId AssetId, FName SectionName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LoadingCockpitMesh(const EDriverSize InDriverSize);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LoadingCockpitAnimation(const EDriverSize InDriverSize);
    

    // Fix for true pure virtual functions not being implemented
};

