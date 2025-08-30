#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "RaceEndMenuUserReportPlayerSelectWidget.generated.h"

class URaceEndMenuUserReportPlayerButtonWidget;
class UUnionUIButtonBaseCore;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API URaceEndMenuUserReportPlayerSelectWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<URaceEndMenuUserReportPlayerButtonWidget*> _PlayerButtons;
    
public:
    URaceEndMenuUserReportPlayerSelectWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnButtonSelected(UUnionUIButtonBaseCore* Button);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonDecided(UUnionUIButtonBaseCore* Button);
    
};

