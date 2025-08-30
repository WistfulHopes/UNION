#pragma once
#include "CoreMinimal.h"
#include "UnionUISceneBase.h"
#include "EPartyRaceConfirmButton.h"
#include "PartyRaceConfirmScene.generated.h"

class UPartyRaceSubOptionBtn;
class UUnionUIButtonsPanel;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UPartyRaceConfirmScene : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionUIButtonsPanel* OptionButtonPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPartyRaceSubOptionBtn*> OptionButtonArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PartyRace_Option_In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PartyRace_Option_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PartyRace_Option_Out;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPartyRaceConfirmButton LastFocusItemSwitchOrRaceSetting;
    
public:
    UPartyRaceConfirmScene();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPresetName(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void OnSpeedClassSelect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnGroupSettingSelect(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GuestEvent();
    
};

