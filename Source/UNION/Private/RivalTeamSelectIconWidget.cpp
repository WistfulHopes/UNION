#include "RivalTeamSelectIconWidget.h"

URivalTeamSelectIconWidget::URivalTeamSelectIconWidget() {
    this->DMY_TeamIcon_Image = NULL;
    this->DSP_TeamIcon_Lock = NULL;
    this->DMY_Complet_01 = NULL;
    this->DMY_Complet_02 = NULL;
    this->DMY_Complet_03 = NULL;
    this->DSP_LoadingCharaIcon = NULL;
}

void URivalTeamSelectIconWidget::Unfocus() {
}






ERivalTeamId URivalTeamSelectIconWidget::GetTeamID() const {
    return ERivalTeamId::Alpha01;
}

void URivalTeamSelectIconWidget::Focus() {
}

void URivalTeamSelectIconWidget::Back() {
}


