#pragma once
#include "CoreMinimal.h"
#include "ECockpitMode.h"
#include "MachineCockpitData.generated.h"

class UAnimInstance;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct UNION_API FMachineCockpitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECockpitMode, TSoftClassPtr<UAnimInstance>> AnimInstance;
    
    FMachineCockpitData();
};

