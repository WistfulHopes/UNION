#pragma once
#include "CoreMinimal.h"
#include "EContentId.h"
#include "EStageId.h"
#include "StageUnlockInfoStruct.generated.h"

USTRUCT(BlueprintType)
struct FStageUnlockInfoStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId StageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Unreleased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDLC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EContentId contentId;
    
    UNION_API FStageUnlockInfoStruct();
};

