#include "DodonpaEventDisplayWidget.h"

UDodonpaEventDisplayWidget::UDodonpaEventDisplayWidget() : UUserWidget(FObjectInitializer::Get()) {
}

void UDodonpaEventDisplayWidget::SetFestaInfoTexture_Implementation(UTexture2D* Texture) {
}

UWidgetAnimation* UDodonpaEventDisplayWidget::PlayNextAnimation() {
    return NULL;
}

UWidgetAnimation* UDodonpaEventDisplayWidget::PlayFirstAnimation() {
    return NULL;
}

UWidgetAnimation* UDodonpaEventDisplayWidget::PlayAnimationByName(const FName& AnimationName, float PlaySpeed, int32 NumLoopsToPlay) {
    return NULL;
}

bool UDodonpaEventDisplayWidget::IsExistNextAnim() {
    return false;
}


