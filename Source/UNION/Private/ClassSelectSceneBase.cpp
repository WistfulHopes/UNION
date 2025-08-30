#include "ClassSelectSceneBase.h"

UClassSelectSceneBase::UClassSelectSceneBase() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->ClassSelect_In = NULL;
    this->ClassSelect_Loop = NULL;
    this->ClassSelect_Out = NULL;
}


void UClassSelectSceneBase::SaveLastFocusedMenuSpeedClassId(EMenuSpeedClassId SpeedClassId) {
}


EMenuSpeedClassId UClassSelectSceneBase::GetLastFocusedMenuSpeedClassId() {
    return EMenuSpeedClassId::NormalSpeed;
}




