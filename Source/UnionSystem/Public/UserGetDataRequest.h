#pragma once
#include "CoreMinimal.h"
#include "Common_DegreeData.h"
#include "Common_HistoryData.h"
#include "UserGetDataRequest.generated.h"

USTRUCT(BlueprintType)
struct FUserGetDataRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_DegreeData degreeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_HistoryData historyData;
    
    UNIONSYSTEM_API FUserGetDataRequest();
};

