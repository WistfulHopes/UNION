#include "GadgetCustomSubTypeBox.h"

UGadgetCustomSubTypeBox::UGadgetCustomSubTypeBox() {
    this->PresentElementArr.AddDefaulted(1);
    this->ElementArr.AddDefaulted(1);
    this->bIsLightVer = false;
    this->PlayerNumberIndex = 0;
    this->GadgetCategory = EGadgetCategory::Item;
    this->bPlayScrollAnim = false;
    this->bLeftRightScrolledTriggerCancel = false;
    this->GadgetIconCanvasPanelRef = NULL;
    this->SelectCursorImageRef = NULL;
    this->TypeColorBrushMaterial = NULL;
    this->CategoryBackGroundImageRef = NULL;
    this->GadgetKitPatternRef = NULL;
    this->InvalidCategoryPatternOverlayRef = NULL;
    this->CategoryBackGroundImageMaterialWidth = 1800;
    this->CategoryBackGroundImageMaterialHeight = 32;
}

void UGadgetCustomSubTypeBox::StopIconTextScroll() {
}

void UGadgetCustomSubTypeBox::StartIconTextScroll() {
}



void UGadgetCustomSubTypeBox::SetPlayerControllerIndex_Implementation(const int32 InPlayerControllerIndex) {
}

void UGadgetCustomSubTypeBox::SetLeftRightScrolledTriggerCancel(const bool bInFlag) {
}

void UGadgetCustomSubTypeBox::SetInvalidCategoryPatternOpaque(const bool bInVisible) {
}

void UGadgetCustomSubTypeBox::SetIconCanvasOpaque(const bool bInVisible) {
}

void UGadgetCustomSubTypeBox::SetGadgetKitPatternOpaque(const bool bInVisible) {
}

void UGadgetCustomSubTypeBox::SetGadgetCategory(const EGadgetCategory InGadgetCategory, const bool bInOverrideBlackColor) {
}

void UGadgetCustomSubTypeBox::SetCursorVisible(const bool bInVisible) {
}

void UGadgetCustomSubTypeBox::RightScrollAnimStarted_Implementation() {
}

void UGadgetCustomSubTypeBox::RightScrollAnimFinished_Implementation() {
}


void UGadgetCustomSubTypeBox::NativePreConstruct() {
}

void UGadgetCustomSubTypeBox::NativeOnInitialized() {
}

void UGadgetCustomSubTypeBox::NativeConstruct() {
}

void UGadgetCustomSubTypeBox::LeftScrollAnimStarted_Implementation() {
}

void UGadgetCustomSubTypeBox::LeftScrollAnimFinished_Implementation() {
}

bool UGadgetCustomSubTypeBox::IsPlayScrollAnim() const {
    return false;
}

bool UGadgetCustomSubTypeBox::IsLeftRightScrolledTriggerCancel() const {
    return false;
}

EGadgetCategory UGadgetCustomSubTypeBox::GetGadgetCategory() const {
    return EGadgetCategory::Item;
}

EGadgetState UGadgetCustomSubTypeBox::GetCenterGadgetState() {
    return EGadgetState::Attachable;
}

EGadgetId UGadgetCustomSubTypeBox::GetCenterGadgetId() {
    return EGadgetId::NonGadget;
}

UGadgetCustomSubTypeIcon* UGadgetCustomSubTypeBox::GetCenterGadgetIcon() {
    return NULL;
}

EGadgetCategory UGadgetCustomSubTypeBox::GetCenterGadgetCategory() {
    return EGadgetCategory::Item;
}

EGadgetId UGadgetCustomSubTypeBox::FindIconGadgetId(const TArray<EGadgetId> InGadgetIds, const EGadgetId InFocusGadgetId, int32 AddIndex) {
    return EGadgetId::NonGadget;
}

void UGadgetCustomSubTypeBox::CreateGadgetCategoryBackGroundColorMaterial() {
}

void UGadgetCustomSubTypeBox::ApplyIconTexture(const int32 InIconIndex, UTexture2D* InTexture2D) {
}

void UGadgetCustomSubTypeBox::ApplyGadgetIcons(const EGadgetCategory InCategory, const TArray<EGadgetId>& InGadgetIds, const EGadgetId InFocusGadgetId, const FGadgetPlateUIData InGadgetPresetData, const int32 InGadgetPlateFocusSlotIndex) {
}


