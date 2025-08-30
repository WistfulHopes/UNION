#include "RivalSelectWidget.h"

URivalSelectWidget::URivalSelectWidget() {
    this->_CharaSelectWidget = NULL;
    this->_CharaCutInWidget = NULL;
    this->_CharaInfoWidget = NULL;
    this->_NextRivalMarkWidget = NULL;
    this->_BonusProgressWidget = NULL;
    this->_RivalLevelWidget = NULL;
    this->_WinInfoWidget = NULL;
    this->_NumKnockdownCharaTextBlock = NULL;
    this->_InputReceiver = NULL;
    this->RivalSelect_In = NULL;
    this->RivalSelect_Loop = NULL;
    this->RivalSelect_Out = NULL;
}

void URivalSelectWidget::SetupBattleResult(const EDriverId RivalDriverId, uint8 InRivalLevel, uint8 InBaseRivalLevel, const TArray<uint8>& InSpeedClassTopKnockoutArray) {
}

void URivalSelectWidget::SetDebugFlags_Implementation(const bool SetEnabled, const bool SetPlayRivalIconMax) {
}

void URivalSelectWidget::OnRightShoulderPressed(UObject* Object) {
}

void URivalSelectWidget::OnLeftShoulderPressed(UObject* Object) {
}

void URivalSelectWidget::OnDecision(int32 PlayerControllerIndex, int32 CharaIndex) {
}

void URivalSelectWidget::OnCanceled(int32 PlayerControllerIndex) {
}

void URivalSelectWidget::OnButtonFocused(int32 PlayerControllerIndex, int32 CharaIndex) {
}

bool URivalSelectWidget::IsRivalLevelEnhanced() const {
    return false;
}

bool URivalSelectWidget::IsDebugPlayAnimRivalIconIn() const {
    return false;
}

bool URivalSelectWidget::IsDebugMode() const {
    return false;
}

uint8 URivalSelectWidget::GetSelectedRivalLevel() const {
    return 0;
}

EDriverId URivalSelectWidget::GetSelectedRivalDriverId() const {
    return EDriverId::Sonic;
}

TArray<uint8> URivalSelectWidget::GetRivalTopKnockdownLevelArray() const {
    return TArray<uint8>();
}

EDriverId URivalSelectWidget::GetFocusDriverId() const {
    return EDriverId::Sonic;
}

void URivalSelectWidget::GetDriverData(const EDriverId DriverId, bool& bFind, FDriverData& DriverData) const {
}

uint8 URivalSelectWidget::GetBaseRivalLevel() const {
    return 0;
}

void URivalSelectWidget::BeginGrandPrixBattleResult_Implementation() {
}


