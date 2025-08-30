#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UnionPlatformCrossPlayChangedWindow.generated.h"

class UUnionUIButtonBase;
class UUnionUIPopupWindowBase;

UCLASS(Blueprintable)
class UNION_API AUnionPlatformCrossPlayChangedWindow : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* m_PopupWindowPtr;
    
public:
    AUnionPlatformCrossPlayChangedWindow(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnDecisionCrossPlayReloginWindow(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
};

