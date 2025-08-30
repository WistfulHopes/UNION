#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UserNoticeData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FUserNoticeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime ReadTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> watchedUnlockedList;
    
    FUserNoticeData();
};

