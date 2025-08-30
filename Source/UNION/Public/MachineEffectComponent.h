#pragma once
#include "CoreMinimal.h"
#include "AttackedInfo.h"
#include "EVehicleSpecialStatusType.h"
#include "EMachineEffectType.h"
#include "EMachineMeshEffectType.h"
#include "MachineBaseComponent.h"
#include "MachineEffectData.h"
#include "NiagaraCachedInfo.h"
#include "NiagaraComponentArray.h"
#include "OptimizedMeshEffectArray.h"
#include "MachineEffectComponent.generated.h"

class UDataTable;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UMachineEffectComponent : public UMachineBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EffectDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MeshEffectDataTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CockpitComponentRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FrontComponentRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RearComponentRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TPCameraComponentRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> BoatUnitComponentRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> PlaneUnitComponentRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraCachedInfo> NiagaraCachedArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UNiagaraComponent*, EMachineEffectType> UpdateEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMachineEffectType, FMachineEffectData> MachineEffectDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMachineEffectType, FNiagaraComponentArray> EffectHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMachineMeshEffectType, FOptimizedMeshEffectArray> MeshEffects;
    
public:
    UMachineEffectComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void VehicleModelEventSpecialStatus(const int32& EventId, const EVehicleSpecialStatusType& Value);
    
    UFUNCTION(BlueprintCallable)
    void VehicleModelEventInt(const int32& EventId, const int32& Value);
    
    UFUNCTION(BlueprintCallable)
    void VehicleModelEventAttackedInfo(const int32& EventId, const FAttackedInfo& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableTransformEffect(bool NewEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableTransformEffect() const;
    
};

