#pragma once
#include "CoreMinimal.h"
#include "MachinePartsResource.generated.h"

class UMachinePartsDataAsset;
class UMachineTirePartsDataAsset;

USTRUCT(BlueprintType)
struct UNION_API FMachinePartsResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMachinePartsDataAsset* Parts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMachineTirePartsDataAsset* TireParts;
    
    FMachinePartsResource();
};

