#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Blueprint/UserWidget.h"
#include "CommonMenuControllerKeyboard.generated.h"

class UImage;
class UMaterialInstanceDynamic;
class UUnionRichTextBlock;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UCommonMenuControllerKeyboard : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* PAT_Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* PAT_Key_Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* TXT_Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* PAT_Mouse_Material;
    
public:
    UCommonMenuControllerKeyboard();

    UFUNCTION(BlueprintCallable)
    void SetTextureParamIndex(int32 InTextureIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyNameText(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void SetFKey(const FKey& InKey);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMouseButtonIndex(FKey InKey) const;
    
};

