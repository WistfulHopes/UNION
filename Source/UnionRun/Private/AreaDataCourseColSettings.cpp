#include "AreaDataCourseColSettings.h"

FAreaDataCourseColSettings::FAreaDataCourseColSettings() {
    this->RevisionNo = 0;
    this->CourseCollisionAssetDataVersion = 0;
    this->CourseCollisionAssetHash = 0;
    this->CourseGridSize = 0;
    this->StageId = EStageId::MainBegin;
    this->IsFinalLap = false;
    this->IsStrictDivide = false;
    this->PolygonMarginLength = 0.00f;
}

