#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMachineColorPresetId.h"
#include "EMachineId.h"
#include "UserMachineCustomizeData.h"
#include "EMachineColorArea.h"
#include "ESimpleNpcMonsterTruckMaterialType.h"
#include "MachineMaterialData.h"
#include "MachineMaterialDataArray.h"
#include "VehicleBaseActor.h"
#include "SimpleNpcMonsterTruckActor.generated.h"

class UDataTable;
class UMaterialInterface;
class USoundAtomCue;
class UUnionStaticMeshComponent;

UCLASS(Blueprintable)
class UNION_API ASimpleNpcMonsterTruckActor : public AVehicleBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SimpleNpcDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCue> EngineSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCue> RivalEngineSound;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESimpleNpcMonsterTruckMaterialType, FMachineMaterialData> CockpitMeshMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESimpleNpcMonsterTruckMaterialType, FMachineMaterialData> CockpitSusMeshMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESimpleNpcMonsterTruckMaterialType, FMachineMaterialData> BodyMeshMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESimpleNpcMonsterTruckMaterialType, FMachineMaterialData> UnitBoatMeshMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESimpleNpcMonsterTruckMaterialType, FMachineMaterialDataArray> UnitCarMeshMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESimpleNpcMonsterTruckMaterialType, FMachineMaterialDataArray> UnitPlaneMeshMaterials;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DummyMaterialInterface;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData FrontMachineMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData FrontTireMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData RearTireMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData AquaTireMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData RearFlightUnitJetMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData RearFlightUnitMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData FrontMachineUnlitMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData FrontTireUnlitMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData RearTireUnlitMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData AquaTireUnlitMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData RearFlightUnitJetUnlitMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData RearFlightUnitUnlitMaterial;
    
public:
    ASimpleNpcMonsterTruckActor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SetupEngineSound(const EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable)
    void SetupEffectData(const EMachineId InMachineID);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTireSurface(EMachineColorArea ColorArea, int32 SurfaceNo);
    
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
    void SetBodySurface(EMachineColorArea ColorArea, int32 SurfaceNo);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyGlowColor(int32 GlowNo);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyColor(EMachineColorArea ColorArea, int32 ColorNo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCountDown(bool bIsPlay, const FLinearColor& Color, bool bWithDriver);
    
};

