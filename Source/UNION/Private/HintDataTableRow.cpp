#include "HintDataTableRow.h"

FHintDataTableRow::FHintDataTableRow() {
    this->HintId = EHintId::None;
    this->IsEnabled = false;
    this->HintCategory = EHintCategory::None;
    this->TipsIndex = 0;
}

