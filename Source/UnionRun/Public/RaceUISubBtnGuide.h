#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Blueprint/UserWidget.h"
#include "EBtnGuidePlatFormController.h"
#include "RaceUISubBtnGuide.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API URaceUISubBtnGuide : public UUserWidget {
    GENERATED_BODY()
public:
    URaceUISubBtnGuide();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetUseItemKey(const FKey UseItemKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeyboard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetUseItemKeyPC(int32 PlayerControllerIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void GetUseItemKey(int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetReleaseEffectKey(int32 PlayerControllerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMouseButtonIndex(FKey InKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetKeyDisplayName(FKey InKey, int32 PlayerControllerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetFlightGuideKey(int32 PlayerControllerIndex, bool bSuggestUpInput) const;
    
    UFUNCTION(BlueprintCallable)
    EBtnGuidePlatFormController GetControllerType(int32 PlayerControllerIndex);
    
};

