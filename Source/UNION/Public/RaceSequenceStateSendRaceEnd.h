#pragma once
#include "CoreMinimal.h"
#include "GroupBattleResult.h"
#include "UnionRaceInfoInterface.h"
#include "Common_UserOrderData.h"
#include "ResultSaveFestaResultRequest.h"
#include "ResultSaveRankMatchResultRequest.h"
#include "ResultSaveTimeTrialResultRequest.h"
#include "RaceSequenceStateBase.h"
#include "RaceSequenceStateSendRaceEndTimeoutDelegate.h"
#include "RaceSequenceStateSendRaceEnd.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceSequenceStateSendRaceEnd : public URaceSequenceStateBase, public IUnionRaceInfoInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommon_UserOrderData> UserOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommon_UserOrderData> UserOrderIncludeCom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString entryRaceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHost;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlreadyCalledDisableTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableTimeoutCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClientTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientTimeoutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTime;
    
public:
    URaceSequenceStateSendRaceEnd(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetupUserOrder();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerDataRelationWhenGoal();
    
    UFUNCTION(BlueprintCallable)
    void ResetAlreadyCalledDisableTimeout();
    
    UFUNCTION(BlueprintCallable)
    void NextState();
    
    UFUNCTION(BlueprintCallable)
    bool isPlayerControlRacer(int32 InRacerIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsLeadNoOneInGroup(const int32 InRacerIndex, const FGroupBattleResult InGroupBattleResult);
    
    UFUNCTION(BlueprintCallable)
    bool IsBonusNoOneInGroup(const int32 InRacerIndex, const FGroupBattleResult InGroupBattleResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetResultSaveTimeTrialResult(FResultSaveTimeTrialResultRequest& Request, bool& IsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetResultSaveRankMatchResultRequest(FResultSaveRankMatchResultRequest& Request, bool& IsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetResultSaveFestaResultRequest(FResultSaveFestaResultRequest& Request, bool& IsSuccess);
    
    UFUNCTION(BlueprintCallable)
    void GetRacerFinalGroupBattleResult(bool& bSuccess, FGroupBattleResult& OutGroupBattleResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetLobbyContextParam();
    
    UFUNCTION(BlueprintCallable)
    void EnableTimeoutCheck(FRaceSequenceStateSendRaceEndTimeout OnTimeout);
    
    UFUNCTION(BlueprintCallable)
    void DisableTimeoutCheck();
    
    UFUNCTION(BlueprintCallable)
    bool CheckSkipCurrentState();
    

    // Fix for true pure virtual functions not being implemented
};

