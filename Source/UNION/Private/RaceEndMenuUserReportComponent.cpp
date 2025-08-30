#include "RaceEndMenuUserReportComponent.h"

URaceEndMenuUserReportComponent::URaceEndMenuUserReportComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_UserReportWidget = NULL;
    this->_PopupWindowWidget = NULL;
}

void URaceEndMenuUserReportComponent::OnPopupClosed(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex) {
}

void URaceEndMenuUserReportComponent::OnHttpReceived(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}


