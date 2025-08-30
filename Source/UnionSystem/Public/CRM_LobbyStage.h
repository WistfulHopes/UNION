#pragma once
#include "CoreMinimal.h"
#include "CRM_LobbyStage.generated.h"

USTRUCT(BlueprintType)
struct FCRM_LobbyStage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString action_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> key1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> key2;
    
    UNIONSYSTEM_API FCRM_LobbyStage();
};

