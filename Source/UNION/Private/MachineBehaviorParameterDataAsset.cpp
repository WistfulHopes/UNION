#include "MachineBehaviorParameterDataAsset.h"

UMachineBehaviorParameterDataAsset::UMachineBehaviorParameterDataAsset() {
    this->HitTrackWallIntervalTime = 0.50f;
    this->HitTrackWallLowerSpeed = 50.00f;
    this->ReactionIntervalTime = 0.50f;
    this->SlipStreamAvailableTime = 0.50f;
    this->RunEffectLowerSpeed = 10.00f;
    this->JumpLowerLimit = 0.20f;
    this->BounceLowerLimit = 1.00f;
    this->PassedFollowingBoostAvailableTime = 1.00f;
    this->ChangeMonsterTruckCompletedTime = 1.20f;
    this->GoalResultCameraPlaybackDelayTime = 3.00f;
    this->GoalActionDelayTime = 3.00f;
    this->HoverboardRollLimit = 0.80f;
    this->BarrelRollAnimationPlayRate = 2.00f;
    this->BoostLevelMin = 0.00f;
    this->BoostLevelMax = 5.00f;
    this->ActivateTireUnitDelayTime = 0.00f;
    this->ActivateBoatUnitDelayTime = 0.80f;
    this->ActivateFlightUnitDelayTime = 0.80f;
}


