#include "CommonScrollPointBox.h"

UCommonScrollPointBox::UCommonScrollPointBox() : UUserWidget(FObjectInitializer::Get()) {
    this->bDoInitResize = true;
    this->SnapPointMaterial = NULL;
    this->ItemBox = NULL;
}

void UCommonScrollPointBox::SetupByItemNum(int32 InItemNum) {
}

void UCommonScrollPointBox::Setup() {
}

void UCommonScrollPointBox::SetItemIconIndexByPlayerIndex(int32 InItemIndex, int32 InPlayerIndex) {
}

void UCommonScrollPointBox::SetItemIconIndex(int32 InItemIndex, EScrollPointBoxItemIconIndex InIconIndex) {
}

void UCommonScrollPointBox::SetImage(const int32 InChildIndex, const float InValue) {
}

void UCommonScrollPointBox::Resize_Implementation(const int32 InNewSize) {
}

void UCommonScrollPointBox::GetItems(TArray<UImage*>& OutItems) const {
}

bool UCommonScrollPointBox::DoInitResize() const {
    return false;
}


