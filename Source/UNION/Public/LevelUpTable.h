#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LevelUpTable.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FLevelUpTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelRangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RSR;
    
    FLevelUpTable();
};

