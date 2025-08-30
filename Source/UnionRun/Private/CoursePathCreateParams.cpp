#include "CoursePathCreateParams.h"

FCoursePathCreateParams::FCoursePathCreateParams() {
    this->bValid_ = false;
    this->directionType = ECoursePathDirectionType::Left;
    this->CurveType = ECoursePathCurveType::Linear;
    this->width_ = 0.00f;
    this->height_ = 0.00f;
    this->pointNum = 0;
    this->startIndex_ = 0;
    this->endIndex_ = 0;
    this->bUseRayCast_ = false;
    this->rayStartHeight_ = 0.00f;
    this->rayEndHeight_ = 0.00f;
}

