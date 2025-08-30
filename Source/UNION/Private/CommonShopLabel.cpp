#include "CommonShopLabel.h"

UCommonShopLabel::UCommonShopLabel() : UUserWidget(FObjectInitializer::Get()) {
    this->BG = NULL;
    this->WSIcons = NULL;
    this->WSLock = NULL;
}

void UCommonShopLabel::SetupPrice(int32 InPrice, const FSlateColor& InColor) {
}

void UCommonShopLabel::SetupNone() {
}

void UCommonShopLabel::SetupLock(bool IsLock) {
}




