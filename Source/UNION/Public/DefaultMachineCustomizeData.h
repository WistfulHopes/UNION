#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UserMachineCustomizeData.h"
#include "DefaultMachineCustomizeData.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FDefaultMachineCustomizeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserMachineCustomizeData Data;
    
    FDefaultMachineCustomizeData();
};

