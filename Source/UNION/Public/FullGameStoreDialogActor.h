#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FullGameStoreDialogDecideEventDelegate.h"
#include "FullGameStoreDialogActor.generated.h"

class UObject;
class UUnionUIButtonBase;
class UUnionUIPopupWindowBase;

UCLASS(Blueprintable)
class UNION_API AFullGameStoreDialogActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFullGameStoreDialogDecideEvent OnDecisionEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* PopupWindow;
    
public:
    AFullGameStoreDialogActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveWidget();
    
    UFUNCTION(BlueprintCallable)
    void DecideAndRemoveWidget(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void CreateWidget(const UObject* WorldContextObject);
    
};

