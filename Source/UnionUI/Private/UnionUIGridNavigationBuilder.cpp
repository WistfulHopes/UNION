#include "UnionUIGridNavigationBuilder.h"

UUnionUIGridNavigationBuilder::UUnionUIGridNavigationBuilder() {
    this->EventHandler.AddDefaulted(1);
}

void UUnionUIGridNavigationBuilder::SetSideNavigationRuleWrap(EUnionUIControlDir InDirection) {
}

void UUnionUIGridNavigationBuilder::SetSideNavigationRuleExplicit(EUnionUIControlDir InDirection, UWidget* InWidget) {
}

void UUnionUIGridNavigationBuilder::SetSideNavigationRuleCustom(EUnionUIControlDir InDirection, const FUnionUIGridSideNavigationCustomDelegate& InCustomDelegate) {
}

void UUnionUIGridNavigationBuilder::SetSideNavigation(const FUnionUIGridSideNavigation& InSideNavigation) {
}

FUnionUIGridSideNavigation UUnionUIGridNavigationBuilder::GetSideNavigation() {
    return FUnionUIGridSideNavigation{};
}

void UUnionUIGridNavigationBuilder::GetButtonsByRowIndex(int32 InRowIndex, TArray<UUnionUIButtonBase*>& OutButtons) {
}

void UUnionUIGridNavigationBuilder::GetButtonsByColumnIndex(int32 InColumnIndex, TArray<UUnionUIButtonBase*>& OutButtons) {
}

void UUnionUIGridNavigationBuilder::Clear() {
}

void UUnionUIGridNavigationBuilder::Build() {
}

void UUnionUIGridNavigationBuilder::AddButton(UUnionUIButtonBase* InButton, int32 InRowIndex, int32 InColumnIndex) {
}


