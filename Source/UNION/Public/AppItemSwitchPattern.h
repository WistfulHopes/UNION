#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EItemId.h"
#include "AppItemSwitchPattern.generated.h"

USTRUCT(BlueprintType)
struct FAppItemSwitchPattern : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PatternName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemId> EnableItem;
    
    UNION_API FAppItemSwitchPattern();
};

