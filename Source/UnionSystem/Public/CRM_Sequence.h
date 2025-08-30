#pragma once
#include "CoreMinimal.h"
#include "CRM_Sequence.generated.h"

USTRUCT(BlueprintType)
struct FCRM_Sequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString action_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> key1;
    
    UNIONSYSTEM_API FCRM_Sequence();
};

