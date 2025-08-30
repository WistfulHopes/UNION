#pragma once
#include "CoreMinimal.h"
#include "AreaDataCourseColContentsCourseCollision.h"
#include "AreaDataCourseColContents.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FAreaDataCourseColContents {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FAreaDataCourseColContentsCourseCollision> Container;
    
    FAreaDataCourseColContents();
};

