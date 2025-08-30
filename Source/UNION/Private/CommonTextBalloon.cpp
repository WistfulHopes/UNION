#include "CommonTextBalloon.h"

UCommonTextBalloon::UCommonTextBalloon() : UUserWidget(FObjectInitializer::Get()) {
    this->PAT_TextBalloon = NULL;
    this->WBP_FontScroll_PartsName = NULL;
    this->PatternIndex = 0;
}

void UCommonTextBalloon::SetVisible(bool Visible) {
}

void UCommonTextBalloon::SetText(const FText& InText) {
}

void UCommonTextBalloon::SetPattern(int32 InPatternIndex) {
}



