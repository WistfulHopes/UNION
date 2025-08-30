#include "RoundTripMoveComponentParams.h"

FRoundTripMoveComponentParams::FRoundTripMoveComponentParams() {
    this->TemplateID = 0;
    this->bValidMovement_ = false;
    this->bSnapStartLocationAtStart_ = false;
    this->bUseLRRayCast_ = false;
    this->racCastHeight_ = 0.00f;
    this->racCastLength_ = 0.00f;
    this->racCastInnerOffset_ = 0.00f;
    this->startDelay_ = 0.00f;
    this->startOffsetBySeconds_ = 0.00f;
}

