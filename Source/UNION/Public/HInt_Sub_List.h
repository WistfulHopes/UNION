#pragma once
#include "CoreMinimal.h"
#include "EHintId.h"
#include "UnionUIInputWidget.h"
#include "HintDataTableRow.h"
#include "TipsSubMenuInputDispatherDelegate.h"
#include "HInt_Sub_List.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UHInt_Sub_List : public UUnionUIInputWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeHint, const EHintId, nextHintId);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeHint OnChangeTipsEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTipsSubMenuInputDispather OnTipsSubMenuPressBackKeyEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTipsSubMenuInputDispather OnTipsSubMenuPressTabRightKeyEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTipsSubMenuInputDispather OnTipsSubMenuPressTabLeftKeyEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHintDataTableRow> TipsDataArray;
    
public:
    UHInt_Sub_List();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupScrollHintList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupHintList(TArray<FHintDataTableRow>& InTipsDataArray);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnListPressUpKey();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnListPressDawnKey();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxDataNum();
    
    UFUNCTION(BlueprintCallable)
    bool GetDisplayInformation();
    
    UFUNCTION(BlueprintCallable)
    void ChangeTipsScreen(EHintId nextHintId);
    
};

