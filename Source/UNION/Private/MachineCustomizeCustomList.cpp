#include "MachineCustomizeCustomList.h"

UMachineCustomizeCustomList::UMachineCustomizeCustomList() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->ScrollBox = NULL;
    this->CustomListItem = NULL;
}

void UMachineCustomizeCustomList::ShowNewButton(UUnionUIButtonBase* InButton) {
}

int32 UMachineCustomizeCustomList::SetFocusButtonUnlock() {
    return 0;
}

void UMachineCustomizeCustomList::SetButtonSelect(int32 InButtonIndex) {
}

int32 UMachineCustomizeCustomList::GetFocusIndex() const {
    return 0;
}


