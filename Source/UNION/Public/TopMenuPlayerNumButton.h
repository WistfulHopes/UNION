#pragma once
#include "CoreMinimal.h"
#include "CommonMenuButtonBase.h"
#include "ETopMenuPlayNum.h"
#include "TopMenuPlayerNumButton.generated.h"

class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UTopMenuPlayerNumButton : public UCommonMenuButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETopMenuPlayNum PlayerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_NoActive_Loop;
    
    UTopMenuPlayerNumButton();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayAnimationNonActive();
    
};

