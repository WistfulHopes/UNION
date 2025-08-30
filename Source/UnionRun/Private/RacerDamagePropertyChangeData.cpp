#include "RacerDamagePropertyChangeData.h"

FRacerDamagePropertyChangeData::FRacerDamagePropertyChangeData() {
    this->ChangType = ERacerDamagePropertyChangeType::SpeedlValue;
    this->SpeedlValue = 0.00f;
    this->DecelRatio = 0.00f;
}

