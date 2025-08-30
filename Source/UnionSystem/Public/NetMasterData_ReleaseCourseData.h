#pragma once
#include "CoreMinimal.h"
#include "NetMasterData_ReleaseCourseData.generated.h"

USTRUCT(BlueprintType)
struct FNetMasterData_ReleaseCourseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 courseId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString releaseTime;
    
    UNIONSYSTEM_API FNetMasterData_ReleaseCourseData();
};

