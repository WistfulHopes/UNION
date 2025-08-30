#include "UnionMachineRunParam.h"

UUnionMachineRunParam::UUnionMachineRunParam() {
    this->SpeedLimitKMPHMin[0] = 137.00f;
    this->SpeedLimitKMPHMin[1] = 137.00f;
    this->SpeedLimitKMPHMin[2] = 137.00f;
    this->SpeedLimitKMPHMin[3] = 137.00f;
    this->SpeedLimitKMPHMax[0] = 140.00f;
    this->SpeedLimitKMPHMax[1] = 140.00f;
    this->SpeedLimitKMPHMax[2] = 140.00f;
    this->SpeedLimitKMPHMax[3] = 140.00f;
    this->SpeedLimitKMPHMonster[0] = 180.00f;
    this->SpeedLimitKMPHMonster[1] = 180.00f;
    this->SpeedLimitKMPHMonster[2] = 180.00f;
    this->SpeedLimitKMPHMonster[3] = 180.00f;
    this->AccelNeutral = 27.60f;
    this->AccelNormalRate = 0.80f;
    this->AccelHighRate = 0.90f;
    this->AccelSuperSonicRate = 1.10f;
    this->AccelUpMulMin[0] = 22.60f;
    this->AccelUpMulMin[1] = 22.60f;
    this->AccelUpMulMin[2] = 22.60f;
    this->AccelUpMulMin[3] = 22.60f;
    this->AccelUpMulMax[0] = 28.60f;
    this->AccelUpMulMax[1] = 28.60f;
    this->AccelUpMulMax[2] = 28.60f;
    this->AccelUpMulMax[3] = 28.60f;
    this->AccelUpMulMonster[0] = 30.00f;
    this->AccelUpMulMonster[1] = 30.00f;
    this->AccelUpMulMonster[2] = 30.00f;
    this->AccelUpMulMonster[3] = 30.00f;
    this->DashLimitUpperKMPH = 60.00f;
    this->PowerRelativeSpeedMin = 10.00f;
    this->PowerRelativeSpeedMax = 30.00f;
    this->MonsterPowerRelativeSpeedMin = 100.00f;
    this->MonsterPowerRelativeSpeedMax = 200.00f;
    this->PowerRateInDrift = 0.50f;
    this->MonsterPowerRateInDrift = 0.30f;
    this->PowerInputDelaySeconds = 0.30f;
    this->SpinDriftPowerMax = 1.00f;
    this->SpinDriftPowerMin = 0.50f;
}


