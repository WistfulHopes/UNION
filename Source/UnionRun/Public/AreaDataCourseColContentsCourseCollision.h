#pragma once
#include "CoreMinimal.h"
#include "AreaDataCourseColContentsGrid.h"
#include "AreaDataCourseColContentsCourseCollision.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FAreaDataCourseColContentsCourseCollision {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FAreaDataCourseColContentsGrid> Container;
    
    FAreaDataCourseColContentsCourseCollision();
};

