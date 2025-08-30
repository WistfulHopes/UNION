#pragma once
#include "CoreMinimal.h"
#include "EStageId.h"
#include "ContentStageData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FContentStageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageId> StageIds;
    
    FContentStageData();
};

