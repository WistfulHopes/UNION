#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EContentId.h"
#include "ContentData_Sticker.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FContentData_Sticker : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 P_Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EContentId contentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 stickerId;
    
    FContentData_Sticker();
};

