#pragma once
#include "CoreMinimal.h"
#include "EUnionSurfaceType.h"
#include "UnionItemSkeletalMeshContainer.h"
#include "UnionYellowDrillMeshContainer.generated.h"

class AVehicleInRacePawn;
class UAtomComponent;
class UNiagaraComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UUnionYellowDrillMeshContainer : public UUnionItemSkeletalMeshContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* LoopEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NomalOnGroundEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* WaterOnGroundEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* TransEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* ReturnEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtomComponent* DrillLoopSound;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVehicleInRacePawn* MachineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnionSurfaceType CurrentBodySurfaceType;
    
public:
    UUnionYellowDrillMeshContainer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void VehicleModelEventInt(const int32& EventId, const int32& Value);
    
    UFUNCTION(BlueprintCallable)
    void VehicleModelEventFloat(const int32& EventId, const float& Value);
    
    UFUNCTION(BlueprintCallable)
    void OnEndNiagaraSystem(UNiagaraComponent* EndSystem);
    
};

