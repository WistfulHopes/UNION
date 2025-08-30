#pragma once
#include "CoreMinimal.h"
#include "MachinePartsUIData.h"
#include "MachinePartsScrollBoxItemData.generated.h"

USTRUCT(BlueprintType)
struct FMachinePartsScrollBoxItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachinePartsUIData PartsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSelected;
    
    UNION_API FMachinePartsScrollBoxItemData();
};

