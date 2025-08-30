#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ERaceEndMenuUserReportPopupType.h"
#include "RaceEndMenuUserReportComponent.generated.h"

class URaceEndMenuUserReportWidget;
class UUnionUIButtonBase;
class UUnionUIPopupWindowBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceEndMenuUserReportComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<URaceEndMenuUserReportWidget> _UserReportWidgetSoftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText _DialogTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERaceEndMenuUserReportPopupType, FText> _DialogMessageTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URaceEndMenuUserReportWidget* _UserReportWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* _PopupWindowWidget;
    
public:
    URaceEndMenuUserReportComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnPopupClosed(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnHttpReceived(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
};

