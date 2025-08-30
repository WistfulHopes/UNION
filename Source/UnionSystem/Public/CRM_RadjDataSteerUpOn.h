#pragma once
#include "CoreMinimal.h"
#include "CRM_RadjDataSteerUpOn.generated.h"

USTRUCT(BlueprintType)
struct FCRM_RadjDataSteerUpOn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString action_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 key1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString key2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> key3;
    
    UNIONSYSTEM_API FCRM_RadjDataSteerUpOn();
};

