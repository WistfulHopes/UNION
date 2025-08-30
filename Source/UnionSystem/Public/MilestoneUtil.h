#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EDriverId.h"
#include "EGameModeId.h"
#include "EHintId.h"
#include "EMachineId.h"
#include "EMilestoneVersion.h"
#include "EStageId.h"
#include "MilestoneUtil.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UMilestoneUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMilestoneUtil();

    UFUNCTION(BlueprintCallable)
    static bool IsVisibleOnlineOnlyCourseCoverInONT(const EGameModeId InGameModeId, const EStageId InStageId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsVisibleCompanyNameMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsTopMenuAccessLoginSuccessOnly();
    
    UFUNCTION(BlueprintCallable)
    static bool IsSkipSelectPlayNumMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsSkipDodonpaEventMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsRaceUnLockedMilestoneVersion(const EGameModeId InGameModeId, const EStageId InStageId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsOfflineMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsLimitRewardInRaceParkMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsLimitDonpaTicketMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsInitialMachineParts(EMachineId MachineId, int32 FrontPrice, int32 RearPrice, int32 TirePrice);
    
    UFUNCTION(BlueprintCallable)
    static bool IsHiddenWebManualQRcodeMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsHiddenTipsInONT(EHintId InHintId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsHiddenRomVerMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsHiddenMachineParts(EMachineId MachineId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsHiddenCharacter(EDriverId DriverId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsForceEnableTopMenuNewsMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsExclusionGhostUpDownloadEventMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableTopMenuStorePopupAutoMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableTopMenuStoreMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableTitleStoreMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableTitleDemoMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableThumbnailCollaboRaceMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableSpecificTitleDebugCommandMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableResetSaveDataMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableEtceteraFullGameStoreMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableAdvertiseRatingMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDisableTrialMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDisableTopMenuNewsMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDisableTopMenuFestaRuleMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDisableTimeTrialMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDisableSelectTimeTrialMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDisableRaceParkRivalOnOffMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDisableRaceParkMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDisableOpenNoticePopupMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDisableHornAuraTabMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDisableGrandPrixMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDisableGrandPrixCourseMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDisableGrandPrixCourse3MilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDisableGrandPrixCourse2MilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDisableFriendlistMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDisableFestaMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDisableEtceteraTitleMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDisableEtceteraStoreMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDisableEtceteraOthersMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDisableEtceteraHintMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDisableEtceteraChallengeMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDisableDecisionInRaceParkMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDisableCharacterColorPreset(EDriverId DriverId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDisableAchievementMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsCloseCourseInRaceParkCustomMatchMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool IsCharaIconLockCover(EDriverId DriverId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAlreadyGrandPrixLeast1Play();
    
    UFUNCTION(BlueprintCallable)
    static EDriverId GetRivalByMilestoneVersion();
    
    UFUNCTION(BlueprintCallable)
    static TArray<EDriverId> GetGrandPrixRivalDriverIds();
    
    UFUNCTION(BlueprintCallable)
    static EMilestoneVersion GetEnablePrelaunchAnotherStageLotteryMilestoneVersion();
    
};

