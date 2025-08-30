#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EDriverPose.h"
#include "EMachineColorPresetId.h"
#include "UserMachineCustomizeData.h"
#include "DriverAnimator.h"
#include "DriverVoicePlayer.h"
#include "EDriverMaterialType.h"
#include "EMachineColorArea.h"
#include "EUnionRacerEvent.h"
#include "MachineMaterialData.h"
#include "Driver.generated.h"

class UCustomAttrAnimComponent;
class UFreshlyPaintData;
class UItemHolderComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialPlayerComponent;
class UMeshComponent;
class URacerMaterialParameterDataAsset;
class USkeletalMeshComponent;
class UStaticMeshComponent;
class UUnionAtomComponent;

UCLASS(Blueprintable)
class UNION_API ADriver : public AActor, public IDriverAnimator, public IDriverVoicePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CharacterMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCustomAttrAnimComponent* CustomAttrAnimComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMaterialPlayerComponent* MaterialPlayerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URacerMaterialParameterDataAsset* RacerMaterialParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFreshlyPaintData* FreshlyPaintColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UItemHolderComponent* ItemHolderComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SteeringWheelMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData DefaultSteeringWheelMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* FurComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAtomComponent* UnionAtomComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData AlphaDitheringSteeringWheelMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanMontageAnimOnDrifting;
    
public:
    ADriver(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SwapMaterials(const EDriverMaterialType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleSteeringWheel(const bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void SetVectorParameterValue(FName ParameterName, FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetUseInRace(const bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetupGFurComponent(UMeshComponent* NewFurComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetSteeringWheelSurface(EMachineColorArea ColorArea, int32 SurfaceNo);
    
    UFUNCTION(BlueprintCallable)
    void SetSteeringWheelPresetColor(EMachineColorPresetId ColorPresetId);
    
    UFUNCTION(BlueprintCallable)
    void SetSteeringWheelMaterials(const FUserMachineCustomizeData& MachineCustomizeData);
    
    UFUNCTION(BlueprintCallable)
    void SetSteeringWheelColor(EMachineColorArea ColorArea, int32 ColorNo);
    
    UFUNCTION(BlueprintCallable)
    void SetScalarParameterValue(FName ParameterName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRacerIndex(const int32 InRacerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetOverlayMaterial(UMaterialInterface* NewOverlayMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlyOwnerSee(bool bNewOnlyOwnerSee);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLightingChannels(bool Channel0, bool Channel1, bool Channel2);
    
    UFUNCTION(BlueprintCallable)
    void SetHandleMeshForcedLOD(int32 InNewForcedLOD);
    
    UFUNCTION(BlueprintCallable)
    void SetGhostMaterialDynamic(UMaterialInstanceDynamic* GhostMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetGhostMaterial(UMaterialInterface* GhostMaterial);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RegisterRacerEvent(const int32& InRacerIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsUseInRace();
    
    UFUNCTION(BlueprintCallable)
    void InvokeRacerEvent(const EUnionRacerEvent InEvent, const int32 InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRacerIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDriverPose GetDriverPose() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateSteeringWheelDynamicMaterialInstance();
    

    // Fix for true pure virtual functions not being implemented
};

