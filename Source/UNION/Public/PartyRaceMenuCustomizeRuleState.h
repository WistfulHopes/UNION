#pragma once
#include "CoreMinimal.h"
#include "EStageId.h"
#include "ItemSwitchSetting.h"
#include "PartyRacePresetSetting.h"
#include "MenuSequenceSubStateBase.h"
#include "PartyRaceMenuCustomizeRuleState.generated.h"

class APartyRaceMenuSequence;
class UCustomRaceDetailRuleScene;
class UPartyRaceConfirmScene;
class UPartyRaceCourseSwitch;
class UPartyRaceItemSwitch;
class UTexture2D;
class UUnionUIButtonBase;
class UUnionUIPopupWindowBase;
class UUserWidget;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UPartyRaceMenuCustomizeRuleState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCustomizeRuleDelegateEvent);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPartyRaceConfirmScene* PartyRaceConfirmScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCustomRaceDetailRuleScene* CustomRaceDetailRuleScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPartyRaceItemSwitch* PartyRaceItemSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPartyRaceCourseSwitch* PartyRaceCourseSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* PopupWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGuest;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCustomizeRuleDelegateEvent OnCancelAndPrevSequence;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCustomizeRuleDelegateEvent OnNextSeqeunce;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> LoadedStageThumbnailTextureArray;
    
public:
    UPartyRaceMenuCustomizeRuleState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPrivateMatchCustomRaceRule();
    
    UFUNCTION(BlueprintCallable)
    void SetPrevCustomMatchRule(const FPartyRacePresetSetting InRaceSetting, const FItemSwitchSetting InItemSwitch, const TArray<EStageId> InCourseSwitch);
    
    UFUNCTION(BlueprintCallable)
    void SetIsGuest(bool Guest);
    
    UFUNCTION(BlueprintCallable)
    void ResetCustomMatchRule();
    
    UFUNCTION(BlueprintCallable)
    void OnDecideCheckRuleWindow(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void LoadStageThumbnail();
    
    UFUNCTION(BlueprintCallable)
    void LoadFinishStageThumbnail();
    
    UFUNCTION(BlueprintCallable)
    APartyRaceMenuSequence* GetOwnerPartyRaceMenuSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceCancelEvent();
    
    UFUNCTION(BlueprintCallable)
    void ExitCustomizeRuleMenu();
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* CreateCheckPopupWindow(const FText InBodyText, const TArray<FText> InButtonText);
    
    UFUNCTION(BlueprintCallable)
    bool CheckSameRaceRule(const FPartyRacePresetSetting CheckRule);
    
    UFUNCTION(BlueprintCallable)
    bool CheckSameItemSwitch(const FItemSwitchSetting CheckItemSwitch);
    
    UFUNCTION(BlueprintCallable)
    bool CheckSameCustomMatchRule();
    
    UFUNCTION(BlueprintCallable)
    bool CheckSameCourseSwitch(const TArray<EStageId> CheckCourseSwitch);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BindFinalConfirmCancelEvent();
    
};

