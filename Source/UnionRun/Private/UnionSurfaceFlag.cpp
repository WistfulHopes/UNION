#include "UnionSurfaceFlag.h"

FUnionSurfaceFlag::FUnionSurfaceFlag() {
    this->bCarDriveable = false;
    this->bWall = false;
    this->bMachineOnlyWall = false;
    this->bGravitySwitch = false;
    this->bIgnoreSticky = false;
    this->bNoJump = false;
    this->bRespot = false;
    this->bSlippy = false;
    this->bSlowDownLight = false;
    this->bSlowDownMedium = false;
    this->bBumpyLight = false;
    this->bBumpyMedium = false;
    this->bBumpyHeavy = false;
    this->bGuidedJump = false;
    this->bBouncy = false;
    this->bSlide = false;
    this->bDash = false;
    this->bGrindDash = false;
    this->bAirImpact = false;
    this->bHitSlowdownLight = false;
    this->bHitSlowdownMidium = false;
    this->bPseudoPlane = false;
    this->bHitBouncyMidium = false;
    this->bHitLoseRing = false;
    this->bNarrow = false;
    this->bAssistWall = false;
    this->bAssistWallItemIgnoret = false;
    this->bCameraChange = false;
    this->bCylindrical = false;
    this->bItemOnly = false;
    this->bNone = false;
}

