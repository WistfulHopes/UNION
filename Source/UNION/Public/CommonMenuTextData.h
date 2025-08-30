#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CommonMenuTextData.generated.h"

USTRUCT(BlueprintType)
struct FCommonMenuTextData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InfoText;
    
    UNION_API FCommonMenuTextData();
};

