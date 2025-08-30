#pragma once
#include "CoreMinimal.h"
#include "EPartyRacePreset.h"
#include "PartyRacePresetSetting.h"
#include "UnionUISceneBase.h"
#include "EPartyRaceSelectPresetState.h"
#include "PartyRaceSelectPresetScene.generated.h"

class UPartyRaceSubMenuBtn;
class UUnionUIButtonsPanel;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UPartyRaceSelectPresetScene : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPartyRacePreset, FPartyRacePresetSetting> CurrentPrsetSettingMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPartyRacePreset, FPartyRacePresetSetting> DefaultPrsetSettingMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPartyRaceSubMenuBtn*> PresetButtonArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionUIButtonsPanel* PresetButtonsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPartyRaceSelectPresetState CurrentSelectPresetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PartyRace_In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PartyRace_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PartyRace_Out;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PartyRace_Option_In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PartyRace_Option_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PartyRace_Option_Out;
    
    UPartyRaceSelectPresetScene();

    UFUNCTION(BlueprintCallable)
    void ResetPreset();
    
};

