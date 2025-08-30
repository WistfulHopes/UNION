#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CompleteDialogEventDelegate.h"
#include "DLCStoreDialogActor.generated.h"

class UObject;
class UUnionUIButtonBase;
class UUnionUIPopupWindowBase;

UCLASS(Blueprintable)
class UNION_API ADLCStoreDialogActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompleteDialogEvent OnCompleteDialogEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* DialogPopupWindow;
    
public:
    ADLCStoreDialogActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnRemovePopupWindow();
    
    UFUNCTION(BlueprintCallable)
    void OnDecisionDLCStoreDialog(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void CreateDLCStoreDialog(const UObject* WorldContextObject);
    
};

