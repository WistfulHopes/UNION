#include "RoundTripMoveParams.h"

FRoundTripMoveParams::FRoundTripMoveParams() {
    this->moveType_ = ERoundTripMoveType::Linear;
    this->easeCurve_ = 0.00f;
    this->movingSeconds_ = 0.00f;
    this->movingSpeed_ = 0.00f;
    this->endWaitSeconds_ = 0.00f;
}

