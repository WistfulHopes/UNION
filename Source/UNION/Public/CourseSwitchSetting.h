#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CourseSwitchSettingSingle.h"
#include "CourseSwitchSetting.generated.h"

USTRUCT(BlueprintType)
struct FCourseSwitchSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCourseSwitchSettingSingle> CourseSwitchSettingArr;
    
    UNION_API FCourseSwitchSetting();
};

