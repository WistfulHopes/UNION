#include "GadgetCustomWindow.h"

UGadgetCustomWindow::UGadgetCustomWindow() {
    this->PresentElementArr.AddDefaulted(1);
    this->ElementArr.AddDefaulted(1);
    this->bIsLightVer = false;
    this->PlayerIndex = 0;
    this->bConstFocusNewGadget = false;
    this->LastSelectGadgetId = EGadgetId::Item1_TradeStock;
    this->LastSelectGadgetCategory = EGadgetCategory::Item;
    this->GadgetPlateLastFocusIndex = 0;
    this->FocusCursor = NULL;
    this->ReadyWidgetRef = NULL;
    this->RentalPlateWidgetRef = NULL;
    this->bPlayUpDownScrollAnim = false;
    this->bUpDownScrolledTriggerCancel = false;
    this->bPlayPurchaseAnim = false;
    this->MachineType_Loop = NULL;
    this->MachineType_Up_Program = NULL;
    this->MachineType_Down_Program = NULL;
    this->MachineType_Idle_Program = NULL;
}

void UGadgetCustomWindow::UpScrollAnimStarted_Implementation() {
}

void UGadgetCustomWindow::UpScrollAnimFinished_Implementation() {
}

void UGadgetCustomWindow::UpdateGadgetCustomWindowUpDownScrolled(const bool bUpScroll) {
}

void UGadgetCustomWindow::UpdateGadgetCustomWindowNotScrolled() {
}

void UGadgetCustomWindow::UpdateGadgetCustomWindowLeftRightScrolled(const bool bRightScroll) {
}

void UGadgetCustomWindow::UpCrossButtonRegister_Implementation(int32 InPlayerIndex) {
}

void UGadgetCustomWindow::StopAllIconTextScroll() {
}


void UGadgetCustomWindow::SetUpDownScrolledTriggerCancel(const bool bInFlag) {
}


void UGadgetCustomWindow::SetRentalPlateWidgetVisible(bool bInIsVisible) {
}

void UGadgetCustomWindow::SetReadyWidgetVisible(bool bInIsVisible) {
}

void UGadgetCustomWindow::SetPresentCenterTypeBoxCursorVisible(const bool InVisible) {
}

void UGadgetCustomWindow::SetPlayerControllerIndex_Implementation(int32 InPlayerIndex) {
}

void UGadgetCustomWindow::SetLastSelectGadgetId(const EGadgetId InGadgetId) {
}

void UGadgetCustomWindow::SetLastSelectGadgetCategory(const EGadgetCategory InGadgetCategory) {
}

void UGadgetCustomWindow::SetLastFocusGadgetData(const EGadgetId InGadgetId) {
}

void UGadgetCustomWindow::SetGadgetPlateLastFocusIndex(const int32 InPlayerGadgetPlateSlotFocusIndex) {
}

void UGadgetCustomWindow::SetFocusCursorVisible(const bool InVisible) {
}

void UGadgetCustomWindow::SetFocusByPlayerIndex_Implementation(APlayerController* InPlayerController, int32 InSlotIndex) {
}






void UGadgetCustomWindow::SetAllTypeBoxCursorVisible(const bool InVisible) {
}

void UGadgetCustomWindow::ResetSelectableGadget() {
}


void UGadgetCustomWindow::PurchaseAnimStarted_Implementation() {
}

void UGadgetCustomWindow::PurchaseAnimFinished_Implementation() {
}






void UGadgetCustomWindow::OnConstGadgetCustomWindowGadgetData() {
}



void UGadgetCustomWindow::OnConstFocusCursor_Implementation() {
}

void UGadgetCustomWindow::NativePreConstruct() {
}

void UGadgetCustomWindow::NativeOnInitialized() {
}

void UGadgetCustomWindow::NativeConstruct() {
}

bool UGadgetCustomWindow::IsUpDownScrolledTriggerCancel() const {
    return false;
}

bool UGadgetCustomWindow::IsReadyWidgetVisible() const {
    return false;
}

bool UGadgetCustomWindow::IsPlayScrollAnimUpDown() const {
    return false;
}

bool UGadgetCustomWindow::IsPlayPurchaseAnim() const {
    return false;
}

bool UGadgetCustomWindow::IsFocusGadgetCategoryArrayTop() {
    return false;
}

bool UGadgetCustomWindow::IsFocusGadgetCategoryArrayEnd() {
    return false;
}

bool UGadgetCustomWindow::IsFocusCategoryArrayTop() {
    return false;
}

bool UGadgetCustomWindow::IsFocusCategoryArrayLast() {
    return false;
}

bool UGadgetCustomWindow::IsConstFocusNew() const {
    return false;
}

int32 UGadgetCustomWindow::GetPlayerIndex() const {
    return 0;
}



UGadgetCustomSubTypeBox* UGadgetCustomWindow::GetCenterCategoryTypeBox() {
    return NULL;
}


void UGadgetCustomWindow::DownScrollAnimStarted_Implementation() {
}

void UGadgetCustomWindow::DownScrollAnimFinished_Implementation() {
}

void UGadgetCustomWindow::ApplyGadgetWindowIcons() {
}

void UGadgetCustomWindow::ApplyGadgetCustomScrollPrintBox_Implementation(const bool bInReSize) {
}

void UGadgetCustomWindow::ApplyGadgetCustomCategoryHeader_Implementation() {
}


