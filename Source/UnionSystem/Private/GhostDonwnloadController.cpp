#include "GhostDonwnloadController.h"

AGhostDonwnloadController::AGhostDonwnloadController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ghostDownloader = NULL;
}

bool AGhostDonwnloadController::StartDownload(const FString& UserId, const ESpeedClassId SpeedClass, const EStageId StageId, const FString& DateTime, const int32& StageVersion) {
    return false;
}

bool AGhostDonwnloadController::IsGhostDownloading() const {
    return false;
}

bool AGhostDonwnloadController::IsCancel() const {
    return false;
}

bool AGhostDonwnloadController::IsBusy() const {
    return false;
}

EResponseCodeAbstract AGhostDonwnloadController::GetResponseCode() const {
    return EResponseCodeAbstract::RES_SUCCESS;
}

float AGhostDonwnloadController::GetDownloadRate() {
    return 0.0f;
}

bool AGhostDonwnloadController::ConvertGhostData(FReplaySaveInfo& OutGhostData) {
    return false;
}

bool AGhostDonwnloadController::CancelDownload() {
    return false;
}


