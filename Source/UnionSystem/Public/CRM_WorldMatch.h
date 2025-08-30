#pragma once
#include "CoreMinimal.h"
#include "CRM_WorldMatch.generated.h"

USTRUCT(BlueprintType)
struct FCRM_WorldMatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString action_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString key1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 key3;
    
    UNIONSYSTEM_API FCRM_WorldMatch();
};

