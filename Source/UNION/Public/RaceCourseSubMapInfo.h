#pragma once
#include "CoreMinimal.h"
#include "EStageCourseMainSubMapInfo.h"
#include "StageCourseMapParam.h"
#include "RaceCourseSubMapInfo.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FRaceCourseSubMapInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStageCourseMainSubMapInfo, FStageCourseMapParam> CourseMapUIParam;
    
    FRaceCourseSubMapInfo();
};

