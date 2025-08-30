#pragma once
#include "CoreMinimal.h"
#include "MatchmakingCommonResponse_Subscribe.h"
#include "MatchmakingCommonResponse_ValetComPlayer.h"
#include "MatchmakingDescribeResponse_MatchPlayerInfo.h"
#include "MatchmakingDescribeResponse_Player.h"
#include "MatchmakingDescribeResponse_RankMatchRate.h"
#include "MatchmakingDescribeResponse.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingDescribeResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatchmakingDescribeResponse_Player> gameSessionPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString hostLobbyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatchmakingCommonResponse_ValetComPlayer> valetComPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 averageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float averageAdjustRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchmakingCommonResponse_Subscribe subscribe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatchmakingDescribeResponse_RankMatchRate> playerRankMatchRates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatchmakingDescribeResponse_MatchPlayerInfo> matchPlayerInfos;
    
    UNIONSYSTEM_API FMatchmakingDescribeResponse();
};

