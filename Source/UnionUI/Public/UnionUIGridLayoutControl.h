#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EUnionUIControlDir.h"
#include "EUnionUIGridLayoutSideNavRule.h"
#include "UnionUIGridLayoutButtonData.h"
#include "UnionUIGridLayoutSideNav.h"
#include "UnionUIGridLayoutSideNavCustomDelegateDelegate.h"
#include "UnionUIGridLayoutControl.generated.h"

class UUnionUIButtonBase;
class UWidget;

UCLASS(Blueprintable)
class UNIONUI_API UUnionUIGridLayoutControl : public UObject {
    GENERATED_BODY()
public:
    UUnionUIGridLayoutControl();

    UFUNCTION(BlueprintCallable)
    void Setup();
    
    UFUNCTION(BlueprintCallable)
    void SetSideNavRuleWrap(EUnionUIControlDir InDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetSideNavRuleExplicit(EUnionUIControlDir InDirection, UWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetSideNavRuleCustom(EUnionUIControlDir InDirection, const FUnionUIGridLayoutSideNavCustomDelegate& InCustomDelegate);
    
    UFUNCTION(BlueprintCallable)
    void SetSideNavRuleBase(EUnionUIControlDir InDirection, EUnionUIGridLayoutSideNavRule InRule);
    
    UFUNCTION(BlueprintCallable)
    void SetSideNav(const FUnionUIGridLayoutSideNav& InSideNav);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUnionUIGridLayoutSideNav GetSideNav() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentLocationY() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentLocationX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetButtonDataListByLocationY(int32 InLocationX, TArray<FUnionUIGridLayoutButtonData>& OutButtonDataList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetButtonDataListByLocationX(int32 InLocationX, TArray<FUnionUIGridLayoutButtonData>& OutButtonDataList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FUnionUIGridLayoutButtonData> GetButtonDataList();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
private:
    UFUNCTION(BlueprintCallable)
    void Button_OnFocusEvent(UUnionUIButtonBase* Button);
    
    UFUNCTION(BlueprintCallable)
    void Button_OnDirectionEvent(UUnionUIButtonBase* Button, EUnionUIControlDir Dir);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddButton(const FUnionUIGridLayoutButtonData& InButtonData);
    
};

