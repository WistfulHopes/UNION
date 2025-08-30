#include "GadgetPlateWindow.h"

UGadgetPlateWindow::UGadgetPlateWindow() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->PlayerIndex = 0;
    this->ClassNameTextRef = NULL;
    this->PlateImageRef = NULL;
    this->PreviewEquippedGadget = NULL;
    this->bFestaSpecialRule = false;
}




void UGadgetPlateWindow::SwitchPlateSlotData(const EGadgetPlateId InPlateId) {
}

void UGadgetPlateWindow::SwitchPlateBaseImage(const int32 InPlateIndex) {
}

void UGadgetPlateWindow::SetupToPlayerDetail(const FGadgetPlateUIData& InPlateUIData) {
}

void UGadgetPlateWindow::SetupGadgetIconsToPlayerDetail_Implementation(const bool InRankUp, const int32 InSlotNum) {
}


void UGadgetPlateWindow::SetupByUIData(const FGadgetPlateUIData& InPlateUIData) {
}

void UGadgetPlateWindow::SetupAsEmpty(const EGadgetPlateId InPlateId, const bool bRentalPlate, const bool bInRankUp, const bool bInLvUp) {
}

void UGadgetPlateWindow::SetSlotSelectEffectVisibleAll(const bool bInIsVisible) {
}

void UGadgetPlateWindow::SetSlotSelectEffectVisible(const int32 InSlotIndex, const bool bInIsVisible) {
}

void UGadgetPlateWindow::SetSlotInValidIconVisibleAll(const bool bInIsVisible) {
}

void UGadgetPlateWindow::SetSlotInValidIconVisible(const int32 InSlotIndex, const bool bInIsVisible) {
}



void UGadgetPlateWindow::SetPlayerIndex(const int32 InPlayerIndex) {
}


void UGadgetPlateWindow::SetFestaSpecialRule_Implementation(const bool bInFestaSpecialRule) {
}

void UGadgetPlateWindow::SetDisableGadgetList(const TArray<EGadgetId> InDisableGadgetList) {
}

void UGadgetPlateWindow::SetClassNameText(const FText InClassName) {
}



void UGadgetPlateWindow::NativeOnInitialized() {
}

void UGadgetPlateWindow::NativeConstruct() {
}

bool UGadgetPlateWindow::IsDisableGadget(const EGadgetId InCheckGadgetId, bool& bIsEmptyDisableList) const {
    return false;
}




