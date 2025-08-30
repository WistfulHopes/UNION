#pragma once
#include "CoreMinimal.h"
#include "UserHonorTitleProperty.h"
#include "UserHonorTitleData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FUserHonorTitleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FUserHonorTitleProperty> HonorTitleList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HonorTitleIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> UnlockedHonorTitleList;
    
    FUserHonorTitleData();
};

