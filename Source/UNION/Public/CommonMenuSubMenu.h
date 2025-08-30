#pragma once
#include "CoreMinimal.h"
#include "ECommonMenuButtonType.h"
#include "OnUnionButtonEventDelegate.h"
#include "UnionUISceneBase.h"
#include "CommonMenuSubMenu.generated.h"

class UCommonMenuButtonBase;
class UUnionUIButtonBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UCommonMenuSubMenu : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionButtonEvent OnFocusEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCommonMenuButtonBase*> ButtonArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIButtonBase* RightFocusButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIButtonBase* LeftFocusButton;
    
    UCommonMenuSubMenu();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupCommonMenuSubMenu();
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationLeftAndRight();
    
    UFUNCTION(BlueprintCallable)
    void SetLastFocusButtonFocusSoundEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnableSubMenu(ECommonMenuButtonType InType, bool InEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshSubMenuZOrder();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeCommonMenuSubMenu(const TArray<ECommonMenuButtonType>& InButtonArr);
    
};

