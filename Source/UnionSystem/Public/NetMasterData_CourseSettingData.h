#pragma once
#include "CoreMinimal.h"
#include "NetMasterData_CourseSettingData.generated.h"

USTRUCT(BlueprintType)
struct FNetMasterData_CourseSettingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString releaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> appearCourseIds;
    
    UNIONSYSTEM_API FNetMasterData_CourseSettingData();
};

