#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "RaceEndMenuUserReportConfirmationWidget.generated.h"

class URaceEndMenuUserReportPlayerButtonWidget;
class URaceEndMenuUserReportTypeButtonWidget;
class UUnionUIButtonBaseCore;
class UUnionUIButtonStandard;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API URaceEndMenuUserReportConfirmationWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URaceEndMenuUserReportPlayerButtonWidget* _PlayerDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URaceEndMenuUserReportTypeButtonWidget* _ReportTypeDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUnionUIButtonStandard* _DecisionButton;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Confirmation_InLoop;
    
public:
    URaceEndMenuUserReportConfirmationWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnButtonDecided(UUnionUIButtonBaseCore* Button);
    
};

