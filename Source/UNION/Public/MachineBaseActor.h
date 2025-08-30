#pragma once
#include "CoreMinimal.h"
#include "ECarStatusType.h"
#include "EDriverSize.h"
#include "EMachineColorPresetId.h"
#include "EMachineId.h"
#include "UserMachineCustomizeData.h"
#include "DriverAnimator.h"
#include "ECockpitMode.h"
#include "EMachineBodyMaterialArea.h"
#include "EMachineCockpitMaterialArea.h"
#include "EMachineColorArea.h"
#include "MachineMaterialData.h"
#include "VehicleBaseActor.h"
#include "MachineBaseActor.generated.h"

class UDataTable;
class UMaterialInterface;
class UTexture;
class UUnionAOStaticMeshComponent;
class UUnionSkeletalMeshComponent;
class UUnionStaticMeshComponent;

UCLASS(Blueprintable)
class UNION_API AMachineBaseActor : public AVehicleBaseActor, public IDriverAnimator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionSkeletalMeshComponent* CockpitMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAOStaticMeshComponent* FrontMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAOStaticMeshComponent* RearMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionStaticMeshComponent* SideMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUnionStaticMeshComponent*> TireMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TireDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CarShadowDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DummyMaterialInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMachineCockpitMaterialArea, FMachineMaterialData> CockpitMeshMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMachineBodyMaterialArea, FMachineMaterialData> BodyMeshMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMachineMaterialData> TireMeshMaterials;
    
    AMachineBaseActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTireSurface(EMachineColorArea ColorArea, int32 SurfaceNo);
    
    UFUNCTION(BlueprintCallable)
    void SetTireMesh(EMachineId MachineId);
    
    UFUNCTION(BlueprintCallable)
    void SetTireGlowColor(int32 GlowNo);
    
    UFUNCTION(BlueprintCallable)
    void SetTireColor(EMachineColorArea ColorArea, int32 ColorNo);
    
    UFUNCTION(BlueprintCallable)
    void SetSideMesh();
    
    UFUNCTION(BlueprintCallable)
    void SetRearSticker(UTexture* StickerTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetRearMesh(EMachineId MachineId);
    
    UFUNCTION(BlueprintCallable)
    void SetPresetColor(EMachineColorPresetId ColorPresetId);
    
    UFUNCTION(BlueprintCallable)
    void SetFrontSticker(UTexture* StickerTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetFrontMesh(EMachineId MachineId);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomColor(const FUserMachineCustomizeData& MachineCustomizeData);
    
    UFUNCTION(BlueprintCallable)
    void SetCockpitSurface(EMachineColorArea ColorArea, int32 SurfaceNo);
    
    UFUNCTION(BlueprintCallable)
    void SetCockpitMesh(ECarStatusType InCarStatusType, EDriverSize DriverSize, ECockpitMode CockpitMode, bool bIsEnabledAnimation);
    
    UFUNCTION(BlueprintCallable)
    void SetCockpitColor(EMachineColorArea ColorArea, int32 ColorNo);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckContentReleased(bool Check);
    
    UFUNCTION(BlueprintCallable)
    void SetBodySurface(EMachineColorArea ColorArea, int32 SurfaceNo);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyGlowColor(int32 GlowNo);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyColor(EMachineColorArea ColorArea, int32 ColorNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture* GetRearSticker() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture* GetFrontSticker() const;
    

    // Fix for true pure virtual functions not being implemented
};

