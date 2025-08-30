#include "UnionUILoopScrollBox.h"

UUnionUILoopScrollBox::UUnionUILoopScrollBox() {
    this->ElementArr.AddDefaulted(1);
    this->MoveAnim = NULL;
    this->ParentWidget = NULL;
    this->LastAnimDownRight = true;
    this->PivotRate = 1.50f;
    this->AnimRate = 0.00f;
    this->OffsetDir = 1.00f;
    this->ScrollWidth = 300.00f;
    this->IsManualLoopSet = false;
    this->ManualLoopNum = 0;
    this->bControllable = false;
}

void UUnionUILoopScrollBox::UpdateDuaringMoveAnim() {
}

void UUnionUILoopScrollBox::SetMoveAnim(UUserWidget* InParentWidget, UWidgetAnimation* InMoveAnim) {
}

void UUnionUILoopScrollBox::SetElementArr(const TArray<UObject*>& InElementArr) {
}

void UUnionUILoopScrollBox::SetControllableFlag(bool InControllable) {
}

void UUnionUILoopScrollBox::Repopurate(bool bDownRight) {
}

void UUnionUILoopScrollBox::PlayMoveAnim(bool IsDownRight, bool bInImmediateReflection) {
}

void UUnionUILoopScrollBox::OnMoveAnimFinishedBP_Implementation() {
}

void UUnionUILoopScrollBox::OnMoveAnimFinished() {
}

bool UUnionUILoopScrollBox::GetControllableFlag() const {
    return false;
}

void UUnionUILoopScrollBox::ArrayShift(bool bDownRight) {
}


