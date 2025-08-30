#pragma once
#include "CoreMinimal.h"
#include "EPartyRacePreset.h"
#include "MenuSequenceSubStateBase.h"
#include "RulePresetComponentEventDelegate.h"
#include "PrivateMatchRulePresetComponent.generated.h"

class UPartyRaceRivalResultProgressWidget;
class UPartyRaceRivalTeamCutinWidget;
class UPrivateMatchRulePresetSelect;
class UUnionUIButtonBase;
class UUnionUIPopupWindowBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UPrivateMatchRulePresetComponent : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRulePresetComponentEvent OpenClassSelectEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRulePresetComponentEvent RaceRuleFixedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRulePresetComponentEvent OpenCustomRuleEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRulePresetComponentEvent OpenRivalSelectEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRulePresetComponentEvent OnBackEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRulePresetComponentEvent OnFinishedRivalLevelDown;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPrivateMatchRulePresetSelect> PresetWidgetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPartyRaceRivalTeamCutinWidget> CutInWidgetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPartyRaceRivalResultProgressWidget> ResultProgressWidgetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LevelDownPopupTextTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LevelDownPopupTextMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LevelDownPopupTextYes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LevelDownPopupTextNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrivateMatchRulePresetSelect* PresetWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPartyRaceRivalTeamCutinWidget* CutInWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPartyRaceRivalResultProgressWidget* ResultProgressWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* PopupWindowPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRivalChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRivalChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanRivalSelectTransition;
    
public:
    UPrivateMatchRulePresetComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartRivalCutInInputWait();
    
    UFUNCTION(BlueprintCallable)
    void StartRivalCutIn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartPresetSelect();
    
    UFUNCTION(BlueprintCallable)
    void SetupRivalLevelDownPopupWindow(bool& SpawnPopup);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsRivalChallenge(bool bIsRivalChallenge);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SelectedRivalSelectEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SelectedIndividualRuleEvent(EPartyRacePreset RulePreset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SelectedGroupRuleEvent(EPartyRacePreset RulePreset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SelectedCustomRuleEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RewardPlayInEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnRivalLevelDownDecisionEvent(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPartyRaceSelectInFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnCancelDown();
    
    UFUNCTION(BlueprintCallable)
    void InitRulePresetSelect();
    
    UFUNCTION(BlueprintCallable)
    void InitRivalCutIn();
    
    UFUNCTION(BlueprintCallable)
    void ExitRulePresetSelect();
    
};

