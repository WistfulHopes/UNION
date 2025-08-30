#pragma once
#include "CoreMinimal.h"
#include "Common_FestaBonusChanceData.h"
#include "FestaFestaTopResponse.h"
#include "CommonLobbyContext.h"
#include "FestaLobbyContext.generated.h"

UCLASS(Blueprintable)
class UNION_API UFestaLobbyContext : public UCommonLobbyContext {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSyncFestaRuleComplete, bool, bWasSuccessful, const FFestaFestaTopResponse&, FestaInfo);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnRecvBonusChanceData, const FCommon_FestaBonusChanceData&, BonusChanceData);
    
    UFestaLobbyContext();

    UFUNCTION(BlueprintCallable)
    void SyncFestaRule(int32 festaId, int32 DefaultRuleId, UFestaLobbyContext::FOnSyncFestaRuleComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    bool SyncBonusChanceData(const FCommon_FestaBonusChanceData& BonusChanceData);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFestaTopComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsAddMemberComplete2();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTeamMemberFromIndex(int32 TeamIndex, TArray<FString>& MemberIds) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetBonusChanceData(int32& BonusChanceType, int32& BonusChanceParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DebugGetSyncFestaData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void DebugGetRecvFestaDataUserIds(TArray<FString>& UserIds) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void DebugGetFestaTopResponse(FFestaFestaTopResponse& Response) const;
    
};

