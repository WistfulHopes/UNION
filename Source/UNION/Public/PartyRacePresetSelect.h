#pragma once
#include "CoreMinimal.h"
#include "EPartyRacePreset.h"
#include "PartyRacePresetSetting.h"
#include "UnionUISceneBase.h"
#include "EPartyRaceSelectPresetState.h"
#include "PartyRacePresetSelect.generated.h"

class UPartyRaceSubPresetBtn;
class UUnionUIButtonsPanel;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UPartyRacePresetSelect : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPartyRacePresetSelectRivalSelectEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPartyRacePresetSelectGadgetCustomEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPartyRacePresetSelectAnimationFinishedEvent);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPartyRacePreset CurrentSelectedPresetButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPartyRacePreset, FPartyRacePresetSetting> CurrentPrsetSettingMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPartyRacePreset, FPartyRacePresetSetting> DefaultPrsetSettingMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPartyRaceSubPresetBtn*> PresetButtonArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionUIButtonsPanel* PresetButtonsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPartyRaceSelectPresetState CurrentSelectPresetState;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyRacePresetSelectRivalSelectEvent OnDecideRivalSelect;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyRacePresetSelectGadgetCustomEvent OnDecideGadgetCustom;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyRacePresetSelectAnimationFinishedEvent OnPlayInFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyRacePresetSelectAnimationFinishedEvent OnPlayOutFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PartyRace_In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PartyRace_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PartyRace_Out;
    
public:
    UPartyRacePresetSelect();

    UFUNCTION(BlueprintCallable)
    void ResetPreset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayIn();
    
};

