#include "CharaMachineSelectSubStateMachine.h"

UCharaMachineSelectSubStateMachine::UCharaMachineSelectSubStateMachine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CustomizeUpdateDelay = 0.50f;
}




void UCharaMachineSelectSubStateMachine::UpdateMachineNameByPartsIds(int32 InPlayerIndex, EMachineId InFrontPartsId, EMachineId InRearPartsId) {
}

void UCharaMachineSelectSubStateMachine::UpdateMachineNameByMachineId(int32 InPlayerIndex, EMachineId InMachineID) {
}




void UCharaMachineSelectSubStateMachine::SetupMachineTypeSelectWindow(int32 InPlayerIndex) {
}


void UCharaMachineSelectSubStateMachine::SetRacerVisible(bool IsVisible) {
}

void UCharaMachineSelectSubStateMachine::SetNextButtonVisible(bool IsVisible) {
}

void UCharaMachineSelectSubStateMachine::SetMachineTypeSelectDecidedAll(bool InDecidedAll) {
}

void UCharaMachineSelectSubStateMachine::SetMachineTypeSelectCanFocus(bool InCanFocus) {
}

bool UCharaMachineSelectSubStateMachine::IsAllPlayerSelected() const {
    return false;
}

ECarStatusType UCharaMachineSelectSubStateMachine::GetSelectedMachineType(int32 InPlayerIndex) const {
    return ECarStatusType::CarStatusSpeed;
}

EMachineId UCharaMachineSelectSubStateMachine::GetSelectedMachineID(int32 InPlayerIndex) const {
    return EMachineId::SPD_01;
}

FUserMachineCustomizeData UCharaMachineSelectSubStateMachine::GetSelectedMachineCustomData(int32 InPlayerIndex) const {
    return FUserMachineCustomizeData{};
}

TArray<AMenuRacerBase*> UCharaMachineSelectSubStateMachine::GetRacerList() const {
    return TArray<AMenuRacerBase*>();
}

UMachineTypeScrollControl* UCharaMachineSelectSubStateMachine::GetMachineTypeSelectWindow(int32 InPlayerIndex) const {
    return NULL;
}

FTimerHandle UCharaMachineSelectSubStateMachine::GetMachinePartsUpdateTimerHandle(int32 InPlayerIndex) const {
    return FTimerHandle{};
}

UMachinePartsSelectWindow* UCharaMachineSelectSubStateMachine::GetMachinePartsSelectWindow(int32 InPlayerIndex) const {
    return NULL;
}

UMachineColorSelectWindow* UCharaMachineSelectSubStateMachine::GetMachineColorSelectWindow(int32 InPlayerIndex) const {
    return NULL;
}


UCharaMachineSelectBase* UCharaMachineSelectSubStateMachine::GetCharaMachineSubWindow(int32 InPlayerIndex) const {
    return NULL;
}

void UCharaMachineSelectSubStateMachine::FinalizeTimer() {
}

void UCharaMachineSelectSubStateMachine::DecideRacer(int32 InPlayerIndex) {
}

void UCharaMachineSelectSubStateMachine::CharaMachineSelectOnMachinePartsFocus(int32 InPlayerIndex, EMachineId InFrontPartsId, EMachineId InRearPartsId, EMachineId InTirePartsId) {
}




