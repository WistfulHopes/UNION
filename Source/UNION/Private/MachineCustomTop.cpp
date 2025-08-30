#include "MachineCustomTop.h"

UMachineCustomTop::UMachineCustomTop() : UUserWidget(FObjectInitializer::Get()) {
    this->WBP_MachineCustom_Sub_CurrentWindow = NULL;
    this->WBP_MachineSelect_Sub_TypeWindow = NULL;
}


void UMachineCustomTop::ShowDonpaTicket() {
}






void UMachineCustomTop::HiddenDonpaTicket() {
}

UMachineTypeScrollControl* UMachineCustomTop::GetMachineTypeSelectWindow() const {
    return NULL;
}

UMachineCustomInfoWindow* UMachineCustomTop::GetMachineInfoWidget() const {
    return NULL;
}



