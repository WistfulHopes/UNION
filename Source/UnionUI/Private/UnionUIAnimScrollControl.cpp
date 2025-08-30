#include "UnionUIAnimScrollControl.h"

UUnionUIAnimScrollControl::UUnionUIAnimScrollControl() {
    this->ControlVH = EUnionUIControlVH::Vertical;
    this->PresentElementNum = 7;
    this->ElementNum = 7;
    this->CenterElementIndex = 0;
    this->LastAnimDownRight = true;
    this->LastPlayAnimation = NULL;
    this->IdleAnim = NULL;
    this->PresentElementArr.AddDefaulted(1);
    this->ElementArr.AddDefaulted(1);
    this->bControllable = false;
}

void UUnionUIAnimScrollControl::UpdateCenterElementIndex() {
}

void UUnionUIAnimScrollControl::UpdateAnimation_Implementation() {
}

void UUnionUIAnimScrollControl::SetScrollAnimation(EUnionUIControlDir ControlDir, UWidgetAnimation* Animation) {
}


void UUnionUIAnimScrollControl::SetControllableFlag(bool InControllable) {
}

void UUnionUIAnimScrollControl::Repopurate(bool bDownRight) {
}

void UUnionUIAnimScrollControl::PlayScrollAnimation(EUnionUIControlDir ScrollDir) {
}

void UUnionUIAnimScrollControl::OnFinishedScrollAnimationBP_Implementation() {
}

void UUnionUIAnimScrollControl::OnFinishedScrollAnimation() {
}

int32 UUnionUIAnimScrollControl::GetElementArrIndexbyPivot(int32 Distance) const {
    return 0;
}

bool UUnionUIAnimScrollControl::GetControllableFlag() const {
    return false;
}

int32 UUnionUIAnimScrollControl::GetCenterElementIndex() const {
    return 0;
}

int32 UUnionUIAnimScrollControl::CalcNextCenterElementIndex(bool InLastAnimDownRight) {
    return 0;
}


