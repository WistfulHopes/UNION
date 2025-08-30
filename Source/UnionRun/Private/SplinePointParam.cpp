#include "SplinePointParam.h"

FSplinePointParam::FSplinePointParam() {
    this->SurfaceType = EUnionSurfaceType::None;
    this->PointIndex = 0;
    this->PlaneWidthUD = 0.00f;
    this->PlaneWidthLR = 0.00f;
    this->PlaneWidthRight = 0.00f;
    this->PlaneWidthBottom = 0.00f;
    this->PhysMaterial = NULL;
}

