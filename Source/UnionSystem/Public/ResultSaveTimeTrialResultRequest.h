#pragma once
#include "CoreMinimal.h"
#include "ResultSaveTimeTrialResultRequest_TimeTrialData.h"
#include "ResultSaveTimeTrialResultRequest.generated.h"

USTRUCT(BlueprintType)
struct FResultSaveTimeTrialResultRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResultSaveTimeTrialResultRequest_TimeTrialData> bestRecord;
    
    UNIONSYSTEM_API FResultSaveTimeTrialResultRequest();
};

