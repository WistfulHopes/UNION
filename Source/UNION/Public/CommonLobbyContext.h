#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "Common_UserOrderData.h"
#include "ERaceType.h"
#include "ESpeedClassId.h"
#include "EStageId.h"
#include "LobbyContextBase.h"
#include "LobbyInitData.h"
#include "LobbyOperationResult.h"
#include "LobbySubsystemOnLobbyOperationCompleteDelegate.h"
#include "AnotherStageLotteryResult.h"
#include "AppNetOnErrorDelegate.h"
#include "AppRaceStageSetting.h"
#include "ELobbyType.h"
#include "LobbyContextOnMoveLobbyByMatchmakingDelegate.h"
#include "LobbyContextOnRecvEntryRaceIdDelegateDelegate.h"
#include "LobbyContextOnRecvNextLobbySequenceStateDelegateDelegate.h"
#include "LobbyContextOnRecvSendResultSaveDelegateDelegate.h"
#include "LobbyContextOnStartMatchmakingDelegate.h"
#include "LobbyContextRecvDecidedRaceStageSettingsDelegate.h"
#include "LobbyContextRecvHornDelegateDelegate.h"
#include "LobbyContextRecvInitLobbyDataDelegateDelegate.h"
#include "LobbyContextRecvLikeDelegateDelegate.h"
#include "LobbyContextRecvSelectCourseDelegateDelegate.h"
#include "LobbyContextRecvStampDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "CommonLobbyContext.generated.h"

class ULobbyMemberContextBase;
class UMatchmakingRequestContext;

UCLASS(Blueprintable)
class UNION_API UCommonLobbyContext : public ULobbyContextBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyContextRecvStampDelegate OnRecvStamp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyContextRecvSelectCourseDelegate OnRecvSelectCourse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyContextRecvDecidedRaceStageSettings OnRecvDecidedRaceStageSettings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyContextRecvLikeDelegate OnRecvLike;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyContextRecvHornDelegate OnRecvHorn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyContextRecvInitLobbyDataDelegate OnRecvInitLobbyData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyContextOnRecvNextLobbySequenceStateDelegate OnRecvNextLobbySequenceState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyContextOnRecvEntryRaceIdDelegate OnRecvEntryRaceId;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyContextOnRecvSendResultSaveDelegate OnRecvSendResultSave;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyContextOnStartMatchmaking OnStartMatchmaking;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyContextOnMoveLobbyByMatchmaking OnMoveLobby;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMatchmakingRequestContext* MatchmakingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectableCourseMax;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppNetOnError LobbyContextOnError;
    
public:
    UCommonLobbyContext();

    UFUNCTION(BlueprintCallable)
    void UpdateCurrentSendResultSaveCount();
    
    UFUNCTION(BlueprintCallable)
    void SyncRaceHostUserId();
    
    UFUNCTION(BlueprintCallable)
    bool SyncEntryRaceId(const FString& InEntryRaceId);
    
    UFUNCTION(BlueprintCallable)
    void StartPlatformGameMatch(const FString& ActivityId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldPlatformInvite(const FString& Platform) const;
    
    UFUNCTION(BlueprintCallable)
    void SetUseCOM(bool bUseCOM);
    
    UFUNCTION(BlueprintCallable)
    void SetupGroup();
    
    UFUNCTION(BlueprintCallable)
    void SetSpeedClass(ESpeedClassId SpeedClass);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedRaceType(ERaceType RaceType);
    
    UFUNCTION(BlueprintCallable)
    void SetRaceStageSettings(int32 courseId, int32 SelectedPlayerOnlineIndex, const TArray<FAnotherStageLotteryResult>& AnotherStages);
    
    UFUNCTION(BlueprintCallable)
    void SetRaceCycleFlag(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineRandomSeedString(const FString& SeedString);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineRandomSeeds(const TArray<int32>& NewOnlineRandomSeeds);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineRandomSeed(int32 Index, int32 Seed);
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyInitData(const FLobbyInitData& InLobbyInitData, const TArray<FAnotherStageLotteryResult>& AnotherStages);
    
    UFUNCTION(BlueprintCallable)
    void SetCompleteLobbySetting(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void SendInvitationWithPlatform(const FUniqueNetIdRepl& UserId, const FUniqueNetIdRepl& ExternalUserId, FLobbySubsystemOnLobbyOperationComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void SendInvitation(const FUniqueNetIdRepl& UserId, FLobbySubsystemOnLobbyOperationComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void ResetRPCCounter();
    
    UFUNCTION(BlueprintCallable)
    void ResetLocalData();
    
    UFUNCTION(BlueprintCallable)
    void ResetEntryRaceId();
    
    UFUNCTION(BlueprintCallable)
    void PromoteMemberBestChoice(FLobbySubsystemOnLobbyOperationComplete OnComplete);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLobbyOperationCompleteWithError(bool bSuccessful, const FLobbyOperationResult& Result);
    
public:
    UFUNCTION(BlueprintCallable)
    bool NotifySendResultSave();
    
    UFUNCTION(BlueprintCallable)
    bool IsSendResultSaveBeforeSetupCallback();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRaceHostLocalUser() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRaceHost(const FString& InUserId) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsInviteBlocked(const FLobbyOperationResult& SendInvitationResult);
    
    UFUNCTION(BlueprintCallable)
    bool IsAlreadyCalledRaceSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllMemberInLobby() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetUseCOM(bool& bOutResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSpeedClass(ESpeedClassId& SpeedClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSelectedRaceType(ERaceType& RaceType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSelectableCourseIds(TArray<EStageId>& OutResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELobbyType GetRealLobbyTypeEnum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRaceStageSettings(TArray<FAppRaceStageSetting>& OutResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRaceHostUserId(FString& RaceHostUserId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRaceHostCandidateUserIds(TArray<FString>& OutArray) const;
    
    UFUNCTION(BlueprintCallable)
    void GetRaceCycleFlag(bool& bOutValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOnlineRandomSeeds(TArray<int32>& OutResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMemberUserIdFromRacerIndex(int32 RacerIndex, FUniqueNetIdRepl& OutUserId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMemberRacerIndexFromUserId(const FUniqueNetIdRepl& InUserId, int32& OutRacerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULobbyMemberContextBase* GetMemberFromRacerIndexByClass(int32 RacerIndex, TSubclassOf<ULobbyMemberContextBase> MemberContextClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULobbyMemberContextBase* GetMemberFromRacerIndex(int32 RacerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLocalMemberOnlineIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    float GetLocalMatchmakingCompleteTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLobbyInitData(FLobbyInitData& OutLobbyInitData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEntryRaceId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCompleteLobbySetting(bool& bOutFlag) const;
    
    UFUNCTION(BlueprintCallable)
    void EndPlatformGameMatch(const TArray<FCommon_UserOrderData>& UserOrder);
    
    UFUNCTION(BlueprintCallable)
    void ConfirmMatchingUsers();
    
    UFUNCTION(BlueprintCallable)
    void CheckMatchmakingStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLobbyMessaging() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyGroup();
    
};

