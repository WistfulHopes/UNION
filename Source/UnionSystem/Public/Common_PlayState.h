#pragma once
#include "CoreMinimal.h"
#include "Common_PlayState.generated.h"

USTRUCT(BlueprintType)
struct FCommon_PlayState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString lastAccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlaying;
    
    UNIONSYSTEM_API FCommon_PlayState();
};

