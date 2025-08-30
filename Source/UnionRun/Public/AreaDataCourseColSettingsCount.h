#pragma once
#include "CoreMinimal.h"
#include "AreaDataCourseColSettingsCount.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FAreaDataCourseColSettingsCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TrianglesCounts;
    
    FAreaDataCourseColSettingsCount();
};

