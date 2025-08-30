#pragma once
#include "CoreMinimal.h"
#include "Common_TeamOrderData.generated.h"

USTRUCT(BlueprintType)
struct FCommon_TeamOrderData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 order;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UserIds;
    
    UNIONSYSTEM_API FCommon_TeamOrderData();
};

