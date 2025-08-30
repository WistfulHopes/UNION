#pragma once
#include "CoreMinimal.h"
#include "LogTrackConfig_Member.generated.h"

USTRUCT(BlueprintType)
struct FLogTrackConfig_Member {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString textToTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UNIONSYSTEM_API FLogTrackConfig_Member();
};

