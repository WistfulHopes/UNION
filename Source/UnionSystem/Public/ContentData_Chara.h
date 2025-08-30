#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EContentId.h"
#include "EDriverId.h"
#include "ContentData_Chara.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FContentData_Chara : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 P_Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EContentId contentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverId DriverId;
    
    FContentData_Chara();
};

