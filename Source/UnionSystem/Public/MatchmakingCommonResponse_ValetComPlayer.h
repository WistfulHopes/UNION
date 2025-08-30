#pragma once
#include "CoreMinimal.h"
#include "MatchmakingCommonResponse_ValetComPlayer.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingCommonResponse_ValetComPlayer {
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
    
    UNIONSYSTEM_API FMatchmakingCommonResponse_ValetComPlayer();
};

