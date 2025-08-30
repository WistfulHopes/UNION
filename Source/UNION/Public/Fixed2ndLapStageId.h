#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EStageId.h"
#include "Fixed2ndLapStageId.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FFixed2ndLapStageId : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageId> FirstRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageId> SecondRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageId> ThirdRound;
    
    FFixed2ndLapStageId();
};

