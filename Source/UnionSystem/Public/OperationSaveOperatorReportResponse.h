#pragma once
#include "CoreMinimal.h"
#include "OperationSaveOperatorReportResponse.generated.h"

USTRUCT(BlueprintType)
struct FOperationSaveOperatorReportResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString reportId;
    
    UNIONSYSTEM_API FOperationSaveOperatorReportResponse();
};

