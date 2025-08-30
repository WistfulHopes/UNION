#pragma once
#include "CoreMinimal.h"
#include "ContentHonorTitleData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FContentHonorTitleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> HonorTitleIds;
    
    FContentHonorTitleData();
};

