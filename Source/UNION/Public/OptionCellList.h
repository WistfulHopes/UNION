#pragma once
#include "CoreMinimal.h"
#include "UnionUISceneBase.h"
#include "CellGuideParam.h"
#include "OptionCellList.generated.h"

class UOptionCellSubCategory;
class UOptionCommonCell;
class UPanelWidget;
class UScrollBox;
class UUnionUIButtonBase;
class UUnionUIButtonsPanel;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UOptionCellList : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnExitMenuEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeHoverCellEvent, const FText, Text);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* Cell_Scroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeHoverCellEvent OnChangeHoverCellEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExitMenuEvent OnExitTopEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ParentPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionUIButtonsPanel* ButtonPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UOptionCommonCell*> CellList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UOptionCellSubCategory*> SubCategoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UOptionCommonCell*> FocusableWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCellGuideParam> GuideList;
    
public:
    UOptionCellList();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateScroll_BP(int32 ButtonIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateScroll(int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusButtonItem(UUnionUIButtonBase* InButton);
    
    UFUNCTION(BlueprintCallable)
    void OnExitMenu();
    
    UFUNCTION(BlueprintCallable)
    void OnEnterCell();
    
    UFUNCTION(BlueprintCallable)
    void OnBackToCellList();
    
};

