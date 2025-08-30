#include "EquipmentGadgetIcon.h"

UEquipmentGadgetIcon::UEquipmentGadgetIcon() {
    this->gadgetId = EGadgetId::NonGadget;
    this->bReadyWindow = false;
    this->bCustomizeWindow = false;
    this->GadgetImageRef = NULL;
    this->GadgetNameRef = NULL;
    this->GadgetCostRef = NULL;
    this->GadgetCostImageRef = NULL;
    this->GadgetEquipablePlusRef = NULL;
    this->bIsLocked = false;
    this->GadgetLockImageRef = NULL;
    this->GadgetNewImageRef = NULL;
    this->DisableGadgetImageRef = NULL;
    this->GadgetSelectCursorRef = NULL;
    this->GadgetSelectHexagonRef = NULL;
    this->bShouldPlayDecisionSound = true;
    this->bShouldPlayCancelSound = true;
    this->bShouldPlayShoulderSound = true;
}

void UEquipmentGadgetIcon::SetupToNone() {
}

void UEquipmentGadgetIcon::SetupToLocked() {
}

void UEquipmentGadgetIcon::SetupToGadgetId(const EGadgetId InGadgetId, const bool bInSetShape) {
}

void UEquipmentGadgetIcon::SetupToEmpty() {
}

void UEquipmentGadgetIcon::SetShouldPlayShoulderSound(const bool bInShouldPlay) {
}

void UEquipmentGadgetIcon::SetShouldPlayDecisionSound(const bool bInShouldPlay) {
}

void UEquipmentGadgetIcon::SetShouldPlayCancelSound(const bool bInShouldPlay) {
}

void UEquipmentGadgetIcon::SetNewIconVisible(const bool bInVisible) {
}

void UEquipmentGadgetIcon::SetLockVisible(const bool bInVisible) {
}

void UEquipmentGadgetIcon::SetIconBaseVisible(const bool bInVisible) {
}


void UEquipmentGadgetIcon::SetIconBaseMaterial(const int32 InGadgetSizeX, const bool bIsGadgetKit) {
}

void UEquipmentGadgetIcon::SetGadgetSelectHexagonVisible(const bool bInVisible) {
}

void UEquipmentGadgetIcon::SetGadgetSelectCursorVisible(const bool bInVisible) {
}


void UEquipmentGadgetIcon::SetGadgetNameTextVisible(const bool bInVisible) {
}

void UEquipmentGadgetIcon::SetGadgetNameText(const FText& InText) {
}

void UEquipmentGadgetIcon::SetGadgetImageTexture(UTexture2D* InTexturePtr) {
}

void UEquipmentGadgetIcon::SetGadgetCostVisible(const bool bInVisible) {
}

void UEquipmentGadgetIcon::SetGadgetCostValue(const int32 InCost) {
}

void UEquipmentGadgetIcon::SetEquipablePlusIconVisible(const bool bInVisible) {
}

void UEquipmentGadgetIcon::SetDisableGadgetVisible(const bool bInVisible) {
}

void UEquipmentGadgetIcon::SetDisableGadgetOverrideVisible(bool& OutVisible) {
}



void UEquipmentGadgetIcon::NativeOnInitialized() {
}

void UEquipmentGadgetIcon::NativeConstruct() {
}


