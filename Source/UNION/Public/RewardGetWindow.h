#pragma once
#include "CoreMinimal.h"
#include "ERewardType.h"
#include "RewardGetBase.h"
#include "RewardGetWindow.generated.h"

class UCommonItemIcon;
class UTexture2D;
class UUnionRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API URewardGetWindow : public URewardGetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideUpperText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OverrideUpperText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* DSP_TXT_ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* TXT_ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonItemIcon* WBP_CMN_ItemIcon;
    
public:
    URewardGetWindow();

protected:
    UFUNCTION(BlueprintCallable)
    void SetUpperText(ERewardType InRewardType);
    
    UFUNCTION(BlueprintCallable)
    void SetupItemIconWidgetWithNum(ERewardType InRewardType, UTexture2D* Texture, int32 NumItem);
    
    UFUNCTION(BlueprintCallable)
    void SetupItemIconWidget(ERewardType InRewardType, UTexture2D* Texture);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetOverrideUpperText(const FText& InText);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetLowerText(const FText& Text);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEnabledOverrideUpperText(const bool bEnabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DoOverrideUpperText();
    
};

