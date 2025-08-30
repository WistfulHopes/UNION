#pragma once
#include "CoreMinimal.h"
#include "EMachineId.h"
#include "ContentMachineData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FContentMachineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMachineId> MachineIds;
    
    FContentMachineData();
};

