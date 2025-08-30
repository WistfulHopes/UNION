#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EUIButtonIconType.h"
#include "EFooterMainTextType.h"
#include "EFooterSubTextType.h"
#include "CommonFooterShortCut.generated.h"

class UCommonMenuFooterButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UCommonFooterShortCut : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonMenuFooterButton* WBP_FooterMenu_Sub_CommonBtn_00;
    
public:
    UCommonFooterShortCut();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextSubType(EFooterSubTextType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextMainType(EFooterMainTextType InType);
    
    UFUNCTION(BlueprintCallable)
    void SetText(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void SetIconType(int32 InButtonIconIndex, EUIButtonIconType InButtonIconType);
    
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonMenuFooterButton* GetButton() const;
    
};

