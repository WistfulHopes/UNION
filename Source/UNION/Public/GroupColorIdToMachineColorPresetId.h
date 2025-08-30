#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EGroupColorId.h"
#include "EMachineColorPresetId.h"
#include "GroupColorIdToMachineColorPresetId.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FGroupColorIdToMachineColorPresetId : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGroupColorId GroupColorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMachineColorPresetId MachineColorPresetId;
    
    FGroupColorIdToMachineColorPresetId();
};

