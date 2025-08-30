#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UnionLoadingCourseImage.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct UNIONUI_API FUnionLoadingCourseImage : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> CourseBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> CourseIcon;
    
    FUnionLoadingCourseImage();
};

