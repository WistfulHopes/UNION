#pragma once
#include "CoreMinimal.h"
#include "CRM_EventLegend.generated.h"

USTRUCT(BlueprintType)
struct FCRM_EventLegend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString action_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString key1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 key2;
    
    UNIONSYSTEM_API FCRM_EventLegend();
};

