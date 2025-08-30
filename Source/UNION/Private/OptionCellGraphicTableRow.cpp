#include "OptionCellGraphicTableRow.h"

FOptionCellGraphicTableRow::FOptionCellGraphicTableRow() {
    this->OptionKind = EOptionGraphicCell::Brightness;
    this->Platform = EOptionValidPlatform::All;
    this->CellType = EOptionCellType::Indicator;
    this->SubCategory = EOptionCategory::RaceTop;
}

