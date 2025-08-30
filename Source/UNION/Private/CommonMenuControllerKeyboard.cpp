#include "CommonMenuControllerKeyboard.h"

UCommonMenuControllerKeyboard::UCommonMenuControllerKeyboard() : UUserWidget(FObjectInitializer::Get()) {
    this->WidgetSwitcher = NULL;
    this->PAT_Key = NULL;
    this->PAT_Key_Material = NULL;
    this->TXT_Key = NULL;
    this->PAT_Mouse_Material = NULL;
}

void UCommonMenuControllerKeyboard::SetTextureParamIndex(int32 InTextureIndex) {
}

void UCommonMenuControllerKeyboard::SetKeyNameText(const FText& InText) {
}

void UCommonMenuControllerKeyboard::SetFKey(const FKey& InKey) {
}

int32 UCommonMenuControllerKeyboard::GetMouseButtonIndex(FKey InKey) const {
    return 0;
}


