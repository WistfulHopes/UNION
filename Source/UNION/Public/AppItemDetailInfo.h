#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AppItemDetailInfo.generated.h"

USTRUCT(BlueprintType)
struct FAppItemDetailInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemDescription;
    
    UNION_API FAppItemDetailInfo();
};

