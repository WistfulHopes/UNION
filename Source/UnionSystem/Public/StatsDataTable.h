#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EStatsEventId.h"
#include "EStatsRules.h"
#include "StatsDataTable.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FStatsDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatsEventId StatsEventId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatsRules EStatsRules;
    
    FStatsDataTable();
};

