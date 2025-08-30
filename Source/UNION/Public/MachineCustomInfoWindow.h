#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EUIButtonIconType.h"
#include "EFooterSubTextType.h"
#include "MachineCustomInfoWindow.generated.h"

class UCommonFooterShortCut;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UMachineCustomInfoWindow : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonFooterShortCut* WBP_FooterShortCut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultButtonIconIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIButtonIconType DefaultButtonIconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFooterSubTextType DefaultTextType;
    
public:
    UMachineCustomInfoWindow();

    UFUNCTION(BlueprintCallable)
    void SetShortcutVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetShortcutTextSubType(EFooterSubTextType InType);
    
    UFUNCTION(BlueprintCallable)
    void SetShortcutIconType(int32 InButtonIconIndex, EUIButtonIconType InButtonIconType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimOut();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimLoop();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimIn();
    
};

