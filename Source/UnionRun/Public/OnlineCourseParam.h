#pragma once
#include "CoreMinimal.h"
#include "OnlineCourseParam.generated.h"

USTRUCT(BlueprintType)
struct FOnlineCourseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> StageIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RandomSeeds;
    
    UNIONRUN_API FOnlineCourseParam();
};

