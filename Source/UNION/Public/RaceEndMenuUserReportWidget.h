#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "RaceEndMenuUserReportWidget.generated.h"

class UCommonMenuFooterMenu;
class UMenuInputRecieveObject;
class UObject;
class URaceEndMenuUserReportConfirmationWidget;
class URaceEndMenuUserReportPlayerSelectWidget;
class URaceEndMenuUserReportTypeSelectWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API URaceEndMenuUserReportWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* _FooterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URaceEndMenuUserReportPlayerSelectWidget* _PlayerSelectWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URaceEndMenuUserReportTypeSelectWidget* _ReportTypeSelectWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URaceEndMenuUserReportConfirmationWidget* _ConfirmationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMenuInputRecieveObject* _InputReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonMenuFooterMenu* _Footer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_InLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_Out;
    
public:
    URaceEndMenuUserReportWidget();

    UFUNCTION(BlueprintCallable)
    void OnShowPfProfileErrorWindowEnd();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFaceButtonTopPressed(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void OnBackKeyPressed(UObject* Object);
    
};

