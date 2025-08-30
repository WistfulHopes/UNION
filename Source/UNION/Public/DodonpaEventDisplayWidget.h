#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DodonpaEventDisplayWidget.generated.h"

class UTexture2D;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UDodonpaEventDisplayWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UDodonpaEventDisplayWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFestaInfoTexture(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    UWidgetAnimation* PlayNextAnimation();
    
    UFUNCTION(BlueprintCallable)
    UWidgetAnimation* PlayFirstAnimation();
    
    UFUNCTION(BlueprintCallable)
    UWidgetAnimation* PlayAnimationByName(const FName& AnimationName, float PlaySpeed, int32 NumLoopsToPlay);
    
    UFUNCTION(BlueprintCallable)
    bool IsExistNextAnim();
    
};

