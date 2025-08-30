#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "MenuSequenceSubStateBase.h"
#include "RivalSelectState.generated.h"

class UHintPopupWindow;
class URivalSelectWidget;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URivalSelectState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<URivalSelectWidget> _WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalSelectWidget* _Widget;
    
public:
    URivalSelectState(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnTipsWindowClosed();
    
    UFUNCTION(BlueprintCallable)
    void OnDecisionAnimFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnDecision(EDriverId DriverId, uint8 RivalLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnCanceled(uint8 RivalLevel);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UHintPopupWindow* CreateTipsWindow();
    
};

