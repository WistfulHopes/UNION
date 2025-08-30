#include "AdvertiseWidget.h"

UAdvertiseWidget::UAdvertiseWidget() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->Controller_Info = NULL;
}

void UAdvertiseWidget::SkipAdvertiseLogo_Implementation() {
}

void UAdvertiseWidget::SetStrapTexture(UTexture2D* InStrapTexture) {
}

void UAdvertiseWidget::PauseAllAdvAnimation_Implementation() {
}

bool UAdvertiseWidget::IsOfficialVersion() {
    return false;
}


void UAdvertiseWidget::FinishAdvertiseMovie_Implementation() {
}

void UAdvertiseWidget::AnimationOut_Implementation() {
}

void UAdvertiseWidget::AnimationIn_Implementation() {
}


