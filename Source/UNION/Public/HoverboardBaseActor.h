#pragma once
#include "CoreMinimal.h"
#include "EMachineColorPresetId.h"
#include "EMachineId.h"
#include "UserMachineCustomizeData.h"
#include "EMachineColorArea.h"
#include "MachineMaterialData.h"
#include "VehicleBaseActor.h"
#include "HoverboardBaseActor.generated.h"

class UTexture;
class UUnionStaticMeshComponent;

UCLASS(Blueprintable)
class UNION_API AHoverboardBaseActor : public AVehicleBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionStaticMeshComponent* FrontMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionStaticMeshComponent* RearMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionStaticMeshComponent* CenterMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUnionStaticMeshComponent*> UnitBoatStaticMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUnionStaticMeshComponent*> UnitPlaneStaticMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData FrontMeshMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData RearMeshMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData CenterMeshMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData FrontMeshSubMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData RearMeshSubMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData CenterMeshSubMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMachineMaterialData> UnitBoatMeshMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMachineMaterialData> UnitPlaneMeshMaterial;
    
    AHoverboardBaseActor(const FObjectInitializer& ObjectInitializer);

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
    void SetCheckContentReleased(bool Check);
    
    UFUNCTION(BlueprintCallable)
    void SetCenterMesh();
    
    UFUNCTION(BlueprintCallable)
    void SetBodySurface(EMachineColorArea ColorArea, int32 SurfaceNo);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyGlowColor(int32 GlowNo);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyColor(EMachineColorArea ColorArea, int32 ColorNo);
    
};

