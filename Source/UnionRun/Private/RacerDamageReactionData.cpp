#include "RacerDamageReactionData.h"

FRacerDamageReactionData::FRacerDamageReactionData() {
    this->ReactionType = ERacerDamageReactionType::Non;
    this->AdjustSpeedKMPH_NORMAL = 0.00f;
    this->AdjustSpeedKMPH_HIGH = 0.00f;
    this->AdjustSpeedKMPH_SONIC = 0.00f;
    this->AdjustSpeedKMPH_SUPER_SONIC = 0.00f;
    this->ReactionUnavailableTime_NORMAL = 0.00f;
    this->ReactionUnavailableTime_HIGH = 0.00f;
    this->ReactionUnavailableTime_SONIC = 0.00f;
    this->ReactionUnavailableTime_SUPER_SONIC = 0.00f;
    this->InvincibleTime_NORMAL = 0.00f;
    this->InvincibleTime_HIGH = 0.00f;
    this->InvincibleTime_SONIC = 0.00f;
    this->InvincibleTime_SUPER_SONIC = 0.00f;
    this->ReactionImpulse_X = 0.00f;
    this->ReactionImpulse_Y = 0.00f;
    this->ReactionImpulse_Z_NORMAL = 0.00f;
    this->ReactionImpulse_Z_HIGH = 0.00f;
    this->ReactionImpulse_Z_SONIC = 0.00f;
    this->ReactionImpulse_Z_SUPER_SONIC = 0.00f;
}

