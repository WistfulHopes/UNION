#pragma once
#include "CoreMinimal.h"
#include "ECommonMenuButtonType.h"
#include "UnionUIButtonBase.h"
#include "CommonMenuSubBtnMode.generated.h"

class UWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UCommonMenuSubBtnMode : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonMenuButtonType BeltButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Active_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Select_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Active_to_Select;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Select_to_Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Select_to_Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Player_to_Select;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Select_Out;
    
    UCommonMenuSubBtnMode();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Update();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNavigationButton(UWidget* PrevButton, UWidget* NextButton);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetModeText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIcon(ECommonMenuButtonType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeSubBtnMode();
    
};

