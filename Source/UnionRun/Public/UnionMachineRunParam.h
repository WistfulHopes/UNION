#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DashChargeParams.h"
#include "UnionMachineRunParam.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API UUnionMachineRunParam : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedLimitKMPHMin[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedLimitKMPHMax[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedLimitKMPHMonster[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccelNeutral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccelNormalRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccelHighRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccelSuperSonicRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccelUpMulMin[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccelUpMulMax[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccelUpMulMonster[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashLimitUpperKMPH;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDashChargeParams DashQuickChargeCar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDashChargeParams DashQuickChargeBoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDashChargeParams DashQuickChargePlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerRelativeSpeedMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerRelativeSpeedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MonsterPowerRelativeSpeedMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MonsterPowerRelativeSpeedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerRateInDrift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MonsterPowerRateInDrift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerInputDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpinDriftPowerMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpinDriftPowerMin;
    
    UUnionMachineRunParam();

};

