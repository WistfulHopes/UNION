#pragma once
#include "CoreMinimal.h"
#include "CustomRaceSetting.h"
#include "EPartyRacePreset.h"
#include "ERivalTeamId.h"
#include "EStageId.h"
#include "ItemSwitchSetting.h"
#include "LobbyId.h"
#include "LobbyOperationResult.h"
#include "LobbySubsystemOnSearchLobbyCompleteDelegate.h"
#include "CommonLobbyContext.h"
#include "CourseSwitchSetting.h"
#include "EFriendMatchLobbyJoinResult.h"
#include "LobbyContextRecvTodayRecordDelegateDelegate.h"
#include "CustomMatchLobbyContext.generated.h"

class ULobbyMemberContextBase;
class USquadContext;

UCLASS(Blueprintable)
class UNION_API UCustomMatchLobbyContext : public UCommonLobbyContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyContextRecvTodayRecordDelegate OnRecvTodayRecord;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USquadContext* SquadContext;
    
public:
    UCustomMatchLobbyContext();

    UFUNCTION(BlueprintCallable)
    void SyncRuleSettingForPreset(const FCustomRaceSetting& RaceSetting, EPartyRacePreset PresetId);
    
    UFUNCTION(BlueprintCallable)
    void SyncRuleSettingForCustom(const FCustomRaceSetting& RaceSetting, const FItemSwitchSetting& ItemSetting, const TArray<EStageId>& CourseSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetupLobbyRaceAttributes();
    
    UFUNCTION(BlueprintCallable)
    void SetupLobbyInitAttribute();
    
    UFUNCTION(BlueprintCallable)
    void SetReturnLobbyAllMember(bool IsComplete);
    
    UFUNCTION(BlueprintCallable)
    void SetMemberGroup(const FString& MemberId, int32 GroupIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetInRace(bool IsInRace);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupSettingComplete(bool IsComplete);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupSetting();
    
    UFUNCTION(BlueprintCallable)
    void SetFinishNextRaceSetting(bool IsFinished);
    
    UFUNCTION(BlueprintCallable)
    void SearchByHostUserId(const FString& HostUserId, FLobbySubsystemOnSearchLobbyComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyTypeChanged(bool bSuccessful, const FLobbyOperationResult& Result);
    
    UFUNCTION(BlueprintCallable)
    bool IsRuleSettingUpdated();
    
    UFUNCTION(BlueprintCallable)
    void GetTravelCourseSwitchSettingString(FString& OutSetting);
    
    UFUNCTION(BlueprintCallable)
    bool GetRuleSetting(bool& UsingPreset, EPartyRacePreset& PresetId, FCustomRaceSetting& RaceSetting, FItemSwitchSetting& ItemSetting, FCourseSwitchSetting& CourseSetting, ERivalTeamId& RivalTeamId);
    
    UFUNCTION(BlueprintCallable)
    void GetRivalSetting(bool& OutSetting);
    
    UFUNCTION(BlueprintCallable)
    void GetReturnLobbyAllMember(bool& OutComplete);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFriendMatchLobbyJoinResult GetJoinResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetInRace(bool& OutInRace) const;
    
    UFUNCTION(BlueprintCallable)
    void GetGroupSettingComplete(bool& OutComplete);
    
    UFUNCTION(BlueprintCallable)
    void GetGroupSetting(TMap<FString, int32>& OutGroupSetting);
    
    UFUNCTION(BlueprintCallable)
    void GetFinishNextRaceSetting(bool& OutIsFinished);
    
    UFUNCTION(BlueprintCallable)
    void DebugRuleSettingRandomize();
    
    UFUNCTION(BlueprintCallable)
    void CreateWithSquad(USquadContext* InSquadContext, int32 MaxMember);
    
    UFUNCTION(BlueprintCallable)
    bool CheckPermission(const FLobbyId& InLobbyId, EFriendMatchLobbyJoinResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void BlockMember(ULobbyMemberContextBase* MemberContext);
    
};

