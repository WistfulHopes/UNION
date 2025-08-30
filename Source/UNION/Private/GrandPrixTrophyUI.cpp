#include "GrandPrixTrophyUI.h"

UGrandPrixTrophyUI::UGrandPrixTrophyUI() : UUserWidget(FObjectInitializer::Get()) {
    this->GrandPrixId = EGrandPrixId::FirstGP;
    this->TrophyMaterialGold = NULL;
    this->TrophyMaterialGold_Ticket = NULL;
    this->TrophyMaterialSilver = NULL;
    this->TrophyMaterialBronze = NULL;
    this->TrophyGlowMaterialGold = NULL;
    this->TrophyGlowMaterialGold_Ticket = NULL;
    this->TrophyGlowMaterialSilver = NULL;
    this->TrophyGlowMaterialBronze = NULL;
    this->DSP_PAT_Achievement_GrandPrix = NULL;
    this->DSP_PAT_Eff_Achievement_GrandPrix = NULL;
}

bool UGrandPrixTrophyUI::SetGrandPrixProgress_Implementation(EGrandPrixProgressId InProgress) {
    return false;
}

void UGrandPrixTrophyUI::SetGrandPrix_Implementation(EGrandPrixId InGrandprixId) {
}


