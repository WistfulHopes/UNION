#include "MachineTypeScrollControl.h"

UMachineTypeScrollControl::UMachineTypeScrollControl() {
    this->PresentElementArr.AddDefaulted(1);
    this->ElementArr.AddDefaulted(1);
    this->PlayerIndex = 0;
    this->AnimVisible_00 = ESlateVisibility::Visible;
    this->AnimVisible_01 = ESlateVisibility::Visible;
    this->AnimVisible_02 = ESlateVisibility::Visible;
    this->AnimVisible_03 = ESlateVisibility::Visible;
    this->AnimVisible_04 = ESlateVisibility::Visible;
    this->AnimVisible_05 = ESlateVisibility::Visible;
    this->AnimVisible_06 = ESlateVisibility::Visible;
}











void UMachineTypeScrollControl::SetEnableKey(bool IsEnable) {
}




void UMachineTypeScrollControl::SetDecidedAll(bool IsAllDecided) {
}

void UMachineTypeScrollControl::SetDecided(bool IsDecided) {
}



void UMachineTypeScrollControl::SetCanScroll(bool bInCanScroll) {
}

void UMachineTypeScrollControl::ResetParam() {
}







void UMachineTypeScrollControl::OnCancelByCross(UUnionUIButtonBase* InButton) {
}


bool UMachineTypeScrollControl::IsCanMove() const {
    return false;
}




int32 UMachineTypeScrollControl::GetPlayerIndex() const {
    return 0;
}

void UMachineTypeScrollControl::GetNextBoxInfo(bool DownRight, ECarStatusType& machineType, EMachineId& MachineId) {
}

ECarStatusType UMachineTypeScrollControl::GetCurrentMachineType() const {
    return ECarStatusType::CarStatusSpeed;
}

void UMachineTypeScrollControl::GetCurrentCenterBoxInfo(int32& IndexOnBox, ECarStatusType& machineType, int32& CenterElementTypeIndex, EMachineId& MachineId) {
}


ECarStatusType UMachineTypeScrollControl::AddLoopMachineType(ECarStatusType InMachineType, int32 InAdd) {
    return ECarStatusType::CarStatusSpeed;
}


