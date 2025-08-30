#pragma once
#include "CoreMinimal.h"
#include "EUnionSurfaceType.h"
#include "MachineBaseComponent.h"
#include "MachineSurfaceData.h"
#include "MachineSurfaceEffectComponent.generated.h"

class UMachineSurfaceEffectDataAsset;
class UNiagaraComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UMachineSurfaceEffectComponent : public UMachineBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMachineSurfaceEffectDataAsset* SurfaceEffectDataAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUnionSurfaceType, FMachineSurfaceData> CarAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUnionSurfaceType, FMachineSurfaceData> BoatAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineSurfaceData FlightAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUnionSurfaceType, FMachineSurfaceData> BodycutAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineSurfaceData TravelRingBoostAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NiagaraComponent;
    
public:
    UMachineSurfaceEffectComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void VehicleModelEventInt(const int32& EventId, const int32& Value);
    
};

