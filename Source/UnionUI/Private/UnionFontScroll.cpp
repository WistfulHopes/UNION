#include "UnionFontScroll.h"

UUnionFontScroll::UUnionFontScroll() : UUserWidget(FObjectInitializer::Get()) {
    this->TextJustification = ETextJustify::Center;
    this->TextScrollSpeed = 1.00f;
    this->TextStartScrollDelayTime = 0.20f;
    this->SizeBoxLimitX = 750.00f;
    this->EndBlankCnt = 10;
    this->SizeBoxAdjustValue = 1.00f;
    this->CanDisappearSlowly = true;
    this->GradiationSpeed = 1.00f;
    this->LeftVisible = false;
    this->LeftAppearSpeed = 1.00f;
    this->StartLocationMultiplier = 1.00f;
    this->AdjustRetainerBoxSize = 50.00f;
    this->CenterWhileNotScroll = false;
    this->LeftStartLocationWhenScroll = 0.00f;
}

void UUnionFontScroll::UpdateText(FText InText) {
}

void UUnionFontScroll::StopScroll() {
}

void UUnionFontScroll::StartScrollDelayEvent() {
}

void UUnionFontScroll::StartScroll() {
}

void UUnionFontScroll::SetupTextStartPosition() {
}

void UUnionFontScroll::SetupTextScroll() {
}

void UUnionFontScroll::SetText(FText InText) {
}

void UUnionFontScroll::SetIsRefreshingText(bool Refreshing) {
}



