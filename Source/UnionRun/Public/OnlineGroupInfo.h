#pragma once
#include "CoreMinimal.h"
#include "EGroupColorId.h"
#include "EGroupRaceRule.h"
#include "ERaceSettingGroupMode.h"
#include "ERaceSettingGrouping.h"
#include "OnlineGroupInfo.generated.h"

USTRUCT(BlueprintType)
struct FOnlineGroupInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGroupRaceRule GroupRaceRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceSettingGroupMode RaceSettingGroupMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceSettingGrouping RaceSettingGrouping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGroupColorId> GroupColor;
    
    UNIONRUN_API FOnlineGroupInfo();
};

