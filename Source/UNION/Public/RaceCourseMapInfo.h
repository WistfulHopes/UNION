#pragma once
#include "CoreMinimal.h"
#include "EStageCourseMapInfo.h"
#include "StageCourseMapParam.h"
#include "RaceCourseMapInfo.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FRaceCourseMapInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStageCourseMapInfo, FStageCourseMapParam> CourseMapUIParam;
    
    FRaceCourseMapInfo();
};

