#include "UnionUIGridLayoutControl.h"

UUnionUIGridLayoutControl::UUnionUIGridLayoutControl() {
}

void UUnionUIGridLayoutControl::Setup() {
}

void UUnionUIGridLayoutControl::SetSideNavRuleWrap(EUnionUIControlDir InDirection) {
}

void UUnionUIGridLayoutControl::SetSideNavRuleExplicit(EUnionUIControlDir InDirection, UWidget* InWidget) {
}

void UUnionUIGridLayoutControl::SetSideNavRuleCustom(EUnionUIControlDir InDirection, const FUnionUIGridLayoutSideNavCustomDelegate& InCustomDelegate) {
}

void UUnionUIGridLayoutControl::SetSideNavRuleBase(EUnionUIControlDir InDirection, EUnionUIGridLayoutSideNavRule InRule) {
}

void UUnionUIGridLayoutControl::SetSideNav(const FUnionUIGridLayoutSideNav& InSideNav) {
}

FUnionUIGridLayoutSideNav UUnionUIGridLayoutControl::GetSideNav() const {
    return FUnionUIGridLayoutSideNav{};
}

int32 UUnionUIGridLayoutControl::GetCurrentLocationY() const {
    return 0;
}

int32 UUnionUIGridLayoutControl::GetCurrentLocationX() const {
    return 0;
}

void UUnionUIGridLayoutControl::GetButtonDataListByLocationY(int32 InLocationX, TArray<FUnionUIGridLayoutButtonData>& OutButtonDataList) const {
}

void UUnionUIGridLayoutControl::GetButtonDataListByLocationX(int32 InLocationX, TArray<FUnionUIGridLayoutButtonData>& OutButtonDataList) const {
}

TArray<FUnionUIGridLayoutButtonData> UUnionUIGridLayoutControl::GetButtonDataList() {
    return TArray<FUnionUIGridLayoutButtonData>();
}

void UUnionUIGridLayoutControl::Clear() {
}

void UUnionUIGridLayoutControl::Button_OnFocusEvent(UUnionUIButtonBase* Button) {
}

void UUnionUIGridLayoutControl::Button_OnDirectionEvent(UUnionUIButtonBase* Button, EUnionUIControlDir Dir) {
}

void UUnionUIGridLayoutControl::AddButton(const FUnionUIGridLayoutButtonData& InButtonData) {
}


