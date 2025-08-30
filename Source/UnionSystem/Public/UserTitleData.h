#pragma once
#include "CoreMinimal.h"
#include "UserTitleData.generated.h"

USTRUCT(BlueprintType)
struct FUserTitleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 titleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TitleRibbonId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TitleRibbonColorId;
    
    UNIONSYSTEM_API FUserTitleData();
};

