#include "OptionCellAudioTableRow.h"

FOptionCellAudioTableRow::FOptionCellAudioTableRow() {
    this->OptionKind = EOptionAudioCell::Master;
    this->Platform = EOptionValidPlatform::All;
    this->CellType = EOptionCellType::Indicator;
    this->GaugeMax = 0;
}

