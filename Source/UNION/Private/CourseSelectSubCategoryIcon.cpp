#include "CourseSelectSubCategoryIcon.h"

UCourseSelectSubCategoryIcon::UCourseSelectSubCategoryIcon() {
    this->_CourseIconImage = NULL;
    this->_CourseIconEmeraldMaskImage = NULL;
    this->_TrophyUI = NULL;
    this->_EffSet = NULL;
    this->_CursorImage = NULL;
    this->_CursorSwitcher = NULL;
    this->GrandPrixId = EGrandPrixId::FirstGP;
    this->CurrentLoopAnim = NULL;
    this->bWaitForAnimationToDecide = false;
    this->Btn_Lock_Loop = NULL;
    this->Btn_Select_Out = NULL;
}

void UCourseSelectSubCategoryIcon::UpdateVisualType(ECourseSelectCategoryIconVisualType Type) {
}

void UCourseSelectSubCategoryIcon::SetWaitForAnimationToDecide(bool InFlag) {
}

void UCourseSelectSubCategoryIcon::SetTrophy(EGrandPrixProgressId GPProgressId) {
}



void UCourseSelectSubCategoryIcon::SetIconTexture(UTexture2D* InTexture) {
}



void UCourseSelectSubCategoryIcon::OnSelected(UUnionUIButtonBaseCore* Button) {
}

void UCourseSelectSubCategoryIcon::OnDeselected(UUnionUIButtonBaseCore* Button) {
}

void UCourseSelectSubCategoryIcon::OnDecided(UUnionUIButtonBaseCore* Button) {
}


