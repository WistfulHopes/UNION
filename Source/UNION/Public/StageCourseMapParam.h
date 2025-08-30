#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StageCourseMapParam.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct UNION_API FStageCourseMapParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CourseMapUITexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OrthoRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    FStageCourseMapParam();
};

