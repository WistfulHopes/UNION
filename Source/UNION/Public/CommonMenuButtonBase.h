#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "Layout/Geometry.h"
#include "Components/SlateWrapperTypes.h"
#include "ECommonMenuButtonType.h"
#include "UnionUIButtonBase.h"
#include "CommonMenuTextData.h"
#include "CommonMenuButtonBase.generated.h"

class USoundAtomCue;
class UWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UCommonMenuButtonBase : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonMenuButtonType ButtonType;
    
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
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* FocusSoundCue;
    
public:
    UCommonMenuButtonBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Update();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNavigationButton(UWidget* PrevButton, UWidget* NextButton);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIcon(ECommonMenuButtonType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnableButton(bool IsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayAnimationSelectToPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayAnimationPlayerToSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FEventReply OnFocusReceivedImpl(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFocusLostImpl(FFocusEvent InFocusEvent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsValidDataTableRowData(ECommonMenuButtonType InButtonType, FCommonMenuTextData& OutRowData);
    
};

