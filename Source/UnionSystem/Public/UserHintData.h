#pragma once
#include "CoreMinimal.h"
#include "UserHintProperty.h"
#include "UserHintData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FUserHintData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUserHintProperty> UserHintArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TipsDisplayIndex;
    
    FUserHintData();
};

