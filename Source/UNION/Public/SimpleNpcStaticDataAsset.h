#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SimpleNpcStaticDataAsset.generated.h"

class USoundAtomCue;
class UStaticMesh;

UCLASS(Blueprintable)
class UNION_API USimpleNpcStaticDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> VehicleMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> MonsterTruckMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCue> FrontRivalEngineSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCue> RearRivalEngineSound;
    
    USimpleNpcStaticDataAsset();

};

