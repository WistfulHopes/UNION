#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ReadyWindow.generated.h"

class UCharaMachineParamWindow;
class UGadgetPlateWindow;
class UReadyOption;
class UReadyWindowCharacterIcon;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UReadyWindow : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDelegate);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipGoAnimation;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnGoAnimationFinished;
    
    UReadyWindow();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetReadyColor(bool bIsCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayGoAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayEndAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetReadyWindowCharacterIcons(TArray<UReadyWindowCharacterIcon*>& OutReadyWindowCharacterIcons) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetReadyOptions(TArray<UReadyOption*>& OutReadyOptions) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetGadgetPlateWindows(TArray<UGadgetPlateWindow*>& OutGadgetPlateWindows) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetCharaMachineParamWindow(TArray<UCharaMachineParamWindow*>& OutCharaMachineParamWindows) const;
    
};

