#include "UnionSaveDataTransferBase.h"

AUnionSaveDataTransferBase::AUnionSaveDataTransferBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ResultSearch = EResultSearchTrialSaveData::Non;
    this->m_ResultTransfer = EResultTransferTrialSaveData::Non;
}

void AUnionSaveDataTransferBase::TransferTrialVersionSaveData() {
}

void AUnionSaveDataTransferBase::SearchTrialVersionSaveData() {
}

EResultTransferTrialSaveData AUnionSaveDataTransferBase::GetResultTransferTrialVersionSaveData() {
    return EResultTransferTrialSaveData::Non;
}

EResultSearchTrialSaveData AUnionSaveDataTransferBase::GetResultSearchTrialVersionSaveData() {
    return EResultSearchTrialSaveData::Non;
}


