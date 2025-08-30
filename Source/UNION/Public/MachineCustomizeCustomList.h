#pragma once
#include "CoreMinimal.h"
#include "OnUISceneEventDelegate.h"
#include "UnionUISceneBase.h"
#include "Templates/SubclassOf.h"
#include "MachineCustomizeCustomList.generated.h"

class UMachineCustomizeCustomListItem;
class UScrollBox;
class UUnionUIButtonBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UMachineCustomizeCustomList : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUISceneEvent OnShowNewButtonEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMachineCustomizeCustomListItem> CustomListItem;
    
public:
    UMachineCustomizeCustomList();

protected:
    UFUNCTION(BlueprintCallable)
    void ShowNewButton(UUnionUIButtonBase* InButton);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 SetFocusButtonUnlock();
    
    UFUNCTION(BlueprintCallable)
    void SetButtonSelect(int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFocusIndex() const;
    
};

