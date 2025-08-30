#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EDriverId.h"
#include "EGameModeId.h"
#include "EGrandPrixEventFlag.h"
#include "EGrandPrixId.h"
#include "EGrandPrixProgressId.h"
#include "EHintId.h"
#include "EMachineColorPresetId.h"
#include "EMachineId.h"
#include "EMenuSpeedClassId.h"
#include "ERewardAchievementType.h"
#include "ESpeedClassId.h"
#include "EStageId.h"
#include "EStatsEventId.h"
#include "ETimeTrialWinLoseDispId.h"
#include "ETutorialAction.h"
#include "HonorTitleListData.h"
#include "ItemSwitchSetting.h"
#include "ItemSwitchSettingSave.h"
#include "PartyRacePresetSetting.h"
#include "PartyRacePresetSettingSave.h"
#include "UserAlbumTrackID.h"
#include "UserCommonData.h"
#include "UserDriverData.h"
#include "UserDriverProperty.h"
#include "UserGadgetCustomizeData.h"
#include "UserHintData.h"
#include "UserHintProperty.h"
#include "UserMachineCustomizeData.h"
#include "UserRewardGetDisplayRequestData.h"
#include "UserTimeTrialRaceData.h"
#include "AppSaveGameHelper.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UAppSaveGameHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAppSaveGameHelper();

    UFUNCTION(BlueprintCallable)
    static void UnlockHonorTitle(int32 HonorTitleIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetUserSelectedMachineId(EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable)
    static void SetUserSelectedDriverId(EDriverId InDriverId);
    
    UFUNCTION(BlueprintCallable)
    static void SetUserNiceCount(int32 InNiceCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetUserMachineCustomizeData(EMachineId InMachineID, const FUserMachineCustomizeData& InUserMachineCustomizeData);
    
    UFUNCTION(BlueprintCallable)
    static void SetUserHintProperty(EHintId InHintId, const FUserHintProperty& InUserHintProperty);
    
    UFUNCTION(BlueprintCallable)
    static void SetUserDriverProperty(EDriverId InDriverId, const FUserDriverProperty& InUserDriverProperty);
    
    UFUNCTION(BlueprintCallable)
    static void SetTutorialPopupDispFlag(const bool bDisped);
    
    UFUNCTION(BlueprintCallable)
    static void SetTutorialCompletedFlagPerStage(const EStageId InStageId, const bool bCompleted);
    
    UFUNCTION(BlueprintCallable)
    static void SetTutorialActionCompletedFlag(const ETutorialAction tutorialAction, const bool bCompleted);
    
    UFUNCTION(BlueprintCallable)
    static void SetTrackAvailable(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static void SetTipsDisplayIndex(uint8 InIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetTimeTrialLastResultId(const ETimeTrialWinLoseDispId InResultId);
    
    UFUNCTION(BlueprintCallable)
    static void SetSpawnPowerRivalFlag(const bool SetValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetSpawnGrandPrixLevelDownUIFlag(const EMenuSpeedClassId SpeedClassId, const bool SetEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetSpawnGrandPrixALLLevelDownUIFlag(const bool SetEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectedGadgetPresetId(int32 InPlayerIndex, int32 InPresetId);
    
    UFUNCTION(BlueprintCallable)
    static void SetRivalWinCount(EDriverId DriverId, int32 NewCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetRivalLevelAdjust(int32 NewAmount);
    
    UFUNCTION(BlueprintCallable)
    static void SetRivalAppearanceCount(EDriverId DriverId, int32 NewCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetRedStarRingAcquisitionPerStage(const EStageId InStageId, const TArray<bool>& InAcquisition);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceParkCustomRaceSetting(const FPartyRacePresetSetting& PartyRacePresetSetting);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerIconId(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerIconBgColorId(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    static void SetOpenSuperSonicSpeed(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetOpenMirror(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetNoticeLobbyInvitationOnRace(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetItemSwitchSettingSave(EGameModeId InGameModeId, const FItemSwitchSettingSave& InItemSwitchSetting);
    
    UFUNCTION(BlueprintCallable)
    static void SetItemSwitchSetting(EGameModeId InGameModeId, const FItemSwitchSettingSave& InItemSwitchSetting);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsValidGhost(const EStageId InStageId, const ESpeedClassId InSpeedClassId, bool bInIsValidGhost);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsGhostUploaded(const EStageId InStageId, const ESpeedClassId InSpeedClassId, bool bInIsGhostUploaded);
    
    UFUNCTION(BlueprintCallable)
    static void SetHonorTitleIndex(int32 HonorTitleIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetHintRead(EHintId InHintId);
    
    UFUNCTION(BlueprintCallable)
    static void SetHintNew(EHintId InHintId, bool bInIsNew);
    
    UFUNCTION(BlueprintCallable)
    static void SetHasEnteredMachineCustomizeSequence(bool bInHasEntered);
    
    UFUNCTION(BlueprintCallable)
    static void SetGrandPrixSelectTimeTrialLinkFirst(bool First);
    
    UFUNCTION(BlueprintCallable)
    static void SetGrandPrixLeast1PlayEachGrandPrix(EGrandPrixId GrandPrixId, bool InLeast1Play);
    
    UFUNCTION(BlueprintCallable)
    static void SetGrandPrixLeast1Play(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetGrandPrixFirstIrregularAppeared(bool bAppeared);
    
    UFUNCTION(BlueprintCallable)
    static void SetGrandPrixALLRivalLevel(const uint8 SetValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetGrandPrixALLKnockDownRivalLevel(const uint8 SetValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetGadgetCustomizeDataSelectedIndex(int32 SelectedIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetDriverUnselectable(EDriverId InDriverId);
    
    UFUNCTION(BlueprintCallable)
    static void SetDriverSelectable(EDriverId InDriverId);
    
    UFUNCTION(BlueprintCallable)
    static void SetDodonpaEventCompleteFlag(EGrandPrixEventFlag SaveDataFlagId, bool IsComplete);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomLapBGM(int32 Lap, FUserAlbumTrackID AlbumTrack);
    
    UFUNCTION(BlueprintCallable)
    static void SetCourseSwitchSetting(EGameModeId InGameModeId, const TArray<EStageId>& InStageIds);
    
    UFUNCTION(BlueprintCallable)
    static void SetCompleteSpecialChallenge(bool InComplete);
    
    UFUNCTION(BlueprintCallable)
    static void SetCompleteMainChallenge(bool InComplete);
    
    UFUNCTION(BlueprintCallable)
    static void SetChallengeShowProgress(int32 InProgress);
    
    UFUNCTION(BlueprintCallable)
    static void SetChallengeLastShowProgress(float Progress);
    
    UFUNCTION(BlueprintCallable)
    static void SetAlbumAvailable(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static void SaveTimeTrialRewardCountUp();
    
    UFUNCTION(BlueprintCallable)
    static void SaveTimeTrialRaceData(const FUserTimeTrialRaceData& UserTimeTrialRaceData, const EStageId InStageId, const ESpeedClassId InSpeedClassId);
    
    UFUNCTION(BlueprintCallable)
    static void SaveTimeTrialMedalAcquisition(const EStageId InStageId, const ESpeedClassId InSpeedClassId, const bool bInAcquisition);
    
    UFUNCTION(BlueprintCallable)
    static void SaveOnceRomVersionId();
    
    UFUNCTION(BlueprintCallable)
    static void SaveNoticeCheckTime();
    
    UFUNCTION(BlueprintCallable)
    static void SaveFinishedAdvertiseLogoFlow();
    
    UFUNCTION(BlueprintCallable)
    static void SaveAgreedNoticeAgreement();
    
    UFUNCTION(BlueprintCallable)
    static void RollbackRivalResult(EMenuSpeedClassId SpeedClassId);
    
    UFUNCTION(BlueprintCallable)
    static bool ResetSaveDataIfSpecificMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static void ResetRaceParkCustomRaceSetting();
    
    UFUNCTION(BlueprintCallable)
    static void ResetNewHonorTitle(int32 HonorTitleIndex);
    
    UFUNCTION(BlueprintCallable)
    static void ResetItemSwitchSetting(EGameModeId InGameModeId);
    
    UFUNCTION(BlueprintCallable)
    static void ResetCourseSwitchSetting(EGameModeId InGameModeId);
    
    UFUNCTION(BlueprintCallable)
    static void ResetCompensationData();
    
    UFUNCTION(BlueprintCallable)
    static void RemoveCompensationData(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static void ReflectRivalWin(const EMenuSpeedClassId SpeedClassId, const EDriverId DriverId, const int32 MaxRivalLevel, const int32 PowerRivalAddLevel, const int32 KnockdownRivalLevel, const bool bSpawnedPowRival);
    
    UFUNCTION(BlueprintCallable)
    static void ReflectRivalLose(const EMenuSpeedClassId SpeedClassId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsStickerUnlocked(int32 InStickerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSpawnPowerRivalFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSpawnGrandPrixLevelDownUIFlag(const EMenuSpeedClassId SpeedClassId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSelectableDriver(EDriverId InDriverId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsReadHint(EHintId InHintId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPatchUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOpenSuperSonicSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOpenMirror();
    
    UFUNCTION(BlueprintCallable)
    static bool IsOpenedMirrorClass();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNewHint(EHintId InHintId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNewDriver(EDriverId InDriverId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGrandPrixWinRewardOverTiming();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGrandPrixSelectTimeTrialLinkFirst();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGrandPrixLeast1PlayEachGrandPrix(EGrandPrixId GrandPrixId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGrandPrixLeast1Play();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGrandPrixFirstIrregularAppeared();
    
    UFUNCTION(BlueprintCallable)
    static bool IsGetTireParts(EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGetRearParts(EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGetMachineColorPreset(EMachineColorPresetId InMachineColorPresetId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGetFrontParts(EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFinishedAdvertiseLogoFlow();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDiffGadgetPresetIds(const TArray<int32>& GadgetPresetIds);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCompleteSpecialChallenge();
    
    UFUNCTION(BlueprintCallable)
    static bool IsCompleteMainChallenge();
    
    UFUNCTION(BlueprintCallable)
    static bool IsCompletedMachineParts(EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCompletedGrandPrixEvent(EGrandPrixEventFlag EventFlagId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsClearedGrandPrixMenuSpeedClass(const EGrandPrixId& GrandPirxId, const EMenuSpeedClassId& SpeedClassId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsClearedGrandPrixAnySpeedClass(EGrandPrixId GrandPrixId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasEnteredMachineCustomizeSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasAgreedNoticeAgreement();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMachineId GetUserSelectedMachineId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EDriverId GetUserSelectedDriverId();
    
    UFUNCTION(BlueprintCallable)
    static void GetUserRewardGetDisplayRequestData(FUserRewardGetDisplayRequestData& OutUserRewardGetDisplayRequestData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUserNiceCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetUserMachineCustomizeData(EMachineId InMachineID, FUserMachineCustomizeData& OutUserMachineCustomizeData);
    
    UFUNCTION(BlueprintCallable)
    static void GetUserHintProperty(EHintId InHintId, FUserHintProperty& OutUserHintProperty);
    
    UFUNCTION(BlueprintCallable)
    static void GetUserHintData(FUserHintData& OutUserHintData);
    
    UFUNCTION(BlueprintCallable)
    static void GetUserDriverProperty(EDriverId InDriverId, FUserDriverProperty& OutUserDriverProperty);
    
    UFUNCTION(BlueprintCallable)
    static void GetUserDriverData(FUserDriverData& OutUserDriverData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetUserCommonData(FUserCommonData& OutUserCommonData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTutorialPopupDispFlag();
    
    UFUNCTION(BlueprintCallable)
    static bool GetTutorialCompletedFlagPerStage(const EStageId InStageId);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTutorialActionCompletedFlag(const ETutorialAction tutorialAction);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTrackAvailable(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<uint8> GetTopKnockdownRivalLevelArray(const EMenuSpeedClassId SpeedClassId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetTopKnockdownRivalLevel(const EMenuSpeedClassId SpeedClassId, const EDriverId DriverId);
    
    UFUNCTION(BlueprintCallable)
    static uint8 GetTipsDisplayIndex();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTimeTrialRewardCount();
    
    UFUNCTION(BlueprintCallable)
    static FUserTimeTrialRaceData GetTimeTrialRaceData(const EStageId InStageId, const ESpeedClassId InSpeedClassId, bool& bOutIsGhostValid);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTimeTrialMedalAcquisition(const EStageId InStageId, const ESpeedClassId InSpeedClassId);
    
    UFUNCTION(BlueprintCallable)
    static ETimeTrialWinLoseDispId GetTimeTrialLastResultId();
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetSelectedGadgetPresetIdsAllPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSelectedGadgetPresetId(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRivalWinRewardEventCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRivalWinCount(EDriverId DriverId);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRivalLevelAdjust();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRivalAppearanceCountMin(TArray<EDriverId> CheckDriverIds, TArray<EDriverId> IgnoreDriverIds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRivalAppearanceCount(EDriverId DriverId);
    
    UFUNCTION(BlueprintCallable)
    static TArray<bool> GetRedStarRingAcquisitionPerStage(const EStageId InStageId);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRaceStatsValue(const EStatsEventId InStatsId);
    
    UFUNCTION(BlueprintCallable)
    static void GetRaceParkCustomRaceSetting(FPartyRacePresetSetting& OutSetting);
    
    UFUNCTION(BlueprintCallable)
    static EGrandPrixProgressId GetProgressIdGrandPrixMenuSpeedClass(const EGrandPrixId& GrandPirxId, const EMenuSpeedClassId& MenuSpeedClassId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGrandPrixProgressId GetProgressIdGrandPrixAnyClass(EGrandPrixId GrandPrixId);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPlayerIconId();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPlayerIconBgColorId();
    
    UFUNCTION(BlueprintCallable)
    static bool GetNoticeLobbyInvitationOnRace();
    
    UFUNCTION(BlueprintCallable)
    static bool GetNewHonorTitleUnlocked(int32 HonorTitleIndex);
    
    UFUNCTION(BlueprintCallable)
    static void GetMachinePartsAll(TArray<EMachineId>& OutFrontPartsId, TArray<EMachineId>& OutRearPartsId, TArray<EMachineId>& OutTirePartsId);
    
    UFUNCTION(BlueprintCallable)
    static void GetMachineColorPresetAll(TArray<EMachineColorPresetId>& OutMachineColorPresetId);
    
    UFUNCTION(BlueprintCallable)
    static FItemSwitchSettingSave GetItemSwitchSettingSave(EGameModeId InGameModeId);
    
    UFUNCTION(BlueprintCallable)
    static FItemSwitchSetting GetItemSwitchSetting(EGameModeId InGameModeId);
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsValidGhost(const EStageId InStageId, const ESpeedClassId InSpeedClassId);
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsGhostUploaded(const EStageId InStageId, const ESpeedClassId InSpeedClassId, bool& bOutIsValid);
    
    UFUNCTION(BlueprintCallable)
    static bool GetHonorTitleUnlock(int32 HonorTitleIndex);
    
    UFUNCTION(BlueprintCallable)
    static FHonorTitleListData GetHonorTitleInfo();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetHonorTitleIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetGrandPrixWinCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetGrandPrixRivalLevel(EMenuSpeedClassId SpeedClassId);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetGrandPrixClassClearedCountByMenuSpeedClassIgnoreContinuity(const EMenuSpeedClassId& SpeedClassId);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetGrandPrixClassClearedCountByMenuSpeedClass(const EMenuSpeedClassId& SpeedClassId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetGrandPrixBeforeRivalLevel(EMenuSpeedClassId SpeedClassId);
    
    UFUNCTION(BlueprintCallable)
    static FUserGadgetCustomizeData GetGadgetCustomizeData();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFriendShipGivedTicket(EDriverId ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetDodonpaEventCompleteFlag(EGrandPrixEventFlag SaveDataFlagId);
    
    UFUNCTION(BlueprintCallable)
    static FUserAlbumTrackID GetCustomLapBGM(int32 Lap);
    
    UFUNCTION(BlueprintCallable)
    static TArray<EStageId> GetCourseSwitchSetting(EGameModeId InGameModeId);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetCompensationIdArray();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetChallengeShowProgress();
    
    UFUNCTION(BlueprintCallable)
    static float GetChallengeLastShowProgress();
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetAllNewHonorTitleUnlocked();
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetAllHonorTitleUnlock();
    
    UFUNCTION(BlueprintCallable)
    static bool GetAlbumAvailable(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_InitUserHintData();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_AllSetHintRead();
    
    UFUNCTION(BlueprintCallable)
    static void ConvertPartyRacePresetSettingSaveToTableStruct(const FPartyRacePresetSettingSave& InSetting, FPartyRacePresetSetting& OutSetting);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertItemSwitchSettingSaveToTableStruct(const FItemSwitchSettingSave& InSetting, FItemSwitchSetting& OutSetting);
    
    UFUNCTION(BlueprintCallable)
    static void ClearRewardGetDisplayRequestDataAll();
    
    UFUNCTION(BlueprintCallable)
    static void ClearRewardGetDisplayRequestData(ERewardAchievementType InRewardAchievementType);
    
    UFUNCTION(BlueprintCallable)
    static void ClearHintRead(EHintId InHintId);
    
    UFUNCTION(BlueprintCallable)
    static void ClearDriverNew(EDriverId InDriverId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckRewardGetDisplayRequestData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckRewardGetDisplayRequest(ERewardAchievementType InRewardAchievementType);
    
    UFUNCTION(BlueprintCallable)
    static void AddRivalWinCount(EDriverId DriverId);
    
    UFUNCTION(BlueprintCallable)
    static void AddRewardGetDisplayRequestData(ERewardAchievementType InRewardAchievementType);
    
    UFUNCTION(BlueprintCallable)
    static void AddRaceStatsValue(const EStatsEventId InStatsId, const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddCompensationData(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static void AddALLRivalWinCount();
    
};

