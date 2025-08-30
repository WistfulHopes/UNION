#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EItemId.h"
#include "ItemIrregularInfiniteData.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FItemIrregularInfiniteData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemId ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ItemGetIntervalByRank;
    
    FItemIrregularInfiniteData();
};

