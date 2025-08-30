#pragma once
#include "CoreMinimal.h"
#include "CRM_ProgressRivalTeam.generated.h"

USTRUCT(BlueprintType)
struct FCRM_ProgressRivalTeam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString action_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> key1;
    
    UNIONSYSTEM_API FCRM_ProgressRivalTeam();
};

