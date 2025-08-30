#include "TremorParameter.h"

FTremorParameter::FTremorParameter() {
    this->CameraTremorType = ECameraTremorType::Low;
    this->targetUD = 0.00f;
    this->targetUDSpeed = 0.00f;
    this->targetUDTime = 0.00f;
    this->targetLR = 0.00f;
    this->targetLRSpeed = 0.00f;
    this->targetLRTime = 0.00f;
}

