#pragma once
#include "CoreMinimal.h"
#include "CRM_GadgetUsage.generated.h"

USTRUCT(BlueprintType)
struct FCRM_GadgetUsage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString action_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> key1;
    
    UNIONSYSTEM_API FCRM_GadgetUsage();
};

