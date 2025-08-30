#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "CustomRaceSetting.h"
#include "EPartyRacePreset.h"
#include "EStageId.h"
#include "ItemSwitchSetting.h"
#include "EPrivateMatchPlayType.h"
#include "EPrivateMatchRuleSettingState.h"
#include "MenuSequenceUIInterface.h"
#include "OnRuleSettingEndDelegate.h"
#include "PrivateMatchRuleSettingSequence.generated.h"

UCLASS(Blueprintable)
class UNION_API APrivateMatchRuleSettingSequence : public AHierarchicalStateMachine, public IMenuSequenceUIInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRuleSettingEnd OnBackEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPrivateMatchRuleSettingState PrevSquenceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPrivateMatchRuleSettingState SelectedMainState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPrivateMatchPlayType PlayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRuleSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRuleConfigured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCustomizedRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPartyRacePreset CachePresetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomRaceSetting CacheRaceSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemSwitchSetting CacheItemSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageId> CacheCourseSetting;
    
public:
    APrivateMatchRuleSettingSequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNextRuleSettingSequenceState(EPrivateMatchRuleSettingState InState, EPrivateMatchRuleSettingState PrevState);
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyPlayType(EPrivateMatchPlayType LobbyPlayType);
    
    UFUNCTION(BlueprintCallable)
    void SetHostRuleSettingFlag(bool bIsHost);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OpenRivalSelect();
    
    UFUNCTION(BlueprintCallable)
    void OpenPresetRuleSelect();
    
    UFUNCTION(BlueprintCallable)
    void OpenCustomRule();
    
    UFUNCTION(BlueprintCallable)
    void OpenClassSelect();
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedClass(bool bSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitIdleState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitExitState();
    
    UFUNCTION(BlueprintCallable)
    void OnBackedRuleSettingMenu();
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetIsRuleConfigured();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsCustomizedRule();
    
protected:
    UFUNCTION(BlueprintCallable)
    void FixedPresetRule();
    
    UFUNCTION(BlueprintCallable)
    void FixedCustomizeRule();
    

    // Fix for true pure virtual functions not being implemented
};

