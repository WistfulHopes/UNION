#include "GhostDataController.h"

UGhostDataController::UGhostDataController() {
    this->m_ghostUploader = NULL;
    this->m_resultUploader = NULL;
}

bool UGhostDataController::StartUpload() {
    return false;
}

void UGhostDataController::SetUploadStageIds(const ESpeedClassId SpeedClass, const TArray<EStageId>& StageIds) {
}

void UGhostDataController::SetCurrentStageVersion(const int32& InCurrentStageVersion) {
}

bool UGhostDataController::IsGhostDataError() const {
    return false;
}

bool UGhostDataController::IsCancel() const {
    return false;
}

bool UGhostDataController::IsBusy() const {
    return false;
}

EStageId UGhostDataController::GetUploadStageId() const {
    return EStageId::MainBegin;
}

ESpeedClassId UGhostDataController::GetUploadSpeedClassId() const {
    return ESpeedClassId::NormalSpeed;
}

float UGhostDataController::GetUploadRate() const {
    return 0.0f;
}

int32 UGhostDataController::GetUploadMaxCount() const {
    return 0;
}

FString UGhostDataController::GetUploadDateTime() const {
    return TEXT("");
}

int32 UGhostDataController::GetUploadCount() const {
    return 0;
}

EResponseCodeAbstract UGhostDataController::GetResponseCode() const {
    return EResponseCodeAbstract::RES_SUCCESS;
}

void UGhostDataController::Deinitialize() {
}

bool UGhostDataController::CancelUpload() {
    return false;
}


