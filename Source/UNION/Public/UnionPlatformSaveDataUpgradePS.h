#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UnionPlatformSaveDataUpgradePS.generated.h"

class UUnionUIButtonBase;
class UUnionUIPopupWindowBase;

UCLASS(Blueprintable)
class UNION_API AUnionPlatformSaveDataUpgradePS : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* m_PopupWindowPtr;
    
public:
    AUnionPlatformSaveDataUpgradePS(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestStartUpgradeSaveData();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDecisionUserConfirmationPopupWindow(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBusy() const;
    
};

