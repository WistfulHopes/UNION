#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AppCourseSwitchPattern.generated.h"

USTRUCT(BlueprintType)
struct FAppCourseSwitchPattern : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PatternName;
    
    UNION_API FAppCourseSwitchPattern();
};

