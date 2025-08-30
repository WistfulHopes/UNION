#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EUnionUIControlDir.h"
#include "UnionUIGridNavigationBuilderButtonData.h"
#include "UnionUIGridSideNavigation.h"
#include "UnionUIGridSideNavigationCustomDelegateDelegate.h"
#include "UnionUIGridNavigationBuilder.generated.h"

class UUnionUIButtonBase;
class UUnionUIGridNavigationBuilderEventHandler;
class UWidget;

UCLASS(Blueprintable)
class UNIONUI_API UUnionUIGridNavigationBuilder : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnionUIGridNavigationBuilderButtonData> ButtonDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UUnionUIGridNavigationBuilderEventHandler*> EventHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionUIGridSideNavigation SideNavigation;
    
public:
    UUnionUIGridNavigationBuilder();

    UFUNCTION(BlueprintCallable)
    void SetSideNavigationRuleWrap(EUnionUIControlDir InDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetSideNavigationRuleExplicit(EUnionUIControlDir InDirection, UWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetSideNavigationRuleCustom(EUnionUIControlDir InDirection, const FUnionUIGridSideNavigationCustomDelegate& InCustomDelegate);
    
    UFUNCTION(BlueprintCallable)
    void SetSideNavigation(const FUnionUIGridSideNavigation& InSideNavigation);
    
    UFUNCTION(BlueprintCallable)
    FUnionUIGridSideNavigation GetSideNavigation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetButtonsByRowIndex(int32 InRowIndex, TArray<UUnionUIButtonBase*>& OutButtons);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetButtonsByColumnIndex(int32 InColumnIndex, TArray<UUnionUIButtonBase*>& OutButtons);
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
    UFUNCTION(BlueprintCallable)
    void Build();
    
    UFUNCTION(BlueprintCallable)
    void AddButton(UUnionUIButtonBase* InButton, int32 InRowIndex, int32 InColumnIndex);
    
};

