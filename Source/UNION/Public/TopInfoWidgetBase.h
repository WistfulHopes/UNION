#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ETopInfoWidgetPageCategory.h"
#include "TopInfoWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UTopInfoWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> ValidPageCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETopInfoWidgetPageCategory> NewDispCategory;
    
public:
    UTopInfoWidgetBase();

protected:
    UFUNCTION(BlueprintCallable)
    void WatchedPage(bool IsCenterCategoryL, bool IsCenterCategoryR);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateArrawVisible();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartRightKeyPress();
    
    UFUNCTION(BlueprintCallable)
    void StartLeftKeyPress();
    
    UFUNCTION(BlueprintCallable)
    void SetupEnablePageCategory(ETopInfoWidgetPageCategory ReturnPage);
    
    UFUNCTION(BlueprintCallable)
    void SetPagePrev();
    
    UFUNCTION(BlueprintCallable)
    void SetPageNext();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseRightKey();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseLeftKey();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRightKeyPressLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNewPrevPage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNewNextPage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNewCurrentPage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNewBeforePrevPage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNewAfterNextPage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeftKeyPressLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETopInfoWidgetPageCategory GetPrevPage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETopInfoWidgetPageCategory GetNextPage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETopInfoWidgetPageCategory GetCurrentPage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETopInfoWidgetPageCategory GetBeforePrevPage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETopInfoWidgetPageCategory GetAfterNextPage();
    
};

