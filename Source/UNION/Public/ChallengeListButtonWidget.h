#pragma once
#include "CoreMinimal.h"
#include "EChallengeCategory.h"
#include "UnionUIButtonBase.h"
#include "ChallengeListButtonWidget.generated.h"

class UImage;
class UMaterialInstanceDynamic;
class UPanelWidget;
class UTexture;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UChallengeListButtonWidget : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* _IconMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* _CompleteIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* _CursorPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* _NewIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* _NormalSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* _CompleteSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EChallengeCategory, UTexture*> _CategoryTextures;
    
public:
    UChallengeListButtonWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnButtonClicked();
    
};

