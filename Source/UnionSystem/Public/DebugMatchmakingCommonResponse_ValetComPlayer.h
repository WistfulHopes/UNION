#pragma once
#include "CoreMinimal.h"
#include "DebugMatchmakingCommonResponse_ValetComPlayer.generated.h"

USTRUCT(BlueprintType)
struct FDebugMatchmakingCommonResponse_ValetComPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString comPlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString targetPlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float adjustRate;
    
    UNIONSYSTEM_API FDebugMatchmakingCommonResponse_ValetComPlayer();
};

