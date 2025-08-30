#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LotteryRateData.h"
#include "DistanceGroupLotteryRateDataTable.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FDistanceGroupLotteryRateDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLotteryRateData LotteryRateDatas_DistanceGroup1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLotteryRateData LotteryRateDatas_DistanceGroup2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLotteryRateData LotteryRateDatas_DistanceGroup3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLotteryRateData LotteryRateDatas_DistanceGroup4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLotteryRateData LotteryRateDatas_DistanceGroup5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLotteryRateData LotteryRateDatas_DistanceGroup6;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLotteryRateData LotteryRateDatas_DistanceGroup7;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLotteryRateData LotteryRateDatas_DistanceGroup8;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLotteryRateData LotteryRateDatas_DistanceGroup9;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLotteryRateData LotteryRateDatas_DistanceGroup10;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLotteryRateData LotteryRateDatas_DistanceGroup11;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLotteryRateData LotteryRateDatas_DistanceGroup12;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLotteryRateData LotteryRateDatas_DistanceGroup13;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLotteryRateData LotteryRateDatas_DistanceGroup14;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLotteryRateData LotteryRateDatas_DistanceGroup15;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLotteryRateData LotteryRateDatas_DistanceGroup16;
    
    FDistanceGroupLotteryRateDataTable();
};

