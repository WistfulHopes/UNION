#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HintTabTextTableRow.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FHintTabTextTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TabTitleText;
    
    FHintTabTextTableRow();
};

