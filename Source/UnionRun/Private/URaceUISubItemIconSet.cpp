#include "URaceUISubItemIconSet.h"

UURaceUISubItemIconSet::UURaceUISubItemIconSet() : UUserWidget(FObjectInitializer::Get()) {
    this->IsItemStockTrading = false;
    this->PlayerControllerIndex = 0;
    this->bHasTradeGadget = false;
    this->bTradeGrayOut = false;
    this->TradeIcon = NULL;
}

void UURaceUISubItemIconSet::SetVisibilityIrregular(EItemInfoType ItemInfoType, bool IsVisible) {
}

void UURaceUISubItemIconSet::SetTradeActive_Implementation(bool bActive) {
}

void UURaceUISubItemIconSet::SetItemTradeKey_Implementation(const FKey& InKey, bool IsKeyboard) {
}

void UURaceUISubItemIconSet::SetItemPanelVisibility_Implementation(bool bVisibility) {
}

bool UURaceUISubItemIconSet::IsTradeCoolTime(int32 PlayerIndex) {
    return false;
}

bool UURaceUISubItemIconSet::IsSummonAvailable(int32 PlayerIndex, EItemInfoType ItemInfoType) {
    return false;
}

bool UURaceUISubItemIconSet::IsIrregularChargeItem(EItemInfoType ItemInfoType) const {
    return false;
}

void UURaceUISubItemIconSet::InitIrregular() {
}

bool UURaceUISubItemIconSet::HasItemSummon() const {
    return false;
}

bool UURaceUISubItemIconSet::HasItemStockTrade() const {
    return false;
}

bool UURaceUISubItemIconSet::HasItemStockPlus() const {
    return false;
}

float UURaceUISubItemIconSet::GetTradeCoolTimeParam(int32 PlayerIndex) {
    return 0.0f;
}

int32 UURaceUISubItemIconSet::GetRacerIndex(int32 PlayerIndex) const {
    return 0;
}

EItemStatus UURaceUISubItemIconSet::GetItemStatus(EItemInfoType ItemInfoType) const {
    return EItemStatus::NonItem;
}

int32 UURaceUISubItemIconSet::GetItemPackageRingCount(int32 PlayerIndex, EItemInfoType ItemInfoType) {
    return 0;
}

int32 UURaceUISubItemIconSet::GetItemHoldCount(int32 PlayerIndex, EItemInfoType ItemInfoType) {
    return 0;
}

int32 UURaceUISubItemIconSet::GetHoldItemCount(int32 RacerIndex) const {
    return 0;
}


