#include "MachineMaterialAnimationData.h"

FMachineMaterialAnimationData::FMachineMaterialAnimationData() {
    this->AnimationType = EVehicleMaterialAnimationType::FreshlyPaintAppear;
    this->CurveTable = NULL;
}

