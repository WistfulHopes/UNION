#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EUnionSurfaceType.h"
#include "EMachineEffectVisibleType.h"
#include "MachineSurfaceEffectAssetData.h"
#include "MachineSurfaceEffectDataAsset.generated.h"

UCLASS(Blueprintable)
class UNION_API UMachineSurfaceEffectDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMachineEffectVisibleType CarVisibleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUnionSurfaceType, FMachineSurfaceEffectAssetData> CarAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMachineEffectVisibleType BoatVisibleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUnionSurfaceType, FMachineSurfaceEffectAssetData> BoatAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMachineEffectVisibleType FlightVisibleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineSurfaceEffectAssetData FlightAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMachineEffectVisibleType BodycutVisibleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUnionSurfaceType, FMachineSurfaceEffectAssetData> BodycutAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMachineEffectVisibleType TravelRingBoostVisibleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineSurfaceEffectAssetData TravelRingBoostAsset;
    
    UMachineSurfaceEffectDataAsset();

};

