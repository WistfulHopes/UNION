#include "AppSaveGameHelper.h"

UAppSaveGameHelper::UAppSaveGameHelper() {
}

void UAppSaveGameHelper::UnlockHonorTitle(int32 HonorTitleIndex) {
}

void UAppSaveGameHelper::SetUserSelectedMachineId(EMachineId InMachineID) {
}

void UAppSaveGameHelper::SetUserSelectedDriverId(EDriverId InDriverId) {
}

void UAppSaveGameHelper::SetUserNiceCount(int32 InNiceCount) {
}

void UAppSaveGameHelper::SetUserMachineCustomizeData(EMachineId InMachineID, const FUserMachineCustomizeData& InUserMachineCustomizeData) {
}

void UAppSaveGameHelper::SetUserHintProperty(EHintId InHintId, const FUserHintProperty& InUserHintProperty) {
}

void UAppSaveGameHelper::SetUserDriverProperty(EDriverId InDriverId, const FUserDriverProperty& InUserDriverProperty) {
}

void UAppSaveGameHelper::SetTutorialPopupDispFlag(const bool bDisped) {
}

void UAppSaveGameHelper::SetTutorialCompletedFlagPerStage(const EStageId InStageId, const bool bCompleted) {
}

void UAppSaveGameHelper::SetTutorialActionCompletedFlag(const ETutorialAction tutorialAction, const bool bCompleted) {
}

void UAppSaveGameHelper::SetTrackAvailable(int32 ID) {
}

void UAppSaveGameHelper::SetTipsDisplayIndex(uint8 InIndex) {
}

void UAppSaveGameHelper::SetTimeTrialLastResultId(const ETimeTrialWinLoseDispId InResultId) {
}

void UAppSaveGameHelper::SetSpawnPowerRivalFlag(const bool SetValue) {
}

void UAppSaveGameHelper::SetSpawnGrandPrixLevelDownUIFlag(const EMenuSpeedClassId SpeedClassId, const bool SetEnabled) {
}

void UAppSaveGameHelper::SetSpawnGrandPrixALLLevelDownUIFlag(const bool SetEnabled) {
}

void UAppSaveGameHelper::SetSelectedGadgetPresetId(int32 InPlayerIndex, int32 InPresetId) {
}

void UAppSaveGameHelper::SetRivalWinCount(EDriverId DriverId, int32 NewCount) {
}

void UAppSaveGameHelper::SetRivalLevelAdjust(int32 NewAmount) {
}

void UAppSaveGameHelper::SetRivalAppearanceCount(EDriverId DriverId, int32 NewCount) {
}

void UAppSaveGameHelper::SetRedStarRingAcquisitionPerStage(const EStageId InStageId, const TArray<bool>& InAcquisition) {
}

void UAppSaveGameHelper::SetRaceParkCustomRaceSetting(const FPartyRacePresetSetting& PartyRacePresetSetting) {
}

void UAppSaveGameHelper::SetPlayerIconId(int32 ID) {
}

void UAppSaveGameHelper::SetPlayerIconBgColorId(const FString& ID) {
}

void UAppSaveGameHelper::SetOpenSuperSonicSpeed(bool bEnable) {
}

void UAppSaveGameHelper::SetOpenMirror(bool bEnable) {
}

void UAppSaveGameHelper::SetNoticeLobbyInvitationOnRace(bool bInEnable) {
}

void UAppSaveGameHelper::SetItemSwitchSettingSave(EGameModeId InGameModeId, const FItemSwitchSettingSave& InItemSwitchSetting) {
}

void UAppSaveGameHelper::SetItemSwitchSetting(EGameModeId InGameModeId, const FItemSwitchSettingSave& InItemSwitchSetting) {
}

void UAppSaveGameHelper::SetIsValidGhost(const EStageId InStageId, const ESpeedClassId InSpeedClassId, bool bInIsValidGhost) {
}

void UAppSaveGameHelper::SetIsGhostUploaded(const EStageId InStageId, const ESpeedClassId InSpeedClassId, bool bInIsGhostUploaded) {
}

void UAppSaveGameHelper::SetHonorTitleIndex(int32 HonorTitleIndex) {
}

void UAppSaveGameHelper::SetHintRead(EHintId InHintId) {
}

void UAppSaveGameHelper::SetHintNew(EHintId InHintId, bool bInIsNew) {
}

void UAppSaveGameHelper::SetHasEnteredMachineCustomizeSequence(bool bInHasEntered) {
}

void UAppSaveGameHelper::SetGrandPrixSelectTimeTrialLinkFirst(bool First) {
}

void UAppSaveGameHelper::SetGrandPrixLeast1PlayEachGrandPrix(EGrandPrixId GrandPrixId, bool InLeast1Play) {
}

void UAppSaveGameHelper::SetGrandPrixLeast1Play(bool bEnable) {
}

void UAppSaveGameHelper::SetGrandPrixFirstIrregularAppeared(bool bAppeared) {
}

void UAppSaveGameHelper::SetGrandPrixALLRivalLevel(const uint8 SetValue) {
}

void UAppSaveGameHelper::SetGrandPrixALLKnockDownRivalLevel(const uint8 SetValue) {
}

void UAppSaveGameHelper::SetGadgetCustomizeDataSelectedIndex(int32 SelectedIndex) {
}

void UAppSaveGameHelper::SetDriverUnselectable(EDriverId InDriverId) {
}

void UAppSaveGameHelper::SetDriverSelectable(EDriverId InDriverId) {
}

void UAppSaveGameHelper::SetDodonpaEventCompleteFlag(EGrandPrixEventFlag SaveDataFlagId, bool IsComplete) {
}

void UAppSaveGameHelper::SetCustomLapBGM(int32 Lap, FUserAlbumTrackID AlbumTrack) {
}

void UAppSaveGameHelper::SetCourseSwitchSetting(EGameModeId InGameModeId, const TArray<EStageId>& InStageIds) {
}

void UAppSaveGameHelper::SetCompleteSpecialChallenge(bool InComplete) {
}

void UAppSaveGameHelper::SetCompleteMainChallenge(bool InComplete) {
}

void UAppSaveGameHelper::SetChallengeShowProgress(int32 InProgress) {
}

void UAppSaveGameHelper::SetChallengeLastShowProgress(float Progress) {
}

void UAppSaveGameHelper::SetAlbumAvailable(int32 ID) {
}

void UAppSaveGameHelper::SaveTimeTrialRewardCountUp() {
}

void UAppSaveGameHelper::SaveTimeTrialRaceData(const FUserTimeTrialRaceData& UserTimeTrialRaceData, const EStageId InStageId, const ESpeedClassId InSpeedClassId) {
}

void UAppSaveGameHelper::SaveTimeTrialMedalAcquisition(const EStageId InStageId, const ESpeedClassId InSpeedClassId, const bool bInAcquisition) {
}

void UAppSaveGameHelper::SaveOnceRomVersionId() {
}

void UAppSaveGameHelper::SaveNoticeCheckTime() {
}

void UAppSaveGameHelper::SaveFinishedAdvertiseLogoFlow() {
}

void UAppSaveGameHelper::SaveAgreedNoticeAgreement() {
}

void UAppSaveGameHelper::RollbackRivalResult(EMenuSpeedClassId SpeedClassId) {
}

bool UAppSaveGameHelper::ResetSaveDataIfSpecificMilestoneVersion() {
    return false;
}

void UAppSaveGameHelper::ResetRaceParkCustomRaceSetting() {
}

void UAppSaveGameHelper::ResetNewHonorTitle(int32 HonorTitleIndex) {
}

void UAppSaveGameHelper::ResetItemSwitchSetting(EGameModeId InGameModeId) {
}

void UAppSaveGameHelper::ResetCourseSwitchSetting(EGameModeId InGameModeId) {
}

void UAppSaveGameHelper::ResetCompensationData() {
}

void UAppSaveGameHelper::RemoveCompensationData(int32 ID) {
}

void UAppSaveGameHelper::ReflectRivalWin(const EMenuSpeedClassId SpeedClassId, const EDriverId DriverId, const int32 MaxRivalLevel, const int32 PowerRivalAddLevel, const int32 KnockdownRivalLevel, const bool bSpawnedPowRival) {
}

void UAppSaveGameHelper::ReflectRivalLose(const EMenuSpeedClassId SpeedClassId) {
}

bool UAppSaveGameHelper::IsStickerUnlocked(int32 InStickerId) {
    return false;
}

bool UAppSaveGameHelper::IsSpawnPowerRivalFlag() {
    return false;
}

bool UAppSaveGameHelper::IsSpawnGrandPrixLevelDownUIFlag(const EMenuSpeedClassId SpeedClassId) {
    return false;
}

bool UAppSaveGameHelper::IsSelectableDriver(EDriverId InDriverId) {
    return false;
}

bool UAppSaveGameHelper::IsReadHint(EHintId InHintId) {
    return false;
}

bool UAppSaveGameHelper::IsPatchUpdate() {
    return false;
}

bool UAppSaveGameHelper::IsOpenSuperSonicSpeed() {
    return false;
}

bool UAppSaveGameHelper::IsOpenMirror() {
    return false;
}

bool UAppSaveGameHelper::IsOpenedMirrorClass() {
    return false;
}

bool UAppSaveGameHelper::IsNewHint(EHintId InHintId) {
    return false;
}

bool UAppSaveGameHelper::IsNewDriver(EDriverId InDriverId) {
    return false;
}

bool UAppSaveGameHelper::IsGrandPrixWinRewardOverTiming() {
    return false;
}

bool UAppSaveGameHelper::IsGrandPrixSelectTimeTrialLinkFirst() {
    return false;
}

bool UAppSaveGameHelper::IsGrandPrixLeast1PlayEachGrandPrix(EGrandPrixId GrandPrixId) {
    return false;
}

bool UAppSaveGameHelper::IsGrandPrixLeast1Play() {
    return false;
}

bool UAppSaveGameHelper::IsGrandPrixFirstIrregularAppeared() {
    return false;
}

bool UAppSaveGameHelper::IsGetTireParts(EMachineId InMachineID) {
    return false;
}

bool UAppSaveGameHelper::IsGetRearParts(EMachineId InMachineID) {
    return false;
}

bool UAppSaveGameHelper::IsGetMachineColorPreset(EMachineColorPresetId InMachineColorPresetId) {
    return false;
}

bool UAppSaveGameHelper::IsGetFrontParts(EMachineId InMachineID) {
    return false;
}

bool UAppSaveGameHelper::IsFinishedAdvertiseLogoFlow() {
    return false;
}

bool UAppSaveGameHelper::IsDiffGadgetPresetIds(const TArray<int32>& GadgetPresetIds) {
    return false;
}

bool UAppSaveGameHelper::IsCompleteSpecialChallenge() {
    return false;
}

bool UAppSaveGameHelper::IsCompleteMainChallenge() {
    return false;
}

bool UAppSaveGameHelper::IsCompletedMachineParts(EMachineId InMachineID) {
    return false;
}

bool UAppSaveGameHelper::IsCompletedGrandPrixEvent(EGrandPrixEventFlag EventFlagId) {
    return false;
}

bool UAppSaveGameHelper::IsClearedGrandPrixMenuSpeedClass(const EGrandPrixId& GrandPirxId, const EMenuSpeedClassId& SpeedClassId) {
    return false;
}

bool UAppSaveGameHelper::IsClearedGrandPrixAnySpeedClass(EGrandPrixId GrandPrixId) {
    return false;
}

bool UAppSaveGameHelper::HasEnteredMachineCustomizeSequence() {
    return false;
}

bool UAppSaveGameHelper::HasAgreedNoticeAgreement() {
    return false;
}

EMachineId UAppSaveGameHelper::GetUserSelectedMachineId() {
    return EMachineId::SPD_01;
}

EDriverId UAppSaveGameHelper::GetUserSelectedDriverId() {
    return EDriverId::Sonic;
}

void UAppSaveGameHelper::GetUserRewardGetDisplayRequestData(FUserRewardGetDisplayRequestData& OutUserRewardGetDisplayRequestData) {
}

int32 UAppSaveGameHelper::GetUserNiceCount() {
    return 0;
}

void UAppSaveGameHelper::GetUserMachineCustomizeData(EMachineId InMachineID, FUserMachineCustomizeData& OutUserMachineCustomizeData) {
}

void UAppSaveGameHelper::GetUserHintProperty(EHintId InHintId, FUserHintProperty& OutUserHintProperty) {
}

void UAppSaveGameHelper::GetUserHintData(FUserHintData& OutUserHintData) {
}

void UAppSaveGameHelper::GetUserDriverProperty(EDriverId InDriverId, FUserDriverProperty& OutUserDriverProperty) {
}

void UAppSaveGameHelper::GetUserDriverData(FUserDriverData& OutUserDriverData) {
}

void UAppSaveGameHelper::GetUserCommonData(FUserCommonData& OutUserCommonData) {
}

bool UAppSaveGameHelper::GetTutorialPopupDispFlag() {
    return false;
}

bool UAppSaveGameHelper::GetTutorialCompletedFlagPerStage(const EStageId InStageId) {
    return false;
}

bool UAppSaveGameHelper::GetTutorialActionCompletedFlag(const ETutorialAction tutorialAction) {
    return false;
}

bool UAppSaveGameHelper::GetTrackAvailable(int32 ID) {
    return false;
}

TArray<uint8> UAppSaveGameHelper::GetTopKnockdownRivalLevelArray(const EMenuSpeedClassId SpeedClassId) {
    return TArray<uint8>();
}

uint8 UAppSaveGameHelper::GetTopKnockdownRivalLevel(const EMenuSpeedClassId SpeedClassId, const EDriverId DriverId) {
    return 0;
}

uint8 UAppSaveGameHelper::GetTipsDisplayIndex() {
    return 0;
}

int32 UAppSaveGameHelper::GetTimeTrialRewardCount() {
    return 0;
}

FUserTimeTrialRaceData UAppSaveGameHelper::GetTimeTrialRaceData(const EStageId InStageId, const ESpeedClassId InSpeedClassId, bool& bOutIsGhostValid) {
    return FUserTimeTrialRaceData{};
}

bool UAppSaveGameHelper::GetTimeTrialMedalAcquisition(const EStageId InStageId, const ESpeedClassId InSpeedClassId) {
    return false;
}

ETimeTrialWinLoseDispId UAppSaveGameHelper::GetTimeTrialLastResultId() {
    return ETimeTrialWinLoseDispId::NewBestRecord;
}

TArray<int32> UAppSaveGameHelper::GetSelectedGadgetPresetIdsAllPlayer() {
    return TArray<int32>();
}

int32 UAppSaveGameHelper::GetSelectedGadgetPresetId(int32 InPlayerIndex) {
    return 0;
}

int32 UAppSaveGameHelper::GetRivalWinRewardEventCount() {
    return 0;
}

int32 UAppSaveGameHelper::GetRivalWinCount(EDriverId DriverId) {
    return 0;
}

int32 UAppSaveGameHelper::GetRivalLevelAdjust() {
    return 0;
}

int32 UAppSaveGameHelper::GetRivalAppearanceCountMin(TArray<EDriverId> CheckDriverIds, TArray<EDriverId> IgnoreDriverIds) {
    return 0;
}

int32 UAppSaveGameHelper::GetRivalAppearanceCount(EDriverId DriverId) {
    return 0;
}

TArray<bool> UAppSaveGameHelper::GetRedStarRingAcquisitionPerStage(const EStageId InStageId) {
    return TArray<bool>();
}

int32 UAppSaveGameHelper::GetRaceStatsValue(const EStatsEventId InStatsId) {
    return 0;
}

void UAppSaveGameHelper::GetRaceParkCustomRaceSetting(FPartyRacePresetSetting& OutSetting) {
}

EGrandPrixProgressId UAppSaveGameHelper::GetProgressIdGrandPrixMenuSpeedClass(const EGrandPrixId& GrandPirxId, const EMenuSpeedClassId& MenuSpeedClassId) {
    return EGrandPrixProgressId::None;
}

EGrandPrixProgressId UAppSaveGameHelper::GetProgressIdGrandPrixAnyClass(EGrandPrixId GrandPrixId) {
    return EGrandPrixProgressId::None;
}

int32 UAppSaveGameHelper::GetPlayerIconId() {
    return 0;
}

int32 UAppSaveGameHelper::GetPlayerIconBgColorId() {
    return 0;
}

bool UAppSaveGameHelper::GetNoticeLobbyInvitationOnRace() {
    return false;
}

bool UAppSaveGameHelper::GetNewHonorTitleUnlocked(int32 HonorTitleIndex) {
    return false;
}

void UAppSaveGameHelper::GetMachinePartsAll(TArray<EMachineId>& OutFrontPartsId, TArray<EMachineId>& OutRearPartsId, TArray<EMachineId>& OutTirePartsId) {
}

void UAppSaveGameHelper::GetMachineColorPresetAll(TArray<EMachineColorPresetId>& OutMachineColorPresetId) {
}

FItemSwitchSettingSave UAppSaveGameHelper::GetItemSwitchSettingSave(EGameModeId InGameModeId) {
    return FItemSwitchSettingSave{};
}

FItemSwitchSetting UAppSaveGameHelper::GetItemSwitchSetting(EGameModeId InGameModeId) {
    return FItemSwitchSetting{};
}

bool UAppSaveGameHelper::GetIsValidGhost(const EStageId InStageId, const ESpeedClassId InSpeedClassId) {
    return false;
}

bool UAppSaveGameHelper::GetIsGhostUploaded(const EStageId InStageId, const ESpeedClassId InSpeedClassId, bool& bOutIsValid) {
    return false;
}

bool UAppSaveGameHelper::GetHonorTitleUnlock(int32 HonorTitleIndex) {
    return false;
}

FHonorTitleListData UAppSaveGameHelper::GetHonorTitleInfo() {
    return FHonorTitleListData{};
}

int32 UAppSaveGameHelper::GetHonorTitleIndex() {
    return 0;
}

int32 UAppSaveGameHelper::GetGrandPrixWinCount() {
    return 0;
}

int32 UAppSaveGameHelper::GetGrandPrixRivalLevel(EMenuSpeedClassId SpeedClassId) {
    return 0;
}

int32 UAppSaveGameHelper::GetGrandPrixClassClearedCountByMenuSpeedClassIgnoreContinuity(const EMenuSpeedClassId& SpeedClassId) {
    return 0;
}

int32 UAppSaveGameHelper::GetGrandPrixClassClearedCountByMenuSpeedClass(const EMenuSpeedClassId& SpeedClassId) {
    return 0;
}

int32 UAppSaveGameHelper::GetGrandPrixBeforeRivalLevel(EMenuSpeedClassId SpeedClassId) {
    return 0;
}

FUserGadgetCustomizeData UAppSaveGameHelper::GetGadgetCustomizeData() {
    return FUserGadgetCustomizeData{};
}

int32 UAppSaveGameHelper::GetFriendShipGivedTicket(EDriverId ID) {
    return 0;
}

bool UAppSaveGameHelper::GetDodonpaEventCompleteFlag(EGrandPrixEventFlag SaveDataFlagId) {
    return false;
}

FUserAlbumTrackID UAppSaveGameHelper::GetCustomLapBGM(int32 Lap) {
    return FUserAlbumTrackID{};
}

TArray<EStageId> UAppSaveGameHelper::GetCourseSwitchSetting(EGameModeId InGameModeId) {
    return TArray<EStageId>();
}

TArray<int32> UAppSaveGameHelper::GetCompensationIdArray() {
    return TArray<int32>();
}

int32 UAppSaveGameHelper::GetChallengeShowProgress() {
    return 0;
}

float UAppSaveGameHelper::GetChallengeLastShowProgress() {
    return 0.0f;
}

TArray<int32> UAppSaveGameHelper::GetAllNewHonorTitleUnlocked() {
    return TArray<int32>();
}

TArray<int32> UAppSaveGameHelper::GetAllHonorTitleUnlock() {
    return TArray<int32>();
}

bool UAppSaveGameHelper::GetAlbumAvailable(int32 ID) {
    return false;
}

void UAppSaveGameHelper::Debug_InitUserHintData() {
}

void UAppSaveGameHelper::Debug_AllSetHintRead() {
}

void UAppSaveGameHelper::ConvertPartyRacePresetSettingSaveToTableStruct(const FPartyRacePresetSettingSave& InSetting, FPartyRacePresetSetting& OutSetting) {
}

void UAppSaveGameHelper::ConvertItemSwitchSettingSaveToTableStruct(const FItemSwitchSettingSave& InSetting, FItemSwitchSetting& OutSetting) {
}

void UAppSaveGameHelper::ClearRewardGetDisplayRequestDataAll() {
}

void UAppSaveGameHelper::ClearRewardGetDisplayRequestData(ERewardAchievementType InRewardAchievementType) {
}

void UAppSaveGameHelper::ClearHintRead(EHintId InHintId) {
}

void UAppSaveGameHelper::ClearDriverNew(EDriverId InDriverId) {
}

bool UAppSaveGameHelper::CheckRewardGetDisplayRequestData() {
    return false;
}

bool UAppSaveGameHelper::CheckRewardGetDisplayRequest(ERewardAchievementType InRewardAchievementType) {
    return false;
}

void UAppSaveGameHelper::AddRivalWinCount(EDriverId DriverId) {
}

void UAppSaveGameHelper::AddRewardGetDisplayRequestData(ERewardAchievementType InRewardAchievementType) {
}

void UAppSaveGameHelper::AddRaceStatsValue(const EStatsEventId InStatsId, const int32 Value) {
}

void UAppSaveGameHelper::AddCompensationData(int32 ID) {
}

void UAppSaveGameHelper::AddALLRivalWinCount() {
}


