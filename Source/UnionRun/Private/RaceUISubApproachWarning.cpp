#include "RaceUISubApproachWarning.h"

URaceUISubApproachWarning::URaceUISubApproachWarning() : UUserWidget(FObjectInitializer::Get()) {
    this->ItemIconMaterial = NULL;
    this->ItemIconShadowMaterial = NULL;
    this->CurrentItemId = EItemId::NonItem;
    this->bIsFirstJumpIn = true;
    this->JumpInSound = NULL;
    this->bRacerApproach = false;
    this->bBeepEnable = false;
    this->Distance1 = 80.00f;
    this->Distance2 = 60.00f;
    this->Distance3 = 40.00f;
    this->DistanceDisable = -2.00f;
    this->DistanceMax = 82.00f;
    this->MaxRenderScale = 1.00f;
    this->CanvasPanel_ItemWarning = NULL;
    this->WarningBlink_Add = NULL;
    this->WarningBlink_Base = NULL;
    this->ItemInComming = NULL;
    this->ItemJumpIn = NULL;
    this->BlinkSpeedRate = 1.00f;
}

void URaceUISubApproachWarning::UpdateRacerApproach(const float& ValueCM) {
}

void URaceUISubApproachWarning::UpdateItemEnemyApproach(const float& ValueCM) {
}

void URaceUISubApproachWarning::SetItemId(const int32& InItemId) {
}


void URaceUISubApproachWarning::SetAttackTypeandId(const EUnionAttackItemInfoType& InAttackType, const EItemId& InItemId) {
}

void URaceUISubApproachWarning::OnRemoveApproachWidget() {
}

void URaceUISubApproachWarning::OnPause(bool bInPause) {
}

void URaceUISubApproachWarning::InitRacerApproachSetting() {
}

void URaceUISubApproachWarning::InitItemEnemyApproachSetting(const float& InMaxScale, EUnionAttackItemInfoType AttackItemInfoType, const uint8& AttackItemId) {
}


