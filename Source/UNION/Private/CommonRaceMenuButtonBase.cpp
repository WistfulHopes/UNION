#include "CommonRaceMenuButtonBase.h"

UCommonRaceMenuButtonBase::UCommonRaceMenuButtonBase() {
    this->AcceptSE = NULL;
    this->CancelSE = NULL;
    this->ErrorSE = NULL;
    this->SelectSE = NULL;
}

void UCommonRaceMenuButtonBase::SetupContent(EGameModeId InGameModeId, const FCommonRaceMenuContentRow& InContentDef) {
}





FText UCommonRaceMenuButtonBase::GetText() const {
    return FText::GetEmpty();
}

FText UCommonRaceMenuButtonBase::GetPopupWarningMessage() const {
    return FText::GetEmpty();
}

int32 UCommonRaceMenuButtonBase::GetIconIdAsInteger() const {
    return 0;
}

ECommonRaceMenuIconId UCommonRaceMenuButtonBase::GetIconId() const {
    return ECommonRaceMenuIconId::None;
}

EGameModeId UCommonRaceMenuButtonBase::GetGameModeId() const {
    return EGameModeId::None;
}

ECommonRaceMenuContentId UCommonRaceMenuButtonBase::GetContentId() const {
    return ECommonRaceMenuContentId::Common_ToNextRound;
}

FCommonRaceMenuContentRow UCommonRaceMenuButtonBase::GetContentDef() const {
    return FCommonRaceMenuContentRow{};
}

bool UCommonRaceMenuButtonBase::DoesNeedToPopupWarning() const {
    return false;
}


