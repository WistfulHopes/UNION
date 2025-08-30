#include "RivalTeamSelectWidget.h"

URivalTeamSelectWidget::URivalTeamSelectWidget() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->WidgetSwitcher_Frame_TeamColor = NULL;
    this->Border_RivalTeam = NULL;
    this->DMY_RivalTeamCut = NULL;
    this->DMY_RivalTeamMachine = NULL;
    this->WBP_PartyRace_RivalTeamName = NULL;
    this->WBP_CMN_RivalLevel = NULL;
    this->HBRivalTeamIcon = NULL;
    this->DSP_Lock_Alpha = NULL;
    this->DSP_LoadingMachine = NULL;
    this->DSP_LoadingChara = NULL;
    this->DSP_LoadingGadget = NULL;
    this->_GadgetPlateWidget = NULL;
    this->bEnableColorLock = true;
    this->bEnableAlphaRom = false;
}


void URivalTeamSelectWidget::SetupScreen(ERivalTeamId InTeamID) {
}

void URivalTeamSelectWidget::SetLevel(ERivalTeamId InTeamID, bool bPlayInitAnim) {
}

void URivalTeamSelectWidget::SetGadgetVisibilityForGadgetChanged(const TArray<TSoftObjectPtr<UTexture2D>>& GadgetIconSoftTextures) {
}




void URivalTeamSelectWidget::OutAnimationFinished() {
}

bool URivalTeamSelectWidget::IsLock(ERivalTeamId InTeamID) const {
    return false;
}

void URivalTeamSelectWidget::InAnimationFinished() {
}

void URivalTeamSelectWidget::Cancel() {
}



