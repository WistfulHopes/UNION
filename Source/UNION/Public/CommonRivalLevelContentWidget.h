#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CommonRivalLevelContentWidget.generated.h"

class UHorizontalBox;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UCommonRivalLevelContentWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HBIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Content_Icon_DSP;
    
public:
    UCommonRivalLevelContentWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void PlayAnimIcons(int32 InIndex);
    
};

