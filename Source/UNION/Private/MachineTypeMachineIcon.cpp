#include "MachineTypeMachineIcon.h"

UMachineTypeMachineIcon::UMachineTypeMachineIcon() : UUserWidget(FObjectInitializer::Get()) {
    this->DMY_3DMachine = NULL;
    this->WidgetSwitcher_CutomText = NULL;
    this->DSP_Icon_Custom = NULL;
    this->DSP_Icon_New = NULL;
    this->TXT_NEW = NULL;
}

void UMachineTypeMachineIcon::SetupText(int32 InIndex, bool IsVisible) {
}

void UMachineTypeMachineIcon::SetTextureScaleWithYTransrate(float InScaleRate, float InY) {
}

void UMachineTypeMachineIcon::SetTextureScale(float InScaleRate) {
}

void UMachineTypeMachineIcon::SetTexture(UTexture2D* InTexture) {
}

void UMachineTypeMachineIcon::SetNewVisible(bool IsVisible) {
}

void UMachineTypeMachineIcon::SetNewText(FText IsText) {
}

void UMachineTypeMachineIcon::SetMachineID(EMachineId InMachineID) {
}

void UMachineTypeMachineIcon::SetIndex(int32 InIndex) {
}

void UMachineTypeMachineIcon::SetIconCustomVisible(bool IsVisible) {
}

EMachineId UMachineTypeMachineIcon::GetMachineId() const {
    return EMachineId::SPD_01;
}

int32 UMachineTypeMachineIcon::GetIndex() const {
    return 0;
}


