#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EPopupWindowType.h"
#include "OnPopupWindowCreatedDelegate.h"
#include "OnPopupWindowRemovedAllDelegate.h"
#include "OnPopupWindowRemovedDelegate.h"
#include "UnionUIPopupWindowManager.generated.h"

class UUnionErrorViewer;
class UUnionUIPopupWindowBase;

UCLASS(Blueprintable)
class UNIONUI_API UUnionUIPopupWindowManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPopupWindowCreated OnPopupWindowCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPopupWindowRemoved OnPopupWindowRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPopupWindowRemovedAll OnPopupWindowRemovedAll;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUnionUIPopupWindowBase*> PopupWindowList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionErrorViewer* ErrorViewer;
    
public:
    UUnionUIPopupWindowManager();

    UFUNCTION(BlueprintCallable)
    void SetFocusExistPopupWindow();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPopupWindowRemoveFromParent(UUnionUIPopupWindowBase* RemovedPopupWindow);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsPopupTypeExist(EPopupWindowType WindowType);
    
    UFUNCTION(BlueprintCallable)
    bool IsAlreadyPopupWindowExist();
    
    UFUNCTION(BlueprintCallable)
    UUnionUIPopupWindowBase* CreatePopupWindow(EPopupWindowType WindowType);
    
};

