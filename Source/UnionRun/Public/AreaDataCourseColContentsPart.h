#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AreaDataCourseColContentsPart.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FAreaDataCourseColContentsPart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TriIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3f AabbMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3f AabbMax;
    
    FAreaDataCourseColContentsPart();
};

