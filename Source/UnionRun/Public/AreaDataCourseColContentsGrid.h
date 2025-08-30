#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AreaDataCourseColContentsPart.h"
#include "AreaDataCourseColContentsGrid.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FAreaDataCourseColContentsGrid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FAreaDataCourseColContentsPart> Container;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3f AabbMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3f AabbMax;
    
    FAreaDataCourseColContentsGrid();
};

