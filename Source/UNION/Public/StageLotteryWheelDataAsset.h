#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "StageLotteryWheelDataAsset.generated.h"

UCLASS(Blueprintable)
class UNION_API UStageLotteryWheelDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RankPointThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AvoidDuplicationResetCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMainStageTravelRingClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FeverBoostMainMix;
    
    UStageLotteryWheelDataAsset();

};

