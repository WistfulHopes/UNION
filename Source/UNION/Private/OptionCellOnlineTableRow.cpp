#include "OptionCellOnlineTableRow.h"

FOptionCellOnlineTableRow::FOptionCellOnlineTableRow() {
    this->OptionKind = EOptionOnlineCell::PlayStatus;
    this->Platform = EOptionValidPlatform::All;
    this->CellType = EOptionCellType::Indicator;
}

