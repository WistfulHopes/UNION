#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ComAvoidKingBoomBooPillarParams.h"
#include "ComAvoidParams.h"
#include "ComLotteryParams.h"
#include "ComSlimeCancelParams.h"
#include "ComTimingGimmickParams.h"
#include "ComCommonParams.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API UComCommonParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComAvoidParams ComAvoidParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComSlimeCancelParams ComSlimeCancelParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComAvoidKingBoomBooPillarParams ComAvoidKingBoomBooPillarParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComTimingGimmickParams ComTimingGimmickParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComLotteryParams ComLotteryParams;
    
    UComCommonParams();

};

