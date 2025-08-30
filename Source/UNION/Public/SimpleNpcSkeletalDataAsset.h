#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SimpleNpcSkeletalDataAsset.generated.h"

class UAnimInstance;
class USkeletalMesh;
class USoundAtomCue;

UCLASS(Blueprintable)
class UNION_API USimpleNpcSkeletalDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> VehicleSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAnimInstance> VehicleAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCue> FrontRivalEngineSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCue> RearRivalEngineSound;
    
    USimpleNpcSkeletalDataAsset();

};

