#include "PlatformStoreMessageDataAsset.h"

UPlatformStoreMessageDataAsset::UPlatformStoreMessageDataAsset() {
}

FText UPlatformStoreMessageDataAsset::GetPlatformStoreMessage(EPlatformStoreType PlatformType) const {
    return FText::GetEmpty();
}

void UPlatformStoreMessageDataAsset::GetPlatformStoreButtonText(FText& AcceptText, FText& CancelText) {
}

FText UPlatformStoreMessageDataAsset::GetPlatformStoreButtonMessage() const {
    return FText::GetEmpty();
}

EPlatformStoreType UPlatformStoreMessageDataAsset::GetCurrentPlatform() const {
    return EPlatformStoreType::PlayStationStore;
}


