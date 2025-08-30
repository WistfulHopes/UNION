#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CharaSelectRivalWinIcon.generated.h"

class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UCharaSelectRivalWinIcon : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AnimEasyIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AnimEasyLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AnimMaxIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AnimMaxLoop;
    
public:
    UCharaSelectRivalWinIcon();

    UFUNCTION(BlueprintCallable)
    void PlayAnimMaxLoop();
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimMaxIn();
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimEasyLoop();
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimEasyIn();
    
};

