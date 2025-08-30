#pragma once
#include "CoreMinimal.h"
#include "ECustomRaceSettingLine.h"
#include "ERaceSettingMatchRule.h"
#include "PartyRacePresetSetting.h"
#include "PartyRacePresetSettingSave.h"
#include "UnionUISceneBase.h"
#include "CustomRaceDetailRuleScene.generated.h"

class UCustomRaceSubOptionSettingLine;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UCustomRaceDetailRuleScene : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCustomRaceSubOptionSettingLine*> SettingLineArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<ECustomRaceSettingLine, UCustomRaceSubOptionSettingLine*> PresetLineMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, uint8> Index_RaceCountMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, uint8> Index_TopPointMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyRacePresetSetting CurrentSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyRacePresetSetting BackupSetting;
    
    UCustomRaceDetailRuleScene();

    UFUNCTION(BlueprintCallable)
    void UnbindAllSelectEvent();
    
    UFUNCTION(BlueprintCallable)
    void SetupSelectEvent();
    
    UFUNCTION(BlueprintCallable)
    void SetPresetSettingFromSave(const FPartyRacePresetSettingSave& Setting);
    
    UFUNCTION(BlueprintCallable)
    void SetPresetSetting(const FPartyRacePresetSetting& Setting);
    
    UFUNCTION(BlueprintCallable)
    void SaveLastFocusedSetting();
    
    UFUNCTION(BlueprintCallable)
    void SaveCustomSelectEvent(ECustomRaceSettingLine SettingLineIndex, int32 LastIndex);
    
    UFUNCTION(BlueprintCallable)
    void ResetFromBackUp();
    
    UFUNCTION(BlueprintCallable)
    void OnTripleCourseSelect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnTopPointSettlementSelect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnSpeedClassSelect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnRingLostSelect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnRaceCountSelect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnRaceBonusSelect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnPointUpChanceSelect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectPlacementTypeSelect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnMCEventSelect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnMatchRuleSelect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnItemAppearanceRuleSelect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnIrregularSelect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnHandicapSelect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnGroupSettingSelect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnGoalPointSelect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnGadgetUsingSelect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnFestaRaceRuleSelect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnCourseSelectingSelect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnComSpeedSelect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnAutoGetItemSelect(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyQuitConfirmWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckIsRuleSame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckIsGuestEvent(bool IsGuest);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeMatchRule(ERaceSettingMatchRule RaceSettingMatchRule);
    
    UFUNCTION(BlueprintCallable)
    void BackupCurrentSetting(bool IsGuest);
    
};

