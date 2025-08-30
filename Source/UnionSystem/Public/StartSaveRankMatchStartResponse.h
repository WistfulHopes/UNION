#pragma once
#include "CoreMinimal.h"
#include "StartSaveRankMatchStartResponse.generated.h"

USTRUCT(BlueprintType)
struct FStartSaveRankMatchStartResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString entryRaceId;
    
    UNIONSYSTEM_API FStartSaveRankMatchStartResponse();
};

