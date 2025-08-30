#pragma once
#include "CoreMinimal.h"
#include "LogTrackConfig_Member.h"
#include "LogTrackConfig.generated.h"

USTRUCT(BlueprintType)
struct FLogTrackConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLogTrackConfig_Member> TrackInfo;
    
    UNIONSYSTEM_API FLogTrackConfig();
};

