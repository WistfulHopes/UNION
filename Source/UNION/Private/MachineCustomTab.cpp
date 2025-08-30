#include "MachineCustomTab.h"

UMachineCustomTab::UMachineCustomTab() : UUserWidget(FObjectInitializer::Get()) {
    this->TabList = NULL;
    this->MenuInputReceiveObject = NULL;
}

void UMachineCustomTab::SetNewIconAll(const TArray<bool>& InNewFlag) {
}

void UMachineCustomTab::SetNewIcon(int32 InIndex, bool InNewFlag) {
}

void UMachineCustomTab::SetEnableAll(bool IsEnable) {
}

void UMachineCustomTab::SetEnable(int32 InIndex, bool IsEnable) {
}

void UMachineCustomTab::RegistInputReceiver() {
}


void UMachineCustomTab::OnTabPressed(EMachineCustomizeTabID InTabID) {
}

void UMachineCustomTab::OnRShoulderPressed(UObject* Object) {
}

void UMachineCustomTab::OnLShoulderPressed(UObject* Object) {
}

void UMachineCustomTab::DeregistInputReceiver() {
}


