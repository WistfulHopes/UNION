#include "GadgetCustomSubTypeIcon.h"

UGadgetCustomSubTypeIcon::UGadgetCustomSubTypeIcon() {
    this->ControlPlayerIndex = 0;
    this->bVisibleInWidgets = true;
    this->gadgetId = EGadgetId::NonGadget;
    this->bIconUpdate = false;
    this->GadgetCategory = EGadgetCategory::Item;
    this->GadgetState = EGadgetState::Attachable;
    this->UnlockMenuGadgetIconRef = NULL;
    this->LockMenuGadgetIconRef = NULL;
    this->GadgetIconSwitcherRef = NULL;
    this->CategoryColorRef = NULL;
    this->CategoryColorBrushMaterial = NULL;
    this->RockIconRef = NULL;
    this->TicketBoxRootRef = NULL;
    this->TicketValueTextRef = NULL;
    this->GadgetNameTextRootRef = NULL;
    this->GadgetNameTextRef = NULL;
    this->NewIconRef = NULL;
    this->EquippedIconRef = NULL;
    this->NotAttachIconRef = NULL;
    this->CanNotAttachIconRef = NULL;
    this->InvalidIconRef = NULL;
}

void UGadgetCustomSubTypeIcon::SwitchGadgetIcon(const bool bIsOpen) {
}

void UGadgetCustomSubTypeIcon::StopGadgetNameTextScroll() {
}

void UGadgetCustomSubTypeIcon::StartGadgetNameTextScroll() {
}

void UGadgetCustomSubTypeIcon::SetVisibleInWidgets(const bool bInVisible) {
}

void UGadgetCustomSubTypeIcon::SetTicketValueTextColor(const bool bPurchase) {
}

void UGadgetCustomSubTypeIcon::SetTicketValueText(const int32 InTicketNum) {
}

void UGadgetCustomSubTypeIcon::SetTicketBoxOpaque(const bool bVisible) {
}

void UGadgetCustomSubTypeIcon::SetTexture_Implementation(UTexture2D* InTexture) {
}

void UGadgetCustomSubTypeIcon::SetPlayerNumberOpaqueAll(const bool bVisible) {
}

void UGadgetCustomSubTypeIcon::SetPlayerNumberOpaque(const int32 InPlayerIndex, const bool bVisible) {
}

void UGadgetCustomSubTypeIcon::SetNewIconOpaque(const bool bVisible) {
}

void UGadgetCustomSubTypeIcon::SetLockIconOpaque(const bool bVisible) {
}

void UGadgetCustomSubTypeIcon::SetIsIconUpdate(const bool InFlag) {
}

void UGadgetCustomSubTypeIcon::SetInvalidIconOpaque(const bool bVisible) {
}

void UGadgetCustomSubTypeIcon::SetGadgetState_Implementation(const EGadgetState InGadgetState) {
}

void UGadgetCustomSubTypeIcon::SetGadgetNameText(const FText InText) {
}

void UGadgetCustomSubTypeIcon::SetGadgetNameOpaque(const bool bVisible) {
}

void UGadgetCustomSubTypeIcon::SetGadgetId(const EGadgetId InGadgetId) {
}

void UGadgetCustomSubTypeIcon::SetGadgetCategory_Implementation(const EGadgetCategory InGadgetCategory) {
}

void UGadgetCustomSubTypeIcon::SetEquippedIconOpaque(const bool bVisible) {
}

void UGadgetCustomSubTypeIcon::SetCursorOpaqueAll(const bool bVisible) {
}

void UGadgetCustomSubTypeIcon::SetCursorOpaque(const int32 InPlayerIndex, const bool bVisible) {
}

void UGadgetCustomSubTypeIcon::SetControlPlayerIndex(const int32 InPlayerIndex) {
}

void UGadgetCustomSubTypeIcon::SetCanNotAttachIconOpaque(const bool bVisible) {
}

void UGadgetCustomSubTypeIcon::RemoveGadgetNameTextWidget() {
}

void UGadgetCustomSubTypeIcon::OnConstCategoryColor() {
}

bool UGadgetCustomSubTypeIcon::IsVisibleInWidgets() const {
    return false;
}

bool UGadgetCustomSubTypeIcon::IsNewIconVisible() {
    return false;
}

bool UGadgetCustomSubTypeIcon::IsIconUpdate() const {
    return false;
}

bool UGadgetCustomSubTypeIcon::IsCanNotAttachIconVisible() const {
    return false;
}

EGadgetState UGadgetCustomSubTypeIcon::GetGadgetState() const {
    return EGadgetState::Attachable;
}

ESlateVisibility UGadgetCustomSubTypeIcon::GetGadgetNameTextVisibility() {
    return ESlateVisibility::Visible;
}

EGadgetId UGadgetCustomSubTypeIcon::GetGadgetId() const {
    return EGadgetId::NonGadget;
}

EGadgetCategory UGadgetCustomSubTypeIcon::GetGadgetCategory() const {
    return EGadgetCategory::Item;
}

int32 UGadgetCustomSubTypeIcon::GetControlPlayerIndex() const {
    return 0;
}

void UGadgetCustomSubTypeIcon::CreateCategoryColorMaterial() {
}

void UGadgetCustomSubTypeIcon::ApplyGadgetIcons_Implementation(const EGadgetId InGadgetId) {
}


