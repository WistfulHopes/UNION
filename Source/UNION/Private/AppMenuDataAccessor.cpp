#include "AppMenuDataAccessor.h"

UAppMenuDataAccessor::UAppMenuDataAccessor() {
}

void UAppMenuDataAccessor::SetTryGetCompensation(const bool bInFlag) {
}

void UAppMenuDataAccessor::SetTitleVisualId(ETitleVisualId TitleVisualId) {
}

void UAppMenuDataAccessor::SetTitleForce2ndVisual(bool Force) {
}

void UAppMenuDataAccessor::SetTimeTrialSkipSelectClassOnetime(bool Value) {
}

void UAppMenuDataAccessor::SetSubMenuOnlineMode(bool bIsSubMenuOnlineMode) {
}

void UAppMenuDataAccessor::SetSelectedTopMenuPlayMode(ETopMenuPlayMode InTopMenuPlayMode) {
}

void UAppMenuDataAccessor::SetSelectedMenuSpeedClassId(EMenuSpeedClassId NewId, bool InOnlyRaceSpeedClass) {
}

void UAppMenuDataAccessor::SetReservedRaceparkCleardDodonpaEvent(bool Reserve) {
}

void UAppMenuDataAccessor::SetRacePauseMenuInSESoundHandle(const FSoundHandle& SoundHandle) {
}

void UAppMenuDataAccessor::SetPrivateMatchItemSwitchSettingAll(const FItemSwitchSetting& InItemSwitchSetting) {
}

void UAppMenuDataAccessor::SetPrivateMatchItemSwitchSetting(int32 InGroup, const FItemSwitchSettingSingle& InItemSwitchSetting) {
}

void UAppMenuDataAccessor::SetPrivateMatchCustomRaceSetting(const FPartyRacePresetSetting& InRaceSetting) {
}

void UAppMenuDataAccessor::SetPrivateMatchCourseSwitchSetting(TArray<EStageId> StageIds) {
}

void UAppMenuDataAccessor::SetNextEtceteraSequenceMainState(EEtceteraSequenceMainState EtceteraSequenceMainState) {
}

void UAppMenuDataAccessor::SetNewFlagForMachineParts(bool bNewValue) {
}

void UAppMenuDataAccessor::SetMenuDataPowerRivalIds(const TArray<EDriverId>& SetDriverIds) {
}

void UAppMenuDataAccessor::SetMenuDataNormalRivalIds(const TArray<EDriverId>& SetDriverIds) {
}

void UAppMenuDataAccessor::SetMenuDataLastChoiceRivalType(const ERivalType SetValue) {
}

void UAppMenuDataAccessor::SetMenuDataLastChoiceRivalLevel(uint8 Value) {
}

void UAppMenuDataAccessor::SetMenuDataLastChoiceDriverId(const EDriverId SetDriverId) {
}

void UAppMenuDataAccessor::SetMenuDataBaseRivalLevel(uint8 Value) {
}

void UAppMenuDataAccessor::SetLastSelectedRaceMenu(ECommonRaceMenuContentId InLastSelected) {
}

void UAppMenuDataAccessor::SetLastPlayFestaRuleId(EGroupRaceRule InPlayFestaRuleId) {
}

void UAppMenuDataAccessor::SetHintRequest(EHintId InHintId, bool bInRequest) {
}

void UAppMenuDataAccessor::SetExecuteStorePopupAutoRequest() {
}

void UAppMenuDataAccessor::SetExecuteStorePopupAutoOnce() {
}

void UAppMenuDataAccessor::SetExecuteAdvertiseOnce() {
}

void UAppMenuDataAccessor::SetComeBackFromRace(bool bNewValue) {
}

void UAppMenuDataAccessor::SetClosedNoticeBetaTestWindow() {
}

void UAppMenuDataAccessor::SetBetweenCharaMachine(bool bNewValue) {
}

void UAppMenuDataAccessor::SetBackToTopMenu(bool bNewValue) {
}

void UAppMenuDataAccessor::SetBackToTitle(bool bBackToTitle) {
}

void UAppMenuDataAccessor::SetAppMenuData(const FAppMenuData& NewData) {
}

void UAppMenuDataAccessor::ReserveGrandPrixEnding(EGrandPrixEndingId GrandPrixEndingId) {
}

void UAppMenuDataAccessor::RemoveMenuDataPowerRivalIds(const EDriverId RemoveDriverId) {
}

void UAppMenuDataAccessor::RemoveMenuDataNormalRivalIds(const EDriverId RemoveDriverId) {
}

bool UAppMenuDataAccessor::IsTryGetCompensation() {
    return false;
}

bool UAppMenuDataAccessor::IsTitleForce2ndVisual() {
    return false;
}

bool UAppMenuDataAccessor::IsTimeTrialSkipSelectClassOnetime() {
    return false;
}

bool UAppMenuDataAccessor::IsSubMenuOnlineMode() {
    return false;
}

bool UAppMenuDataAccessor::IsReservedRaceparkCleardDodonpaEvent() {
    return false;
}

bool UAppMenuDataAccessor::IsComeBackFromRace() {
    return false;
}

bool UAppMenuDataAccessor::IsClosedNoticeBetaTestWindow() {
    return false;
}

bool UAppMenuDataAccessor::IsBetweenCharaMachine() {
    return false;
}

bool UAppMenuDataAccessor::IsBackToTopMenu() {
    return false;
}

bool UAppMenuDataAccessor::IsBackToTitle() {
    return false;
}

ETitleVisualId UAppMenuDataAccessor::GetTitleVisualId() {
    return ETitleVisualId::Standard;
}

ETopMenuPlayMode UAppMenuDataAccessor::GetSelectedTopMenuPlayMode() {
    return ETopMenuPlayMode::None;
}

EMenuSpeedClassId UAppMenuDataAccessor::GetSelectedMenuSpeedClassId() {
    return EMenuSpeedClassId::NormalSpeed;
}

EGrandPrixEndingId UAppMenuDataAccessor::GetReservedGrandPrixEnding() {
    return EGrandPrixEndingId::OrbotCubotEnding;
}

FSoundHandle UAppMenuDataAccessor::GetRacePauseMenuInSESoundHandle() {
    return FSoundHandle{};
}

FItemSwitchSetting UAppMenuDataAccessor::GetPrivateMatchItemSwitchSetting() {
    return FItemSwitchSetting{};
}

FPartyRacePresetSetting UAppMenuDataAccessor::GetPrivateMatchCustomRaceSetting() {
    return FPartyRacePresetSetting{};
}

TArray<EStageId> UAppMenuDataAccessor::GetPrivateMatchCourseSwitchSetting() {
    return TArray<EStageId>();
}

EEtceteraSequenceMainState UAppMenuDataAccessor::GetNextEtceteraSequenceMainState() {
    return EEtceteraSequenceMainState::Idle;
}

bool UAppMenuDataAccessor::GetNewFlagForMachineParts() {
    return false;
}

uint8 UAppMenuDataAccessor::GetNeedsDonpaTicketForRaceRetry() {
    return 0;
}

TArray<EDriverId> UAppMenuDataAccessor::GetMenuDataPowerRivalIds() {
    return TArray<EDriverId>();
}

TArray<EDriverId> UAppMenuDataAccessor::GetMenuDataNormalRivalIds() {
    return TArray<EDriverId>();
}

ERivalType UAppMenuDataAccessor::GetMenuDataLastChoiceRivalType() {
    return ERivalType::None;
}

uint8 UAppMenuDataAccessor::GetMenuDataLastChoiceRivalLevel() {
    return 0;
}

EDriverId UAppMenuDataAccessor::GetMenuDataLastChoiceDriverId() {
    return EDriverId::Sonic;
}

uint8 UAppMenuDataAccessor::GetMenuDataBaseRivalLevel() {
    return 0;
}

ECommonRaceMenuContentId UAppMenuDataAccessor::GetLastSelectedRaceMenu() {
    return ECommonRaceMenuContentId::Common_ToNextRound;
}

EGroupRaceRule UAppMenuDataAccessor::GetLastPlayFestaRuleId() {
    return EGroupRaceRule::None;
}

TArray<EHintId> UAppMenuDataAccessor::GetHintRequestArray() {
    return TArray<EHintId>();
}

bool UAppMenuDataAccessor::GetHintRequest(EHintId InHintId) {
    return false;
}

bool UAppMenuDataAccessor::GetExecuteStorePopupAutoRequest() {
    return false;
}

bool UAppMenuDataAccessor::GetExecuteStorePopupAutoOnce() {
    return false;
}

bool UAppMenuDataAccessor::GetExecuteAdvertiseOnce() {
    return false;
}

bool UAppMenuDataAccessor::GetEnableOnlinePlay() {
    return false;
}

void UAppMenuDataAccessor::GetAppMenuData(FAppMenuData& OutData) {
}

void UAppMenuDataAccessor::ClearMenuDataPowerRivalIds() {
}

void UAppMenuDataAccessor::ClearMenuDataNormalRivalIds() {
}

void UAppMenuDataAccessor::AddMenuDataPowerRivalIds(const EDriverId AddDriverId) {
}

void UAppMenuDataAccessor::AddMenuDataNormalRivalIds(const EDriverId AddDriverId) {
}


