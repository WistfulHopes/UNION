#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EContentId.h"
#include "EMachineId.h"
#include "ContentData_Machine.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FContentData_Machine : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 P_Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EContentId contentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMachineId MachineId;
    
    FContentData_Machine();
};

