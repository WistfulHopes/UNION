#pragma once
#include "CoreMinimal.h"
#include "MatchmakingDescribeResponse_Player.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingDescribeResponse_Player {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isComPlayer;
    
    UNIONSYSTEM_API FMatchmakingDescribeResponse_Player();
};

