#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LotteryRateData.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FLotteryRateData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 SingleWhiteBoostRatio;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 DoubleWhiteBoostRatio;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 PackageRingRatio;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 HominPunchRatio;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 DoubleHominPunchRatio;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 TripleHominPunchRatio;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 YellowDrill;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 ThornBall;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 MonsterTruck;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 KingBoomBoo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 RocketPunch;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 DoubleRocketPunch;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 TripleRocketPunch;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 KingWhiteBoost;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 CyanLaser;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 VioletVoid;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Anchor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 BodyCut;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Slicer;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Slime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Splash;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 DarkChao;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Magnet;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 BlackBomb;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 WarpRing;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 TeamWarpRing;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Omochao;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Shield;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool enableFlag;
    
    FLotteryRateData();
};

