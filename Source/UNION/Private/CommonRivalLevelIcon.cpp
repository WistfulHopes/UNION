#include "CommonRivalLevelIcon.h"

UCommonRivalLevelIcon::UCommonRivalLevelIcon() {
    this->Icon_Hide_Loop = NULL;
    this->Icon_Normal_In = NULL;
    this->Icon_Normal_Loop = NULL;
    this->Icon_Normal_Out = NULL;
    this->Icon_High_In = NULL;
    this->Icon_High_Loop = NULL;
    this->Icon_High_Out = NULL;
    this->Icon_SuperHigh_In = NULL;
    this->Icon_SuperHigh_Loop = NULL;
    this->Icon_SuperHigh_Out = NULL;
    this->Icon_Blank_In = NULL;
    this->Icon_Blank_Loop = NULL;
    this->Icon_Blank_Out = NULL;
}

int32 UCommonRivalLevelIcon::GetState() const {
    return 0;
}


