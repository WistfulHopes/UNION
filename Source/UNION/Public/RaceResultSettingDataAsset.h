#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RaceResultSettingDataAsset.generated.h"

UCLASS(Blueprintable)
class UNION_API URaceResultSettingDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<int32> RankEarnPointDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GrandPrixLastRace1stRankBonusPoint;
    
    URaceResultSettingDataAsset();

};

