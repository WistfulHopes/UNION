#pragma once
#include "CoreMinimal.h"
#include "UnionUIButtonBase.h"
#include "PrivateMatchButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UPrivateMatchButton : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
    UPrivateMatchButton();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonInText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonInDetailText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonIcon(int32 IconIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ButtonGrayOut(bool bGrayOut);
    
};

