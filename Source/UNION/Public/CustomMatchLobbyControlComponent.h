#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "CreateOrConnectLobbyResult.h"
#include "CustomRaceSetting.h"
#include "EPartyRacePreset.h"
#include "ERivalTeamId.h"
#include "EStageId.h"
#include "ItemSwitchSetting.h"
#include "CourseSwitchSetting.h"
#include "EFriendMatchLobbyJoinResult.h"
#include "NetLobbyControlComponent.h"
#include "CustomMatchLobbyControlComponent.generated.h"

class USquadContext;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UCustomMatchLobbyControlComponent : public UNetLobbyControlComponent {
    GENERATED_BODY()
public:
    UCustomMatchLobbyControlComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SyncRuleSettingForPreset(const FCustomRaceSetting& RaceSetting, EPartyRacePreset PresetId);
    
    UFUNCTION(BlueprintCallable)
    void SyncRuleSettingForCustom(const FCustomRaceSetting& RaceSetting, const FItemSwitchSetting& ItemSetting, const TArray<EStageId>& CourseSetting);
    
    UFUNCTION(BlueprintCallable)
    void StartSyncGroupSetting();
    
    UFUNCTION(BlueprintCallable)
    void SetReadyLocalMember(bool NewIsReady);
    
    UFUNCTION(BlueprintCallable)
    void SetMemberGroup(const FString& MemberId, int32 GroupIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetInRace(bool NewIsInRace);
    
    UFUNCTION(BlueprintCallable)
    void SetFinishNextRaceSetting(bool IsFinished);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCompleteJoinBySearchLobbyId(bool bSuccessful, const FCreateOrConnectLobbyResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteJoinByInviteInfo(bool bSuccessful, const FCreateOrConnectLobbyResult& Result);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCheckInvitation();
    
    UFUNCTION(BlueprintCallable)
    void JoinBySearchLobbyId();
    
    UFUNCTION(BlueprintCallable)
    void JoinByInviteInfo();
    
    UFUNCTION(BlueprintCallable)
    bool IsRuleSettingUpdated();
    
    UFUNCTION(BlueprintCallable)
    bool IsReadyAllMember();
    
    UFUNCTION(BlueprintCallable)
    bool IsReady(const FUniqueNetIdRepl& MemberId);
    
    UFUNCTION(BlueprintCallable)
    bool IsNotReadyAllMember();
    
    UFUNCTION(BlueprintCallable)
    bool IsInRace();
    
    UFUNCTION(BlueprintCallable)
    bool IsGroupSettingCompleted();
    
    UFUNCTION(BlueprintCallable)
    bool IsFinishNextRaceSetting();
    
    UFUNCTION(BlueprintCallable)
    bool GetRuleSetting(bool& UsingPreset, EPartyRacePreset& PresetId, FCustomRaceSetting& RaceSetting, FItemSwitchSetting& ItemSetting, FCourseSwitchSetting& CourseSetting, ERivalTeamId& RivalTeamId);
    
    UFUNCTION(BlueprintCallable)
    EFriendMatchLobbyJoinResult GetJoinResult();
    
    UFUNCTION(BlueprintCallable)
    void GetGroupSetting(TMap<FString, int32>& OutGroupSetting);
    
    UFUNCTION(BlueprintCallable)
    void EndSyncGroupSetting();
    
    UFUNCTION(BlueprintCallable)
    void CreateLobby(USquadContext* InSquadContext, int32 MaxMember);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CheckHasPlanningToJoinLobby(bool& bHasAcceptInvite, bool& bHasSearchLobbyId, bool& bShouldQuitLobby) const;
    
};

