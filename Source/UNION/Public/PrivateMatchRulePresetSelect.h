#pragma once
#include "CoreMinimal.h"
#include "EPartyRacePreset.h"
#include "PartyRacePresetSetting.h"
#include "UnionUISceneBase.h"
#include "PrivateMatchRulePresetSelectDelegate.h"
#include "PrivateMatchRulePresetSelect_SendRuleDelegate.h"
#include "PrivateMatchRulePresetSelect.generated.h"

class UPartyRaceSubPresetBtn;
class UUnionUIButtonBase;
class UUnionUIButtonBaseCore;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UPrivateMatchRulePresetSelect : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrivateMatchRulePresetSelect_SendRule OnSelectedIndividualRuleEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrivateMatchRulePresetSelect_SendRule OnSelectedGruopRuleEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrivateMatchRulePresetSelect OnSelectedCustomRuleEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrivateMatchRulePresetSelect OnSelectedRivalSelectEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrivateMatchRulePresetSelect OnBackEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrivateMatchRulePresetSelect OnAnimInFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrivateMatchRulePresetSelect OnAnimOutFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPartyRacePreset, FPartyRacePresetSetting> CurrentPrsetSettingMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPartyRacePreset, FPartyRacePresetSetting> DefaultPrsetSettingMap;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPartyRaceSubPresetBtn*> PresetButtonArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRivalChallenge;
    
public:
    UPrivateMatchRulePresetSelect();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupWidget(bool bRivalChallenge);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RivalSelectButtonDecisionEvent(UUnionUIButtonBaseCore* Button);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PresetButtonDecisionEvent(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInOutAnimation(bool bPlayInAnim);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitRulePresetSelect(bool bRivalChallenge);
    
    UFUNCTION(BlueprintCallable)
    void ExitRulePresetSelect();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ButtonCancelEvent(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex);
    
};

