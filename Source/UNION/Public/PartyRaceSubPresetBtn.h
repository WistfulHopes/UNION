#pragma once
#include "CoreMinimal.h"
#include "EPartyRacePreset.h"
#include "UnionUIButtonStandard.h"
#include "PartyRaceSubPresetBtn.generated.h"

class UUnionUIButtonBaseCore;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UPartyRaceSubPresetBtn : public UUnionUIButtonStandard {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPartyRacePreset _Preset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Active_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Select_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Select_Out;
    
public:
    UPartyRaceSubPresetBtn();

    UFUNCTION(BlueprintCallable)
    void SetPreset(EPartyRacePreset InPreset);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSelected(UUnionUIButtonBaseCore* Button);
    
    UFUNCTION(BlueprintCallable)
    void OnDecided(UUnionUIButtonBaseCore* Button);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPartyRacePreset GetPreset() const;
    
};

