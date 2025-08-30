#include "CommonUIControllerWrapper.h"

UCommonUIControllerWrapper::UCommonUIControllerWrapper() : UUserWidget(FObjectInitializer::Get()) {
    this->Overlay = NULL;
    this->WidgetSwitcher_PC = NULL;
    this->WBP_Tutorial_Controller_Key = NULL;
}

void UCommonUIControllerWrapper::SetViewTableIndex(int32 InViewTableIndex) {
}

void UCommonUIControllerWrapper::SetDeviceView(bool bIsGamePad) {
}




