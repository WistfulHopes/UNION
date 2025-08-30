#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "RaceEndMenuUserReportTypeSelectWidget.generated.h"

class URaceEndMenuUserReportPlayerButtonWidget;
class URaceEndMenuUserReportTypeButtonWidget;
class UUnionUIButtonBaseCore;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API URaceEndMenuUserReportTypeSelectWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<URaceEndMenuUserReportTypeButtonWidget*> _ReportTypeButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URaceEndMenuUserReportPlayerButtonWidget* _PlayerDisplay;
    
public:
    URaceEndMenuUserReportTypeSelectWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnButtonSelected(UUnionUIButtonBaseCore* Button);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonDecided(UUnionUIButtonBaseCore* Button);
    
};

