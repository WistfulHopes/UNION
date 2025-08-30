#pragma once
#include "CoreMinimal.h"
#include "EAppSupportedPlatform.h"
#include "ERateRank.h"
#include "UsageCountChara.h"
#include "LobbyRacerInfoData.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FLobbyRacerInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAppSupportedPlatform UserPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERateRank Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UserTitleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUsageCountChara> UsedCountChara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> UsedMachineTypeCount;
    
    FLobbyRacerInfoData();
};

