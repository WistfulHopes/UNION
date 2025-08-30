#include "StageCameraSettings.h"

FStageCameraSettings::FStageCameraSettings() {
    this->StageId = EStageId::MainBegin;
    this->BloomIntensity = 0.00f;
    this->BloomThreshold = 0.00f;
    this->AutoExposureBias = 0.00f;
    this->CameraShutterSpeed = 0.00f;
    this->CurrentAperture = 0.00f;
    this->AutoExposureMethod = AEM_Histogram;
}

