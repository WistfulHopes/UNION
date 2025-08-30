#include "PartyRaceCourseIcon.h"

UPartyRaceCourseIcon::UPartyRaceCourseIcon() {
    this->TopParent = NULL;
}

void UPartyRaceCourseIcon::UpdateSetting(const FCourseSwitchSettingSingle& InSetting) {
}





bool UPartyRaceCourseIcon::IsNew() const {
    return false;
}

bool UPartyRaceCourseIcon::IsDLC() const {
    return false;
}

EPartyRaceCourseSwitchTag UPartyRaceCourseIcon::GetTag() const {
    return EPartyRaceCourseSwitchTag::AnotherWorld;
}

EPartyRaceCourseSwitchState UPartyRaceCourseIcon::GetState() const {
    return EPartyRaceCourseSwitchState::ON;
}

EStageId UPartyRaceCourseIcon::GetStageId() const {
    return EStageId::MainBegin;
}

int32 UPartyRaceCourseIcon::GetIconIndex() const {
    return 0;
}

FStageDataAssetTableRow UPartyRaceCourseIcon::GetDataTable(UDataTable* DataTable) {
    return FStageDataAssetTableRow{};
}



