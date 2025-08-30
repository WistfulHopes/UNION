#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UnionPlatformSaveDataTransferFromDemo.generated.h"

class UUnionUIButtonBase;
class UUnionUIPopupWindowBase;

UCLASS(Blueprintable)
class UNION_API AUnionPlatformSaveDataTransferFromDemo : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* m_PopupWindow;
    
public:
    AUnionPlatformSaveDataTransferFromDemo(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestStart();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDecisionPopupWindow(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBusy() const;
    
};

