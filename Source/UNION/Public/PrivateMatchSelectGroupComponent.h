#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "MenuSequenceSubStateBase.h"
#include "SyncGroupSettingNoParamDelegate.h"
#include "SyncGroupSettingOneParamDelegate.h"
#include "PrivateMatchSelectGroupComponent.generated.h"

class APrivateMatchGroupSettingSequence;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UPrivateMatchSelectGroupComponent : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSyncGroupSettingNoParam StartGroupSetting;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSyncGroupSettingNoParam FinishGroupSetting;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSyncGroupSettingNoParam RecieveGuestGroupIndex;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSyncGroupSettingOneParam SendHostGroupSettings;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSyncGroupSettingNoParam FixedHostGroupSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroupSettingSyncCycle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APrivateMatchGroupSettingSequence* ChildGroupSettingSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLobbyHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OwnLobbyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LobbyMemberCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInitializedParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDriverId> LobbyRacersDriverId;
    
public:
    UPrivateMatchSelectGroupComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateGroupSetting(TArray<int32> GroupIndexArray);
    
    UFUNCTION(BlueprintCallable)
    void SetRacerDriverId(int32 InIndex, EDriverId InDriverId);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnPlayerIndex(int32 OwnPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void InitParams(bool bIsHost, int32 MemberCount);
    
    UFUNCTION(BlueprintCallable)
    void GroupSettingComplete();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsInitializedParamaters();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetGroupIndexArray();
    
    UFUNCTION(BlueprintCallable)
    void ForceFixGroupSettings();
    
    UFUNCTION(BlueprintCallable)
    void CallSyncGroupSetting();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CallOnExitStateEvent();
    
    UFUNCTION(BlueprintCallable)
    void CallFixedHostGroupSetting();
    
};

