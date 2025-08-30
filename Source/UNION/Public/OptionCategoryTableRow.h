#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EOptionCategory.h"
#include "OptionCategoryTableRow.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FOptionCategoryTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptionCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    FOptionCategoryTableRow();
};

