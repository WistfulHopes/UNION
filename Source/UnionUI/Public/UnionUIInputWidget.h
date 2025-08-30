#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "EMainMenuRegistPriority.h"
#include "MenuInputRecieveInterface.h"
#include "UnionUIWidgetBase.h"
#include "UnionUIInputWidget.generated.h"

class APlayerController;

UCLASS(Blueprintable, EditInlineNew)
class UNIONUI_API UUnionUIInputWidget : public UUnionUIWidgetBase, public IMenuInputRecieveInterface {
    GENERATED_BODY()
public:
    UUnionUIInputWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void VisibilityChange(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterMainMenu(int32 InPlayerIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAutoRegisterMainMenuEnabled(bool Enabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterMainMenu(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    EMainMenuRegistPriority GetRegistPriority() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFocusPlayerIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetFocusPlayerController() const;
    

    // Fix for true pure virtual functions not being implemented
};

