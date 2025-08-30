#include "CameraParamTable.h"

FCameraParamTable::FCameraParamTable() {
    this->ParamId = 0;
    this->bElevationFixed = false;
    this->ElevationFixedTarget = 0.00f;
    this->InFrame = 0;
    this->OutFrame = 0;
    this->bOffsetFixed = false;
    this->OffsetFixedTarget = 0.00f;
    this->OffsetFixedInFrame = 0;
    this->OffsetFixedOutFrame = 0;
}

