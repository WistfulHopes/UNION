#pragma once
#include "CoreMinimal.h"
#include "Common_UserPlayState.generated.h"

USTRUCT(BlueprintType)
struct FCommon_UserPlayState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString lastAccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlaying;
    
    UNIONSYSTEM_API FCommon_UserPlayState();
};

