#pragma once
#include "CoreMinimal.h"
#include "Common_FestaData.generated.h"

USTRUCT(BlueprintType)
struct FCommon_FestaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 festaPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 winCount;
    
    UNIONSYSTEM_API FCommon_FestaData();
};

