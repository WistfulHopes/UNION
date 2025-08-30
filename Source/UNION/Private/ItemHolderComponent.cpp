#include "ItemHolderComponent.h"

UItemHolderComponent::UItemHolderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bManualUpdate = true;
    this->HoldItemDataTable = NULL;
    this->HoldItemActor = NULL;
}

void UItemHolderComponent::UseItem() {
}

void UItemHolderComponent::UpdateItemPosition() {
}

void UItemHolderComponent::SetupDefaultPosition() {
}

bool UItemHolderComponent::SetupComponent(const EDriverId DriverId) {
    return false;
}

void UItemHolderComponent::SetLightChannels(bool Channel0, bool Channel1, bool Channel2) {
}

void UItemHolderComponent::SetHiddenItem(const bool bHidden) {
}

void UItemHolderComponent::ReleaseItem() {
}

bool UItemHolderComponent::IsDefaultPositionSetup() const {
    return false;
}

bool UItemHolderComponent::HoldItem(const FHoldItemCreateParam& Param) {
    return false;
}


