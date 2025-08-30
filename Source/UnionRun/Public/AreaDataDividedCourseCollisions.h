#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AreaDataCourseColContents.h"
#include "AreaDataCourseColSettings.h"
#include "AreaDataDividedCourseCollisions.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API UAreaDataDividedCourseCollisions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAreaDataCourseColSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAreaDataCourseColContents Contents;
    
    UAreaDataDividedCourseCollisions();

};

