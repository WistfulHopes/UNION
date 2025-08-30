#include "EventInfoManageActor.h"

AEventInfoManageActor::AEventInfoManageActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DisplayType = EEventInfoPeriodType::None;
    this->FestaInfoWidget = NULL;
    this->IsValidRewardData = false;
}

void AEventInfoManageActor::SetupWorldMatchInfo() {
}

void AEventInfoManageActor::SetupLegendCompeInfo() {
}

void AEventInfoManageActor::SetupFestaInfo() {
}

void AEventInfoManageActor::Open_Implementation() {
}

void AEventInfoManageActor::Close_Implementation() {
}


