#include "ClassSelectTrophyUI.h"

UClassSelectTrophyUI::UClassSelectTrophyUI() : UUserWidget(FObjectInitializer::Get()) {
    this->GrandPrixId = EGrandPrixId::FirstGP;
    this->GrandPrixTrophy = NULL;
    this->TrophyVisibleSwitcher = NULL;
}

bool UClassSelectTrophyUI::SetProgress(EGrandPrixProgressId InProgress) {
    return false;
}


