#include "OptionCellList.h"

UOptionCellList::UOptionCellList() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->Cell_Scroll = NULL;
    this->ParentPanel = NULL;
    this->ButtonPanel = NULL;
}


void UOptionCellList::UpdateScroll(int32 ButtonIndex) {
}

void UOptionCellList::OnFocusButtonItem(UUnionUIButtonBase* InButton) {
}

void UOptionCellList::OnExitMenu() {
}

void UOptionCellList::OnEnterCell() {
}

void UOptionCellList::OnBackToCellList() {
}


