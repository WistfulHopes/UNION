#include "CustomRaceSubOptionSettingBtn.h"

UCustomRaceSubOptionSettingBtn::UCustomRaceSubOptionSettingBtn() {
    this->PatImageMaterial = NULL;
    this->EdgeType = EUnionUIControlDir::None;
    this->bIgnore = false;
    this->LastLoopAnim = NULL;
    this->CurrentLoopState = EUnionUIButtonLoopAnim::LockActiveLoop;
    this->Btn_Active_Loop = NULL;
    this->Btn_Select_Loop = NULL;
    this->Btn_NonActive_Loop = NULL;
}




void UCustomRaceSubOptionSettingBtn::FireLoopAnimation(EUnionUIButtonLoopAnim InLoopAnim) {
}


