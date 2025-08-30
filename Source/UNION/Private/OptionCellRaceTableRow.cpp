#include "OptionCellRaceTableRow.h"

FOptionCellRaceTableRow::FOptionCellRaceTableRow() {
    this->OptionKind = EOptionRaceCell::CameraType;
    this->Platform = EOptionValidPlatform::All;
    this->CellType = EOptionCellType::Indicator;
}

