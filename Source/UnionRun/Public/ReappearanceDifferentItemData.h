#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EItemId.h"
#include "ReappearanceDifferentItemData.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FReappearanceDifferentItemData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemId ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReappearanceTime;
    
    FReappearanceDifferentItemData();
};

