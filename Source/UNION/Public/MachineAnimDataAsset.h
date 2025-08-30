#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EMachineAnimationMontageAssetId.h"
#include "MachineAnimDataAsset.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class UNION_API UMachineAnimDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMachineAnimationMontageAssetId, UAnimMontage*> AnimMontageAssets;
    
    UMachineAnimDataAsset();

};

