#include "UnionUIFade.h"

UUnionUIFade::UUnionUIFade() : UUserWidget(FObjectInitializer::Get()) {
    this->LastFadeColor = EUnionUIFadeColor::Black;
    this->LastFadeDirection = EUnionUIFadeDirection::FadeOut;
}



void UUnionUIFade::FinishedFade(EUnionUIFadeDirection FadeDirection) {
}




