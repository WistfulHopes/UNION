#pragma once
#include "CoreMinimal.h"
#include "MatchmakingCommonRequest_EntryData.h"
#include "MatchmakingSubscribeFestaRequest.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingSubscribeFestaRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UserIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString matchVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSeries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatchmakingCommonRequest_EntryData> entryDataList;
    
    UNIONSYSTEM_API FMatchmakingSubscribeFestaRequest();
};

