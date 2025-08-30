#include "OptionCellControlTableRow.h"

FOptionCellControlTableRow::FOptionCellControlTableRow() {
    this->OptionKind = EOptionControlCell::SubCategory_UI_Custom;
    this->Platform = EOptionValidPlatform::All;
    this->CellType = EOptionCellType::Indicator;
    this->SubCategory = EOptionCategory::RaceTop;
    this->GaugeMin = 0;
    this->GaugeMax = 0;
    this->UseGuideTextMap = false;
}

