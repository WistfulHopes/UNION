#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventInfoScheduleData.generated.h"

USTRUCT(BlueprintType)
struct FEventInfoScheduleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime NoticeStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime endTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OpenScheduleString;
    
    UNION_API FEventInfoScheduleData();
};

