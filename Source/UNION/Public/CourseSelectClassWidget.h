#pragma once
#include "CoreMinimal.h"
#include "UnionUIButtonStandard.h"
#include "CourseSelectClassWidget.generated.h"

class UPanelWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UCourseSelectClassWidget : public UUnionUIButtonStandard {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* _RootPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ClassSelect_In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ClassSelect_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ClassSelect_Out;
    
public:
    UCourseSelectClassWidget();

    UFUNCTION(BlueprintCallable)
    void Out();
    
    UFUNCTION(BlueprintCallable)
    void In();
    
};

