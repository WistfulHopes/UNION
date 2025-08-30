#pragma once
#include "CoreMinimal.h"
#include "CRM_GameLogin.generated.h"

USTRUCT(BlueprintType)
struct FCRM_GameLogin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString action_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> key1;
    
    UNIONSYSTEM_API FCRM_GameLogin();
};

