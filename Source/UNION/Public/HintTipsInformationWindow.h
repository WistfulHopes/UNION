#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EHintId.h"
#include "HintDataTableRow.h"
#include "TipsInputDispatherDelegate.h"
#include "HintTipsInformationWindow.generated.h"

class UDataTable;
class UHInt_Sub_List;
class UHintPopupWindow;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UHintTipsInformationWindow : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTipsInputDispather OnInputReturnMenu;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTipsInputDispather OnInputTabMoveRight;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTipsInputDispather OnInputTabMoveLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HintDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintPopupWindow* WBP_HintWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHInt_Sub_List* WBP_HInt_Sub_List;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHintId, FHintDataTableRow> HintDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHintDataTableRow> OutTipsHintDataArray;
    
public:
    UHintTipsInformationWindow();

    UFUNCTION(BlueprintCallable)
    void TabChangeTipsScreen(bool isInformation);
    
    UFUNCTION(BlueprintCallable)
    void SetupHintData(bool isInformation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTabMoveRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTabMoveLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancelHintMenu();
    
    UFUNCTION(BlueprintCallable)
    void ChangeTips(EHintId NextTipsId);
    
};

