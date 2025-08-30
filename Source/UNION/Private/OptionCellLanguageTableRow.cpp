#include "OptionCellLanguageTableRow.h"

FOptionCellLanguageTableRow::FOptionCellLanguageTableRow() {
    this->OptionKind = EOptionLanguageCell::Language;
    this->Platform = EOptionValidPlatform::All;
    this->CellType = EOptionCellType::Indicator;
}

