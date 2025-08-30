#include "SplineParam.h"

FSplineParam::FSplineParam() {
    this->bHidden = false;
    this->bPointCut = false;
    this->bCarRoute = false;
    this->bBoatRoute = false;
    this->bPlaneRoute = false;
    this->bShortCut = false;
    this->bSlide = false;
    this->bNeverItem = false;
    this->bNoItemRelease = false;
    this->bRunOff = false;
    this->bGuidedJump = false;
    this->bYellowDrill = false;
    this->bRespotInvalid = false;
    this->bInvalidSection = false;
    this->bInvalidAssist = false;
    this->RandomType = ERandomObjType::None;
    this->RandomId = 0;
}

