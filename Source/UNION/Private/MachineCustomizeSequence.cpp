#include "MachineCustomizeSequence.h"

AMachineCustomizeSequence::AMachineCustomizeSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AuraSelectState = NULL;
}

void AMachineCustomizeSequence::UpdateTabs() {
}




void AMachineCustomizeSequence::UpdateMachineInfoWidgetBySelectedData() {
}


void AMachineCustomizeSequence::SetupTabs() {
}


void AMachineCustomizeSequence::SetSelectedMachineType(ECarStatusType InSelectedMachineType) {
}

void AMachineCustomizeSequence::SetSelectedMachineID(EMachineId InSelectedMachineId) {
}

void AMachineCustomizeSequence::SetSelectedMachineCustomizeHornType(EMachineHornType InHornType) {
}

void AMachineCustomizeSequence::SetSelectedMachineCustomizeData(const FUserMachineCustomizeData& InMachineCustomizeData) {
}

void AMachineCustomizeSequence::SetSelectedMachineCustomizeAuraID(EMachineAuraId InAuraID) {
}

void AMachineCustomizeSequence::SetSelectedMachineColorAreaId(EMachineColorAreaUIId InColorAreaId) {
}

void AMachineCustomizeSequence::SetMachineCustomizeDataById(EMachineId InMachineID, const FUserMachineCustomizeData& InMachineCustomizeData) {
}

void AMachineCustomizeSequence::SetIsDirty(bool bInIsDirty) {
}





void AMachineCustomizeSequence::MatchingTimeOut() {
}

UMachineCustomTab* AMachineCustomizeSequence::GetTabWidget() const {
    return NULL;
}

UMachineStickerSlotSelectWindow* AMachineCustomizeSequence::GetStickerTopPage() const {
    return NULL;
}

UMachineStickerSelectWindow* AMachineCustomizeSequence::GetStickerSelectPage() const {
    return NULL;
}

ECarStatusType AMachineCustomizeSequence::GetSelectedMachineType() const {
    return ECarStatusType::CarStatusSpeed;
}

EMachineId AMachineCustomizeSequence::GetSelectedMachineID() const {
    return EMachineId::SPD_01;
}

EMachineHornType AMachineCustomizeSequence::GetSelectedMachineCustomizeHornType() const {
    return EMachineHornType::HORNTYPE_01;
}

FUserMachineCustomizeData AMachineCustomizeSequence::GetSelectedMachineCustomizeData() const {
    return FUserMachineCustomizeData{};
}

EMachineAuraId AMachineCustomizeSequence::GetSelectedMachineCustomizeAuraID() const {
    return EMachineAuraId::MACHINE_AURA_NONE;
}

EMachineColorAreaUIId AMachineCustomizeSequence::GetSelectedMachineColorAreaId() const {
    return EMachineColorAreaUIId::BodyMain;
}



UMachinePartsSelectWindow* AMachineCustomizeSequence::GetPartsSelectWindow() const {
    return NULL;
}


FUserMachineCustomizeData AMachineCustomizeSequence::GetMachineCustomizeDataById(EMachineId InMachineID) const {
    return FUserMachineCustomizeData{};
}

UMachineCustomCommonWindow* AMachineCustomizeSequence::GetMachineCustomCommonWindow() const {
    return NULL;
}

bool AMachineCustomizeSequence::GetIsDirty() const {
    return false;
}

UMachineCustomizeCustomList* AMachineCustomizeSequence::GetCustomList() const {
    return NULL;
}

UUnionUISceneBase* AMachineCustomizeSequence::GetColorPresetSelectPage() const {
    return NULL;
}

UUnionUISceneBase* AMachineCustomizeSequence::GetColorDetailPage() const {
    return NULL;
}

UUnionUISceneBase* AMachineCustomizeSequence::GetColorAreaSelectPage() const {
    return NULL;
}




