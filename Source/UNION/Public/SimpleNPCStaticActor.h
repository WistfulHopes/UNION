#pragma once
#include "CoreMinimal.h"
#include "EMachineId.h"
#include "UserMachineCustomizeData.h"
#include "EMachineColorArea.h"
#include "MachineMaterialData.h"
#include "VehicleBaseActor.h"
#include "SimpleNPCStaticActor.generated.h"

class UDataTable;
class UMachineMaterialParameterDataAsset;
class UMaterialInterface;
class UUnionStaticMeshComponent;

UCLASS(Blueprintable)
class UNION_API ASimpleNPCStaticActor : public AVehicleBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SimpleNpcDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMachineMaterialParameterDataAsset* HoverboardMaterialParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSpinning;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DummyMaterialInterface;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData FrontMachineMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData FrontTireMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData FrontAquaUnitMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData FrontFlightUnitMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData CenterMachineMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData RearMachineMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData RearTireMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData RearAquaUnitMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData RearFlightUnitMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData HoverboardMaterial;
    
public:
    ASimpleNPCStaticActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateDamageSpinRotation(float SpinRate);
    
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
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DamageSpinStart(float Direction);
    
};

