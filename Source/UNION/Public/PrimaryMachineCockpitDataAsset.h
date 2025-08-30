#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PrimaryMachineCockpitDataAsset.generated.h"

class UAnimInstance;
class USkeletalMesh;

UCLASS(Blueprintable)
class UNION_API UPrimaryMachineCockpitDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAnimInstance> RaceAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAnimInstance> MenuAnimInstance;
    
    UPrimaryMachineCockpitDataAsset();

};

