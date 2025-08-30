#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RacerReactionTypeParam.h"
#include "RacerReactionData.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FRacerReactionData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRacerReactionTypeParam> TypeParam;
    
    FRacerReactionData();
};

