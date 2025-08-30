#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UnionCrossPlayCheck.generated.h"

class UUnionUIButtonBase;
class UUnionUIPopupWindowBase;

UCLASS(Blueprintable)
class UNION_API AUnionCrossPlayCheck : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUserConfirmedDelegate, bool, IsConfirmed);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserConfirmedDelegate OnUserConfirmedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* m_PopupWindowPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsUserConfirmed;
    
public:
    AUnionCrossPlayCheck(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void ResetWarningWindow();
    
    UFUNCTION(BlueprintCallable)
    void OnUserConfirmation(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    bool CheckCrossPlay();
    
};

