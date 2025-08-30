#pragma once
#include "CoreMinimal.h"
#include "ContentUserTitleData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FContentUserTitleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> UserTitleIds;
    
    FContentUserTitleData();
};

