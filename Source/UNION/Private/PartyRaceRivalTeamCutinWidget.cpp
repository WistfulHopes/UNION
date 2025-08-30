#include "PartyRaceRivalTeamCutinWidget.h"

UPartyRaceRivalTeamCutinWidget::UPartyRaceRivalTeamCutinWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->_RootCanvasPanel = NULL;
    this->_LeaderImage = NULL;
    this->_MemberImage = NULL;
    this->_MachineImage = NULL;
    this->_TeamIconImage = NULL;
    this->_TeamNamePlateImage = NULL;
    this->_TeamNameTextBlock = NULL;
    this->_RivalLevelWidget = NULL;
    this->RivalCutin_InOut = NULL;
    this->RivalCutin_InOut_Next = NULL;
}

void UPartyRaceRivalTeamCutinWidget::StartLoad(ERivalTeamId RivalTeamId, int32 RivalTeamLevel) {
}

void UPartyRaceRivalTeamCutinWidget::Play(bool PlayNextCutin) {
}

bool UPartyRaceRivalTeamCutinWidget::IsReady() const {
    return false;
}


