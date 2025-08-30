#include "ClassSelectButtonBase.h"

UClassSelectButtonBase::UClassSelectButtonBase() {
    this->SpeedClassId = ESpeedClassId::NormalSpeed;
    this->MenuSpeedClassId = EMenuSpeedClassId::HighSpeed;
}

void UClassSelectButtonBase::SetSpeedClass_Implementation(ESpeedClassId InSpeedClass) {
}

void UClassSelectButtonBase::SetMenuSpeedClass_Implementation(EMenuSpeedClassId InMenuSpeedClass) {
}


ESpeedClassId UClassSelectButtonBase::GetSpeedClass() {
    return ESpeedClassId::NormalSpeed;
}

EMenuSpeedClassId UClassSelectButtonBase::GetMenuSpeedClass() {
    return EMenuSpeedClassId::NormalSpeed;
}


