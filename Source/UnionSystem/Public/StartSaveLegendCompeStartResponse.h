#pragma once
#include "CoreMinimal.h"
#include "StartSaveLegendCompeStartResponse.generated.h"

USTRUCT(BlueprintType)
struct FStartSaveLegendCompeStartResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString entryRaceId;
    
    UNIONSYSTEM_API FStartSaveLegendCompeStartResponse();
};

