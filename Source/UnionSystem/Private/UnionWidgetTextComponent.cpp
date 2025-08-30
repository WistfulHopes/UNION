#include "UnionWidgetTextComponent.h"
#include "Components/WidgetComponent.h"

UUnionWidgetTextComponent::UUnionWidgetTextComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BlendMode = EWidgetBlendMode::Transparent;
    this->_IsReadOnly = false;
    this->_IsPassword = false;
    this->_MinDesiredWidth = 0.00f;
    this->_Justification = ETextJustify::Left;
}

void UUnionWidgetTextComponent::SetText(const FText& Text) {
}

void UUnionWidgetTextComponent::SetAppearance(const FEditableTextStyle& Style, bool IsReadOnly, bool IsPassword, float MinDesiredWidth, TEnumAsByte<ETextJustify::Type> Justification) {
}


