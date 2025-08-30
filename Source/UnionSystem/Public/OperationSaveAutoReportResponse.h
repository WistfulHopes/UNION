#pragma once
#include "CoreMinimal.h"
#include "OperationSaveAutoReportResponse.generated.h"

USTRUCT(BlueprintType)
struct FOperationSaveAutoReportResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString reportId;
    
    UNIONSYSTEM_API FOperationSaveAutoReportResponse();
};

