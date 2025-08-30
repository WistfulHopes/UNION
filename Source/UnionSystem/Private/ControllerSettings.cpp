#include "ControllerSettings.h"

FControllerSettings::FControllerSettings() {
    this->bInverseAcceptAndCancel = false;
    this->MenuControllerViewType = EMenuControllerViewType::Auto;
    this->bControllerGyroAssist = false;
    this->EnableForceFeedback = 0;
    this->KeyConfigOperationType = EKeyConfigOperationType::TypeA;
    this->bReverse = false;
    this->StickSensitivity = 0.00f;
}

