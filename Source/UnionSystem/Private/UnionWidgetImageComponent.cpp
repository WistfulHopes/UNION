#include "UnionWidgetImageComponent.h"

UUnionWidgetImageComponent::UUnionWidgetImageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CastShadow = false;
    this->_BrushImageTexture = NULL;
}

void UUnionWidgetImageComponent::SetColor(const FLinearColor& TintColorAndOpacity, bool Applying) {
}

void UUnionWidgetImageComponent::SetBrushImageTexture(UTexture2D* Texture, bool Applying) {
}

void UUnionWidgetImageComponent::CreateOrUpdateMesh(bool ForceCreate) {
}


